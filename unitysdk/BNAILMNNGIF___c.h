#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BNAILMNNGIF;
namespace System { class Object; }

#define BNAILMNNGIF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E002FA0)
#define BNAILMNNGIF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E002FE0)
#define BNAILMNNGIF___C___CCTOR_B__73_0_OFFSET UNITYSDK_OFFSET(0x1E002FF0)

inline static constexpr unsigned int BNAILMNNGIF___c_TypeDefinitionIndex = 25346;

	class BNAILMNNGIF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5D460);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BNAILMNNGIF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNAILMNNGIF___C_CTOR_OFFSET))(this);
		}

		::BNAILMNNGIF* __cctor_b__73_0()
		{
			return ((::BNAILMNNGIF*(*)(::PVOID))((::PBYTE)hIl2Cpp + BNAILMNNGIF___C___CCTOR_B__73_0_OFFSET))(this);
		}

	};
