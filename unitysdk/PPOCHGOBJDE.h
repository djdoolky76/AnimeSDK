#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/Config/EntityType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Quaternion.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Cubemap; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }

#define PPOCHGOBJDE_BBFEKDGHOIJ_OFFSET UNITYSDK_OFFSET(0x1C67C670)
#define PPOCHGOBJDE_CJGLONBBIOF_OFFSET UNITYSDK_OFFSET(0x1C67B3C0)
#define PPOCHGOBJDE_DLGNBPKEOGA_OFFSET UNITYSDK_OFFSET(0x1C67B0D0)
#define PPOCHGOBJDE_FBEBBLOKDMN_OFFSET UNITYSDK_OFFSET(0x1C67C140)
#define PPOCHGOBJDE_IFNNGCKPDCP_OFFSET UNITYSDK_OFFSET(0x1C67C5B0)
#define PPOCHGOBJDE_IPDPHGMBPGK_OFFSET UNITYSDK_OFFSET(0x1C67B640)
#define PPOCHGOBJDE_JFLLMPAJBJL_OFFSET UNITYSDK_OFFSET(0x1C67C660)
#define PPOCHGOBJDE_MBEJGHEHNCK_OFFSET UNITYSDK_OFFSET(0x1C67C710)
#define PPOCHGOBJDE_NELFFKGPPOO_OFFSET UNITYSDK_OFFSET(0x1C67B3D0)
#define PPOCHGOBJDE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C67B010)

inline static constexpr unsigned int PPOCHGOBJDE_TypeDefinitionIndex = 55025;

class PPOCHGOBJDE : public ::System::Object
{
public:
	::UnityEngine::GameObject* KNMFFMHPDAE; // 0x10
	::Il2CppArray<::System::String*>* BDDDAIGBIBD; // 0x18
	::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::Il2CppArray<::UnityEngine::Material*>*>* NBPLHGKJGIP; // 0x20
	::UnityEngine::GameObject* IDDBALCKHNM; // 0x28
	::Foundation::AssetPath BJHBKPCLEJC; // 0x30
	::Foundation::AssetPath AOLEOBIOKLH; // 0x40
	::System::Collections::Generic::List_1<::UnityEngine::Material*>* IILPGCCMHFE; // 0x50
	::MoleMole::Config::EntityType BHLMDNKHLCB; // 0x58
	::System::Boolean PODJHCEIBJG; // 0x5C
	::System::Byte _padding0[0x3];
	::System::Int32 HNPJJGGBLPC; // 0x60
	::System::Int32 ANNAENDJPBH; // 0x64
	::System::Boolean EANGLKGLJNC; // 0x68
	::System::Boolean IEJOCGIMAFN; // 0x69
	::System::Boolean AEKMHDOPOAN; // 0x6A
	::System::Boolean IOHMELDELIG; // 0x6B
	::System::UInt32 HPJJNDDNAFJ; // 0x6C
	::System::UInt32 DMIDEFIKDKB; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPOCHGOBJDE__CTOR_OFFSET))(this);
	}

	::System::Boolean DLGNBPKEOGA(::UnityEngine::Material* KNNDDLMOKCG)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + PPOCHGOBJDE_DLGNBPKEOGA_OFFSET))(this, KNNDDLMOKCG);
	}

	::UnityEngine::GameObject* CJGLONBBIOF()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + PPOCHGOBJDE_CJGLONBBIOF_OFFSET))(this);
	}

	::System::Void NELFFKGPPOO(::System::Int32 KMOHKCADPNA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PPOCHGOBJDE_NELFFKGPPOO_OFFSET))(this, KMOHKCADPNA);
	}

	::System::Void IPDPHGMBPGK(::UnityEngine::Color JBBFCGAMDHI, ::System::Single JBFOAKELCNK, ::UnityEngine::Quaternion GJNLCLDFFIN, ::UnityEngine::Color HIDLPOCILDG, ::UnityEngine::Cubemap* NAAEMOIBLLF, ::System::Single DPOJHHIIDEB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Color, ::System::Single, ::UnityEngine::Quaternion, ::UnityEngine::Color, ::UnityEngine::Cubemap*, ::System::Single))((::PBYTE)hIl2Cpp + PPOCHGOBJDE_IPDPHGMBPGK_OFFSET))(this, JBBFCGAMDHI, JBFOAKELCNK, GJNLCLDFFIN, HIDLPOCILDG, NAAEMOIBLLF, DPOJHHIIDEB);
	}

	::System::Void IFNNGCKPDCP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPOCHGOBJDE_IFNNGCKPDCP_OFFSET))(this);
	}

	::UnityEngine::GameObject* JFLLMPAJBJL()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + PPOCHGOBJDE_JFLLMPAJBJL_OFFSET))(this);
	}

	::System::Void FBEBBLOKDMN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPOCHGOBJDE_FBEBBLOKDMN_OFFSET))(this);
	}

	::System::Void BBFEKDGHOIJ(::UnityEngine::GameObject* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + PPOCHGOBJDE_BBFEKDGHOIJ_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void MBEJGHEHNCK(::UnityEngine::GameObject* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + PPOCHGOBJDE_MBEJGHEHNCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
