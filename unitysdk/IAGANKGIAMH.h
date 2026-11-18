#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CBFPBDFDPMD.h"
#include "unitysdk/PMBCHGNJMKF.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Animations/AnimationScriptPlayable.h"
#include "unitysdk/UnityEngine/Animations/AnimationStream.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

#define IAGANKGIAMH_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0x725D10)
#define IAGANKGIAMH_FFCPIEDHBDP_OFFSET UNITYSDK_OFFSET(0x725C90)
#define IAGANKGIAMH_IJMOICJDPPG_OFFSET UNITYSDK_OFFSET(0x725C30)
#define IAGANKGIAMH_INOFOCBOEHD_OFFSET UNITYSDK_OFFSET(0x725D40)
#define IAGANKGIAMH_NKDCADABLCL_OFFSET UNITYSDK_OFFSET(0x725C20)
#define IAGANKGIAMH_PROCESSANIMATION_OFFSET UNITYSDK_OFFSET(0x725C50)
#define IAGANKGIAMH_PROCESSROOTMOTION_OFFSET UNITYSDK_OFFSET(0x725CD0)
#define IAGANKGIAMH__CCTOR_OFFSET UNITYSDK_OFFSET(0x141AD480)
#define IAGANKGIAMH__CTOR_1_OFFSET UNITYSDK_OFFSET(0x725BE0)
#define IAGANKGIAMH__CTOR_OFFSET UNITYSDK_OFFSET(0x725B80)

inline static constexpr unsigned int IAGANKGIAMH_TypeDefinitionIndex = 86586;

struct alignas(4) IAGANKGIAMH
{
	static ::IAGANKGIAMH* StaticGet_FGBLILBNEHG()
	{
		return (::IAGANKGIAMH*)Il2CppClass::FromTypeDefinitionIndex(IAGANKGIAMH_TypeDefinitionIndex)->GetStaticField(0xCC90);
	}
	::PMBCHGNJMKF DAAAEJDBNFI; // 0x10
	::CBFPBDFDPMD FKOBEJCFECJ; // 0xA0

	::System::Void _ctor(::PMBCHGNJMKF AAOCANGHBDG, ::CBFPBDFDPMD CJLEKHFGJBH)
	{
		return ((::System::Void(*)(::PVOID, ::PMBCHGNJMKF, ::CBFPBDFDPMD))((::PBYTE)hIl2Cpp + IAGANKGIAMH__CTOR_OFFSET))(this, AAOCANGHBDG, CJLEKHFGJBH);
	}

	::System::Void _ctor_1(::PMBCHGNJMKF AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::PMBCHGNJMKF))((::PBYTE)hIl2Cpp + IAGANKGIAMH__CTOR_1_OFFSET))(this, AAOCANGHBDG);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IAGANKGIAMH__CCTOR_OFFSET))();
	}

	::System::Boolean NKDCADABLCL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IAGANKGIAMH_NKDCADABLCL_OFFSET))(this);
	}

	::PMBCHGNJMKF IJMOICJDPPG()
	{
		return ((::PMBCHGNJMKF(*)(::PVOID))((::PBYTE)hIl2Cpp + IAGANKGIAMH_IJMOICJDPPG_OFFSET))(this);
	}

	::System::Void ProcessAnimation(::UnityEngine::Animations::AnimationStream CPKODGLINAO)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animations::AnimationStream))((::PBYTE)hIl2Cpp + IAGANKGIAMH_PROCESSANIMATION_OFFSET))(this, CPKODGLINAO);
	}

	::System::Boolean FFCPIEDHBDP(::UnityEngine::Animations::AnimationStream CPKODGLINAO)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Animations::AnimationStream))((::PBYTE)hIl2Cpp + IAGANKGIAMH_FFCPIEDHBDP_OFFSET))(this, CPKODGLINAO);
	}

	::System::Void ProcessRootMotion(::UnityEngine::Animations::AnimationStream CPKODGLINAO)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animations::AnimationStream))((::PBYTE)hIl2Cpp + IAGANKGIAMH_PROCESSROOTMOTION_OFFSET))(this, CPKODGLINAO);
	}

	::UnityEngine::Animations::AnimationScriptPlayable COKNIICCODC(::UnityEngine::Playables::PlayableGraph MHPNGBGGMMN)
	{
		return ((::UnityEngine::Animations::AnimationScriptPlayable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph))((::PBYTE)hIl2Cpp + IAGANKGIAMH_COKNIICCODC_OFFSET))(this, MHPNGBGGMMN);
	}

	::System::Void INOFOCBOEHD(::CBFPBDFDPMD MOEKEKKJGBB)
	{
		return ((::System::Void(*)(::PVOID, ::CBFPBDFDPMD))((::PBYTE)hIl2Cpp + IAGANKGIAMH_INOFOCBOEHD_OFFSET))(this, MOEKEKKJGBB);
	}
};
