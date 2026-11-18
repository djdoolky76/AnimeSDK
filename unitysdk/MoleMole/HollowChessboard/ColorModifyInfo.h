#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/PieceColorModifyRequest_ColorModifyRequestType.h"
#include "unitysdk/MoleMole/HollowChessboard/RangeMask.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int ColorModifyInfo_TypeDefinitionIndex = 67060;

	struct alignas(8) ColorModifyInfo
	{
		::MoleMole::HollowChessboard::RangeMask RangeMask; // 0x10
		::System::Nullable_1<::UnityEngine::Color> ModifyColor; // 0x14
		::System::Byte _padding0[0xC];
		::System::Nullable_1<::UnityEngine::Vector4> SccInfo; // 0x28
		::System::Byte _padding1[0xC];
		::MoleMole::HollowChessboard::PieceColorModifyRequest_ColorModifyRequestType RequestType; // 0x3C
	};
}
