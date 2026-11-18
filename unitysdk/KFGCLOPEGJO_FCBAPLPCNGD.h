#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MNAGAGOHIGH.h"

class IBENDELLLAO;
class KFGCLOPEGJO_HKFNAAPGIJK;
template <typename T> class BFMLEHMAGAK_1;

#define KFGCLOPEGJO_FCBAPLPCNGD_PKFIPLIEIBL_OFFSET UNITYSDK_OFFSET(0x1A2C5880)
#define KFGCLOPEGJO_FCBAPLPCNGD__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2C5870)

inline static constexpr unsigned int KFGCLOPEGJO_FCBAPLPCNGD_TypeDefinitionIndex = 78950;

class KFGCLOPEGJO_FCBAPLPCNGD : public ::System::Object
{
public:
	::KFGCLOPEGJO_HKFNAAPGIJK* FOBKJGCBGKP; // 0x10
	::BFMLEHMAGAK_1<::IBENDELLLAO*>* HALODMEBKNN; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFGCLOPEGJO_FCBAPLPCNGD__CTOR_OFFSET))(this);
	}

	::System::Void PKFIPLIEIBL(::MNAGAGOHIGH& KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::MNAGAGOHIGH&))((::PBYTE)hIl2Cpp + KFGCLOPEGJO_FCBAPLPCNGD_PKFIPLIEIBL_OFFSET))(this, KOIBHLHLMFC);
	}
};
