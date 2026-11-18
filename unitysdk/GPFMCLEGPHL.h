#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/MoleMole/Battle/NPCSinglePlayableAnimLayer.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Animations/AnimationClipPlayable.h"

namespace UnityEngine { class AvatarMask; }

#define GPFMCLEGPHL_EJLKFNODLLI_OFFSET UNITYSDK_OFFSET(0x125F0160)
#define GPFMCLEGPHL_GBIKBPHCLHI_OFFSET UNITYSDK_OFFSET(0x125F0380)
#define GPFMCLEGPHL_HEIKALDIEIH_OFFSET UNITYSDK_OFFSET(0x125F0440)
#define GPFMCLEGPHL_HNDGJKPNIHA_OFFSET UNITYSDK_OFFSET(0x125F01C0)
#define GPFMCLEGPHL__CTOR_OFFSET UNITYSDK_OFFSET(0x125F0150)

inline static constexpr unsigned int GPFMCLEGPHL_TypeDefinitionIndex = 57719;

class GPFMCLEGPHL : public ::System::Object
{
public:
	::Foundation::AssetRequestHandle JAFNFIEENKN; // 0x10
	::UnityEngine::AvatarMask* PBDLLFLACGD; // 0x30
	::UnityEngine::Animations::AnimationClipPlayable GODNGAAGNPD; // 0x38
	::System::Single BNNDMDLEJDC; // 0x48
	::System::Single PKKDLNOFMDD; // 0x4C
	::System::Single IECOJPMPJMP; // 0x50
	::System::Int32 EAECOJGEGFP; // 0x54
	::MoleMole::Battle::NPCSinglePlayableAnimLayer MIFEPANHAJM; // 0x58
	::System::Boolean BOHKINIBDDP; // 0x5C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPFMCLEGPHL__CTOR_OFFSET))(this);
	}

	::System::Void EJLKFNODLLI(::System::Single IECOJPMPJMP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GPFMCLEGPHL_EJLKFNODLLI_OFFSET))(this, IECOJPMPJMP);
	}

	::System::Void HNDGJKPNIHA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPFMCLEGPHL_HNDGJKPNIHA_OFFSET))(this);
	}

	::System::Boolean GBIKBPHCLHI(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GPFMCLEGPHL_GBIKBPHCLHI_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void HEIKALDIEIH(::System::Single BNNDMDLEJDC, ::System::Single PALKJEELJHL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + GPFMCLEGPHL_HEIKALDIEIH_OFFSET))(this, BNNDMDLEJDC, PALKJEELJHL);
	}
};
