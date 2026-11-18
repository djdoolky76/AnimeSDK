#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PAMPOBIPLCE.h"
#include "unitysdk/System/Object.h"

class OCIKBEJKPCB;
namespace System { class EventArgs; }
namespace System { template <typename T> class Action_1; }

#define OCIKBEJKPCB_LANALJJPLGC_ALNCIIKODBL_OFFSET UNITYSDK_OFFSET(0xFB50D90)
#define OCIKBEJKPCB_LANALJJPLGC_NDFMCLMBECO_OFFSET UNITYSDK_OFFSET(0xFB50E10)
#define OCIKBEJKPCB_LANALJJPLGC__CTOR_OFFSET UNITYSDK_OFFSET(0xFB50D80)

inline static constexpr unsigned int OCIKBEJKPCB_LANALJJPLGC_TypeDefinitionIndex = 66584;

class OCIKBEJKPCB_LANALJJPLGC : public ::System::Object
{
public:
	::System::Action_1<::System::EventArgs*>* PHHDHIBOCKA; // 0x10
	::OCIKBEJKPCB* KLHPEBKNIFB; // 0x18
	::PAMPOBIPLCE GEPABHJBIAH; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCIKBEJKPCB_LANALJJPLGC__CTOR_OFFSET))(this);
	}

	::System::Void ALNCIIKODBL(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + OCIKBEJKPCB_LANALJJPLGC_ALNCIIKODBL_OFFSET))(this, KOIBHLHLMFC);
	}

	::System::Void NDFMCLMBECO(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + OCIKBEJKPCB_LANALJJPLGC_NDFMCLMBECO_OFFSET))(this, KOIBHLHLMFC);
	}
};
