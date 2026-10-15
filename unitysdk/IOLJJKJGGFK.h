#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/WorldShiftingReason.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System { class Object; }

#define IOLJJKJGGFK_CTOR_OFFSET UNITYSDK_OFFSET(0x165040B0)
#define IOLJJKJGGFK_FOEBLLFDCIH_OFFSET UNITYSDK_OFFSET(0x16503FE0)

inline static constexpr unsigned int IOLJJKJGGFK_TypeDefinitionIndex = 60951;

	class IOLJJKJGGFK : public ::System::Object
	{
	public:
		::System::Object* LOMLIPOLBKM; // 0x10
		::UnityEngine::Vector3 JMKBGFNBOAO; // 0x18
		::UnityEngine::Quaternion MCPHEDGBAOF; // 0x24
		::UnityEngine::Vector3 DGHHMAPHHOK; // 0x34
		::RPG::Client::WorldShiftingReason KDHPKOFLNFM; // 0x40
		::UnityEngine::Quaternion JDLKKPIFNDD; // 0x44
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOLJJKJGGFK_CTOR_OFFSET))(this);
		}

		::System::Void FOEBLLFDCIH(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3, ::UnityEngine::Quaternion a4, ::RPG::Client::WorldShiftingReason a5, ::System::Object* a6)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::RPG::Client::WorldShiftingReason, ::System::Object*))((::PBYTE)hIl2Cpp + IOLJJKJGGFK_FOEBLLFDCIH_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

	};
