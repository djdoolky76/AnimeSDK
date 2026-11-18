#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/GroupMemberIdentifier.h"
#include "unitysdk/MBPEMPMEMGK_AHBEGPBHJFO.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define KJKCPJDICGE_EQUALS_OFFSET UNITYSDK_OFFSET(0x753980)
#define KJKCPJDICGE_LBCBPEJEHNB_OFFSET UNITYSDK_OFFSET(0x7539C0)
#define KJKCPJDICGE_PNNJKJEOHAL_OFFSET UNITYSDK_OFFSET(0x718D80)

inline static constexpr unsigned int KJKCPJDICGE_TypeDefinitionIndex = 75673;

struct alignas(4) KJKCPJDICGE
{
	::System::Int32 GIOMCDIKLJG; // 0x10
	::System::Byte _padding0[0x4];
	::System::UInt64 EJLNOAMPBGN; // 0x18
	::System::Int32 NNLFHOLLBPP; // 0x20
	::Foundation::ViewObject::GroupMemberIdentifier KFIKDKMGJHM; // 0x24
	::MBPEMPMEMGK_AHBEGPBHJFO JJPEDAMOOLA; // 0x2C
	::System::Int32 FCBGGJLANEB; // 0x30
	::System::Int32 BABGKDAEJFE; // 0x34
	::UnityEngine::Vector3 ILOJFPNKJII; // 0x38

	/*
	::System::Boolean Equals(::KJKCPJDICGE LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::KJKCPJDICGE))((::PBYTE)hIl2Cpp + KJKCPJDICGE_EQUALS_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::UnityEngine::Vector3 LBCBPEJEHNB()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + KJKCPJDICGE_LBCBPEJEHNB_OFFSET))(this);
	}

	::System::Boolean PNNJKJEOHAL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KJKCPJDICGE_PNNJKJEOHAL_OFFSET))(this);
	}
};
