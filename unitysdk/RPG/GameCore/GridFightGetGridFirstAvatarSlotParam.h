#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightRegion.h"
#include "unitysdk/RPG/GameCore/TutorialDynamicParamBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightGetGridFirstAvatarSlotParam; }

#define RPG_GAMECORE_GRIDFIGHTGETGRIDFIRSTAVATARSLOTPARAM_CTOR_OFFSET UNITYSDK_OFFSET(0x20609380)
#define RPG_GAMECORE_GRIDFIGHTGETGRIDFIRSTAVATARSLOTPARAM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x20609390)
#define RPG_GAMECORE_GRIDFIGHTGETGRIDFIRSTAVATARSLOTPARAM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x20609330)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightGetGridFirstAvatarSlotParam_TypeDefinitionIndex = 20284;

	class GridFightGetGridFirstAvatarSlotParam : public ::RPG::GameCore::TutorialDynamicParamBase
	{
	public:
		::Il2CppArray<::RPG::GameCore::GridFightRegion>* GridRegionList; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTGETGRIDFIRSTAVATARSLOTPARAM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightGetGridFirstAvatarSlotParam* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightGetGridFirstAvatarSlotParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTGETGRIDFIRSTAVATARSLOTPARAM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightGetGridFirstAvatarSlotParam* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightGetGridFirstAvatarSlotParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTGETGRIDFIRSTAVATARSLOTPARAM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
