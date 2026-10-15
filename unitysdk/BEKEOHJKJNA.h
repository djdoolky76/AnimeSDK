#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NBCAOOBFHEA.h"
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BEKEOHJKJNA_CNHKDDJGFAA_OFFSET UNITYSDK_OFFSET(0x2E81280)
#define BEKEOHJKJNA_DNKPBLIOAOB_OFFSET UNITYSDK_OFFSET(0x2E81270)
#define BEKEOHJKJNA_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xF8A0)

inline static constexpr unsigned int BEKEOHJKJNA_TypeDefinitionIndex = 78622;

	struct alignas(8) BEKEOHJKJNA
	{
		::NBCAOOBFHEA BHCMCMADHBF; // 0x10
		::System::Boolean IEHPOEMGPGF; // 0x18
		::System::Byte _padding0[0x7];
		::System::Collections::Generic::List_1<::NBCAOOBFHEA>* AIHKMDCDKMN; // 0x20
		::System::Collections::Generic::List_1<::NBCAOOBFHEA>* CPCAAHPHEFI; // 0x28
		::System::Boolean DNKPBLIOAOB(::NBCAOOBFHEA a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NBCAOOBFHEA))((::PBYTE)hIl2Cpp + BEKEOHJKJNA_DNKPBLIOAOB_OFFSET))(this, a1);
		}

		::System::Boolean CNHKDDJGFAA(::NBCAOOBFHEA a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NBCAOOBFHEA))((::PBYTE)hIl2Cpp + BEKEOHJKJNA_CNHKDDJGFAA_OFFSET))(this, a1);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEKEOHJKJNA_HADOHLNHHGB_OFFSET))(this);
		}

	};
