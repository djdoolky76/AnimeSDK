#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/NativeVariable_1.h"
#include "unitysdk/LKEBCNKGCEA.h"
#include "unitysdk/PMBCHGNJMKF.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Animations/AnimationScriptPlayable.h"
#include "unitysdk/UnityEngine/Animations/AnimationStream.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

#define KFIBGDICBMM_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0x750B70)
#define KFIBGDICBMM_FFCPIEDHBDP_OFFSET UNITYSDK_OFFSET(0x750B00)
#define KFIBGDICBMM_IJMOICJDPPG_OFFSET UNITYSDK_OFFSET(0x750B50)
#define KFIBGDICBMM_NKDCADABLCL_OFFSET UNITYSDK_OFFSET(0x750B40)
#define KFIBGDICBMM_PROCESSANIMATION_OFFSET UNITYSDK_OFFSET(0x750A80)
#define KFIBGDICBMM_PROCESSROOTMOTION_OFFSET UNITYSDK_OFFSET(0x750AC0)
#define KFIBGDICBMM__CCTOR_OFFSET UNITYSDK_OFFSET(0x1515BAD0)
#define KFIBGDICBMM__CTOR_OFFSET UNITYSDK_OFFSET(0x750A30)

inline static constexpr unsigned int KFIBGDICBMM_TypeDefinitionIndex = 52267;

struct alignas(8) KFIBGDICBMM
{
	static ::KFIBGDICBMM* StaticGet_FGBLILBNEHG()
	{
		return (::KFIBGDICBMM*)Il2CppClass::FromTypeDefinitionIndex(KFIBGDICBMM_TypeDefinitionIndex)->GetStaticField(0xF0C0);
	}
	// static const ::System::Int32 CHLMLMBPNDA = 0x0; // 0x0
	// static const ::System::Int32 HOLFEANILDE = 0x1; // 0x0
	::PMBCHGNJMKF DAAAEJDBNFI; // 0x10
	::Foundation::NativeVariable_1<::LKEBCNKGCEA> EDKMCFIGBOK; // 0xA0

	::System::Void _ctor(::PMBCHGNJMKF AAOCANGHBDG, ::Foundation::NativeVariable_1<::LKEBCNKGCEA> IECOJPMPJMP)
	{
		return ((::System::Void(*)(::PVOID, ::PMBCHGNJMKF, ::Foundation::NativeVariable_1<::LKEBCNKGCEA>))((::PBYTE)hIl2Cpp + KFIBGDICBMM__CTOR_OFFSET))(this, AAOCANGHBDG, IECOJPMPJMP);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KFIBGDICBMM__CCTOR_OFFSET))();
	}

	::System::Void ProcessAnimation(::UnityEngine::Animations::AnimationStream CPKODGLINAO)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animations::AnimationStream))((::PBYTE)hIl2Cpp + KFIBGDICBMM_PROCESSANIMATION_OFFSET))(this, CPKODGLINAO);
	}

	::System::Void ProcessRootMotion(::UnityEngine::Animations::AnimationStream CPKODGLINAO)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animations::AnimationStream))((::PBYTE)hIl2Cpp + KFIBGDICBMM_PROCESSROOTMOTION_OFFSET))(this, CPKODGLINAO);
	}

	::System::Boolean FFCPIEDHBDP(::UnityEngine::Animations::AnimationStream CPKODGLINAO)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Animations::AnimationStream))((::PBYTE)hIl2Cpp + KFIBGDICBMM_FFCPIEDHBDP_OFFSET))(this, CPKODGLINAO);
	}

	::System::Boolean NKDCADABLCL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KFIBGDICBMM_NKDCADABLCL_OFFSET))(this);
	}

	::PMBCHGNJMKF IJMOICJDPPG()
	{
		return ((::PMBCHGNJMKF(*)(::PVOID))((::PBYTE)hIl2Cpp + KFIBGDICBMM_IJMOICJDPPG_OFFSET))(this);
	}

	::UnityEngine::Animations::AnimationScriptPlayable COKNIICCODC(::UnityEngine::Playables::PlayableGraph MHPNGBGGMMN)
	{
		return ((::UnityEngine::Animations::AnimationScriptPlayable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph))((::PBYTE)hIl2Cpp + KFIBGDICBMM_COKNIICCODC_OFFSET))(this, MHPNGBGGMMN);
	}
};
