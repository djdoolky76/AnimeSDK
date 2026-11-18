#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class RectTransform; }

#define MKGKIONBDPL_FBAMBGHLNHM_OFFSET UNITYSDK_OFFSET(0x13196010)
#define MKGKIONBDPL_GIBMENDKFJD_OFFSET UNITYSDK_OFFSET(0x13196000)
#define MKGKIONBDPL_HGDOMLKBEIK_OFFSET UNITYSDK_OFFSET(0x13196020)
#define MKGKIONBDPL_INDFCDCEFJD_OFFSET UNITYSDK_OFFSET(0x13196030)
#define MKGKIONBDPL_KFGHGKDDDFH_OFFSET UNITYSDK_OFFSET(0x13195FF0)
#define MKGKIONBDPL_LIIEJPGKFMJ_OFFSET UNITYSDK_OFFSET(0x13196040)
#define MKGKIONBDPL__CTOR_OFFSET UNITYSDK_OFFSET(0x13195FE0)

inline static constexpr unsigned int MKGKIONBDPL_TypeDefinitionIndex = 72220;

class MKGKIONBDPL : public ::System::Object
{
public:
	::UnityEngine::RectTransform* _JOONIOFNCMI_k__BackingField; // 0x10
	::UnityEngine::RectTransform* _CBCNLFADGMD_k__BackingField; // 0x18
	::UnityEngine::RectTransform* _JHHODIGDHGC_k__BackingField; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKGKIONBDPL__CTOR_OFFSET))(this);
	}

	::UnityEngine::RectTransform* KFGHGKDDDFH()
	{
		return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKGKIONBDPL_KFGHGKDDDFH_OFFSET))(this);
	}

	::System::Void GIBMENDKFJD(::UnityEngine::RectTransform* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + MKGKIONBDPL_GIBMENDKFJD_OFFSET))(this, EGEGIMGMJHN);
	}

	::UnityEngine::RectTransform* FBAMBGHLNHM()
	{
		return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKGKIONBDPL_FBAMBGHLNHM_OFFSET))(this);
	}

	::System::Void HGDOMLKBEIK(::UnityEngine::RectTransform* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + MKGKIONBDPL_HGDOMLKBEIK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void INDFCDCEFJD(::UnityEngine::RectTransform* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + MKGKIONBDPL_INDFCDCEFJD_OFFSET))(this, EGEGIMGMJHN);
	}

	::UnityEngine::RectTransform* LIIEJPGKFMJ()
	{
		return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKGKIONBDPL_LIIEJPGKFMJ_OFFSET))(this);
	}
};
