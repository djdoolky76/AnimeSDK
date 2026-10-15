#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameAbilityAttributeType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class BCLKDMAHONE;
class IOGNBKGNPFD;
namespace Entitas { class IEntity; }
namespace RPG::GameCore { class BaseLittleGameAbilityEffectConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IABDLCNGHOL_CTOR_OFFSET UNITYSDK_OFFSET(0x15DFC020)
#define IABDLCNGHOL_EXECUTE_OFFSET UNITYSDK_OFFSET(0x15DFB630)
#define IABDLCNGHOL_FPJMPMFGMII_OFFSET UNITYSDK_OFFSET(0x15DFBA70)

inline static constexpr unsigned int IABDLCNGHOL_TypeDefinitionIndex = 77345;

	class IABDLCNGHOL : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IABDLCNGHOL_CTOR_OFFSET))(this);
		}

		::System::Void Execute(::IOGNBKGNPFD* a1, ::System::Collections::Generic::List_1<::Entitas::IEntity*>* a2, ::RPG::GameCore::BaseLittleGameAbilityEffectConfig* a3)
		{
			return ((::System::Void(*)(::PVOID, ::IOGNBKGNPFD*, ::System::Collections::Generic::List_1<::Entitas::IEntity*>*, ::RPG::GameCore::BaseLittleGameAbilityEffectConfig*))((::PBYTE)hIl2Cpp + IABDLCNGHOL_EXECUTE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void FPJMPMFGMII(::IOGNBKGNPFD* a1, ::BCLKDMAHONE* a2, ::Entitas::IEntity* a3, ::RPG::GameCore::LittleGameAbilityAttributeType a4, ::RPG::GameCore::FixPoint a5, ::System::String* a6)
		{
			return ((::System::Void(*)(::PVOID, ::IOGNBKGNPFD*, ::BCLKDMAHONE*, ::Entitas::IEntity*, ::RPG::GameCore::LittleGameAbilityAttributeType, ::RPG::GameCore::FixPoint, ::System::String*))((::PBYTE)hIl2Cpp + IABDLCNGHOL_FPJMPMFGMII_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

	};
