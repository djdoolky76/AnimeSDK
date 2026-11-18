#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CCALMEHPGIK.h"
#include "unitysdk/JMLFHNIBMJO.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

class EAKHJNIMJIL;

#define DKBLAGDDOMM_BKNKCFDBLGH_OFFSET UNITYSDK_OFFSET(0x7FC1130)
#define DKBLAGDDOMM_MBJFAHEBJDA_OFFSET UNITYSDK_OFFSET(0x7FC1170)
#define DKBLAGDDOMM__CTOR_OFFSET UNITYSDK_OFFSET(0x7FC1140)

inline static constexpr unsigned int DKBLAGDDOMM_TypeDefinitionIndex = 69860;

class DKBLAGDDOMM : public ::JMLFHNIBMJO
{
public:
	::System::Nullable_1<::UnityEngine::Vector3> OIFJEHEFHFH; // 0x10
	::System::Byte _padding0[0x8];
	::System::Single OOKNCIPIEPE; // 0x20

	::System::Void _ctor(::System::Single LKDLGJGHMPC, ::System::Nullable_1<::UnityEngine::Vector3> GBEFFCCPBIC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Nullable_1<::UnityEngine::Vector3>))((::PBYTE)hIl2Cpp + DKBLAGDDOMM__CTOR_OFFSET))(this, LKDLGJGHMPC, GBEFFCCPBIC);
	}

	::CCALMEHPGIK BKNKCFDBLGH()
	{
		return ((::CCALMEHPGIK(*)(::PVOID))((::PBYTE)hIl2Cpp + DKBLAGDDOMM_BKNKCFDBLGH_OFFSET))(this);
	}

	::System::Boolean MBJFAHEBJDA(::EAKHJNIMJIL* GCMKDONNBPM, ::System::Single PBCAAADNEPK)
	{
		return ((::System::Boolean(*)(::PVOID, ::EAKHJNIMJIL*, ::System::Single))((::PBYTE)hIl2Cpp + DKBLAGDDOMM_MBJFAHEBJDA_OFFSET))(this, GCMKDONNBPM, PBCAAADNEPK);
	}
};
