#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PKMJPMFCNBK.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BMPGIEHLACG_DEJBOKDOGCD_OFFSET UNITYSDK_OFFSET(0x18DA9A60)
#define BMPGIEHLACG_KHJELIBOECB_OFFSET UNITYSDK_OFFSET(0x18DA9E10)
#define BMPGIEHLACG__CTOR_OFFSET UNITYSDK_OFFSET(0x18DA9DA0)

inline static constexpr unsigned int BMPGIEHLACG_TypeDefinitionIndex = 51483;

class BMPGIEHLACG : public ::PKMJPMFCNBK
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* BGHPHIEKLHF; // 0x80
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* BBCAEGKKGGL; // 0x88
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* LMDLOJCDDKO; // 0x90
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* EMENNELNCED; // 0x98
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* HMOFJDDMFBN; // 0xA0
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* FHCFOIMHDJB; // 0xA8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMPGIEHLACG__CTOR_OFFSET))(this);
	}

	::System::Void DEJBOKDOGCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMPGIEHLACG_DEJBOKDOGCD_OFFSET))(this);
	}

	::System::Void KHJELIBOECB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMPGIEHLACG_KHJELIBOECB_OFFSET))(this);
	}
};
