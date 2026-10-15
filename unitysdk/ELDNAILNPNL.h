#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define ELDNAILNPNL_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x2E73580)

inline static constexpr unsigned int ELDNAILNPNL_TypeDefinitionIndex = 57648;

	struct alignas(4) ELDNAILNPNL
	{
		::System::Single JMBHCPLJNNM; // 0x10
		::System::Single GJEDMIAJGBG; // 0x14
		::UnityEngine::Vector3 LBMLADHFJEO; // 0x18
		::UnityEngine::Vector3 APJHEJPGKDA; // 0x24
		::UnityEngine::Vector3 EJLOMELLLJB; // 0x30
		::UnityEngine::Vector3 ENKKJLGLIBO; // 0x3C
		::System::Single JEJEAABCFLB; // 0x48
		::System::Single OGNMCAHBHAE; // 0x4C
		::System::Single EFCNOHKEOAO; // 0x50
		::System::Single DLFONDABELG; // 0x54
		::System::Single ELMPMCFKCPH; // 0x58
		::System::Single NPCGLPKDHPG; // 0x5C
		::UnityEngine::Vector3 CAGHLEIBNID; // 0x60
		::System::Single GCDNIOLLHMF; // 0x6C
		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELDNAILNPNL_KHGIKBFDLFB_OFFSET))(this);
		}

	};
