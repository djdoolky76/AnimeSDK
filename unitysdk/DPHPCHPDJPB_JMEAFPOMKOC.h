#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/DPHPCHPDJPB_HNDNPODNEFI.h"

class DPHPCHPDJPB;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Cameras { class CameraOverrideTrackEntry; }
namespace System { template <typename T> class Func_1; }

#define DPHPCHPDJPB_JMEAFPOMKOC_DNJDJOCONPB_OFFSET UNITYSDK_OFFSET(0x15880E40)
#define DPHPCHPDJPB_JMEAFPOMKOC_FMDNBMOIKAC_OFFSET UNITYSDK_OFFSET(0x15880DB0)
#define DPHPCHPDJPB_JMEAFPOMKOC_NFPABKLFLEP_OFFSET UNITYSDK_OFFSET(0x15881040)
#define DPHPCHPDJPB_JMEAFPOMKOC__CTOR_OFFSET UNITYSDK_OFFSET(0x15880DA0)

inline static constexpr unsigned int DPHPCHPDJPB_JMEAFPOMKOC_TypeDefinitionIndex = 92832;

class DPHPCHPDJPB_JMEAFPOMKOC : public ::System::Object
{
public:
	::MoleMole::Cameras::CameraOverrideTrackEntry* AAIJGGIEOGK; // 0x10
	::MoleMole::Battle::Entity* KECKGDFIALJ; // 0x18
	::DPHPCHPDJPB* KLHPEBKNIFB; // 0x20
	::System::Func_1<::System::Single>* FFMGICPLKFB; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPHPCHPDJPB_JMEAFPOMKOC__CTOR_OFFSET))(this);
	}

	::System::Single FMDNBMOIKAC()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DPHPCHPDJPB_JMEAFPOMKOC_FMDNBMOIKAC_OFFSET))(this);
	}

	::System::Void DNJDJOCONPB(::DPHPCHPDJPB_HNDNPODNEFI IPMMCGDMODG)
	{
		return ((::System::Void(*)(::PVOID, ::DPHPCHPDJPB_HNDNPODNEFI))((::PBYTE)hIl2Cpp + DPHPCHPDJPB_JMEAFPOMKOC_DNJDJOCONPB_OFFSET))(this, IPMMCGDMODG);
	}

	::System::Single NFPABKLFLEP()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DPHPCHPDJPB_JMEAFPOMKOC_NFPABKLFLEP_OFFSET))(this);
	}
};
