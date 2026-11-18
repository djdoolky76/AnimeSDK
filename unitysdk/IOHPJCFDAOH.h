#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/RenderDataHandle.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define IOHPJCFDAOH_KLDMODBMCDG_OFFSET UNITYSDK_OFFSET(0x282350)

inline static constexpr unsigned int IOHPJCFDAOH_TypeDefinitionIndex = 73294;

struct alignas(8) IOHPJCFDAOH
{
	::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::RenderDataHandle>* HGGGOHPDIJB; // 0x10
	::System::Nullable_1<::System::Int32> AINFLEFDINO; // 0x18
	::System::Nullable_1<::System::Int32> LBJMDGPBILB; // 0x20

	::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::RenderDataHandle>* KLDMODBMCDG()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::RenderDataHandle>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IOHPJCFDAOH_KLDMODBMCDG_OFFSET))(this);
	}
};
