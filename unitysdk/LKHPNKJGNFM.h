#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

namespace UnityEngine { class AnimationCurve; }

#define LKHPNKJGNFM_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x12A639A0)
#define LKHPNKJGNFM_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x12A63A10)
#define LKHPNKJGNFM_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x12A63910)
#define LKHPNKJGNFM_OHFHFOHMBJH_OFFSET UNITYSDK_OFFSET(0x12A63AA0)
#define LKHPNKJGNFM_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x12A63800)
#define LKHPNKJGNFM__CCTOR_OFFSET UNITYSDK_OFFSET(0x12A63890)
#define LKHPNKJGNFM__CTOR_OFFSET UNITYSDK_OFFSET(0x12A63900)

inline static constexpr unsigned int LKHPNKJGNFM_TypeDefinitionIndex = 44001;

class LKHPNKJGNFM : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x13A; // 0x0
	::UnityEngine::AnimationCurve* JJNCMDAEPPO; // 0x20
	::System::Single OKJOFPNFFFN; // 0x28

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LKHPNKJGNFM__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKHPNKJGNFM__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKHPNKJGNFM_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKHPNKJGNFM_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::UnityEngine::AnimationCurve* PJNOPCKMHMK, ::System::Single EONLCKFOIIH)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationCurve*, ::System::Single))((::PBYTE)hIl2Cpp + LKHPNKJGNFM_CNHBDOMKKDE_OFFSET))(this, PJNOPCKMHMK, EONLCKFOIIH);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKHPNKJGNFM_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void OHFHFOHMBJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKHPNKJGNFM_OHFHFOHMBJH_OFFSET))(this);
	}
};
