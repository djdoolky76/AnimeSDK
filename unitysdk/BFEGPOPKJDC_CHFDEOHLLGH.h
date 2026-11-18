#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BFEGPOPKJDC;
namespace System::Threading { class ManualResetEvent; }

#define BFEGPOPKJDC_CHFDEOHLLGH_KKIAHJODOIA_OFFSET UNITYSDK_OFFSET(0x1E577520)
#define BFEGPOPKJDC_CHFDEOHLLGH_PGMEJLDDHFI_OFFSET UNITYSDK_OFFSET(0x1E5773C0)
#define BFEGPOPKJDC_CHFDEOHLLGH__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5773B0)

inline static constexpr unsigned int BFEGPOPKJDC_CHFDEOHLLGH_TypeDefinitionIndex = 94858;

class BFEGPOPKJDC_CHFDEOHLLGH : public ::System::Object
{
public:
	::BFEGPOPKJDC* BKDIOKCNBBB; // 0x10
	::System::Threading::ManualResetEvent* GEGMGKIHEDE; // 0x18
	::System::Int32 IEHGAPHHJCG; // 0x20
	::System::Int32 PHMKIEMHJJL; // 0x24

	::System::Void _ctor(::System::Int32 GIAEPMKCBIB, ::System::Int32 DOBFFIICAII, ::BFEGPOPKJDC* JODLKLJFPPF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::BFEGPOPKJDC*))((::PBYTE)hIl2Cpp + BFEGPOPKJDC_CHFDEOHLLGH__CTOR_OFFSET))(this, GIAEPMKCBIB, DOBFFIICAII, JODLKLJFPPF);
	}

	::System::Void PGMEJLDDHFI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFEGPOPKJDC_CHFDEOHLLGH_PGMEJLDDHFI_OFFSET))(this);
	}

	::System::Void KKIAHJODOIA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFEGPOPKJDC_CHFDEOHLLGH_KKIAHJODOIA_OFFSET))(this);
	}
};
