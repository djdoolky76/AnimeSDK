#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FTransform3D.h"
#include "unitysdk/Foundation/ReadOnlyNativeVariable_1.h"
#include "unitysdk/LFOBKACGJND.h"
#include "unitysdk/LKEBCNKGCEA.h"
#include "unitysdk/PMBCHGNJMKF.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/Foundation/NativeVariable_1.h"
#include "unitysdk/JLJFLLKCPKE.h"
#include "unitysdk/UnityEngine/Animations/AnimationScriptPlayable.h"
#include "unitysdk/UnityEngine/Animations/AnimationStream.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

#define GFAHOCFKDNI_AFIKPGHMNCI_OFFSET UNITYSDK_OFFSET(0x776640)
#define GFAHOCFKDNI_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0x776350)
#define GFAHOCFKDNI_FFCPIEDHBDP_OFFSET UNITYSDK_OFFSET(0x776190)
#define GFAHOCFKDNI_HBFEMAIBKPH_OFFSET UNITYSDK_OFFSET(0x776660)
#define GFAHOCFKDNI_IJMOICJDPPG_OFFSET UNITYSDK_OFFSET(0x776170)
#define GFAHOCFKDNI_JGMPEIFAMPB_OFFSET UNITYSDK_OFFSET(0x714D90)
#define GFAHOCFKDNI_LCEKDKPKEOF_OFFSET UNITYSDK_OFFSET(0x776600)
#define GFAHOCFKDNI_MABANBFPJPB_OFFSET UNITYSDK_OFFSET(0x776620)
#define GFAHOCFKDNI_MPAILIGKNCO_OFFSET UNITYSDK_OFFSET(0x776480)
#define GFAHOCFKDNI_NFMIIKFINHC_OFFSET UNITYSDK_OFFSET(0x15F18650)
#define GFAHOCFKDNI_NKDCADABLCL_OFFSET UNITYSDK_OFFSET(0x776160)
#define GFAHOCFKDNI_PHGOLOFEIGP_OFFSET UNITYSDK_OFFSET(0x7765C0)
#define GFAHOCFKDNI_PROCESSANIMATION_OFFSET UNITYSDK_OFFSET(0x7762D0)
#define GFAHOCFKDNI_PROCESSROOTMOTION_OFFSET UNITYSDK_OFFSET(0x776310)
#define GFAHOCFKDNI__CCTOR_OFFSET UNITYSDK_OFFSET(0x15F189C0)
#define GFAHOCFKDNI__CTOR_OFFSET UNITYSDK_OFFSET(0x7760D0)

inline static constexpr unsigned int GFAHOCFKDNI_TypeDefinitionIndex = 69047;

struct alignas(8) GFAHOCFKDNI
{
	static ::GFAHOCFKDNI* StaticGet_FGBLILBNEHG()
	{
		return (::GFAHOCFKDNI*)Il2CppClass::FromTypeDefinitionIndex(GFAHOCFKDNI_TypeDefinitionIndex)->GetStaticField(0x10270);
	}
	::Foundation::ReadOnlyNativeVariable_1<::Foundation::Unreal::FTransform3D> LBPKMCELDCI; // 0x10
	::System::Byte _padding0[0x8];
	::Foundation::ReadOnlyNativeVariable_1<::UnityEngine::Vector3> AKBKHICKCGM; // 0x20
	::System::Byte _padding1[0x8];
	::Foundation::ReadOnlyNativeVariable_1<::LKEBCNKGCEA> EDKMCFIGBOK; // 0x30
	::System::Byte _padding2[0x8];
	::Foundation::ReadOnlyNativeVariable_1<::LFOBKACGJND> EPGGMNEDPEI; // 0x40
	::System::Byte _padding3[0x8];
	::PMBCHGNJMKF DAAAEJDBNFI; // 0x50

	::System::Void _ctor(::PMBCHGNJMKF AAOCANGHBDG, ::Foundation::ReadOnlyNativeVariable_1<::Foundation::Unreal::FTransform3D> OKFPEIKIIHA, ::Foundation::ReadOnlyNativeVariable_1<::UnityEngine::Vector3> AEBAABHINNE, ::Foundation::ReadOnlyNativeVariable_1<::LKEBCNKGCEA> IECOJPMPJMP, ::Foundation::ReadOnlyNativeVariable_1<::LFOBKACGJND> LCGEMJEDIPC)
	{
		return ((::System::Void(*)(::PVOID, ::PMBCHGNJMKF, ::Foundation::ReadOnlyNativeVariable_1<::Foundation::Unreal::FTransform3D>, ::Foundation::ReadOnlyNativeVariable_1<::UnityEngine::Vector3>, ::Foundation::ReadOnlyNativeVariable_1<::LKEBCNKGCEA>, ::Foundation::ReadOnlyNativeVariable_1<::LFOBKACGJND>))((::PBYTE)hIl2Cpp + GFAHOCFKDNI__CTOR_OFFSET))(this, AAOCANGHBDG, OKFPEIKIIHA, AEBAABHINNE, IECOJPMPJMP, LCGEMJEDIPC);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GFAHOCFKDNI__CCTOR_OFFSET))();
	}

	::System::Boolean NKDCADABLCL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GFAHOCFKDNI_NKDCADABLCL_OFFSET))(this);
	}

	::PMBCHGNJMKF IJMOICJDPPG()
	{
		return ((::PMBCHGNJMKF(*)(::PVOID))((::PBYTE)hIl2Cpp + GFAHOCFKDNI_IJMOICJDPPG_OFFSET))(this);
	}

	::System::Boolean FFCPIEDHBDP(::UnityEngine::Animations::AnimationStream CPKODGLINAO)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Animations::AnimationStream))((::PBYTE)hIl2Cpp + GFAHOCFKDNI_FFCPIEDHBDP_OFFSET))(this, CPKODGLINAO);
	}

	::System::Void ProcessAnimation(::UnityEngine::Animations::AnimationStream CPKODGLINAO)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animations::AnimationStream))((::PBYTE)hIl2Cpp + GFAHOCFKDNI_PROCESSANIMATION_OFFSET))(this, CPKODGLINAO);
	}

	::System::Void ProcessRootMotion(::UnityEngine::Animations::AnimationStream CPKODGLINAO)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animations::AnimationStream))((::PBYTE)hIl2Cpp + GFAHOCFKDNI_PROCESSROOTMOTION_OFFSET))(this, CPKODGLINAO);
	}

	::UnityEngine::Animations::AnimationScriptPlayable COKNIICCODC(::UnityEngine::Playables::PlayableGraph MHPNGBGGMMN)
	{
		return ((::UnityEngine::Animations::AnimationScriptPlayable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph))((::PBYTE)hIl2Cpp + GFAHOCFKDNI_COKNIICCODC_OFFSET))(this, MHPNGBGGMMN);
	}

	::System::Single MPAILIGKNCO(::UnityEngine::Animations::AnimationStream CPKODGLINAO)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Animations::AnimationStream))((::PBYTE)hIl2Cpp + GFAHOCFKDNI_MPAILIGKNCO_OFFSET))(this, CPKODGLINAO);
	}

	::System::Void PHGOLOFEIGP(::UnityEngine::Animations::AnimationStream CPKODGLINAO, ::Foundation::Unreal::FTransform3D& GLPJKLMANGP, ::UnityEngine::Vector3& AEBAABHINNE)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animations::AnimationStream, ::Foundation::Unreal::FTransform3D&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + GFAHOCFKDNI_PHGOLOFEIGP_OFFSET))(this, CPKODGLINAO, GLPJKLMANGP, AEBAABHINNE);
	}

	static ::System::Void NFMIIKFINHC(::LFOBKACGJND& LJBPECKCCEA, ::JLJFLLKCPKE& MOEKEKKJGBB, ::Foundation::Unreal::FTransform3D GLPJKLMANGP, ::UnityEngine::Vector3 AEBAABHINNE, ::System::Single OBELMIJGFGH)
	{
		return ((::System::Void(*)(::LFOBKACGJND&, ::JLJFLLKCPKE&, ::Foundation::Unreal::FTransform3D, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + GFAHOCFKDNI_NFMIIKFINHC_OFFSET))(LJBPECKCCEA, MOEKEKKJGBB, GLPJKLMANGP, AEBAABHINNE, OBELMIJGFGH);
	}

	::Foundation::NativeVariable_1<::Foundation::Unreal::FTransform3D> LCEKDKPKEOF()
	{
		return ((::Foundation::NativeVariable_1<::Foundation::Unreal::FTransform3D>(*)(::PVOID))((::PBYTE)hIl2Cpp + GFAHOCFKDNI_LCEKDKPKEOF_OFFSET))(this);
	}

	::System::Void JGMPEIFAMPB(::Foundation::ReadOnlyNativeVariable_1<::Foundation::Unreal::FTransform3D> OKFPEIKIIHA)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ReadOnlyNativeVariable_1<::Foundation::Unreal::FTransform3D>))((::PBYTE)hIl2Cpp + GFAHOCFKDNI_JGMPEIFAMPB_OFFSET))(this, OKFPEIKIIHA);
	}

	::Foundation::NativeVariable_1<::UnityEngine::Vector3> MABANBFPJPB()
	{
		return ((::Foundation::NativeVariable_1<::UnityEngine::Vector3>(*)(::PVOID))((::PBYTE)hIl2Cpp + GFAHOCFKDNI_MABANBFPJPB_OFFSET))(this);
	}

	::Foundation::NativeVariable_1<::LKEBCNKGCEA> AFIKPGHMNCI()
	{
		return ((::Foundation::NativeVariable_1<::LKEBCNKGCEA>(*)(::PVOID))((::PBYTE)hIl2Cpp + GFAHOCFKDNI_AFIKPGHMNCI_OFFSET))(this);
	}

	::System::Void HBFEMAIBKPH(::Foundation::ReadOnlyNativeVariable_1<::UnityEngine::Vector3> AEBAABHINNE)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ReadOnlyNativeVariable_1<::UnityEngine::Vector3>))((::PBYTE)hIl2Cpp + GFAHOCFKDNI_HBFEMAIBKPH_OFFSET))(this, AEBAABHINNE);
	}
};
