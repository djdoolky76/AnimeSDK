#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3Int.h"

#define KFIKLIHGCCO_DKKAJLLOPJE_DAHCKIHFAFL_OFFSET UNITYSDK_OFFSET(0x13AB0)
#define KFIKLIHGCCO_DKKAJLLOPJE_FJJCLCOKDKP_OFFSET UNITYSDK_OFFSET(0x13B50)
#define KFIKLIHGCCO_DKKAJLLOPJE_GDFIJIJDBIP_OFFSET UNITYSDK_OFFSET(0x13C50)
#define KFIKLIHGCCO_DKKAJLLOPJE_HAOJNJJGBBH_OFFSET UNITYSDK_OFFSET(0x13BC0)
#define KFIKLIHGCCO_DKKAJLLOPJE_IHBFCMKFGON_OFFSET UNITYSDK_OFFSET(0x13B20)
#define KFIKLIHGCCO_DKKAJLLOPJE_IHDFKKBDPNA_OFFSET UNITYSDK_OFFSET(0x13BB0)
#define KFIKLIHGCCO_DKKAJLLOPJE_KBLDFNJMNCI_OFFSET UNITYSDK_OFFSET(0x13B80)

inline static constexpr unsigned int KFIKLIHGCCO_DKKAJLLOPJE_TypeDefinitionIndex = 51769;

	struct alignas(4) KFIKLIHGCCO_DKKAJLLOPJE
	{
		::UnityEngine::Vector3 CILPFMCNEFL; // 0x10
		::UnityEngine::Vector3 OOEJKOLLFMO; // 0x1C
		::UnityEngine::Vector3 DNBJEHOLGNJ; // 0x28
		::UnityEngine::Vector3 JGPPFGLOMKJ; // 0x34
		::System::Int32 ILJDLCLJEOE; // 0x40
		::System::Int32 FFGNMAMDCJG; // 0x44
		::System::Int32 DLFDHNFNBDH; // 0x48
		::System::Single EOCAIMKBCBN; // 0x4C
		::System::Int32 OOECFAKCPIL; // 0x50
		::UnityEngine::Vector3Int DAHCKIHFAFL()
		{
			return ((::UnityEngine::Vector3Int(*)(::PVOID))((::PBYTE)hIl2Cpp + KFIKLIHGCCO_DKKAJLLOPJE_DAHCKIHFAFL_OFFSET))(this);
		}

		::UnityEngine::Vector3 IHBFCMKFGON(::System::Int32 a1, ::System::Int32 a2, ::UnityEngine::Vector2 a3)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + KFIKLIHGCCO_DKKAJLLOPJE_IHBFCMKFGON_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Vector3 FJJCLCOKDKP(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + KFIKLIHGCCO_DKKAJLLOPJE_FJJCLCOKDKP_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Vector3 KBLDFNJMNCI(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + KFIKLIHGCCO_DKKAJLLOPJE_KBLDFNJMNCI_OFFSET))(this, a1, a2, a3);
		}

		::Il2CppArray<::UnityEngine::Vector3>* IHDFKKBDPNA(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + KFIKLIHGCCO_DKKAJLLOPJE_IHDFKKBDPNA_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 HAOJNJJGBBH(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + KFIKLIHGCCO_DKKAJLLOPJE_HAOJNJJGBBH_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 GDFIJIJDBIP(::UnityEngine::Vector3Int a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3Int))((::PBYTE)hIl2Cpp + KFIKLIHGCCO_DKKAJLLOPJE_GDFIJIJDBIP_OFFSET))(this, a1);
		}

	};
