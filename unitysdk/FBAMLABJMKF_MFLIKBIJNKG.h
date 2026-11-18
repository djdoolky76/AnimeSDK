#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/Vector2Int.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FBAMLABJMKF_OIDABGFDDDO.h"
#include "unitysdk/System/Nullable_1.h"

class FBAMLABJMKF;

#define FBAMLABJMKF_MFLIKBIJNKG_BJCNGKKNLJJ_OFFSET UNITYSDK_OFFSET(0x172606A0)
#define FBAMLABJMKF_MFLIKBIJNKG_EIDBAOGPEBA_OFFSET UNITYSDK_OFFSET(0x17260A50)
#define FBAMLABJMKF_MFLIKBIJNKG_FAMFPDEKJJC_OFFSET UNITYSDK_OFFSET(0x17260970)
#define FBAMLABJMKF_MFLIKBIJNKG_GDDKCHDCJIC_OFFSET UNITYSDK_OFFSET(0x17260D80)
#define FBAMLABJMKF_MFLIKBIJNKG__CTOR_OFFSET UNITYSDK_OFFSET(0x17260690)

inline static constexpr unsigned int FBAMLABJMKF_MFLIKBIJNKG_TypeDefinitionIndex = 78157;

class FBAMLABJMKF_MFLIKBIJNKG : public ::System::Object
{
public:
	::FBAMLABJMKF* KLHPEBKNIFB; // 0x10
	::MoleMole::HollowChessboard::HollowCell PADJNMGMGHO; // 0x18
	::MoleMole::HollowChessboard::HollowCell KDEHMPGOCEP; // 0x24
	::MoleMole::Vector2Int JCGOKONAKKK; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBAMLABJMKF_MFLIKBIJNKG__CTOR_OFFSET))(this);
	}

	::System::Boolean BJCNGKKNLJJ(::MoleMole::HollowChessboard::HollowCell KHGFAKJKDGG, ::MoleMole::HollowChessboard::HollowCell HODAIDNDKHD)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + FBAMLABJMKF_MFLIKBIJNKG_BJCNGKKNLJJ_OFFSET))(this, KHGFAKJKDGG, HODAIDNDKHD);
	}

	::System::Double FAMFPDEKJJC(::MoleMole::HollowChessboard::HollowCell HFMHOELKCAJ)
	{
		return ((::System::Double(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + FBAMLABJMKF_MFLIKBIJNKG_FAMFPDEKJJC_OFFSET))(this, HFMHOELKCAJ);
	}

	::System::Nullable_1<::System::Double> EIDBAOGPEBA(::FBAMLABJMKF_OIDABGFDDDO& param_0)
	{
		return ((::System::Nullable_1<::System::Double>(*)(::PVOID, ::FBAMLABJMKF_OIDABGFDDDO&))((::PBYTE)hIl2Cpp + FBAMLABJMKF_MFLIKBIJNKG_EIDBAOGPEBA_OFFSET))(this, param_0);
	}

	::System::Double GDDKCHDCJIC(::System::Boolean GLCBGDNLFDO, ::MoleMole::HollowChessboard::HollowCell KAOHANABNKH, ::MoleMole::HollowChessboard::HollowCell DPCFDCKHEDO)
	{
		return ((::System::Double(*)(::PVOID, ::System::Boolean, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + FBAMLABJMKF_MFLIKBIJNKG_GDDKCHDCJIC_OFFSET))(this, GLCBGDNLFDO, KAOHANABNKH, DPCFDCKHEDO);
	}
};
