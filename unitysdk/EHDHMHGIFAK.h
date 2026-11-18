#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EAKNPCCIFMF.h"
#include "unitysdk/KAJMPGPLPKD.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EHDHMHGIFAK_PBHGNLAMMLE_OFFSET UNITYSDK_OFFSET(0x187ABA60)
#define EHDHMHGIFAK__CTOR_OFFSET UNITYSDK_OFFSET(0x187AAEE0)

inline static constexpr unsigned int EHDHMHGIFAK_TypeDefinitionIndex = 10895;

class EHDHMHGIFAK : public ::EAKNPCCIFMF
{
public:
	::System::Collections::Generic::List_1<::System::String*>* PHDMAGONMPM; // 0x88
	::System::Collections::Generic::List_1<::System::Int32>* BCEECMPLCOO; // 0x90
	::System::Collections::Generic::List_1<::System::String*>* MAECPLKGJMA; // 0x98
	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::String*>*>* LCIMNCCPBPA; // 0xA0
	::System::Collections::Generic::List_1<::System::Single>* LKJGMFOOGHB; // 0xA8
	::System::Collections::Generic::List_1<::System::String*>* HOBDFHFOEND; // 0xB0
	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::String*>*>* LPMADAIHJHO; // 0xB8

	::System::Void _ctor(::KAJMPGPLPKD LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::KAJMPGPLPKD, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + EHDHMHGIFAK__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean PBHGNLAMMLE(::System::Int32 BFBCMALKEIE)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EHDHMHGIFAK_PBHGNLAMMLE_OFFSET))(this, BFBCMALKEIE);
	}
};
