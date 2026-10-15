#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StageVolumeComponentData.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class StreamingBlockVolumeComponentData; }
namespace RPG::GameCore { class StreamingGroupVolumeComponentData; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_STREAMINGGROUPVOLUMECOMPONENTDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB29F40)
#define RPG_GAMECORE_STREAMINGGROUPVOLUMECOMPONENTDATA_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DB2A030)
#define RPG_GAMECORE_STREAMINGGROUPVOLUMECOMPONENTDATA_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DB2A000)
#define RPG_GAMECORE_STREAMINGGROUPVOLUMECOMPONENTDATA_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB29F50)
#define RPG_GAMECORE_STREAMINGGROUPVOLUMECOMPONENTDATA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB29F10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StreamingGroupVolumeComponentData_TypeDefinitionIndex = 19121;

	class StreamingGroupVolumeComponentData : public ::RPG::GameCore::StageVolumeComponentData
	{
	public:
		::Il2CppArray<::RPG::GameCore::StreamingBlockVolumeComponentData*>* StreamingVolumeGroup; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STREAMINGGROUPVOLUMECOMPONENTDATA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::StreamingGroupVolumeComponentData* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StreamingGroupVolumeComponentData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STREAMINGGROUPVOLUMECOMPONENTDATA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::StreamingGroupVolumeComponentData* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StreamingGroupVolumeComponentData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STREAMINGGROUPVOLUMECOMPONENTDATA_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::StreamingGroupVolumeComponentData* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::StreamingGroupVolumeComponentData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STREAMINGGROUPVOLUMECOMPONENTDATA_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::StreamingGroupVolumeComponentData* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::StreamingGroupVolumeComponentData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STREAMINGGROUPVOLUMECOMPONENTDATA_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
