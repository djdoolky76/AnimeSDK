#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EUILayoutPlatform.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class GameObject; }

#define BDIGEKLNMGG_CPDJECGFLCD_LJMIPGJJELP_OFFSET UNITYSDK_OFFSET(0x1854D950)
#define BDIGEKLNMGG_CPDJECGFLCD_LKCEJIEJNDD_OFFSET UNITYSDK_OFFSET(0x1854D810)
#define BDIGEKLNMGG_CPDJECGFLCD_ONHFHGMLPHP_OFFSET UNITYSDK_OFFSET(0x1854DB70)
#define BDIGEKLNMGG_CPDJECGFLCD__CTOR_OFFSET UNITYSDK_OFFSET(0x1854D800)

inline static constexpr unsigned int BDIGEKLNMGG_CPDJECGFLCD_TypeDefinitionIndex = 74803;

class BDIGEKLNMGG_CPDJECGFLCD : public ::System::Object
{
public:
	::UnityEngine::GameObject* NGLKIKLLLFL; // 0x10
	::MoleMole::EUILayoutPlatform NMFOMLEJLEB; // 0x18

	::System::Void _ctor(::UnityEngine::GameObject* NGLKIKLLLFL)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + BDIGEKLNMGG_CPDJECGFLCD__CTOR_OFFSET))(this, NGLKIKLLLFL);
	}

	::System::Void LJMIPGJJELP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDIGEKLNMGG_CPDJECGFLCD_LJMIPGJJELP_OFFSET))(this);
	}

	::UnityEngine::GameObject* ONHFHGMLPHP()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDIGEKLNMGG_CPDJECGFLCD_ONHFHGMLPHP_OFFSET))(this);
	}

	::System::Void LKCEJIEJNDD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDIGEKLNMGG_CPDJECGFLCD_LKCEJIEJNDD_OFFSET))(this);
	}
};
