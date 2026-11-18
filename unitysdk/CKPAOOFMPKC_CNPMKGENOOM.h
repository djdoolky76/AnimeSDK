#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MoleMole/Vector2Int.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"

#define CKPAOOFMPKC_CNPMKGENOOM_EJLOOHEJBJK_OFFSET UNITYSDK_OFFSET(0x147AA2C0)
#define CKPAOOFMPKC_CNPMKGENOOM__CTOR_OFFSET UNITYSDK_OFFSET(0x147AA2B0)

inline static constexpr unsigned int CKPAOOFMPKC_CNPMKGENOOM_TypeDefinitionIndex = 90494;

class CKPAOOFMPKC_CNPMKGENOOM : public ::System::Object
{
public:
	::System::Int32 ABHBKFJKINO; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_CNPMKGENOOM__CTOR_OFFSET))(this);
	}

	::System::Boolean EJLOOHEJBJK(::System::Collections::Generic::KeyValuePair_2<::MoleMole::Vector2Int, ::System::Int32> DLBHJOGKNOC)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::MoleMole::Vector2Int, ::System::Int32>))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_CNPMKGENOOM_EJLOOHEJBJK_OFFSET))(this, DLBHJOGKNOC);
	}
};
