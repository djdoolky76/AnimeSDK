#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define DAILNGGFHFP_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x19D4F170)
#define DAILNGGFHFP__CTOR_OFFSET UNITYSDK_OFFSET(0x19D4F110)

inline static constexpr unsigned int DAILNGGFHFP_TypeDefinitionIndex = 66223;

class DAILNGGFHFP : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* DCMEJIEOIMP; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAILNGGFHFP__CTOR_OFFSET))(this);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAILNGGFHFP_NPOLNFDBOOD_OFFSET))(this);
	}
};
