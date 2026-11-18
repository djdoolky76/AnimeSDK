#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MACLIDNIBBE.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define IDBCIENGAAJ_PHAELKNCPLK_OFFSET UNITYSDK_OFFSET(0x1F2DBE10)
#define IDBCIENGAAJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1F2DBD80)

inline static constexpr unsigned int IDBCIENGAAJ_TypeDefinitionIndex = 8148;

class IDBCIENGAAJ : public ::MACLIDNIBBE
{
public:
	::System::Collections::Generic::IReadOnlyList_1<::MACLIDNIBBE*>* _CKMKIHOHCBF_k__BackingField; // 0x18

	::System::Void _ctor(::System::String* PPKJBDEOJGB, ::System::Collections::Generic::IReadOnlyList_1<::MACLIDNIBBE*>* HBEPDMIABKM)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::IReadOnlyList_1<::MACLIDNIBBE*>*))((::PBYTE)hIl2Cpp + IDBCIENGAAJ__CTOR_OFFSET))(this, PPKJBDEOJGB, HBEPDMIABKM);
	}

	::System::Collections::Generic::IReadOnlyList_1<::MACLIDNIBBE*>* PHAELKNCPLK()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::MACLIDNIBBE*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDBCIENGAAJ_PHAELKNCPLK_OFFSET))(this);
	}
};
