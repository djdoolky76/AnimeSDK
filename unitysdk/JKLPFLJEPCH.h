#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameEntityPosAdaptionResultFlag.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/System/ValueTuple.h"

#define JKLPFLJEPCH_BBNJCKPKPDN_1_OFFSET UNITYSDK_OFFSET(0xB2204D0)
#define JKLPFLJEPCH_BBNJCKPKPDN_OFFSET UNITYSDK_OFFSET(0xB218950)
#define JKLPFLJEPCH_LDAMHBBILAD_OFFSET UNITYSDK_OFFSET(0x11100)
#define JKLPFLJEPCH_MLLFHCJLHOJ_OFFSET UNITYSDK_OFFSET(0x111A0)
#define JKLPFLJEPCH_PHJFEOMPDLB_OFFSET UNITYSDK_OFFSET(0x11150)

inline static constexpr unsigned int JKLPFLJEPCH_TypeDefinitionIndex = 57804;

	struct alignas(4) JKLPFLJEPCH
	{
		::UnityEngine::Vector3 ACNFNHFMOOD; // 0x10
		::RPG::GameCore::GameEntityPosAdaptionResultFlag FNPGDNFLMPC; // 0x1C
		/*
		static ::UnityEngine::Vector3 BBNJCKPKPDN(::JKLPFLJEPCH a1)
		{
			return ((::UnityEngine::Vector3(*)(::JKLPFLJEPCH))((::PBYTE)hIl2Cpp + JKLPFLJEPCH_BBNJCKPKPDN_OFFSET))(a1);
		}
		*/

		/*
		static ::JKLPFLJEPCH BBNJCKPKPDN_1(::System::ValueTuple a1)
		{
			return ((::JKLPFLJEPCH(*)(::System::ValueTuple))((::PBYTE)hIl2Cpp + JKLPFLJEPCH_BBNJCKPKPDN_1_OFFSET))(a1);
		}
		*/

		::System::Boolean LDAMHBBILAD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JKLPFLJEPCH_LDAMHBBILAD_OFFSET))(this);
		}

		::System::Boolean PHJFEOMPDLB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JKLPFLJEPCH_PHJFEOMPDLB_OFFSET))(this);
		}

		::System::Boolean MLLFHCJLHOJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JKLPFLJEPCH_MLLFHCJLHOJ_OFFSET))(this);
		}

	};
