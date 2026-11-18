#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ILJGJDOLDOP;
namespace System { template <typename T1, typename T2> class Action_2; }

#define MOLEMOLE_HADALCOUNTDOWNSUBSYSTEM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16258DE0)
#define MOLEMOLE_HADALCOUNTDOWNSUBSYSTEM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16258E20)
#define MOLEMOLE_HADALCOUNTDOWNSUBSYSTEM___C__STARTCOUNTDOWN_B__14_0_OFFSET UNITYSDK_OFFSET(0x16258E30)

namespace MoleMole
{
	inline static constexpr unsigned int HadalCountDownSubsystem___c_TypeDefinitionIndex = 67227;

	class HadalCountDownSubsystem___c : public ::System::Object
	{
	public:
		static ::System::Action_2<::System::Boolean, ::ILJGJDOLDOP*>** StaticGet___9__14_0()
		{
			return (::System::Action_2<::System::Boolean, ::ILJGJDOLDOP*>**)Il2CppClass::FromTypeDefinitionIndex(HadalCountDownSubsystem___c_TypeDefinitionIndex)->GetStaticField(0x3EA50);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(HadalCountDownSubsystem___c_TypeDefinitionIndex)->GetStaticField(0x3EA58);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_HADALCOUNTDOWNSUBSYSTEM___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HADALCOUNTDOWNSUBSYSTEM___C__CTOR_OFFSET))(this);
		}

		::System::Void _StartCountDown_b__14_0(::System::Boolean success, ::ILJGJDOLDOP* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::ILJGJDOLDOP*))((::PBYTE)hIl2Cpp + MOLEMOLE_HADALCOUNTDOWNSUBSYSTEM___C__STARTCOUNTDOWN_B__14_0_OFFSET))(this, success, rsp);
		}
	};
}
