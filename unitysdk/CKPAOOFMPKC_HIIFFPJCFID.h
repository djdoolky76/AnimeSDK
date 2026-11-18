#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Vector2Int.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define CKPAOOFMPKC_HIIFFPJCFID_EAMOKNMGMPD_OFFSET UNITYSDK_OFFSET(0x168744E0)
#define CKPAOOFMPKC_HIIFFPJCFID__CTOR_OFFSET UNITYSDK_OFFSET(0x168744D0)

inline static constexpr unsigned int CKPAOOFMPKC_HIIFFPJCFID_TypeDefinitionIndex = 90497;

class CKPAOOFMPKC_HIIFFPJCFID : public ::System::Object
{
public:
	::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::MoleMole::Vector2Int, ::System::Int32>, ::System::Boolean>* AMHGBGMOMLL; // 0x10
	::System::Int32 ABHBKFJKINO; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_HIIFFPJCFID__CTOR_OFFSET))(this);
	}

	::System::Boolean EAMOKNMGMPD(::System::Collections::Generic::KeyValuePair_2<::MoleMole::Vector2Int, ::System::Int32> DLBHJOGKNOC)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::MoleMole::Vector2Int, ::System::Int32>))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_HIIFFPJCFID_EAMOKNMGMPD_OFFSET))(this, DLBHJOGKNOC);
	}
};
