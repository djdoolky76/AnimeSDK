#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"

namespace System { class String; }
namespace UnityEngine { class Transform; }

#define BJJFELFBJDD_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x115F2B10)
#define BJJFELFBJDD_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x115F2B50)
#define BJJFELFBJDD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x115F28A0)
#define BJJFELFBJDD__CTOR_OFFSET UNITYSDK_OFFSET(0x115F2B00)

inline static constexpr unsigned int BJJFELFBJDD_TypeDefinitionIndex = 48507;

class BJJFELFBJDD : public ::System::Object
{
public:
	::UnityEngine::Transform* GENJOFBPIEM; // 0x10
	::System::Boolean NMNLLJKIBOE; // 0x18
	::System::Boolean FBELMIGPNCG; // 0x19
	::System::Byte _padding0[0x2];
	::UnityEngine::Quaternion FJLLDHPHIGL; // 0x1C
	::System::Single GCGKLIPDBEF; // 0x2C
	::System::Single CGFLHOFEKDH; // 0x30
	::UnityEngine::Quaternion JEODJDGLLMO; // 0x34
	::System::Single CMBBEHFICOA; // 0x44
	::System::Single HICEKCJOHAE; // 0x48
	::System::Single LJLOOJMANHM; // 0x4C
	::System::Single FCLOHJLPDMI; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJJFELFBJDD__CTOR_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJJFELFBJDD_TOSTRING_OFFSET))(this);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJJFELFBJDD_DPIHOJBBGLA_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJJFELFBJDD_PHOADBJGFBE_OFFSET))(this);
	}
};
