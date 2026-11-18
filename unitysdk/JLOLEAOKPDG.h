#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CCALMEHPGIK.h"
#include "unitysdk/JMLFHNIBMJO.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

class EAKHJNIMJIL;

#define JLOLEAOKPDG_BKNKCFDBLGH_OFFSET UNITYSDK_OFFSET(0x1309A3A0)
#define JLOLEAOKPDG_MBJFAHEBJDA_OFFSET UNITYSDK_OFFSET(0x1309A3E0)
#define JLOLEAOKPDG__CTOR_OFFSET UNITYSDK_OFFSET(0x1309A3B0)

inline static constexpr unsigned int JLOLEAOKPDG_TypeDefinitionIndex = 55084;

class JLOLEAOKPDG : public ::JMLFHNIBMJO
{
public:
	::System::Nullable_1<::UnityEngine::Vector3> OIFJEHEFHFH; // 0x10
	::System::Byte _padding0[0x8];
	::System::Single OOKNCIPIEPE; // 0x20

	::System::Void _ctor(::System::Single LKDLGJGHMPC, ::System::Nullable_1<::UnityEngine::Vector3> GBEFFCCPBIC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Nullable_1<::UnityEngine::Vector3>))((::PBYTE)hIl2Cpp + JLOLEAOKPDG__CTOR_OFFSET))(this, LKDLGJGHMPC, GBEFFCCPBIC);
	}

	::CCALMEHPGIK BKNKCFDBLGH()
	{
		return ((::CCALMEHPGIK(*)(::PVOID))((::PBYTE)hIl2Cpp + JLOLEAOKPDG_BKNKCFDBLGH_OFFSET))(this);
	}

	::System::Boolean MBJFAHEBJDA(::EAKHJNIMJIL* GCMKDONNBPM, ::System::Single PBCAAADNEPK)
	{
		return ((::System::Boolean(*)(::PVOID, ::EAKHJNIMJIL*, ::System::Single))((::PBYTE)hIl2Cpp + JLOLEAOKPDG_MBJFAHEBJDA_OFFSET))(this, GCMKDONNBPM, PBCAAADNEPK);
	}
};
