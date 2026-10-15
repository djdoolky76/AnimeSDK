#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StreamingVolumeComponentData.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class StreamingSceneObjLodScaleVolumeComponentData; }
namespace SimpleJSON { class JSONNode; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_STREAMINGSCENEOBJLODSCALEVOLUMECOMPONENTDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB2A7E0)
#define RPG_GAMECORE_STREAMINGSCENEOBJLODSCALEVOLUMECOMPONENTDATA_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DB2A950)
#define RPG_GAMECORE_STREAMINGSCENEOBJLODSCALEVOLUMECOMPONENTDATA_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DB2A920)
#define RPG_GAMECORE_STREAMINGSCENEOBJLODSCALEVOLUMECOMPONENTDATA_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB2A7F0)
#define RPG_GAMECORE_STREAMINGSCENEOBJLODSCALEVOLUMECOMPONENTDATA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB2A7B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StreamingSceneObjLodScaleVolumeComponentData_TypeDefinitionIndex = 19127;

	class StreamingSceneObjLodScaleVolumeComponentData : public ::RPG::GameCore::StreamingVolumeComponentData
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt16, ::System::Single>* SceneObjLodScale; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>* FullSceneObjLodScale; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STREAMINGSCENEOBJLODSCALEVOLUMECOMPONENTDATA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::StreamingSceneObjLodScaleVolumeComponentData* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StreamingSceneObjLodScaleVolumeComponentData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STREAMINGSCENEOBJLODSCALEVOLUMECOMPONENTDATA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::StreamingSceneObjLodScaleVolumeComponentData* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StreamingSceneObjLodScaleVolumeComponentData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STREAMINGSCENEOBJLODSCALEVOLUMECOMPONENTDATA_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::StreamingSceneObjLodScaleVolumeComponentData* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::StreamingSceneObjLodScaleVolumeComponentData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STREAMINGSCENEOBJLODSCALEVOLUMECOMPONENTDATA_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::StreamingSceneObjLodScaleVolumeComponentData* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::StreamingSceneObjLodScaleVolumeComponentData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STREAMINGSCENEOBJLODSCALEVOLUMECOMPONENTDATA_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
