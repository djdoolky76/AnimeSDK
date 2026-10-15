#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
namespace System { class Object; }

#define SKIRTIK_HAIRIKFREEAXISCLASS_CTOR_OFFSET UNITYSDK_OFFSET(0xE972E20)
#define SKIRTIK_HAIRIKFREEAXISCLASS_FBIGIJPAMPO_OFFSET UNITYSDK_OFFSET(0xE972D90)

	class SkirtIK_HairIKFreeAxisClass : public ::System::Object
	{
	public:
		::System::Int32 Index; // 0x10
		::UnityEngine::Vector2 Direction; // 0x14
		::System::Single Rad; // 0x1C
		::System::Single Range; // 0x20
		::System::Byte _padding0[0x4];
		::Il2CppArray<::System::Object*>* FreeAxisData; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SKIRTIK_HAIRIKFREEAXISCLASS_CTOR_OFFSET))(this);
		}

		::System::Void FBIGIJPAMPO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SKIRTIK_HAIRIKFREEAXISCLASS_FBIGIJPAMPO_OFFSET))(this);
		}

	};
