#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
namespace RPG::Client { class GridFightElationSkillConfig; }
namespace RPG::Client { class GridFightTraitElationEffect; }
namespace RPG::GameCore { class GridFightTraitBEOverrideConfigRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTTRAITEFFECTELATIONSKILL_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3F90D0)
#define RPG_CLIENT_GRIDFIGHTTRAITEFFECTELATIONSKILL_GET_CONFIGS_OFFSET UNITYSDK_OFFSET(0x1D3F8F40)
#define RPG_CLIENT_GRIDFIGHTTRAITEFFECTELATIONSKILL_GET_SKILLDESC_OFFSET UNITYSDK_OFFSET(0x1D3F9000)
#define RPG_CLIENT_GRIDFIGHTTRAITEFFECTELATIONSKILL_GET_SKILLICON_OFFSET UNITYSDK_OFFSET(0x1D3F9070)
#define RPG_CLIENT_GRIDFIGHTTRAITEFFECTELATIONSKILL_GET_SKILLNAME_OFFSET UNITYSDK_OFFSET(0x1D3F8F90)
#define RPG_CLIENT_GRIDFIGHTTRAITEFFECTELATIONSKILL_GET__OVERRIDEROW_OFFSET UNITYSDK_OFFSET(0x1D3F8DA0)
#define RPG_CLIENT_GRIDFIGHTTRAITEFFECTELATIONSKILL_SETTRAIT_OFFSET UNITYSDK_OFFSET(0x1D3F8B90)
#define RPG_CLIENT_GRIDFIGHTTRAITEFFECTELATIONSKILL__GETCONFIGS_OFFSET UNITYSDK_OFFSET(0x1D3F8BE0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitEffectElationSkill_TypeDefinitionIndex = 67169;

	class GridFightTraitEffectElationSkill : public ::System::Object
	{
	public:
		::RPG::Client::GridFightTraitElationEffect* _Effect; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITEFFECTELATIONSKILL_CTOR_OFFSET))(this);
		}

		::System::Void SetTrait(::RPG::Client::GridFightTraitElationEffect* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTraitElationEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITEFFECTELATIONSKILL_SETTRAIT_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightElationSkillConfig*>* _GetConfigs()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightElationSkillConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITEFFECTELATIONSKILL__GETCONFIGS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightElationSkillConfig*>* get_Configs()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightElationSkillConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITEFFECTELATIONSKILL_GET_CONFIGS_OFFSET))(this);
		}

		::RPG::Client::TextID get_SkillName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITEFFECTELATIONSKILL_GET_SKILLNAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_SkillDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITEFFECTELATIONSKILL_GET_SKILLDESC_OFFSET))(this);
		}

		::System::String* get_SkillIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITEFFECTELATIONSKILL_GET_SKILLICON_OFFSET))(this);
		}

		::RPG::GameCore::GridFightTraitBEOverrideConfigRow* get__OverrideRow()
		{
			return ((::RPG::GameCore::GridFightTraitBEOverrideConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITEFFECTELATIONSKILL_GET__OVERRIDEROW_OFFSET))(this);
		}

	};
}
