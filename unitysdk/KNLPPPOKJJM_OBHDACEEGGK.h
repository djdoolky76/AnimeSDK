#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define KNLPPPOKJJM_OBHDACEEGGK_GCMOPAHDIEA_OFFSET UNITYSDK_OFFSET(0x1772F150)
#define KNLPPPOKJJM_OBHDACEEGGK_KOLIOBFHBJH_OFFSET UNITYSDK_OFFSET(0x1772F060)
#define KNLPPPOKJJM_OBHDACEEGGK__CTOR_OFFSET UNITYSDK_OFFSET(0x1772F050)

inline static constexpr unsigned int KNLPPPOKJJM_OBHDACEEGGK_TypeDefinitionIndex = 67504;

class KNLPPPOKJJM_OBHDACEEGGK : public ::System::Object
{
public:
	::System::Action_1<::System::Int32>* NKGCDDCMBCF; // 0x10
	::System::Action* EJGDHCIBCJH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNLPPPOKJJM_OBHDACEEGGK__CTOR_OFFSET))(this);
	}

	::System::Void KOLIOBFHBJH(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KNLPPPOKJJM_OBHDACEEGGK_KOLIOBFHBJH_OFFSET))(this, BHDNBGLCNOM);
	}

	::System::Void GCMOPAHDIEA(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KNLPPPOKJJM_OBHDACEEGGK_GCMOPAHDIEA_OFFSET))(this, BHDNBGLCNOM);
	}
};
