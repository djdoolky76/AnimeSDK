#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"
#include "unitysdk/RPG/GameCore/MarbleItemFeature.h"
#include "unitysdk/RPG/GameCore/MarbleItemType.h"
#include "unitysdk/RPG/GameCore/MarbleShapeType.h"
#include "unitysdk/RPG/MVector2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MarbleItemComponentConfig; }

#define RPG_GAMECORE_MARBLEITEMCOMPONENTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D83F4B0)
#define RPG_GAMECORE_MARBLEITEMCOMPONENTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D83F4C0)
#define RPG_GAMECORE_MARBLEITEMCOMPONENTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D83F460)

namespace RPG::GameCore
{
	class MarbleItemComponentConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::RPG::GameCore::MarbleItemType ItemType; // 0x10
		::RPG::GameCore::MarbleShapeType Shape; // 0x14
		::System::Single Radius; // 0x18
		::RPG::MVector2 Size; // 0x1C
		::System::UInt32 SkillId; // 0x24
		::System::Boolean RandomPos; // 0x28
		::System::Boolean AvoidCollision; // 0x29
		::System::Byte _padding0[0x6];
		::Il2CppArray<::System::UInt32>* AppearRound; // 0x30
		::RPG::GameCore::MarbleItemFeature Feature; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEITEMCOMPONENTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleItemComponentConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleItemComponentConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEITEMCOMPONENTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleItemComponentConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleItemComponentConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEITEMCOMPONENTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
