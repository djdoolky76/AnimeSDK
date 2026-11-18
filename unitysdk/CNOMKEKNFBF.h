#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowChessboardUID.h"
#include "unitysdk/System/Object.h"

#define CNOMKEKNFBF_APCKPKCNFJE_OFFSET UNITYSDK_OFFSET(0x145DA340)
#define CNOMKEKNFBF_DFIBDGKNBMP_OFFSET UNITYSDK_OFFSET(0x145DA330)
#define CNOMKEKNFBF_DPMMAKBMPGP_OFFSET UNITYSDK_OFFSET(0x145DA320)
#define CNOMKEKNFBF_JHFKDLFIIAK_OFFSET UNITYSDK_OFFSET(0x145DA350)
#define CNOMKEKNFBF__CTOR_OFFSET UNITYSDK_OFFSET(0x145D90B0)

inline static constexpr unsigned int CNOMKEKNFBF_TypeDefinitionIndex = 59807;

class CNOMKEKNFBF : public ::System::Object
{
public:
	::MoleMole::HollowChessboard::HollowChessboardUID _NBFMACLMPFI_k__BackingField; // 0x10
	::System::Int32 _HBLEIHCPMMP_k__BackingField; // 0x18

	::System::Void _ctor(::System::Int32 DKOFFFNEFJC, ::MoleMole::HollowChessboard::HollowChessboardUID BONICGBNDAA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::HollowChessboard::HollowChessboardUID))((::PBYTE)hIl2Cpp + CNOMKEKNFBF__CTOR_OFFSET))(this, DKOFFFNEFJC, BONICGBNDAA);
	}

	::System::Void DPMMAKBMPGP(::MoleMole::HollowChessboard::HollowChessboardUID EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowChessboardUID))((::PBYTE)hIl2Cpp + CNOMKEKNFBF_DPMMAKBMPGP_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void DFIBDGKNBMP(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CNOMKEKNFBF_DFIBDGKNBMP_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 APCKPKCNFJE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CNOMKEKNFBF_APCKPKCNFJE_OFFSET))(this);
	}

	::MoleMole::HollowChessboard::HollowChessboardUID JHFKDLFIIAK()
	{
		return ((::MoleMole::HollowChessboard::HollowChessboardUID(*)(::PVOID))((::PBYTE)hIl2Cpp + CNOMKEKNFBF_JHFKDLFIIAK_OFFSET))(this);
	}
};
