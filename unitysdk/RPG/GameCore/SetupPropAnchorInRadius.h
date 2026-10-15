#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetupPropAnchorInRadius; }
namespace System { class String; }

#define RPG_GAMECORE_SETUPPROPANCHORINRADIUS_CTOR_OFFSET UNITYSDK_OFFSET(0x1DACDD80)
#define RPG_GAMECORE_SETUPPROPANCHORINRADIUS_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DACDDA0)
#define RPG_GAMECORE_SETUPPROPANCHORINRADIUS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DACDD40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetupPropAnchorInRadius_TypeDefinitionIndex = 20347;

	class SetupPropAnchorInRadius : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* AnchorName; // 0x18
		::System::UInt32 ID; // 0x20
		::System::UInt32 GroupID; // 0x24
		::System::Single AnchorRotOffset; // 0x28
		::System::Byte _padding0[0x4];
		::System::String* CentreAnchorArea; // 0x30
		::System::String* CentreAnchorName; // 0x38
		::System::Single RadiusMin; // 0x40
		::System::Single RadiusMax; // 0x44
		::System::Single AngleMin; // 0x48
		::System::Single AngleMax; // 0x4C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETUPPROPANCHORINRADIUS_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetupPropAnchorInRadius* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetupPropAnchorInRadius*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETUPPROPANCHORINRADIUS_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetupPropAnchorInRadius* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetupPropAnchorInRadius*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETUPPROPANCHORINRADIUS_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
