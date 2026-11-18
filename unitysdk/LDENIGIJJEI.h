#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/Foundation/Unreal/FTransform3D.h"
#include "unitysdk/Foundation/NativeVariable_1.h"
#include "unitysdk/HHDPDELCDNI.h"
#include "unitysdk/PMBCHGNJMKF.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Foundation/ReadOnlyNativeVariable_1.h"
#include "unitysdk/UnityEngine/Animations/AnimationScriptPlayable.h"
#include "unitysdk/UnityEngine/Animations/AnimationStream.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

#define LDENIGIJJEI_ACDALAEOAKF_OFFSET UNITYSDK_OFFSET(0x773BB0)
#define LDENIGIJJEI_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0x773AF0)
#define LDENIGIJJEI_DNFMPFCAJLL_OFFSET UNITYSDK_OFFSET(0x773BD0)
#define LDENIGIJJEI_FFCPIEDHBDP_OFFSET UNITYSDK_OFFSET(0x773B20)
#define LDENIGIJJEI_IJMOICJDPPG_OFFSET UNITYSDK_OFFSET(0x773B70)
#define LDENIGIJJEI_MKCBHAFOBMK_OFFSET UNITYSDK_OFFSET(0x773B90)
#define LDENIGIJJEI_NKDCADABLCL_OFFSET UNITYSDK_OFFSET(0x773B60)
#define LDENIGIJJEI_PROCESSANIMATION_OFFSET UNITYSDK_OFFSET(0x773A70)
#define LDENIGIJJEI_PROCESSROOTMOTION_OFFSET UNITYSDK_OFFSET(0x773AB0)
#define LDENIGIJJEI__CCTOR_OFFSET UNITYSDK_OFFSET(0x15DEFB30)
#define LDENIGIJJEI__CTOR_OFFSET UNITYSDK_OFFSET(0x7739B0)

inline static constexpr unsigned int LDENIGIJJEI_TypeDefinitionIndex = 83832;

struct alignas(8) LDENIGIJJEI
{
	static ::LDENIGIJJEI* StaticGet_FGBLILBNEHG()
	{
		return (::LDENIGIJJEI*)Il2CppClass::FromTypeDefinitionIndex(LDENIGIJJEI_TypeDefinitionIndex)->GetStaticField(0x12310);
	}
	// static const ::System::Single MCBHKPLOGEO; // 0x0
	// static const ::System::Single OJOENHBFENL; // 0x0
	::HHDPDELCDNI OELINDHPPCK; // 0x10
	::HHDPDELCDNI JOEAFDDCFHJ; // 0x14
	::HHDPDELCDNI LICIGMKJNFA; // 0x18
	::System::Byte _padding0[0x4];
	::PMBCHGNJMKF DAAAEJDBNFI; // 0x20
	::Foundation::NativeVariable_1<::Foundation::Unreal::FTransform3D> NBIJDJBMDED; // 0xB0
	::System::Byte _padding1[0x8];
	::Foundation::NativeVariable_1<::Foundation::Unreal::FTransform3D> IHGLFKJFBCJ; // 0xC0
	::System::Byte _padding2[0x8];
	::Foundation::NativeVariable_1<::Foundation::Unreal::FTransform3D> BIILJDNFFOF; // 0xD0
	::System::Byte _padding3[0x8];
	::Foundation::Unreal::FName NKBINPGHJJB; // 0xE0
	::Foundation::Unreal::FName HAKNFIMNDIE; // 0xE8

	::System::Void _ctor(::HHDPDELCDNI NCMOOHFIBCN, ::HHDPDELCDNI CGJAHHMDANA, ::PMBCHGNJMKF AAOCANGHBDG, ::Foundation::NativeVariable_1<::Foundation::Unreal::FTransform3D> PCENOFIFDDA, ::Foundation::NativeVariable_1<::Foundation::Unreal::FTransform3D> EFFNJICKEOK, ::Foundation::NativeVariable_1<::Foundation::Unreal::FTransform3D> NFIODDKILIL, ::Foundation::Unreal::FName DAMGNCFBPFP, ::Foundation::Unreal::FName HOPPEOHDMIK)
	{
		return ((::System::Void(*)(::PVOID, ::HHDPDELCDNI, ::HHDPDELCDNI, ::PMBCHGNJMKF, ::Foundation::NativeVariable_1<::Foundation::Unreal::FTransform3D>, ::Foundation::NativeVariable_1<::Foundation::Unreal::FTransform3D>, ::Foundation::NativeVariable_1<::Foundation::Unreal::FTransform3D>, ::Foundation::Unreal::FName, ::Foundation::Unreal::FName))((::PBYTE)hIl2Cpp + LDENIGIJJEI__CTOR_OFFSET))(this, NCMOOHFIBCN, CGJAHHMDANA, AAOCANGHBDG, PCENOFIFDDA, EFFNJICKEOK, NFIODDKILIL, DAMGNCFBPFP, HOPPEOHDMIK);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LDENIGIJJEI__CCTOR_OFFSET))();
	}

	::System::Void ProcessAnimation(::UnityEngine::Animations::AnimationStream CPKODGLINAO)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animations::AnimationStream))((::PBYTE)hIl2Cpp + LDENIGIJJEI_PROCESSANIMATION_OFFSET))(this, CPKODGLINAO);
	}

	::System::Void ProcessRootMotion(::UnityEngine::Animations::AnimationStream CPKODGLINAO)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animations::AnimationStream))((::PBYTE)hIl2Cpp + LDENIGIJJEI_PROCESSROOTMOTION_OFFSET))(this, CPKODGLINAO);
	}

	::UnityEngine::Animations::AnimationScriptPlayable COKNIICCODC(::UnityEngine::Playables::PlayableGraph MHPNGBGGMMN)
	{
		return ((::UnityEngine::Animations::AnimationScriptPlayable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph))((::PBYTE)hIl2Cpp + LDENIGIJJEI_COKNIICCODC_OFFSET))(this, MHPNGBGGMMN);
	}

	::System::Boolean FFCPIEDHBDP(::UnityEngine::Animations::AnimationStream CPKODGLINAO)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Animations::AnimationStream))((::PBYTE)hIl2Cpp + LDENIGIJJEI_FFCPIEDHBDP_OFFSET))(this, CPKODGLINAO);
	}

	::System::Boolean NKDCADABLCL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LDENIGIJJEI_NKDCADABLCL_OFFSET))(this);
	}

	::PMBCHGNJMKF IJMOICJDPPG()
	{
		return ((::PMBCHGNJMKF(*)(::PVOID))((::PBYTE)hIl2Cpp + LDENIGIJJEI_IJMOICJDPPG_OFFSET))(this);
	}

	::Foundation::ReadOnlyNativeVariable_1<::Foundation::Unreal::FTransform3D> MKCBHAFOBMK()
	{
		return ((::Foundation::ReadOnlyNativeVariable_1<::Foundation::Unreal::FTransform3D>(*)(::PVOID))((::PBYTE)hIl2Cpp + LDENIGIJJEI_MKCBHAFOBMK_OFFSET))(this);
	}

	::Foundation::ReadOnlyNativeVariable_1<::Foundation::Unreal::FTransform3D> ACDALAEOAKF()
	{
		return ((::Foundation::ReadOnlyNativeVariable_1<::Foundation::Unreal::FTransform3D>(*)(::PVOID))((::PBYTE)hIl2Cpp + LDENIGIJJEI_ACDALAEOAKF_OFFSET))(this);
	}

	::Foundation::ReadOnlyNativeVariable_1<::Foundation::Unreal::FTransform3D> DNFMPFCAJLL()
	{
		return ((::Foundation::ReadOnlyNativeVariable_1<::Foundation::Unreal::FTransform3D>(*)(::PVOID))((::PBYTE)hIl2Cpp + LDENIGIJJEI_DNFMPFCAJLL_OFFSET))(this);
	}
};
