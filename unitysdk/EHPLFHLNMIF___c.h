#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EHPLFHLNMIF;
namespace System { class Object; }

#define EHPLFHLNMIF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2A3B10)
#define EHPLFHLNMIF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2A3B40)
#define EHPLFHLNMIF___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E2A3B50)

inline static constexpr unsigned int EHPLFHLNMIF___c_TypeDefinitionIndex = 28132;

	class EHPLFHLNMIF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x48B70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EHPLFHLNMIF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHPLFHLNMIF___C_CTOR_OFFSET))(this);
		}

		::EHPLFHLNMIF* __cctor_b__33_0()
		{
			return ((::EHPLFHLNMIF*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHPLFHLNMIF___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
