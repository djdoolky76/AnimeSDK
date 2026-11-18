#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ReadOnlyNativeVariable_1.h"
#include "unitysdk/IKDFOIDDAEC.h"
#include "unitysdk/LKEBCNKGCEA.h"
#include "unitysdk/PMBCHGNJMKF.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/Foundation/NativeVariable_1.h"
#include "unitysdk/JLJFLLKCPKE.h"
#include "unitysdk/UnityEngine/Animations/AnimationScriptPlayable.h"
#include "unitysdk/UnityEngine/Animations/AnimationStream.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

#define INCAECNMCEH_AFIKPGHMNCI_OFFSET UNITYSDK_OFFSET(0x714DD0)
#define INCAECNMCEH_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0x714C90)
#define INCAECNMCEH_FFCPIEDHBDP_OFFSET UNITYSDK_OFFSET(0x714CC0)
#define INCAECNMCEH_IJMOICJDPPG_OFFSET UNITYSDK_OFFSET(0x714D10)
#define INCAECNMCEH_JGMPEIFAMPB_OFFSET UNITYSDK_OFFSET(0x714D90)
#define INCAECNMCEH_LCEKDKPKEOF_OFFSET UNITYSDK_OFFSET(0x714D70)
#define INCAECNMCEH_MJLCNNIMINO_OFFSET UNITYSDK_OFFSET(0x714DB0)
#define INCAECNMCEH_NFMIIKFINHC_OFFSET UNITYSDK_OFFSET(0x138215E0)
#define INCAECNMCEH_NKDCADABLCL_OFFSET UNITYSDK_OFFSET(0x714D00)
#define INCAECNMCEH_PJKIODPIEOH_OFFSET UNITYSDK_OFFSET(0x714D30)
#define INCAECNMCEH_PROCESSANIMATION_OFFSET UNITYSDK_OFFSET(0x714C10)
#define INCAECNMCEH_PROCESSROOTMOTION_OFFSET UNITYSDK_OFFSET(0x714C50)
#define INCAECNMCEH__CCTOR_OFFSET UNITYSDK_OFFSET(0x13821D90)
#define INCAECNMCEH__CTOR_OFFSET UNITYSDK_OFFSET(0x714BA0)

inline static constexpr unsigned int INCAECNMCEH_TypeDefinitionIndex = 45512;

struct alignas(8) INCAECNMCEH
{
	static ::INCAECNMCEH* StaticGet_FGBLILBNEHG()
	{
		return (::INCAECNMCEH*)Il2CppClass::FromTypeDefinitionIndex(INCAECNMCEH_TypeDefinitionIndex)->GetStaticField(0xE310);
	}
	::Foundation::ReadOnlyNativeVariable_1<::UnityEngine::Vector3> LBPKMCELDCI; // 0x10
	::System::Byte _padding0[0x8];
	::PMBCHGNJMKF DAAAEJDBNFI; // 0x20
	::Foundation::ReadOnlyNativeVariable_1<::IKDFOIDDAEC> EPGGMNEDPEI; // 0xB0
	::System::Byte _padding1[0x8];
	::Foundation::ReadOnlyNativeVariable_1<::LKEBCNKGCEA> EDKMCFIGBOK; // 0xC0

	::System::Void _ctor(::PMBCHGNJMKF AAOCANGHBDG, ::Foundation::ReadOnlyNativeVariable_1<::UnityEngine::Vector3> OKFPEIKIIHA, ::Foundation::ReadOnlyNativeVariable_1<::LKEBCNKGCEA> IECOJPMPJMP, ::Foundation::ReadOnlyNativeVariable_1<::IKDFOIDDAEC> LCGEMJEDIPC)
	{
		return ((::System::Void(*)(::PVOID, ::PMBCHGNJMKF, ::Foundation::ReadOnlyNativeVariable_1<::UnityEngine::Vector3>, ::Foundation::ReadOnlyNativeVariable_1<::LKEBCNKGCEA>, ::Foundation::ReadOnlyNativeVariable_1<::IKDFOIDDAEC>))((::PBYTE)hIl2Cpp + INCAECNMCEH__CTOR_OFFSET))(this, AAOCANGHBDG, OKFPEIKIIHA, IECOJPMPJMP, LCGEMJEDIPC);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INCAECNMCEH__CCTOR_OFFSET))();
	}

	::System::Void ProcessAnimation(::UnityEngine::Animations::AnimationStream CPKODGLINAO)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animations::AnimationStream))((::PBYTE)hIl2Cpp + INCAECNMCEH_PROCESSANIMATION_OFFSET))(this, CPKODGLINAO);
	}

	::System::Void ProcessRootMotion(::UnityEngine::Animations::AnimationStream CPKODGLINAO)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animations::AnimationStream))((::PBYTE)hIl2Cpp + INCAECNMCEH_PROCESSROOTMOTION_OFFSET))(this, CPKODGLINAO);
	}

	::UnityEngine::Animations::AnimationScriptPlayable COKNIICCODC(::UnityEngine::Playables::PlayableGraph MHPNGBGGMMN)
	{
		return ((::UnityEngine::Animations::AnimationScriptPlayable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph))((::PBYTE)hIl2Cpp + INCAECNMCEH_COKNIICCODC_OFFSET))(this, MHPNGBGGMMN);
	}

	::System::Boolean FFCPIEDHBDP(::UnityEngine::Animations::AnimationStream CPKODGLINAO)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Animations::AnimationStream))((::PBYTE)hIl2Cpp + INCAECNMCEH_FFCPIEDHBDP_OFFSET))(this, CPKODGLINAO);
	}

	::System::Boolean NKDCADABLCL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCAECNMCEH_NKDCADABLCL_OFFSET))(this);
	}

	::PMBCHGNJMKF IJMOICJDPPG()
	{
		return ((::PMBCHGNJMKF(*)(::PVOID))((::PBYTE)hIl2Cpp + INCAECNMCEH_IJMOICJDPPG_OFFSET))(this);
	}

	::System::Single PJKIODPIEOH(::UnityEngine::Animations::AnimationStream CPKODGLINAO)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Animations::AnimationStream))((::PBYTE)hIl2Cpp + INCAECNMCEH_PJKIODPIEOH_OFFSET))(this, CPKODGLINAO);
	}

	::Foundation::NativeVariable_1<::UnityEngine::Vector3> LCEKDKPKEOF()
	{
		return ((::Foundation::NativeVariable_1<::UnityEngine::Vector3>(*)(::PVOID))((::PBYTE)hIl2Cpp + INCAECNMCEH_LCEKDKPKEOF_OFFSET))(this);
	}

	::System::Void JGMPEIFAMPB(::Foundation::ReadOnlyNativeVariable_1<::UnityEngine::Vector3> OKFPEIKIIHA)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ReadOnlyNativeVariable_1<::UnityEngine::Vector3>))((::PBYTE)hIl2Cpp + INCAECNMCEH_JGMPEIFAMPB_OFFSET))(this, OKFPEIKIIHA);
	}

	::Foundation::NativeVariable_1<::LKEBCNKGCEA> MJLCNNIMINO()
	{
		return ((::Foundation::NativeVariable_1<::LKEBCNKGCEA>(*)(::PVOID))((::PBYTE)hIl2Cpp + INCAECNMCEH_MJLCNNIMINO_OFFSET))(this);
	}

	::Foundation::NativeVariable_1<::LKEBCNKGCEA> AFIKPGHMNCI()
	{
		return ((::Foundation::NativeVariable_1<::LKEBCNKGCEA>(*)(::PVOID))((::PBYTE)hIl2Cpp + INCAECNMCEH_AFIKPGHMNCI_OFFSET))(this);
	}

	static ::System::Void NFMIIKFINHC(::IKDFOIDDAEC& LJBPECKCCEA, ::JLJFLLKCPKE& MOEKEKKJGBB, ::UnityEngine::Vector3 BKIEMIHIFNP, ::System::Single IECOJPMPJMP)
	{
		return ((::System::Void(*)(::IKDFOIDDAEC&, ::JLJFLLKCPKE&, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + INCAECNMCEH_NFMIIKFINHC_OFFSET))(LJBPECKCCEA, MOEKEKKJGBB, BKIEMIHIFNP, IECOJPMPJMP);
	}
};
