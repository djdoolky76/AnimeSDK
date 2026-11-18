#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ONCPHJLEHNG_GCLMPHEPKDN.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/AI/NavMeshPathStatus.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define ONCPHJLEHNG_FJAMJHBKLFJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7ADCA0)

inline static constexpr unsigned int ONCPHJLEHNG_FJAMJHBKLFJ_TypeDefinitionIndex = 84844;

class ONCPHJLEHNG_FJAMJHBKLFJ : public ::System::Object
{
public:
	::System::String* DCJCHGOGLMF; // 0x10
	::System::String* CFHOBLHNPLM; // 0x18
	::System::Int32 ECGEAAOGCGB; // 0x20
	::System::Single EIHOAKIIEJA; // 0x24
	::System::Int32 KEDBFHFLBHI; // 0x28
	::System::Boolean OAFEJCNEOPC; // 0x2C
	::System::Byte _padding0[0x3];
	::UnityEngine::Vector3 PILIJGIDOFK; // 0x30
	::UnityEngine::Vector3 BCJFEMAKHGL; // 0x3C
	::UnityEngine::AI::NavMeshPathStatus OCLMEDDNHDG; // 0x48
	::ONCPHJLEHNG_GCLMPHEPKDN HPMFIJFLODJ; // 0x4C
	::System::Int32 KFKNAOFDIOF; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONCPHJLEHNG_FJAMJHBKLFJ__CTOR_OFFSET))(this);
	}
};
