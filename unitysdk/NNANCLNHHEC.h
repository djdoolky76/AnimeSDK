#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FECDLDCCHPN;
namespace RPG::GameCore { class StageVolumeComponentData; }
namespace RPG::GameCore { class StreamingBlockVolumeComponentData; }
namespace RPG::GameCore { class StreamingBlockVolumeComponentEditorData; }

#define NNANCLNHHEC_BLNHFKBCGBL_OFFSET UNITYSDK_OFFSET(0xC584020)
#define NNANCLNHHEC_CMDDLDKDIKP_OFFSET UNITYSDK_OFFSET(0xC583CB0)
#define NNANCLNHHEC_EMNLOKEJEFB_OFFSET UNITYSDK_OFFSET(0xC5840C0)

inline static constexpr unsigned int NNANCLNHHEC_TypeDefinitionIndex = 54759;

	class NNANCLNHHEC : public ::System::Object
	{
	public:
		static ::FECDLDCCHPN* CMDDLDKDIKP(::RPG::GameCore::StageVolumeComponentData* a1)
		{
			return ((::FECDLDCCHPN*(*)(::RPG::GameCore::StageVolumeComponentData*))((::PBYTE)hIl2Cpp + NNANCLNHHEC_CMDDLDKDIKP_OFFSET))(a1);
		}

		static ::RPG::GameCore::StreamingBlockVolumeComponentData* BLNHFKBCGBL(::RPG::GameCore::StreamingBlockVolumeComponentEditorData* a1)
		{
			return ((::RPG::GameCore::StreamingBlockVolumeComponentData*(*)(::RPG::GameCore::StreamingBlockVolumeComponentEditorData*))((::PBYTE)hIl2Cpp + NNANCLNHHEC_BLNHFKBCGBL_OFFSET))(a1);
		}

		static ::RPG::GameCore::StreamingBlockVolumeComponentEditorData* EMNLOKEJEFB(::RPG::GameCore::StreamingBlockVolumeComponentData* a1)
		{
			return ((::RPG::GameCore::StreamingBlockVolumeComponentEditorData*(*)(::RPG::GameCore::StreamingBlockVolumeComponentData*))((::PBYTE)hIl2Cpp + NNANCLNHHEC_EMNLOKEJEFB_OFFSET))(a1);
		}

	};
