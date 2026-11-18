#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGFLNMEGCGD.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EDMMIENABLC_KDDOCCKFCJH__CTOR_OFFSET UNITYSDK_OFFSET(0x10F210E0)

inline static constexpr unsigned int EDMMIENABLC_KDDOCCKFCJH_TypeDefinitionIndex = 53781;

class EDMMIENABLC_KDDOCCKFCJH : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Il2CppArray<::System::Object*>*>* EPCPJEEMOAK; // 0x10
	::System::Collections::Generic::List_1<::System::String*>* NFPCPCIONLF; // 0x18
	::System::String* EPHDJFHFKBK; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Object*>* AMLFJGMBOBM; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Collections::Generic::List_1<::CGFLNMEGCGD>*>* GAPJGCBLNDA; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDMMIENABLC_KDDOCCKFCJH__CTOR_OFFSET))(this);
	}
};
