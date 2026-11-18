#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MELDNFKKBME;
class NHBJLCIHMIH;
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }

#define MOLEMOLE_HACKLITTLEROBOTSUBSYSTEM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A906900)
#define MOLEMOLE_HACKLITTLEROBOTSUBSYSTEM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A906940)
#define MOLEMOLE_HACKLITTLEROBOTSUBSYSTEM___C__INITSTATEMACHINE_B__73_0_OFFSET UNITYSDK_OFFSET(0x1A906950)
#define MOLEMOLE_HACKLITTLEROBOTSUBSYSTEM___C__INITSTATEMACHINE_B__73_1_OFFSET UNITYSDK_OFFSET(0x1A9069A0)

namespace MoleMole
{
	inline static constexpr unsigned int HackLittleRobotSubsystem___c_TypeDefinitionIndex = 51837;

	class HackLittleRobotSubsystem___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(HackLittleRobotSubsystem___c_TypeDefinitionIndex)->GetStaticField(0x3EA30);
		}
		static ::System::Func_3<::MELDNFKKBME*, ::NHBJLCIHMIH*, ::System::Boolean>** StaticGet___9__73_1()
		{
			return (::System::Func_3<::MELDNFKKBME*, ::NHBJLCIHMIH*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(HackLittleRobotSubsystem___c_TypeDefinitionIndex)->GetStaticField(0x3EA38);
		}
		static ::System::Func_3<::MELDNFKKBME*, ::NHBJLCIHMIH*, ::System::Boolean>** StaticGet___9__73_0()
		{
			return (::System::Func_3<::MELDNFKKBME*, ::NHBJLCIHMIH*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(HackLittleRobotSubsystem___c_TypeDefinitionIndex)->GetStaticField(0x3EA40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_HACKLITTLEROBOTSUBSYSTEM___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKLITTLEROBOTSUBSYSTEM___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _InitStateMachine_b__73_0(::MELDNFKKBME* input, ::NHBJLCIHMIH* data)
		{
			return ((::System::Boolean(*)(::PVOID, ::MELDNFKKBME*, ::NHBJLCIHMIH*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKLITTLEROBOTSUBSYSTEM___C__INITSTATEMACHINE_B__73_0_OFFSET))(this, input, data);
		}

		::System::Boolean _InitStateMachine_b__73_1(::MELDNFKKBME* input, ::NHBJLCIHMIH* data)
		{
			return ((::System::Boolean(*)(::PVOID, ::MELDNFKKBME*, ::NHBJLCIHMIH*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKLITTLEROBOTSUBSYSTEM___C__INITSTATEMACHINE_B__73_1_OFFSET))(this, input, data);
		}
	};
}
