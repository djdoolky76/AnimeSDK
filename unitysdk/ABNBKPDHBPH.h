#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/APKIIFHLPFG.h"
#include "unitysdk/GIIAKLNMAIF.h"
#include "unitysdk/UnityEngine/Vector3.h"

class GDNMHPMOKGF;

#define ABNBKPDHBPH_CCHBDNGIOOB_OFFSET UNITYSDK_OFFSET(0x16438300)
#define ABNBKPDHBPH_IMGHMPLNNAP_OFFSET UNITYSDK_OFFSET(0x164382F0)
#define ABNBKPDHBPH__CTOR_OFFSET UNITYSDK_OFFSET(0x16438310)

inline static constexpr unsigned int ABNBKPDHBPH_TypeDefinitionIndex = 77664;

class ABNBKPDHBPH : public ::GIIAKLNMAIF
{
public:
	::GDNMHPMOKGF* ABOMJGONJPB; // 0x28
	::UnityEngine::Vector3 APAJGCJCNFK; // 0x30
	::System::Single BMLFJDMMJFA; // 0x3C
	::UnityEngine::Vector3 KEHECMCDLFC; // 0x40
	::APKIIFHLPFG _AAOMKEEKOOD_k__BackingField; // 0x4C
	::UnityEngine::Vector3 BCNCMCDINCM; // 0x50
	::System::Single GDNBEIEEAIP; // 0x5C
	::System::Boolean AHLMGOCEOKF; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABNBKPDHBPH__CTOR_OFFSET))(this);
	}

	::APKIIFHLPFG IMGHMPLNNAP()
	{
		return ((::APKIIFHLPFG(*)(::PVOID))((::PBYTE)hIl2Cpp + ABNBKPDHBPH_IMGHMPLNNAP_OFFSET))(this);
	}

	::System::Void CCHBDNGIOOB(::APKIIFHLPFG EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::APKIIFHLPFG))((::PBYTE)hIl2Cpp + ABNBKPDHBPH_CCHBDNGIOOB_OFFSET))(this, EGEGIMGMJHN);
	}
};
