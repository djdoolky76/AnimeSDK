#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JINKCNHJDGF.h"
#include "unitysdk/PMBCHGNJMKF.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Animations/AnimationScriptPlayable.h"
#include "unitysdk/UnityEngine/Animations/AnimationStream.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

#define PNMGLCKLJDL_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0x8B1FA0)
#define PNMGLCKLJDL_FFCPIEDHBDP_OFFSET UNITYSDK_OFFSET(0x8B1FD0)
#define PNMGLCKLJDL_IJMOICJDPPG_OFFSET UNITYSDK_OFFSET(0x8B2020)
#define PNMGLCKLJDL_NKDCADABLCL_OFFSET UNITYSDK_OFFSET(0x8B2010)
#define PNMGLCKLJDL_PROCESSANIMATION_OFFSET UNITYSDK_OFFSET(0x8B1F20)
#define PNMGLCKLJDL_PROCESSROOTMOTION_OFFSET UNITYSDK_OFFSET(0x8B1F60)
#define PNMGLCKLJDL__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D1F63F0)
#define PNMGLCKLJDL__CTOR_OFFSET UNITYSDK_OFFSET(0x8B1EA0)

inline static constexpr unsigned int PNMGLCKLJDL_TypeDefinitionIndex = 82771;

struct alignas(4) PNMGLCKLJDL
{
	static ::PNMGLCKLJDL* StaticGet_FGBLILBNEHG()
	{
		return (::PNMGLCKLJDL*)Il2CppClass::FromTypeDefinitionIndex(PNMGLCKLJDL_TypeDefinitionIndex)->GetStaticField(0xEB80);
	}
	::JINKCNHJDGF GNDPJABBAMA; // 0x10
	::System::Double CCDNFNCMJGE; // 0x20
	::System::Byte JNBGHGHHHCM; // 0x28
	::System::Byte _padding0[0x7];
	::System::Double BJMBOABGKOK; // 0x30
	::PMBCHGNJMKF DAAAEJDBNFI; // 0x38

	::System::Void _ctor(::PMBCHGNJMKF AAOCANGHBDG, ::JINKCNHJDGF LNIOJLHBIHO, ::System::Double MDPPNMIPDMP, ::System::Boolean OLKMHFKHILI, ::System::Boolean HAFDIMGJBHC)
	{
		return ((::System::Void(*)(::PVOID, ::PMBCHGNJMKF, ::JINKCNHJDGF, ::System::Double, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + PNMGLCKLJDL__CTOR_OFFSET))(this, AAOCANGHBDG, LNIOJLHBIHO, MDPPNMIPDMP, OLKMHFKHILI, HAFDIMGJBHC);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PNMGLCKLJDL__CCTOR_OFFSET))();
	}

	::System::Void ProcessAnimation(::UnityEngine::Animations::AnimationStream CPKODGLINAO)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animations::AnimationStream))((::PBYTE)hIl2Cpp + PNMGLCKLJDL_PROCESSANIMATION_OFFSET))(this, CPKODGLINAO);
	}

	::System::Void ProcessRootMotion(::UnityEngine::Animations::AnimationStream CPKODGLINAO)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animations::AnimationStream))((::PBYTE)hIl2Cpp + PNMGLCKLJDL_PROCESSROOTMOTION_OFFSET))(this, CPKODGLINAO);
	}

	::UnityEngine::Animations::AnimationScriptPlayable COKNIICCODC(::UnityEngine::Playables::PlayableGraph MHPNGBGGMMN)
	{
		return ((::UnityEngine::Animations::AnimationScriptPlayable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph))((::PBYTE)hIl2Cpp + PNMGLCKLJDL_COKNIICCODC_OFFSET))(this, MHPNGBGGMMN);
	}

	::System::Boolean FFCPIEDHBDP(::UnityEngine::Animations::AnimationStream CPKODGLINAO)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Animations::AnimationStream))((::PBYTE)hIl2Cpp + PNMGLCKLJDL_FFCPIEDHBDP_OFFSET))(this, CPKODGLINAO);
	}

	::System::Boolean NKDCADABLCL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PNMGLCKLJDL_NKDCADABLCL_OFFSET))(this);
	}

	::PMBCHGNJMKF IJMOICJDPPG()
	{
		return ((::PMBCHGNJMKF(*)(::PVOID))((::PBYTE)hIl2Cpp + PNMGLCKLJDL_IJMOICJDPPG_OFFSET))(this);
	}
};
