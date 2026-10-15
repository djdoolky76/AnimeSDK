#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Quaternion.h"
namespace System { class String; }

#define BHHPIFHIEIB_BJLJJLBDCMJ_OFFSET UNITYSDK_OFFSET(0xB48BD00)
#define BHHPIFHIEIB_CHPAIEEKLGO_OFFSET UNITYSDK_OFFSET(0x15A60)
#define BHHPIFHIEIB_ECPDLEPIINE_OFFSET UNITYSDK_OFFSET(0x15AB0)
#define BHHPIFHIEIB_EIFFGIJAIEC_OFFSET UNITYSDK_OFFSET(0x15BD0)
#define BHHPIFHIEIB_HMADPCEMDHL_OFFSET UNITYSDK_OFFSET(0xB48BD60)
#define BHHPIFHIEIB_IFGBLJFKAMN_OFFSET UNITYSDK_OFFSET(0x15B80)
#define BHHPIFHIEIB_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x15C90)
#define BHHPIFHIEIB_OEFNOKGIANN_OFFSET UNITYSDK_OFFSET(0x15B20)

inline static constexpr unsigned int BHHPIFHIEIB_TypeDefinitionIndex = 52213;

	struct alignas(4) BHHPIFHIEIB
	{
		::System::Boolean PIOPJIGOANB; // 0x10
		::System::Byte _padding0[0x3];
		::System::Single NOHNKAIALPJ; // 0x14
		::System::Single DPNEIIPDLPN; // 0x18
		::UnityEngine::Vector3 EOBKILNFHOI; // 0x1C
		::System::Boolean EEAOKDEIBBJ; // 0x28
		::System::Byte _padding1[0x3];
		::System::Single IKKNJMJCDOJ; // 0x2C
		// static const ::System::Object KCIHCIHNDBC; // 0x0
		::System::Single CHPAIEEKLGO()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BHHPIFHIEIB_CHPAIEEKLGO_OFFSET))(this);
		}

		::System::Void ECPDLEPIINE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHHPIFHIEIB_ECPDLEPIINE_OFFSET))(this);
		}

		::System::Void OEFNOKGIANN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHHPIFHIEIB_OEFNOKGIANN_OFFSET))(this);
		}

		::System::Void IFGBLJFKAMN(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + BHHPIFHIEIB_IFGBLJFKAMN_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EIFFGIJAIEC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHHPIFHIEIB_EIFFGIJAIEC_OFFSET))(this);
		}

		static ::System::Boolean BJLJJLBDCMJ(::System::Single a1)
		{
			return ((::System::Boolean(*)(::System::Single))((::PBYTE)hIl2Cpp + BHHPIFHIEIB_BJLJJLBDCMJ_OFFSET))(a1);
		}

		static ::System::Boolean HMADPCEMDHL(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BHHPIFHIEIB_HMADPCEMDHL_OFFSET))(a1);
		}

		::System::Void JLANKNHFKCN(::System::String* a1, ::System::Boolean a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::System::Single a5, ::System::Single a6, ::System::Single a7)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + BHHPIFHIEIB_JLANKNHFKCN_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

	};
