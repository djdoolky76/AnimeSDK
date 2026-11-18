#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define MFHEIOBAEDI_JDAPDDEOCEA_OFFSET UNITYSDK_OFFSET(0x6C9640)
#define MFHEIOBAEDI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x6C9630)
#define MFHEIOBAEDI__CTOR_1_OFFSET UNITYSDK_OFFSET(0x6C95F0)
#define MFHEIOBAEDI__CTOR_OFFSET UNITYSDK_OFFSET(0x6C95C0)

inline static constexpr unsigned int MFHEIOBAEDI_TypeDefinitionIndex = 72420;

struct alignas(4) MFHEIOBAEDI
{
	::System::Int32 LOJPOMOLGHL; // 0x10
	::UnityEngine::Vector3 IAGIPAIGJJC; // 0x14
	::System::Single LLBEKEFONPC; // 0x20

	::System::Void _ctor(::System::Int32 LAPCGCGEPNN, ::UnityEngine::Vector3 FCNPOKNKMOD, ::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + MFHEIOBAEDI__CTOR_OFFSET))(this, LAPCGCGEPNN, FCNPOKNKMOD, PMNLNNGEIFM);
	}

	::System::Void _ctor_1(::UnityEngine::Vector3 FCNPOKNKMOD, ::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + MFHEIOBAEDI__CTOR_1_OFFSET))(this, FCNPOKNKMOD, PMNLNNGEIFM);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MFHEIOBAEDI_TOSTRING_OFFSET))(this);
	}

	::System::Boolean JDAPDDEOCEA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MFHEIOBAEDI_JDAPDDEOCEA_OFFSET))(this);
	}
};
