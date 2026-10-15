#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
class LJFHKAJPFNE;
namespace RPG::Client { class Stage; }

#define DEBUGSTREAMINGINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x12666D40)
#define DEBUGSTREAMINGINFO_INITCMPT_OFFSET UNITYSDK_OFFSET(0x12666CE0)

inline static constexpr unsigned int DebugStreamingInfo_TypeDefinitionIndex = 47245;

	class DebugStreamingInfo : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::Stage* PDAIGLPEMEE; // 0x18
		::LJFHKAJPFNE* NFPCBMCGFDD; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBUGSTREAMINGINFO_CTOR_OFFSET))(this);
		}

		::System::Void InitCmpt(::RPG::Client::Stage* a1, ::LJFHKAJPFNE* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Stage*, ::LJFHKAJPFNE*))((::PBYTE)hIl2Cpp + DEBUGSTREAMINGINFO_INITCMPT_OFFSET))(this, a1, a2);
		}

	};
