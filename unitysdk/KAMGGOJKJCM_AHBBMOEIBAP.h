#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/NativeVariableArray_1.h"
#include "unitysdk/Foundation/NativeVariable_1.h"
#include "unitysdk/Foundation/ReadOnlyNativeVariableArray_1.h"
#include "unitysdk/HPDPDGOMKFF.h"
#include "unitysdk/KAMGGOJKJCM_IFIOAFGJPPF.h"
#include "unitysdk/PMBCHGNJMKF.h"
#include "unitysdk/PipelineCamera/Optional_1.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Animations/PropertyStreamHandle.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/UnityEngine/Animations/AnimationScriptPlayable.h"
#include "unitysdk/UnityEngine/Animations/AnimationStream.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

#define KAMGGOJKJCM_AHBBMOEIBAP_BMGEEIJFLIJ_OFFSET UNITYSDK_OFFSET(0x767B70)
#define KAMGGOJKJCM_AHBBMOEIBAP_BMNLKDGNKIH_OFFSET UNITYSDK_OFFSET(0x767BE0)
#define KAMGGOJKJCM_AHBBMOEIBAP_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0x767AD0)
#define KAMGGOJKJCM_AHBBMOEIBAP_EDEFLFIKNFK_OFFSET UNITYSDK_OFFSET(0x767C80)
#define KAMGGOJKJCM_AHBBMOEIBAP_FFCPIEDHBDP_OFFSET UNITYSDK_OFFSET(0x767B00)
#define KAMGGOJKJCM_AHBBMOEIBAP_HAECDGFNGPM_OFFSET UNITYSDK_OFFSET(0x767BB0)
#define KAMGGOJKJCM_AHBBMOEIBAP_IJMOICJDPPG_OFFSET UNITYSDK_OFFSET(0x767B50)
#define KAMGGOJKJCM_AHBBMOEIBAP_JAFCBOHBCII_OFFSET UNITYSDK_OFFSET(0x767C30)
#define KAMGGOJKJCM_AHBBMOEIBAP_JLIMOLHLFAK_OFFSET UNITYSDK_OFFSET(0x767BC0)
#define KAMGGOJKJCM_AHBBMOEIBAP_MNFHAFGBKPL_OFFSET UNITYSDK_OFFSET(0x767BA0)
#define KAMGGOJKJCM_AHBBMOEIBAP_NKDCADABLCL_OFFSET UNITYSDK_OFFSET(0x767B40)
#define KAMGGOJKJCM_AHBBMOEIBAP_NOLOCNMENIH_OFFSET UNITYSDK_OFFSET(0x767B80)
#define KAMGGOJKJCM_AHBBMOEIBAP_PROCESSANIMATION_OFFSET UNITYSDK_OFFSET(0x767A50)
#define KAMGGOJKJCM_AHBBMOEIBAP_PROCESSROOTMOTION_OFFSET UNITYSDK_OFFSET(0x767A90)
#define KAMGGOJKJCM_AHBBMOEIBAP__CTOR_OFFSET UNITYSDK_OFFSET(0x7679B0)

inline static constexpr unsigned int KAMGGOJKJCM_AHBBMOEIBAP_TypeDefinitionIndex = 77486;

struct alignas(8) KAMGGOJKJCM_AHBBMOEIBAP
{
	::Foundation::ReadOnlyNativeVariableArray_1<::UnityEngine::Animations::PropertyStreamHandle> KAOGGDEIJDD; // 0x10
	::System::Byte _padding0[0x8];
	::Foundation::NativeVariableArray_1<::System::Single> AIEHADKHHLO; // 0x20
	::System::Byte _padding1[0x8];
	::Foundation::NativeVariableArray_1<::System::Single> JCPAGHAFBFB; // 0x30
	::System::Byte _padding2[0x8];
	::KAMGGOJKJCM_IFIOAFGJPPF HKDDGGHGFLF; // 0x40
	::System::Single BMJBDKMOOLM; // 0x44
	::System::Single KKJKPJEGKJC; // 0x48
	::System::Single OMIOKKNHHPI; // 0x4C
	::PMBCHGNJMKF DAAAEJDBNFI; // 0x50
	::Foundation::NativeVariable_1<::PipelineCamera::Optional_1<::HPDPDGOMKFF>> NJBAECOFFIJ; // 0xE0

	::System::Void _ctor(::Foundation::NativeVariableArray_1<::System::Single> PAAKENELHJL, ::Foundation::NativeVariableArray_1<::System::Single> DFFBJEBMLJC, ::PMBCHGNJMKF AAOCANGHBDG, ::Foundation::NativeVariable_1<::PipelineCamera::Optional_1<::HPDPDGOMKFF>> FCEIKAIDHPM, ::Foundation::ReadOnlyNativeVariableArray_1<::UnityEngine::Animations::PropertyStreamHandle> HENOIMEANMN)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::NativeVariableArray_1<::System::Single>, ::Foundation::NativeVariableArray_1<::System::Single>, ::PMBCHGNJMKF, ::Foundation::NativeVariable_1<::PipelineCamera::Optional_1<::HPDPDGOMKFF>>, ::Foundation::ReadOnlyNativeVariableArray_1<::UnityEngine::Animations::PropertyStreamHandle>))((::PBYTE)hIl2Cpp + KAMGGOJKJCM_AHBBMOEIBAP__CTOR_OFFSET))(this, PAAKENELHJL, DFFBJEBMLJC, AAOCANGHBDG, FCEIKAIDHPM, HENOIMEANMN);
	}

	::System::Void ProcessAnimation(::UnityEngine::Animations::AnimationStream CPKODGLINAO)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animations::AnimationStream))((::PBYTE)hIl2Cpp + KAMGGOJKJCM_AHBBMOEIBAP_PROCESSANIMATION_OFFSET))(this, CPKODGLINAO);
	}

	::System::Void ProcessRootMotion(::UnityEngine::Animations::AnimationStream CPKODGLINAO)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animations::AnimationStream))((::PBYTE)hIl2Cpp + KAMGGOJKJCM_AHBBMOEIBAP_PROCESSROOTMOTION_OFFSET))(this, CPKODGLINAO);
	}

	::UnityEngine::Animations::AnimationScriptPlayable COKNIICCODC(::UnityEngine::Playables::PlayableGraph MHPNGBGGMMN)
	{
		return ((::UnityEngine::Animations::AnimationScriptPlayable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph))((::PBYTE)hIl2Cpp + KAMGGOJKJCM_AHBBMOEIBAP_COKNIICCODC_OFFSET))(this, MHPNGBGGMMN);
	}

	::System::Boolean FFCPIEDHBDP(::UnityEngine::Animations::AnimationStream CPKODGLINAO)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Animations::AnimationStream))((::PBYTE)hIl2Cpp + KAMGGOJKJCM_AHBBMOEIBAP_FFCPIEDHBDP_OFFSET))(this, CPKODGLINAO);
	}

	::System::Boolean NKDCADABLCL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KAMGGOJKJCM_AHBBMOEIBAP_NKDCADABLCL_OFFSET))(this);
	}

	::PMBCHGNJMKF IJMOICJDPPG()
	{
		return ((::PMBCHGNJMKF(*)(::PVOID))((::PBYTE)hIl2Cpp + KAMGGOJKJCM_AHBBMOEIBAP_IJMOICJDPPG_OFFSET))(this);
	}

	::System::Void BMGEEIJFLIJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAMGGOJKJCM_AHBBMOEIBAP_BMGEEIJFLIJ_OFFSET))(this);
	}

	::System::Void NOLOCNMENIH(::Unity::Collections::NativeArray_1<::System::Single> CJBMJGCJPKP)
	{
		return ((::System::Void(*)(::PVOID, ::Unity::Collections::NativeArray_1<::System::Single>))((::PBYTE)hIl2Cpp + KAMGGOJKJCM_AHBBMOEIBAP_NOLOCNMENIH_OFFSET))(this, CJBMJGCJPKP);
	}

	::System::Void MNFHAFGBKPL(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KAMGGOJKJCM_AHBBMOEIBAP_MNFHAFGBKPL_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void HAECDGFNGPM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAMGGOJKJCM_AHBBMOEIBAP_HAECDGFNGPM_OFFSET))(this);
	}

	::System::Void JLIMOLHLFAK(::Unity::Collections::NativeArray_1<::System::Single> CJBMJGCJPKP)
	{
		return ((::System::Void(*)(::PVOID, ::Unity::Collections::NativeArray_1<::System::Single>))((::PBYTE)hIl2Cpp + KAMGGOJKJCM_AHBBMOEIBAP_JLIMOLHLFAK_OFFSET))(this, CJBMJGCJPKP);
	}

	::System::Void BMNLKDGNKIH(::UnityEngine::Animations::AnimationStream CPKODGLINAO, ::Unity::Collections::NativeArray_1<::System::Single> CJBMJGCJPKP)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animations::AnimationStream, ::Unity::Collections::NativeArray_1<::System::Single>))((::PBYTE)hIl2Cpp + KAMGGOJKJCM_AHBBMOEIBAP_BMNLKDGNKIH_OFFSET))(this, CPKODGLINAO, CJBMJGCJPKP);
	}

	::Unity::Collections::NativeArray_1<::System::Single> JAFCBOHBCII(::UnityEngine::Animations::AnimationStream CPKODGLINAO)
	{
		return ((::Unity::Collections::NativeArray_1<::System::Single>(*)(::PVOID, ::UnityEngine::Animations::AnimationStream))((::PBYTE)hIl2Cpp + KAMGGOJKJCM_AHBBMOEIBAP_JAFCBOHBCII_OFFSET))(this, CPKODGLINAO);
	}

	::System::Void EDEFLFIKNFK(::Unity::Collections::NativeArray_1<::System::Single> CJBMJGCJPKP)
	{
		return ((::System::Void(*)(::PVOID, ::Unity::Collections::NativeArray_1<::System::Single>))((::PBYTE)hIl2Cpp + KAMGGOJKJCM_AHBBMOEIBAP_EDEFLFIKNFK_OFFSET))(this, CJBMJGCJPKP);
	}
};
