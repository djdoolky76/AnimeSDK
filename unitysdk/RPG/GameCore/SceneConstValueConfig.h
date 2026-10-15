#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SceneConstValueConfig; }
namespace System { class String; }

#define RPG_GAMECORE_SCENECONSTVALUECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA89060)
#define RPG_GAMECORE_SCENECONSTVALUECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA88DB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SceneConstValueConfig_TypeDefinitionIndex = 19180;

	class SceneConstValueConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Int32 NormTemplateVisionDistanceFactor; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* DefaultNormTemplateName; // 0x18
		::System::Single OverrideColliderSizeForLod; // 0x20
		::System::Single OverrideSCSizeForLod; // 0x24
		::System::Single DefaultDynamicItemSizeForLod; // 0x28
		::System::Int32 NormDistanceTemplateMaxVisionDistance; // 0x2C
		::Il2CppArray<::System::Int32>* TAMonoTickIntervalByLOD; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SCENECONSTVALUECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SceneConstValueConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SceneConstValueConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SCENECONSTVALUECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
