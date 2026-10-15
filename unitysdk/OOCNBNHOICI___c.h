#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OOCNBNHOICI;
namespace System { class Object; }

#define OOCNBNHOICI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEAA120)
#define OOCNBNHOICI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEAA160)
#define OOCNBNHOICI___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1DEAA170)

inline static constexpr unsigned int OOCNBNHOICI___c_TypeDefinitionIndex = 28501;

	class OOCNBNHOICI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x29F80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OOCNBNHOICI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOCNBNHOICI___C_CTOR_OFFSET))(this);
		}

		::OOCNBNHOICI* __cctor_b__23_0()
		{
			return ((::OOCNBNHOICI*(*)(::PVOID))((::PBYTE)hIl2Cpp + OOCNBNHOICI___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
