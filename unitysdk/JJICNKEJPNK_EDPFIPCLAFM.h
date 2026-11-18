#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/ColorModifyBlendData.h"
#include "unitysdk/MoleMole/HollowChessboard/ColorModifyInfo.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

#define JJICNKEJPNK_EDPFIPCLAFM__CTOR_OFFSET UNITYSDK_OFFSET(0x15582470)

inline static constexpr unsigned int JJICNKEJPNK_EDPFIPCLAFM_TypeDefinitionIndex = 55363;

class JJICNKEJPNK_EDPFIPCLAFM : public ::System::Object
{
public:
	::System::Nullable_1<::MoleMole::HollowChessboard::ColorModifyBlendData> OEKPKMKNBKJ; // 0x10
	::System::Byte _padding0[0x38];
	::MoleMole::HollowChessboard::ColorModifyInfo KNJCFPNOJEL; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJICNKEJPNK_EDPFIPCLAFM__CTOR_OFFSET))(this);
	}
};
