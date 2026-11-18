#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MEMDIFHDIAC.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Collider; }

#define PFFLAOOPDII_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x15537220)
#define PFFLAOOPDII__CTOR_OFFSET UNITYSDK_OFFSET(0x15537210)

inline static constexpr unsigned int PFFLAOOPDII_TypeDefinitionIndex = 44446;

class PFFLAOOPDII : public ::System::Object
{
public:
	::UnityEngine::Collider* EHHHMFKHNAI; // 0x10
	::UnityEngine::Vector3 JHKAPGEIBHO; // 0x18
	::UnityEngine::Vector3 LBKMCOKBJEA; // 0x24
	::UnityEngine::Vector3 GLPBNHEECLO; // 0x30
	::System::Boolean CNFHBFBLMFO; // 0x3C
	::System::Byte _padding0[0x3];
	::UnityEngine::Vector3 AHCJGKIPAAB; // 0x40
	::MEMDIFHDIAC IFPMLOPDDKA; // 0x4C
	::System::Int32 KMOHKCADPNA; // 0x50
	::System::Single AHHKOLKJJPD; // 0x54
	::UnityEngine::Vector3 FOLHIAMAPAC; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFFLAOOPDII__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFFLAOOPDII_PHOADBJGFBE_OFFSET))(this);
	}
};
