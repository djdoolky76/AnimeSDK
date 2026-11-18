#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JLJFLLKCPKE.h"
#include "unitysdk/PMBCHGNJMKF.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/CBFPBDFDPMD.h"
#include "unitysdk/UnityEngine/Animations/AnimationScriptPlayable.h"
#include "unitysdk/UnityEngine/Animations/AnimationStream.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

#define KKHPLFDKBAM_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0x753B30)
#define KKHPLFDKBAM_FFCPIEDHBDP_OFFSET UNITYSDK_OFFSET(0x753AF0)
#define KKHPLFDKBAM_FPBODJIFDJB_OFFSET UNITYSDK_OFFSET(0x753B60)
#define KKHPLFDKBAM_IJMOICJDPPG_OFFSET UNITYSDK_OFFSET(0x753AD0)
#define KKHPLFDKBAM_NKDCADABLCL_OFFSET UNITYSDK_OFFSET(0x753AC0)
#define KKHPLFDKBAM_PROCESSANIMATION_OFFSET UNITYSDK_OFFSET(0x753A40)
#define KKHPLFDKBAM_PROCESSROOTMOTION_OFFSET UNITYSDK_OFFSET(0x753A80)
#define KKHPLFDKBAM__CCTOR_OFFSET UNITYSDK_OFFSET(0x1521C3A0)
#define KKHPLFDKBAM__CTOR_OFFSET UNITYSDK_OFFSET(0x7539E0)

inline static constexpr unsigned int KKHPLFDKBAM_TypeDefinitionIndex = 82490;

struct alignas(4) KKHPLFDKBAM
{
	static ::KKHPLFDKBAM* StaticGet_FGBLILBNEHG()
	{
		return (::KKHPLFDKBAM*)Il2CppClass::FromTypeDefinitionIndex(KKHPLFDKBAM_TypeDefinitionIndex)->GetStaticField(0xDBF0);
	}
	::PMBCHGNJMKF DAAAEJDBNFI; // 0x10
	::JLJFLLKCPKE NEIDELKLHCK; // 0xA0

	::System::Void _ctor(::PMBCHGNJMKF AAOCANGHBDG, ::JLJFLLKCPKE MOEKEKKJGBB)
	{
		return ((::System::Void(*)(::PVOID, ::PMBCHGNJMKF, ::JLJFLLKCPKE))((::PBYTE)hIl2Cpp + KKHPLFDKBAM__CTOR_OFFSET))(this, AAOCANGHBDG, MOEKEKKJGBB);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KKHPLFDKBAM__CCTOR_OFFSET))();
	}

	::System::Void ProcessAnimation(::UnityEngine::Animations::AnimationStream CPKODGLINAO)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animations::AnimationStream))((::PBYTE)hIl2Cpp + KKHPLFDKBAM_PROCESSANIMATION_OFFSET))(this, CPKODGLINAO);
	}

	::System::Void ProcessRootMotion(::UnityEngine::Animations::AnimationStream CPKODGLINAO)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animations::AnimationStream))((::PBYTE)hIl2Cpp + KKHPLFDKBAM_PROCESSROOTMOTION_OFFSET))(this, CPKODGLINAO);
	}

	::System::Boolean NKDCADABLCL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KKHPLFDKBAM_NKDCADABLCL_OFFSET))(this);
	}

	::PMBCHGNJMKF IJMOICJDPPG()
	{
		return ((::PMBCHGNJMKF(*)(::PVOID))((::PBYTE)hIl2Cpp + KKHPLFDKBAM_IJMOICJDPPG_OFFSET))(this);
	}

	::System::Boolean FFCPIEDHBDP(::UnityEngine::Animations::AnimationStream CPKODGLINAO)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Animations::AnimationStream))((::PBYTE)hIl2Cpp + KKHPLFDKBAM_FFCPIEDHBDP_OFFSET))(this, CPKODGLINAO);
	}

	::UnityEngine::Animations::AnimationScriptPlayable COKNIICCODC(::UnityEngine::Playables::PlayableGraph MHPNGBGGMMN)
	{
		return ((::UnityEngine::Animations::AnimationScriptPlayable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph))((::PBYTE)hIl2Cpp + KKHPLFDKBAM_COKNIICCODC_OFFSET))(this, MHPNGBGGMMN);
	}

	::CBFPBDFDPMD FPBODJIFDJB()
	{
		return ((::CBFPBDFDPMD(*)(::PVOID))((::PBYTE)hIl2Cpp + KKHPLFDKBAM_FPBODJIFDJB_OFFSET))(this);
	}
};
