#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace UnityEngine { class Transform; }

#define GOCDHLDEGEJ_CLEAR_OFFSET UNITYSDK_OFFSET(0x1DC79010)
#define GOCDHLDEGEJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC79090)

inline static constexpr unsigned int GOCDHLDEGEJ_TypeDefinitionIndex = 43898;

	class GOCDHLDEGEJ : public ::System::Object
	{
	public:
		::UnityEngine::Transform* CIMHBBGGADG; // 0x10
		::System::UInt32 LFIEOIKFGNG; // 0x18
		::UnityEngine::Quaternion LOLLEGPLMOO; // 0x1C
		::UnityEngine::Vector3 AIBGEDIGEOO; // 0x2C
		::System::Single FNEAALBNDHK; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOCDHLDEGEJ_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOCDHLDEGEJ_CLEAR_OFFSET))(this);
		}

	};
