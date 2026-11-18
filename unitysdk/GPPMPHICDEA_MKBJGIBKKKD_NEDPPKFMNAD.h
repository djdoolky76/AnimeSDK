#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class Animation; }

#define GPPMPHICDEA_MKBJGIBKKKD_NEDPPKFMNAD_KMKLFPBPMOD_OFFSET UNITYSDK_OFFSET(0x15B37D10)
#define GPPMPHICDEA_MKBJGIBKKKD_NEDPPKFMNAD__CTOR_OFFSET UNITYSDK_OFFSET(0x15B37D00)

inline static constexpr unsigned int GPPMPHICDEA_MKBJGIBKKKD_NEDPPKFMNAD_TypeDefinitionIndex = 42613;

class GPPMPHICDEA_MKBJGIBKKKD_NEDPPKFMNAD : public ::System::Object
{
public:
	::UnityEngine::Animation* AOKJEGNBALI; // 0x10
	::System::String* BLGNOOLDEOF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPPMPHICDEA_MKBJGIBKKKD_NEDPPKFMNAD__CTOR_OFFSET))(this);
	}

	::System::Void KMKLFPBPMOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPPMPHICDEA_MKBJGIBKKKD_NEDPPKFMNAD_KMKLFPBPMOD_OFFSET))(this);
	}
};
