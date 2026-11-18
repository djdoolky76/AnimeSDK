#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MGBBDIIJPFJ;
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_PINBALLSUBSYSTEM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15AD1930)
#define MOLEMOLE_PINBALLSUBSYSTEM___C__CLEARALLTARGETPHYSICSCOLLIDERS_B__753_0_OFFSET UNITYSDK_OFFSET(0x15AD1A70)
#define MOLEMOLE_PINBALLSUBSYSTEM___C__CLEARPADDLEPRESSESTHISFIXED_B__316_0_OFFSET UNITYSDK_OFFSET(0x15AD1A30)
#define MOLEMOLE_PINBALLSUBSYSTEM___C__CLEARPADDLESTATES_B__304_0_OFFSET UNITYSDK_OFFSET(0x15AD1980)
#define MOLEMOLE_PINBALLSUBSYSTEM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15AD1970)

namespace MoleMole
{
	inline static constexpr unsigned int PinballSubsystem___c_TypeDefinitionIndex = 56758;

	class PinballSubsystem___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::MGBBDIIJPFJ*>** StaticGet___9__316_0()
		{
			return (::System::Action_1<::MGBBDIIJPFJ*>**)Il2CppClass::FromTypeDefinitionIndex(PinballSubsystem___c_TypeDefinitionIndex)->GetStaticField(0x4F8D0);
		}
		static ::System::Action_1<::MGBBDIIJPFJ*>** StaticGet___9__753_0()
		{
			return (::System::Action_1<::MGBBDIIJPFJ*>**)Il2CppClass::FromTypeDefinitionIndex(PinballSubsystem___c_TypeDefinitionIndex)->GetStaticField(0x4F8D8);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(PinballSubsystem___c_TypeDefinitionIndex)->GetStaticField(0x4F8E0);
		}
		static ::System::Action_1<::MGBBDIIJPFJ*>** StaticGet___9__304_0()
		{
			return (::System::Action_1<::MGBBDIIJPFJ*>**)Il2CppClass::FromTypeDefinitionIndex(PinballSubsystem___c_TypeDefinitionIndex)->GetStaticField(0x4F8E8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_PINBALLSUBSYSTEM___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PINBALLSUBSYSTEM___C__CTOR_OFFSET))(this);
		}

		::System::Void _ClearPaddleStates_b__304_0(::MGBBDIIJPFJ* runtimeEntity)
		{
			return ((::System::Void(*)(::PVOID, ::MGBBDIIJPFJ*))((::PBYTE)hIl2Cpp + MOLEMOLE_PINBALLSUBSYSTEM___C__CLEARPADDLESTATES_B__304_0_OFFSET))(this, runtimeEntity);
		}

		::System::Void _ClearPaddlePressesThisFixed_b__316_0(::MGBBDIIJPFJ* runtimeEntity)
		{
			return ((::System::Void(*)(::PVOID, ::MGBBDIIJPFJ*))((::PBYTE)hIl2Cpp + MOLEMOLE_PINBALLSUBSYSTEM___C__CLEARPADDLEPRESSESTHISFIXED_B__316_0_OFFSET))(this, runtimeEntity);
		}

		::System::Void _ClearAllTargetPhysicsColliders_b__753_0(::MGBBDIIJPFJ* target)
		{
			return ((::System::Void(*)(::PVOID, ::MGBBDIIJPFJ*))((::PBYTE)hIl2Cpp + MOLEMOLE_PINBALLSUBSYSTEM___C__CLEARALLTARGETPHYSICSCOLLIDERS_B__753_0_OFFSET))(this, target);
		}
	};
}
