#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/ColorModifyBlendData.h"
#include "unitysdk/MoleMole/HollowChessboard/ColorModifyInfo.h"
#include "unitysdk/MoleMole/HollowChessboard/RangeMask.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

#define EICNADEDEGA_BEFORERECYCLE_OFFSET UNITYSDK_OFFSET(0x10F34790)
#define EICNADEDEGA_ILEEFLAOOOM_OFFSET UNITYSDK_OFFSET(0x10F347D0)
#define EICNADEDEGA__CTOR_OFFSET UNITYSDK_OFFSET(0x10F34840)

inline static constexpr unsigned int EICNADEDEGA_TypeDefinitionIndex = 75489;

class EICNADEDEGA : public ::System::Object
{
public:
	::System::Nullable_1<::MoleMole::HollowChessboard::ColorModifyBlendData> OEKPKMKNBKJ; // 0x10
	::System::Byte _padding0[0x38];
	::MoleMole::HollowChessboard::ColorModifyInfo KNJCFPNOJEL; // 0x50
	::MoleMole::HollowChessboard::RangeMask ABCCLLGMDDC; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EICNADEDEGA__CTOR_OFFSET))(this);
	}

	::System::Void BeforeRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EICNADEDEGA_BEFORERECYCLE_OFFSET))(this);
	}

	::System::UInt32 ILEEFLAOOOM()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EICNADEDEGA_ILEEFLAOOOM_OFFSET))(this);
	}
};
