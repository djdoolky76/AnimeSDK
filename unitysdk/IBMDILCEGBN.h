#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JHHGPOJBJNP.h"
#include "unitysdk/LOAILIPINKG.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }

#define IBMDILCEGBN_BDGFJMKKLIH_OFFSET UNITYSDK_OFFSET(0x16102DE0)
#define IBMDILCEGBN_FEHMHGINEID_OFFSET UNITYSDK_OFFSET(0x161031B0)
#define IBMDILCEGBN_JEBBHIHEMOP_OFFSET UNITYSDK_OFFSET(0x16102E00)
#define IBMDILCEGBN__CTOR_OFFSET UNITYSDK_OFFSET(0x16102DD0)

inline static constexpr unsigned int IBMDILCEGBN_TypeDefinitionIndex = 9956;

class IBMDILCEGBN : public ::JHHGPOJBJNP
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Double>* ADBPCFFEBPL; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* ADHPAFILMHJ; // 0x50

	::System::Void _ctor(::LOAILIPINKG LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::LOAILIPINKG, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + IBMDILCEGBN__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::System::String*>* BDGFJMKKLIH()
	{
		return ((::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBMDILCEGBN_BDGFJMKKLIH_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::System::Double>* FEHMHGINEID()
	{
		return ((::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::System::Double>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBMDILCEGBN_FEHMHGINEID_OFFSET))(this);
	}

	::System::Void JEBBHIHEMOP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBMDILCEGBN_JEBBHIHEMOP_OFFSET))(this);
	}
};
