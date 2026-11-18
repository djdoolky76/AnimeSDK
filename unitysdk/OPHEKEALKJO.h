#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PMBCHGNJMKF.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Animations/AnimationScriptPlayable.h"
#include "unitysdk/UnityEngine/Animations/AnimationStream.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

#define OPHEKEALKJO_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0x75B520)
#define OPHEKEALKJO_FFCPIEDHBDP_OFFSET UNITYSDK_OFFSET(0x75B4C0)
#define OPHEKEALKJO_IJMOICJDPPG_OFFSET UNITYSDK_OFFSET(0x75B500)
#define OPHEKEALKJO_NKDCADABLCL_OFFSET UNITYSDK_OFFSET(0x725C20)
#define OPHEKEALKJO_PROCESSANIMATION_OFFSET UNITYSDK_OFFSET(0x75B440)
#define OPHEKEALKJO_PROCESSROOTMOTION_OFFSET UNITYSDK_OFFSET(0x75B480)
#define OPHEKEALKJO__CTOR_OFFSET UNITYSDK_OFFSET(0x75B400)

inline static constexpr unsigned int OPHEKEALKJO_TypeDefinitionIndex = 88509;

struct alignas(4) OPHEKEALKJO
{
	// static const ::System::Int32 CHLMLMBPNDA = 0x0; // 0x0
	// static const ::System::Int32 HOLFEANILDE = 0x1; // 0x0
	::PMBCHGNJMKF DAAAEJDBNFI; // 0x10

	::System::Void _ctor(::PMBCHGNJMKF AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::PMBCHGNJMKF))((::PBYTE)hIl2Cpp + OPHEKEALKJO__CTOR_OFFSET))(this, AAOCANGHBDG);
	}

	::System::Void ProcessAnimation(::UnityEngine::Animations::AnimationStream CPKODGLINAO)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animations::AnimationStream))((::PBYTE)hIl2Cpp + OPHEKEALKJO_PROCESSANIMATION_OFFSET))(this, CPKODGLINAO);
	}

	::System::Void ProcessRootMotion(::UnityEngine::Animations::AnimationStream CPKODGLINAO)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animations::AnimationStream))((::PBYTE)hIl2Cpp + OPHEKEALKJO_PROCESSROOTMOTION_OFFSET))(this, CPKODGLINAO);
	}

	::System::Boolean FFCPIEDHBDP(::UnityEngine::Animations::AnimationStream CPKODGLINAO)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Animations::AnimationStream))((::PBYTE)hIl2Cpp + OPHEKEALKJO_FFCPIEDHBDP_OFFSET))(this, CPKODGLINAO);
	}

	::System::Boolean NKDCADABLCL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OPHEKEALKJO_NKDCADABLCL_OFFSET))(this);
	}

	::PMBCHGNJMKF IJMOICJDPPG()
	{
		return ((::PMBCHGNJMKF(*)(::PVOID))((::PBYTE)hIl2Cpp + OPHEKEALKJO_IJMOICJDPPG_OFFSET))(this);
	}

	::UnityEngine::Animations::AnimationScriptPlayable COKNIICCODC(::UnityEngine::Playables::PlayableGraph MHPNGBGGMMN)
	{
		return ((::UnityEngine::Animations::AnimationScriptPlayable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph))((::PBYTE)hIl2Cpp + OPHEKEALKJO_COKNIICCODC_OFFSET))(this, MHPNGBGGMMN);
	}
};
