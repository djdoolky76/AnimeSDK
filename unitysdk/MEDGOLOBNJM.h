#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/ModifierHintType.h"
#include "unitysdk/System/Object.h"
class MEDGOLOBNJM;
namespace RPG::GameCore { class BattleEventDataComponent; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class ModifierHint; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }

#define MEDGOLOBNJM_BPLPBPMEODA_1_OFFSET UNITYSDK_OFFSET(0xB8BCC40)
#define MEDGOLOBNJM_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB8BCAB0)
#define MEDGOLOBNJM_CTOR_OFFSET UNITYSDK_OFFSET(0xB8BCAA0)

	class MEDGOLOBNJM : public ::System::Object
	{
	public:
		::RPG::GameCore::TurnBasedModifierInstance* ILIIOLJMKME; // 0x10
		::Il2CppArray<::RPG::GameCore::DynamicFloat*>* PFGICILMFPD; // 0x18
		::Il2CppArray<::RPG::GameCore::FixPoint>* HLJCDHMCPAI; // 0x20
		::RPG::GameCore::ModifierHintType INAHCAEDLEA; // 0x28
		::System::Int32 NALMBOOCCIN; // 0x2C
		::System::Int32 CKOIMOLALEH; // 0x30
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID NMAHGFAPENI; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEDGOLOBNJM_CTOR_OFFSET))(this);
		}

		static ::MEDGOLOBNJM* BPLPBPMEODA(::RPG::GameCore::ModifierHint* a1, ::RPG::GameCore::TurnBasedModifierInstance* a2)
		{
			return ((::MEDGOLOBNJM*(*)(::RPG::GameCore::ModifierHint*, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + MEDGOLOBNJM_BPLPBPMEODA_OFFSET))(a1, a2);
		}

		static ::MEDGOLOBNJM* BPLPBPMEODA_1(::RPG::GameCore::BattleEventDataComponent* a1)
		{
			return ((::MEDGOLOBNJM*(*)(::RPG::GameCore::BattleEventDataComponent*))((::PBYTE)hIl2Cpp + MEDGOLOBNJM_BPLPBPMEODA_1_OFFSET))(a1);
		}

	};
