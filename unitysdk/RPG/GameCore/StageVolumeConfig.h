#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class StageVolumeComponentData; }
namespace RPG::GameCore { class StageVolumeConfig; }
namespace RPG::GameCore { class StreamingSceneObjLodScaleVolumeComponentData; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_STAGEVOLUMECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAE8680)
#define RPG_GAMECORE_STAGEVOLUMECONFIG_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DAE8690)
#define RPG_GAMECORE_STAGEVOLUMECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAE8260)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StageVolumeConfig_TypeDefinitionIndex = 19149;

	class StageVolumeConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* VolumeName; // 0x10
		::System::Int32 Priority; // 0x18
		::RPG::MVector3 Center; // 0x1C
		::RPG::MVector3 Size; // 0x28
		::RPG::MVector3 Rotation; // 0x34
		::Il2CppArray<::RPG::GameCore::StageVolumeComponentData*>* VolumeComponents; // 0x40
		::RPG::GameCore::StreamingSceneObjLodScaleVolumeComponentData* SceneObjLodScaleData; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEVOLUMECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::StageVolumeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StageVolumeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEVOLUMECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::StageVolumeConfig* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::StageVolumeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEVOLUMECONFIG_LJACLBNEEEB_OFFSET))(a1, a2);
		}

	};
}
