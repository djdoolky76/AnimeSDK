#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class BubbleTalkInfo; }
namespace RPG::GameCore { class ST_Side_PlayBubbleTalk; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define JNBONKEKKNC_CTOR_OFFSET UNITYSDK_OFFSET(0xB2716C0)
#define JNBONKEKKNC_JHMJNGHAKBF_OFFSET UNITYSDK_OFFSET(0xB271BF0)
#define JNBONKEKKNC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB2716F0)
#define JNBONKEKKNC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB271CF0)

inline static constexpr unsigned int JNBONKEKKNC_TypeDefinitionIndex = 52244;

	class JNBONKEKKNC
	{
	public:
		::System::String* IJMGEMMNNPI; // 0x28
		::System::Boolean GMBPKGHNFJO; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Side_PlayBubbleTalk* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Side_PlayBubbleTalk*))((::PBYTE)hIl2Cpp + JNBONKEKKNC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNBONKEKKNC_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNBONKEKKNC_ONTASKRESET_OFFSET))(this);
		}

		::System::Void JHMJNGHAKBF(::RPG::GameCore::BubbleTalkInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BubbleTalkInfo*))((::PBYTE)hIl2Cpp + JNBONKEKKNC_JHMJNGHAKBF_OFFSET))(this, a1);
		}

	};
