#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define GIIFGADGIBA_EBDPFCIDGAD_OFFSET UNITYSDK_OFFSET(0x15B1DBF0)
#define GIIFGADGIBA_EOLEBBMPFMC_OFFSET UNITYSDK_OFFSET(0x15B1DBE0)
#define GIIFGADGIBA_MKDIKFDCMBI_OFFSET UNITYSDK_OFFSET(0x15B1DBB0)
#define GIIFGADGIBA_ODOHJNPMPLF_OFFSET UNITYSDK_OFFSET(0x15B1DBD0)
#define GIIFGADGIBA__CTOR_OFFSET UNITYSDK_OFFSET(0x15B1DB90)

inline static constexpr unsigned int GIIFGADGIBA_TypeDefinitionIndex = 40869;

class GIIFGADGIBA : public ::System::Object
{
public:
	::UnityEngine::Vector3 _MPKFOCIOHKD_k__BackingField; // 0x10
	::UnityEngine::Vector3 _FOENCOPEOBD_k__BackingField; // 0x1C
	::System::Boolean DMHNHOOMADA; // 0x28

	::System::Void _ctor(::UnityEngine::Vector3 GIAEPMKCBIB, ::UnityEngine::Vector3 DOBFFIICAII)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + GIIFGADGIBA__CTOR_OFFSET))(this, GIAEPMKCBIB, DOBFFIICAII);
	}

	::UnityEngine::Vector3 MKDIKFDCMBI()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + GIIFGADGIBA_MKDIKFDCMBI_OFFSET))(this);
	}

	::System::Void ODOHJNPMPLF(::UnityEngine::Vector3 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + GIIFGADGIBA_ODOHJNPMPLF_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void EOLEBBMPFMC(::UnityEngine::Vector3 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + GIIFGADGIBA_EOLEBBMPFMC_OFFSET))(this, EGEGIMGMJHN);
	}

	::UnityEngine::Vector3 EBDPFCIDGAD()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + GIIFGADGIBA_EBDPFCIDGAD_OFFSET))(this);
	}
};
