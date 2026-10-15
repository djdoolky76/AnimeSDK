#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FNIFKDBNLBG;
namespace System { class Object; }

#define FNIFKDBNLBG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3F1720)
#define FNIFKDBNLBG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3F1760)
#define FNIFKDBNLBG___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E3F1770)

inline static constexpr unsigned int FNIFKDBNLBG___c_TypeDefinitionIndex = 28180;

	class FNIFKDBNLBG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x655B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FNIFKDBNLBG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNIFKDBNLBG___C_CTOR_OFFSET))(this);
		}

		::FNIFKDBNLBG* __cctor_b__28_0()
		{
			return ((::FNIFKDBNLBG*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNIFKDBNLBG___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
