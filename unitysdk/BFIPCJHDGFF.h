#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FGameplayTagContainer.h"
#include "unitysdk/INHFKFEBFBD.h"
#include "unitysdk/PGFEHMPHNBK.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BFIPCJHDGFF_AFNBCJBFMBI_OFFSET UNITYSDK_OFFSET(0x19BE5D30)
#define BFIPCJHDGFF_AHHKKGCHMDB_OFFSET UNITYSDK_OFFSET(0x19BE5D10)
#define BFIPCJHDGFF_DAKOFHOMPLG_OFFSET UNITYSDK_OFFSET(0x19BE5D00)
#define BFIPCJHDGFF_JFIFOCAELCH_OFFSET UNITYSDK_OFFSET(0x19BE5D20)
#define BFIPCJHDGFF__CTOR_OFFSET UNITYSDK_OFFSET(0x19BE53E0)

inline static constexpr unsigned int BFIPCJHDGFF_TypeDefinitionIndex = 14589;

class BFIPCJHDGFF : public ::INHFKFEBFBD
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* FPHMKEIBOMB; // 0x88
	::Foundation::Unreal::FGameplayTagContainer AGNHEOINCEK; // 0x90
	::System::Collections::Generic::List_1<::System::String*>* _BJMKENMNLLP_k__BackingField; // 0x100
	::System::Collections::Generic::List_1<::System::Int32>* GJFPEBAOGGN; // 0x108
	::System::Collections::Generic::List_1<::System::String*>* _FDIJEBDLAHK_k__BackingField; // 0x110

	::System::Void _ctor(::PGFEHMPHNBK LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::PGFEHMPHNBK, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + BFIPCJHDGFF__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Collections::Generic::List_1<::System::Int32>* DAKOFHOMPLG()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BFIPCJHDGFF_DAKOFHOMPLG_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* AHHKKGCHMDB()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BFIPCJHDGFF_AHHKKGCHMDB_OFFSET))(this);
	}

	::System::Void JFIFOCAELCH(::System::Collections::Generic::List_1<::System::String*>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + BFIPCJHDGFF_JFIFOCAELCH_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Collections::Generic::List_1<::System::String*>* AFNBCJBFMBI()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BFIPCJHDGFF_AFNBCJBFMBI_OFFSET))(this);
	}
};
