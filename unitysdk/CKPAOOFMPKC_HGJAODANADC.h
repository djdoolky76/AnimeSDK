#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MoleMole/Vector2Int.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"

#define CKPAOOFMPKC_HGJAODANADC_HMNEJKGJNJA_OFFSET UNITYSDK_OFFSET(0x16A330F0)
#define CKPAOOFMPKC_HGJAODANADC__CTOR_OFFSET UNITYSDK_OFFSET(0x16A330E0)

inline static constexpr unsigned int CKPAOOFMPKC_HGJAODANADC_TypeDefinitionIndex = 90498;

class CKPAOOFMPKC_HGJAODANADC : public ::System::Object
{
public:
	::System::Int32 ABHBKFJKINO; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_HGJAODANADC__CTOR_OFFSET))(this);
	}

	::System::Boolean HMNEJKGJNJA(::System::Collections::Generic::KeyValuePair_2<::MoleMole::Vector2Int, ::System::Int32> NFCFJIEHJAJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::MoleMole::Vector2Int, ::System::Int32>))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_HGJAODANADC_HMNEJKGJNJA_OFFSET))(this, NFCFJIEHJAJ);
	}
};
