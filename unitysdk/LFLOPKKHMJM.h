#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BIICBGEICAB.h"
#include "unitysdk/System/Object.h"

class CJIEIHEDMME;
namespace UnityEngine { class AnimationCurve; }

#define LFLOPKKHMJM__CTOR_OFFSET UNITYSDK_OFFSET(0xD42B190)

inline static constexpr unsigned int LFLOPKKHMJM_TypeDefinitionIndex = 68963;

class LFLOPKKHMJM : public ::System::Object
{
public:
	::CJIEIHEDMME* LADPIPOMBJM; // 0x10
	::UnityEngine::AnimationCurve* PAECLIFBAKM; // 0x18
	::System::Boolean JGANCCIJMMJ; // 0x20
	::System::Boolean CLMKEBAOJBE; // 0x21
	::System::Byte _padding0[0x2];
	::System::Single MFFNOACKECI; // 0x24
	::BIICBGEICAB CFPAPHGPDBK; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFLOPKKHMJM__CTOR_OFFSET))(this);
	}
};
