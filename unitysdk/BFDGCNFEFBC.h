#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace UnityEngine { class AnimationCurve; }

#define BFDGCNFEFBC_CLEAR_OFFSET UNITYSDK_OFFSET(0xB7EA4E0)
#define BFDGCNFEFBC_CTOR_OFFSET UNITYSDK_OFFSET(0xB7EA540)

inline static constexpr unsigned int BFDGCNFEFBC_TypeDefinitionIndex = 62173;

	class BFDGCNFEFBC : public ::System::Object
	{
	public:
		::Il2CppArray<::UnityEngine::AnimationCurve*>* AKBBKCCPEPB; // 0x10
		::Il2CppArray<::UnityEngine::AnimationCurve*>* AADLBKNFBDH; // 0x18
		::System::Single GCJMFBKLGHI; // 0x20
		::System::Single OOMKEJOJAEH; // 0x24
		::System::Int32 ABMIICDEDCB; // 0x28
		::System::Int32 NOIIIOKMIIN; // 0x2C
		::System::Single DCJLFCIIFMJ; // 0x30
		::System::Single MNIHJPAICJE; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFDGCNFEFBC_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFDGCNFEFBC_CLEAR_OFFSET))(this);
		}

	};
