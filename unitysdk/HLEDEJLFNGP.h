#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

#define HLEDEJLFNGP_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x18196AB0)
#define HLEDEJLFNGP_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x18196B90)
#define HLEDEJLFNGP_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x18196A20)
#define HLEDEJLFNGP__CCTOR_OFFSET UNITYSDK_OFFSET(0x181969A0)
#define HLEDEJLFNGP__CTOR_OFFSET UNITYSDK_OFFSET(0x18196A10)

inline static constexpr unsigned int HLEDEJLFNGP_TypeDefinitionIndex = 84002;

class HLEDEJLFNGP : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x11; // 0x0
	::UnityEngine::AnimatorStateInfo AKAPKPNDAPC; // 0x20
	::System::Int32 AINFLEFDINO; // 0x48
	::UnityEngine::AnimatorStateInfo LPCKLLKOCLE; // 0x4C

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HLEDEJLFNGP__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLEDEJLFNGP__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLEDEJLFNGP_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::UInt32 JHGKGEGGGFF, ::UnityEngine::AnimatorStateInfo JJHOMFOANCI, ::UnityEngine::AnimatorStateInfo KAJBCDNNDHA, ::System::Int32 EEGBEFGJJBM)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::AnimatorStateInfo, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + HLEDEJLFNGP_CNHBDOMKKDE_OFFSET))(this, JHGKGEGGGFF, JJHOMFOANCI, KAJBCDNNDHA, EEGBEFGJJBM);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLEDEJLFNGP_FIGPAOKNJLN_OFFSET))(this);
	}
};
