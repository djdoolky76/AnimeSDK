#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
class LADMBCFPJGM;
namespace System { class String; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }

#define EFFECT_SETMATERIALPROPERTYBYRULES_CTOR_OFFSET UNITYSDK_OFFSET(0x155E2E70)
#define EFFECT_SETMATERIALPROPERTYBYRULES_ONENABLE_OFFSET UNITYSDK_OFFSET(0x155E2E00)

	class Effect_SetMaterialPropertyByRules : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Renderer* Render; // 0x18
		::System::String* PropertyName; // 0x20
		::System::Int32 MaterialIndex; // 0x28
		::System::Single Weight; // 0x2C
		::UnityEngine::MaterialPropertyBlock* matBlock; // 0x30
		::System::Single _PrevisData; // 0x38
		::System::Byte _padding0[0x4];
		::LADMBCFPJGM* KADDKEGNCHE; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFFECT_SETMATERIALPROPERTYBYRULES_CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFFECT_SETMATERIALPROPERTYBYRULES_ONENABLE_OFFSET))(this);
		}

	};
