#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkCallbackType.h"
class AkCallbackInfo;
namespace RPG::GameCore { class PlayVoice_Single; }
namespace RPG::GameCore { class TaskContext; }

#define BJFPLGBNDLL_AGKNJDPHJEG_OFFSET UNITYSDK_OFFSET(0xB7999E0)
#define BJFPLGBNDLL_CTOR_OFFSET UNITYSDK_OFFSET(0xB799750)
#define BJFPLGBNDLL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB799780)
#define BJFPLGBNDLL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB799820)

inline static constexpr unsigned int BJFPLGBNDLL_TypeDefinitionIndex = 56378;

	class BJFPLGBNDLL
	{
	public:
		::System::UInt32 MGOJNNHAEGC; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PlayVoice_Single* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PlayVoice_Single*))((::PBYTE)hIl2Cpp + BJFPLGBNDLL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJFPLGBNDLL_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJFPLGBNDLL_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void AGKNJDPHJEG(::System::UInt32 a1, ::AkCallbackType a2, ::AkCallbackInfo* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::AkCallbackType, ::AkCallbackInfo*))((::PBYTE)hIl2Cpp + BJFPLGBNDLL_AGKNJDPHJEG_OFFSET))(this, a1, a2, a3);
		}

	};
