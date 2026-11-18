#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PJIBENBFNKE.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/GBKEMPEEIBA.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CCPJCGIACMM_FPOIFBDCDKN_OFFSET UNITYSDK_OFFSET(0x1573B370)
#define CCPJCGIACMM_IGFBLNKEDND_OFFSET UNITYSDK_OFFSET(0x1573B5A0)
#define CCPJCGIACMM__CTOR_OFFSET UNITYSDK_OFFSET(0x1573B2F0)

inline static constexpr unsigned int CCPJCGIACMM_TypeDefinitionIndex = 9741;

class CCPJCGIACMM : public ::PJIBENBFNKE
{
public:
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* LDANBLCGENH; // 0x40

	::System::Void _ctor(::GBKEMPEEIBA LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::GBKEMPEEIBA, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + CCPJCGIACMM__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Collections::Generic::IReadOnlyList_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* IGFBLNKEDND()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCPJCGIACMM_IGFBLNKEDND_OFFSET))(this);
	}

	static ::System::Void FPOIFBDCDKN(::System::String* FDCGKHJOHPE, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* IEGPJBDLMGN)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>*))((::PBYTE)hIl2Cpp + CCPJCGIACMM_FPOIFBDCDKN_OFFSET))(FDCGKHJOHPE, IEGPJBDLMGN);
	}
};
