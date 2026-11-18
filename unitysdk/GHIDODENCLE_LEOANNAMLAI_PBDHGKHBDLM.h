#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JGLIFHIAIEH.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Rendering { class Volume; }

#define GHIDODENCLE_LEOANNAMLAI_PBDHGKHBDLM_AOOJIIJNKHJ_OFFSET UNITYSDK_OFFSET(0x1F954FF0)
#define GHIDODENCLE_LEOANNAMLAI_PBDHGKHBDLM_CFNFJCMCBKF_OFFSET UNITYSDK_OFFSET(0x1F955300)
#define GHIDODENCLE_LEOANNAMLAI_PBDHGKHBDLM__CTOR_OFFSET UNITYSDK_OFFSET(0x1F954FE0)

inline static constexpr unsigned int GHIDODENCLE_LEOANNAMLAI_PBDHGKHBDLM_TypeDefinitionIndex = 94991;

class GHIDODENCLE_LEOANNAMLAI_PBDHGKHBDLM : public ::System::Object
{
public:
	::UnityEngine::Rendering::Volume* PHLFMCCNEGD; // 0x10
	::JGLIFHIAIEH JLNIFKHFEFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHIDODENCLE_LEOANNAMLAI_PBDHGKHBDLM__CTOR_OFFSET))(this);
	}

	::JGLIFHIAIEH AOOJIIJNKHJ()
	{
		return ((::JGLIFHIAIEH(*)(::PVOID))((::PBYTE)hIl2Cpp + GHIDODENCLE_LEOANNAMLAI_PBDHGKHBDLM_AOOJIIJNKHJ_OFFSET))(this);
	}

	::System::Void CFNFJCMCBKF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHIDODENCLE_LEOANNAMLAI_PBDHGKHBDLM_CFNFJCMCBKF_OFFSET))(this);
	}
};
