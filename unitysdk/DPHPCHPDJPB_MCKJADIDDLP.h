#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OCLPKBONCJJ.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/DPHPCHPDJPB_HNDNPODNEFI.h"

class DPHPCHPDJPB;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Cameras { class CameraOverrideTrackEntry; }
namespace System { template <typename T> class Func_1; }

#define DPHPCHPDJPB_MCKJADIDDLP_KPPGIAFAMAO_OFFSET UNITYSDK_OFFSET(0x13532630)
#define DPHPCHPDJPB_MCKJADIDDLP_LKALNIOIDDJ_OFFSET UNITYSDK_OFFSET(0x135323F0)
#define DPHPCHPDJPB_MCKJADIDDLP__CTOR_OFFSET UNITYSDK_OFFSET(0x135323E0)

inline static constexpr unsigned int DPHPCHPDJPB_MCKJADIDDLP_TypeDefinitionIndex = 92833;

class DPHPCHPDJPB_MCKJADIDDLP : public ::System::Object
{
public:
	::System::Func_1<::System::Single>* DLMJCFBENGB; // 0x10
	::DPHPCHPDJPB* KLHPEBKNIFB; // 0x18
	::MoleMole::Cameras::CameraOverrideTrackEntry* AAIJGGIEOGK; // 0x20
	::System::Nullable_1<::OCLPKBONCJJ> HCOEKGPHCLK; // 0x28
	::System::Byte _padding0[0x20];
	::MoleMole::Battle::Entity* NGODDCIOJDP; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPHPCHPDJPB_MCKJADIDDLP__CTOR_OFFSET))(this);
	}

	::System::Void LKALNIOIDDJ(::DPHPCHPDJPB_HNDNPODNEFI IPMMCGDMODG)
	{
		return ((::System::Void(*)(::PVOID, ::DPHPCHPDJPB_HNDNPODNEFI))((::PBYTE)hIl2Cpp + DPHPCHPDJPB_MCKJADIDDLP_LKALNIOIDDJ_OFFSET))(this, IPMMCGDMODG);
	}

	::System::Single KPPGIAFAMAO()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DPHPCHPDJPB_MCKJADIDDLP_KPPGIAFAMAO_OFFSET))(this);
	}
};
