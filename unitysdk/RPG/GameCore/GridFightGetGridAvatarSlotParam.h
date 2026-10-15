#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightRegion.h"
#include "unitysdk/RPG/GameCore/TutorialDynamicParamBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightGetGridAvatarSlotParam; }

#define RPG_GAMECORE_GRIDFIGHTGETGRIDAVATARSLOTPARAM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D731510)
#define RPG_GAMECORE_GRIDFIGHTGETGRIDAVATARSLOTPARAM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D731520)
#define RPG_GAMECORE_GRIDFIGHTGETGRIDAVATARSLOTPARAM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7314C0)

namespace RPG::GameCore
{
	class GridFightGetGridAvatarSlotParam : public ::RPG::GameCore::TutorialDynamicParamBase
	{
	public:
		::Il2CppArray<::RPG::GameCore::GridFightRegion>* GridRegionList; // 0x10
		::System::UInt32 RoleID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTGETGRIDAVATARSLOTPARAM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightGetGridAvatarSlotParam* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightGetGridAvatarSlotParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTGETGRIDAVATARSLOTPARAM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightGetGridAvatarSlotParam* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightGetGridAvatarSlotParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTGETGRIDAVATARSLOTPARAM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
