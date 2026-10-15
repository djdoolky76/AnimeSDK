#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace UnityEngine { class AnimationCurve; }

#define BFDGCNFEFBC_CLEAR_OFFSET UNITYSDK_OFFSET(0xB160900)
#define BFDGCNFEFBC_CTOR_OFFSET UNITYSDK_OFFSET(0xB160960)

	class BFDGCNFEFBC : public ::System::Object
	{
	public:
		::Il2CppArray<::UnityEngine::AnimationCurve*>* AADLBKNFBDH; // 0x10
		::Il2CppArray<::UnityEngine::AnimationCurve*>* AKBBKCCPEPB; // 0x18
		::System::Int32 NOIIIOKMIIN; // 0x20
		::System::Single OOMKEJOJAEH; // 0x24
		::System::Single MNIHJPAICJE; // 0x28
		::System::Single DCJLFCIIFMJ; // 0x2C
		::System::Int32 ABMIICDEDCB; // 0x30
		::System::Single GCJMFBKLGHI; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFDGCNFEFBC_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFDGCNFEFBC_CLEAR_OFFSET))(this);
		}

	};
