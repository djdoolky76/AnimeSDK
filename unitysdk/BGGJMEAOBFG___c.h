#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BGGJMEAOBFG;
namespace System { class Object; }

#define BGGJMEAOBFG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA4BA80)
#define BGGJMEAOBFG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA4BAB0)
#define BGGJMEAOBFG___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1EA4BAC0)

inline static constexpr unsigned int BGGJMEAOBFG___c_TypeDefinitionIndex = 30882;

	class BGGJMEAOBFG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x54FA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BGGJMEAOBFG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGGJMEAOBFG___C_CTOR_OFFSET))(this);
		}

		::BGGJMEAOBFG* __cctor_b__23_0()
		{
			return ((::BGGJMEAOBFG*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGGJMEAOBFG___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
