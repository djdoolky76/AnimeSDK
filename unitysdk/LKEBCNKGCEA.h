#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/MoleMole/Photo/PlayableGraphAttributeSource.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Animations/PropertySceneHandle.h"
#include "unitysdk/APKFHDOGGJH.h"
#include "unitysdk/UnityEngine/Animations/AnimationStream.h"

#define LKEBCNKGCEA_AKMEMMFJEMP_1_OFFSET UNITYSDK_OFFSET(0x6ED2C0)
#define LKEBCNKGCEA_AKMEMMFJEMP_2_OFFSET UNITYSDK_OFFSET(0x6ED410)
#define LKEBCNKGCEA_AKMEMMFJEMP_OFFSET UNITYSDK_OFFSET(0x6ED260)
#define LKEBCNKGCEA_BLODHJAEJGE_OFFSET UNITYSDK_OFFSET(0x6ED380)
#define LKEBCNKGCEA_FCFOEJGPDNO_OFFSET UNITYSDK_OFFSET(0x6ED3D0)
#define LKEBCNKGCEA_JAEJLIPHKAL_OFFSET UNITYSDK_OFFSET(0x6ED320)

inline static constexpr unsigned int LKEBCNKGCEA_TypeDefinitionIndex = 78669;

struct alignas(4) LKEBCNKGCEA
{
	::System::Single CJFMIMMDDGF; // 0x10
	::MoleMole::Photo::PlayableGraphAttributeSource DKANPKBIMFM; // 0x14
	::System::Single ECIPCCLLGOG; // 0x18
	::Foundation::Unreal::FName EMAIAHHHKAB; // 0x18
	::UnityEngine::Animations::PropertySceneHandle MAJOOKMBEMO; // 0x18

	::System::Void AKMEMMFJEMP(::UnityEngine::Animations::PropertySceneHandle PHHDHIBOCKA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animations::PropertySceneHandle))((::PBYTE)hIl2Cpp + LKEBCNKGCEA_AKMEMMFJEMP_OFFSET))(this, PHHDHIBOCKA);
	}

	::System::Void AKMEMMFJEMP_1(::Foundation::Unreal::FName FAJHPKBELMF)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FName))((::PBYTE)hIl2Cpp + LKEBCNKGCEA_AKMEMMFJEMP_1_OFFSET))(this, FAJHPKBELMF);
	}

	::System::Void JAEJLIPHKAL(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LKEBCNKGCEA_JAEJLIPHKAL_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Single BLODHJAEJGE()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LKEBCNKGCEA_BLODHJAEJGE_OFFSET))(this);
	}

	::System::Single FCFOEJGPDNO(::APKFHDOGGJH& AAOCANGHBDG, ::UnityEngine::Animations::AnimationStream CPKODGLINAO)
	{
		return ((::System::Single(*)(::PVOID, ::APKFHDOGGJH&, ::UnityEngine::Animations::AnimationStream))((::PBYTE)hIl2Cpp + LKEBCNKGCEA_FCFOEJGPDNO_OFFSET))(this, AAOCANGHBDG, CPKODGLINAO);
	}

	::System::Void AKMEMMFJEMP_2(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LKEBCNKGCEA_AKMEMMFJEMP_2_OFFSET))(this, EGEGIMGMJHN);
	}
};
