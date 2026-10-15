#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/EntityType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetFloatingTextInfo; }

#define RPG_GAMECORE_SETFLOATINGTEXTINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAB3360)
#define RPG_GAMECORE_SETFLOATINGTEXTINFO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAB3370)
#define RPG_GAMECORE_SETFLOATINGTEXTINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAB3330)

namespace RPG::GameCore
{
	class SetFloatingTextInfo : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::EntityType TargetEntityType; // 0x18
		::System::UInt32 ID; // 0x1C
		::System::UInt32 GroupID; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID Name; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETFLOATINGTEXTINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetFloatingTextInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetFloatingTextInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETFLOATINGTEXTINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetFloatingTextInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetFloatingTextInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETFLOATINGTEXTINFO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
