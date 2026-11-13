#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace UnityEngine { class Transform; }

#define GOCDHLDEGEJ_CLEAR_OFFSET UNITYSDK_OFFSET(0x1DA8D310)
#define GOCDHLDEGEJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA8D390)

inline static constexpr unsigned int GOCDHLDEGEJ_TypeDefinitionIndex = 43898;

	class GOCDHLDEGEJ : public ::System::Object
	{
	public:
		::UnityEngine::Transform* CIMHBBGGADG; // 0x10
		::System::Single FNEAALBNDHK; // 0x18
		::System::UInt32 LFIEOIKFGNG; // 0x1C
		::UnityEngine::Vector3 AIBGEDIGEOO; // 0x20
		::UnityEngine::Quaternion LOLLEGPLMOO; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOCDHLDEGEJ_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOCDHLDEGEJ_CLEAR_OFFSET))(this);
		}

	};
