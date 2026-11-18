#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MoleMole/Vector2Int.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"

class CKPAOOFMPKC;
namespace MoleMole { class UIOverlordFeastDishObjectControlWidgetController; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CKPAOOFMPKC_LMNLECCKCGI_DBNKBNCLPJC_OFFSET UNITYSDK_OFFSET(0x159E0260)
#define CKPAOOFMPKC_LMNLECCKCGI_HPKGDCAHBBA_OFFSET UNITYSDK_OFFSET(0x159E0200)
#define CKPAOOFMPKC_LMNLECCKCGI_OFJHFHIGAEH_OFFSET UNITYSDK_OFFSET(0x159E02C0)
#define CKPAOOFMPKC_LMNLECCKCGI_OPJBHBLFBGN_OFFSET UNITYSDK_OFFSET(0x159E0390)
#define CKPAOOFMPKC_LMNLECCKCGI__CTOR_OFFSET UNITYSDK_OFFSET(0x159E01F0)

inline static constexpr unsigned int CKPAOOFMPKC_LMNLECCKCGI_TypeDefinitionIndex = 90500;

class CKPAOOFMPKC_LMNLECCKCGI : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* IFFNIKIGEBG; // 0x10
	::CKPAOOFMPKC* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_LMNLECCKCGI__CTOR_OFFSET))(this);
	}

	::System::Boolean HPKGDCAHBBA(::System::Collections::Generic::KeyValuePair_2<::MoleMole::Vector2Int, ::System::Int32> DLBHJOGKNOC)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::MoleMole::Vector2Int, ::System::Int32>))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_LMNLECCKCGI_HPKGDCAHBBA_OFFSET))(this, DLBHJOGKNOC);
	}

	::System::Boolean DBNKBNCLPJC(::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_LMNLECCKCGI_DBNKBNCLPJC_OFFSET))(this, ABHBKFJKINO);
	}

	::System::Boolean OFJHFHIGAEH(::MoleMole::UIOverlordFeastDishObjectControlWidgetController* JOLDOMEIKEF)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIOverlordFeastDishObjectControlWidgetController*))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_LMNLECCKCGI_OFJHFHIGAEH_OFFSET))(this, JOLDOMEIKEF);
	}

	::System::Boolean OPJBHBLFBGN(::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_LMNLECCKCGI_OPJBHBLFBGN_OFFSET))(this, ABHBKFJKINO);
	}
};
