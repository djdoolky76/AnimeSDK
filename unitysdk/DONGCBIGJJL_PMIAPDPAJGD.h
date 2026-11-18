#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DONGCBIGJJL_BJFOBONFEDI;
class FMHDMLBDIJC;
namespace UnityEngine { class RectTransform; }

#define DONGCBIGJJL_PMIAPDPAJGD_JFAJEHALEKK_OFFSET UNITYSDK_OFFSET(0x1697E1C0)
#define DONGCBIGJJL_PMIAPDPAJGD_NOPMJEFJNFN_OFFSET UNITYSDK_OFFSET(0x1697E560)
#define DONGCBIGJJL_PMIAPDPAJGD__CTOR_OFFSET UNITYSDK_OFFSET(0x1697E1B0)

inline static constexpr unsigned int DONGCBIGJJL_PMIAPDPAJGD_TypeDefinitionIndex = 70479;

class DONGCBIGJJL_PMIAPDPAJGD : public ::System::Object
{
public:
	::DONGCBIGJJL_BJFOBONFEDI* EEMOEMFLABI; // 0x10
	::UnityEngine::RectTransform* PKJOBEGEFDB; // 0x18
	::UnityEngine::RectTransform* AIHEHPHBCGH; // 0x20
	::System::Int32 BEAOAOKFJKF; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DONGCBIGJJL_PMIAPDPAJGD__CTOR_OFFSET))(this);
	}

	::System::Void JFAJEHALEKK(::System::Boolean AMGAAHMANDM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DONGCBIGJJL_PMIAPDPAJGD_JFAJEHALEKK_OFFSET))(this, AMGAAHMANDM);
	}

	::System::Boolean NOPMJEFJNFN(::FMHDMLBDIJC* KDEHMPGOCEP)
	{
		return ((::System::Boolean(*)(::PVOID, ::FMHDMLBDIJC*))((::PBYTE)hIl2Cpp + DONGCBIGJJL_PMIAPDPAJGD_NOPMJEFJNFN_OFFSET))(this, KDEHMPGOCEP);
	}
};
