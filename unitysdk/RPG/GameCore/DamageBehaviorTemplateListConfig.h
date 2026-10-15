#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DamageBehaviorTemplate; }
namespace RPG::GameCore { class DamageBehaviorTemplateListConfig; }
namespace RPG::GameCore { class JsonEnum; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_DAMAGEBEHAVIORTEMPLATELISTCONFIG_BAFDPPAFIKE_1_OFFSET UNITYSDK_OFFSET(0x1D5EFD80)
#define RPG_GAMECORE_DAMAGEBEHAVIORTEMPLATELISTCONFIG_BAFDPPAFIKE_OFFSET UNITYSDK_OFFSET(0x1D5EFCA0)
#define RPG_GAMECORE_DAMAGEBEHAVIORTEMPLATELISTCONFIG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D5EFDF0)
#define RPG_GAMECORE_DAMAGEBEHAVIORTEMPLATELISTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5EFC90)
#define RPG_GAMECORE_DAMAGEBEHAVIORTEMPLATELISTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5EFBB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DamageBehaviorTemplateListConfig_TypeDefinitionIndex = 15647;

	class DamageBehaviorTemplateListConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::DamageBehaviorTemplate*>* ConfigList; // 0x10
		static ::RPG::GameCore::DamageBehaviorTemplate** StaticGet_S_Default()
		{
			return (::RPG::GameCore::DamageBehaviorTemplate**)UnitySDK::FromName("RPG.GameCore", "DamageBehaviorTemplateListConfig")->GetStaticField(0x1E690);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAMAGEBEHAVIORTEMPLATELISTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAMAGEBEHAVIORTEMPLATELISTCONFIG_CCTOR_OFFSET))();
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DamageBehaviorTemplateListConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DamageBehaviorTemplateListConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAMAGEBEHAVIORTEMPLATELISTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		::RPG::GameCore::DamageBehaviorTemplate* BAFDPPAFIKE(::System::String* a1)
		{
			return ((::RPG::GameCore::DamageBehaviorTemplate*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAMAGEBEHAVIORTEMPLATELISTCONFIG_BAFDPPAFIKE_OFFSET))(this, a1);
		}

		::RPG::GameCore::DamageBehaviorTemplate* BAFDPPAFIKE_1(::RPG::GameCore::JsonEnum* a1)
		{
			return ((::RPG::GameCore::DamageBehaviorTemplate*(*)(::PVOID, ::RPG::GameCore::JsonEnum*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAMAGEBEHAVIORTEMPLATELISTCONFIG_BAFDPPAFIKE_1_OFFSET))(this, a1);
		}

	};
}
