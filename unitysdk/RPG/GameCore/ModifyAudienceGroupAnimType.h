#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicJsonList; }
namespace RPG::GameCore { class ModifyAudienceGroupAnimType; }
namespace System { class String; }

#define RPG_GAMECORE_MODIFYAUDIENCEGROUPANIMTYPE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D890E60)
#define RPG_GAMECORE_MODIFYAUDIENCEGROUPANIMTYPE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D890E70)
#define RPG_GAMECORE_MODIFYAUDIENCEGROUPANIMTYPE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D890E30)

namespace RPG::GameCore
{
	class ModifyAudienceGroupAnimType : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicJsonList* GroupMemberList; // 0x18
		::System::String* AnimTypeName; // 0x20
		::RPG::MVector2 WaitTimeRange; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYAUDIENCEGROUPANIMTYPE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ModifyAudienceGroupAnimType* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ModifyAudienceGroupAnimType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYAUDIENCEGROUPANIMTYPE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ModifyAudienceGroupAnimType* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ModifyAudienceGroupAnimType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYAUDIENCEGROUPANIMTYPE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
