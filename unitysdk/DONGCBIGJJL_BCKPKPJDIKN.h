#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DONGCBIGJJL_BJFOBONFEDI;
namespace UnityEngine { class RectTransform; }

#define DONGCBIGJJL_BCKPKPJDIKN_JIJKLNGLNGD_OFFSET UNITYSDK_OFFSET(0x1697CB90)
#define DONGCBIGJJL_BCKPKPJDIKN__CTOR_OFFSET UNITYSDK_OFFSET(0x1697CB80)

inline static constexpr unsigned int DONGCBIGJJL_BCKPKPJDIKN_TypeDefinitionIndex = 70505;

class DONGCBIGJJL_BCKPKPJDIKN : public ::System::Object
{
public:
	::DONGCBIGJJL_BJFOBONFEDI* KGFKHBMEKBL; // 0x10
	::UnityEngine::RectTransform* GLMPEMBKNLL; // 0x18
	::UnityEngine::RectTransform* FIEECDBKBEC; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DONGCBIGJJL_BCKPKPJDIKN__CTOR_OFFSET))(this);
	}

	::System::Void JIJKLNGLNGD(::System::Boolean AMGAAHMANDM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DONGCBIGJJL_BCKPKPJDIKN_JIJKLNGLNGD_OFFSET))(this, AMGAAHMANDM);
	}
};
