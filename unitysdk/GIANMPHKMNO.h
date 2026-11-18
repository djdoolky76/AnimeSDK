#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define GIANMPHKMNO__CTOR_OFFSET UNITYSDK_OFFSET(0x10EF6380)

inline static constexpr unsigned int GIANMPHKMNO_TypeDefinitionIndex = 61513;

class GIANMPHKMNO : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* HIDKBLMEAPE; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIANMPHKMNO__CTOR_OFFSET))(this);
	}
};
