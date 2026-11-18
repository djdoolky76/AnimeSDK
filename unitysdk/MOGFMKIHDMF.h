#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FTransform3D.h"
#include "unitysdk/Foundation/NativeVariable_1.h"
#include "unitysdk/HHDPDELCDNI.h"
#include "unitysdk/PMBCHGNJMKF.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/Foundation/ReadOnlyNativeVariable_1.h"
#include "unitysdk/UnityEngine/Animations/AnimationScriptPlayable.h"
#include "unitysdk/UnityEngine/Animations/AnimationStream.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

#define MOGFMKIHDMF_AOIEOJKHHJN_OFFSET UNITYSDK_OFFSET(0x6AD570)
#define MOGFMKIHDMF_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0x6AD4B0)
#define MOGFMKIHDMF_FFCPIEDHBDP_OFFSET UNITYSDK_OFFSET(0x6AD4E0)
#define MOGFMKIHDMF_IJMOICJDPPG_OFFSET UNITYSDK_OFFSET(0x6AD530)
#define MOGFMKIHDMF_LLGNDEPNJMF_OFFSET UNITYSDK_OFFSET(0x6AD550)
#define MOGFMKIHDMF_NKDCADABLCL_OFFSET UNITYSDK_OFFSET(0x6AD520)
#define MOGFMKIHDMF_PROCESSANIMATION_OFFSET UNITYSDK_OFFSET(0x6AD430)
#define MOGFMKIHDMF_PROCESSROOTMOTION_OFFSET UNITYSDK_OFFSET(0x6AD470)
#define MOGFMKIHDMF__CCTOR_OFFSET UNITYSDK_OFFSET(0x11A2C210)
#define MOGFMKIHDMF__CTOR_OFFSET UNITYSDK_OFFSET(0x6AD390)

inline static constexpr unsigned int MOGFMKIHDMF_TypeDefinitionIndex = 68936;

struct alignas(8) MOGFMKIHDMF
{
	static ::MOGFMKIHDMF* StaticGet_FGBLILBNEHG()
	{
		return (::MOGFMKIHDMF*)Il2CppClass::FromTypeDefinitionIndex(MOGFMKIHDMF_TypeDefinitionIndex)->GetStaticField(0x12160);
	}
	::HHDPDELCDNI OADJJACMNNM; // 0x10
	::HHDPDELCDNI DHKENANDIII; // 0x14
	::HHDPDELCDNI ENIPOCAKGAG; // 0x18
	::System::Byte _padding0[0x4];
	::PMBCHGNJMKF DAAAEJDBNFI; // 0x20
	::Foundation::NativeVariable_1<::Foundation::Unreal::FTransform3D> POIHJCLJMLD; // 0xB0
	::System::Byte _padding1[0x8];
	::Foundation::NativeVariable_1<::UnityEngine::Vector3> CDOLPPNMEOJ; // 0xC0

	::System::Void _ctor(::HHDPDELCDNI OMFCDIJLCCL, ::HHDPDELCDNI NIFMECIHHLE, ::HHDPDELCDNI NDMNLKNALNM, ::PMBCHGNJMKF AAOCANGHBDG, ::Foundation::NativeVariable_1<::Foundation::Unreal::FTransform3D> PIPPCCBFFNF, ::Foundation::NativeVariable_1<::UnityEngine::Vector3> HNOOONOAOPF)
	{
		return ((::System::Void(*)(::PVOID, ::HHDPDELCDNI, ::HHDPDELCDNI, ::HHDPDELCDNI, ::PMBCHGNJMKF, ::Foundation::NativeVariable_1<::Foundation::Unreal::FTransform3D>, ::Foundation::NativeVariable_1<::UnityEngine::Vector3>))((::PBYTE)hIl2Cpp + MOGFMKIHDMF__CTOR_OFFSET))(this, OMFCDIJLCCL, NIFMECIHHLE, NDMNLKNALNM, AAOCANGHBDG, PIPPCCBFFNF, HNOOONOAOPF);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOGFMKIHDMF__CCTOR_OFFSET))();
	}

	::System::Void ProcessAnimation(::UnityEngine::Animations::AnimationStream CPKODGLINAO)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animations::AnimationStream))((::PBYTE)hIl2Cpp + MOGFMKIHDMF_PROCESSANIMATION_OFFSET))(this, CPKODGLINAO);
	}

	::System::Void ProcessRootMotion(::UnityEngine::Animations::AnimationStream CPKODGLINAO)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animations::AnimationStream))((::PBYTE)hIl2Cpp + MOGFMKIHDMF_PROCESSROOTMOTION_OFFSET))(this, CPKODGLINAO);
	}

	::UnityEngine::Animations::AnimationScriptPlayable COKNIICCODC(::UnityEngine::Playables::PlayableGraph MHPNGBGGMMN)
	{
		return ((::UnityEngine::Animations::AnimationScriptPlayable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph))((::PBYTE)hIl2Cpp + MOGFMKIHDMF_COKNIICCODC_OFFSET))(this, MHPNGBGGMMN);
	}

	::System::Boolean FFCPIEDHBDP(::UnityEngine::Animations::AnimationStream CPKODGLINAO)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Animations::AnimationStream))((::PBYTE)hIl2Cpp + MOGFMKIHDMF_FFCPIEDHBDP_OFFSET))(this, CPKODGLINAO);
	}

	::System::Boolean NKDCADABLCL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOGFMKIHDMF_NKDCADABLCL_OFFSET))(this);
	}

	::PMBCHGNJMKF IJMOICJDPPG()
	{
		return ((::PMBCHGNJMKF(*)(::PVOID))((::PBYTE)hIl2Cpp + MOGFMKIHDMF_IJMOICJDPPG_OFFSET))(this);
	}

	::Foundation::ReadOnlyNativeVariable_1<::Foundation::Unreal::FTransform3D> LLGNDEPNJMF()
	{
		return ((::Foundation::ReadOnlyNativeVariable_1<::Foundation::Unreal::FTransform3D>(*)(::PVOID))((::PBYTE)hIl2Cpp + MOGFMKIHDMF_LLGNDEPNJMF_OFFSET))(this);
	}

	::Foundation::ReadOnlyNativeVariable_1<::UnityEngine::Vector3> AOIEOJKHHJN()
	{
		return ((::Foundation::ReadOnlyNativeVariable_1<::UnityEngine::Vector3>(*)(::PVOID))((::PBYTE)hIl2Cpp + MOGFMKIHDMF_AOIEOJKHHJN_OFFSET))(this);
	}
};
