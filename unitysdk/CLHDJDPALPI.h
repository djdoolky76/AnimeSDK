#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Level/RatingType.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLHDJDPALPI__CTOR_OFFSET UNITYSDK_OFFSET(0x193E6D50)

inline static constexpr unsigned int CLHDJDPALPI_TypeDefinitionIndex = 91217;

class CLHDJDPALPI : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* DOMAPFPBLKD; // 0x10
	::System::Int32 CKELOFDFEEM; // 0x18
	::MoleMole::Level::RatingType EGODKLPFBFF; // 0x1C
	::System::Int32 EKGMLLJEJHM; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLHDJDPALPI__CTOR_OFFSET))(this);
	}
};
