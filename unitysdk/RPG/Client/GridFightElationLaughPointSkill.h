#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
namespace RPG::Client { class GridFightElationSkillConfig; }
namespace RPG::Client { class GridFightTraitElationLaughPointEffect; }
namespace RPG::GameCore { class GridFightTraitBEOverrideConfigRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTSKILL_CTOR_OFFSET UNITYSDK_OFFSET(0xDAC1A00)
#define RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTSKILL_GET_CONFIGS_OFFSET UNITYSDK_OFFSET(0xDAC1550)
#define RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTSKILL_GET_SKILLDESC_OFFSET UNITYSDK_OFFSET(0xDAC1880)
#define RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTSKILL_GET_SKILLICON_OFFSET UNITYSDK_OFFSET(0xDAC1990)
#define RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTSKILL_GET_SKILLNAME_OFFSET UNITYSDK_OFFSET(0xDAC17F0)
#define RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTSKILL_GET__OVERRIDEROW_OFFSET UNITYSDK_OFFSET(0xDAC1710)
#define RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTSKILL_SETTRAIT_OFFSET UNITYSDK_OFFSET(0xDAC1500)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightElationLaughPointSkill_TypeDefinitionIndex = 67196;

	class GridFightElationLaughPointSkill : public ::System::Object
	{
	public:
		::RPG::Client::GridFightTraitElationLaughPointEffect* _Effect; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTSKILL_CTOR_OFFSET))(this);
		}

		::System::Void SetTrait(::RPG::Client::GridFightTraitElationLaughPointEffect* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTraitElationLaughPointEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTSKILL_SETTRAIT_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightElationSkillConfig*>* get_Configs()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightElationSkillConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTSKILL_GET_CONFIGS_OFFSET))(this);
		}

		::RPG::Client::TextID get_SkillName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTSKILL_GET_SKILLNAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_SkillDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTSKILL_GET_SKILLDESC_OFFSET))(this);
		}

		::System::String* get_SkillIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTSKILL_GET_SKILLICON_OFFSET))(this);
		}

		::RPG::GameCore::GridFightTraitBEOverrideConfigRow* get__OverrideRow()
		{
			return ((::RPG::GameCore::GridFightTraitBEOverrideConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTSKILL_GET__OVERRIDEROW_OFFSET))(this);
		}

	};
}
