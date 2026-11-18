#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Vector2Int.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NDPAFCHJNPG_LCIMHNJNBFJ_OFFSET UNITYSDK_OFFSET(0x16B672C0)
#define NDPAFCHJNPG__CTOR_OFFSET UNITYSDK_OFFSET(0x16B67230)

inline static constexpr unsigned int NDPAFCHJNPG_TypeDefinitionIndex = 51792;

class NDPAFCHJNPG : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::Vector2Int>*>* CELGKCKLPJC; // 0x10
	::System::Int32 BDEDDEGJFKL; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDPAFCHJNPG__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::MoleMole::Vector2Int>* LCIMHNJNBFJ(::System::Int32 GACLGJLHNAJ)
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::Vector2Int>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NDPAFCHJNPG_LCIMHNJNBFJ_OFFSET))(this, GACLGJLHNAJ);
	}
};
