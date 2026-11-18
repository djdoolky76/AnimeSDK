#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FDNCOAGCCKH.h"
#include "unitysdk/MJHDNMKGLBJ.h"

class DIDGHINDDMI;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KFNHCDAGCHL_AFIMJLGLELE_OFFSET UNITYSDK_OFFSET(0x1A2C6C70)
#define KFNHCDAGCHL_BLAMCMNDOIF_OFFSET UNITYSDK_OFFSET(0x1A2C6E80)
#define KFNHCDAGCHL_BPCPPMMDIAJ_OFFSET UNITYSDK_OFFSET(0x1A2C6520)
#define KFNHCDAGCHL_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x1A2C6430)
#define KFNHCDAGCHL_HBDNOJGLLDN_OFFSET UNITYSDK_OFFSET(0x1A2C65B0)
#define KFNHCDAGCHL_IAEMHOBBFJF_OFFSET UNITYSDK_OFFSET(0x1A2C6EC0)
#define KFNHCDAGCHL_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x1A2C6530)
#define KFNHCDAGCHL_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x1A2C6720)
#define KFNHCDAGCHL_NGJEFGLHFHL_OFFSET UNITYSDK_OFFSET(0x1A2C6510)
#define KFNHCDAGCHL_OKMKGHLOKEH_OFFSET UNITYSDK_OFFSET(0x1A2C6E20)
#define KFNHCDAGCHL_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x1A2C6320)
#define KFNHCDAGCHL_PEDLHMEDIIA_OFFSET UNITYSDK_OFFSET(0x1A2C67B0)
#define KFNHCDAGCHL_PIHODNGJLCH_OFFSET UNITYSDK_OFFSET(0x1A2C6970)
#define KFNHCDAGCHL__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A2C6480)
#define KFNHCDAGCHL__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2C6500)

inline static constexpr unsigned int KFNHCDAGCHL_TypeDefinitionIndex = 69394;

class KFNHCDAGCHL : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0xD2; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::FDNCOAGCCKH>*>* BJDHELFKDNP; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>* KAFMHILEOCA; // 0x50
	::System::UInt32 _OIHGLNHNGLC_k__BackingField; // 0x58

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KFNHCDAGCHL__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFNHCDAGCHL__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFNHCDAGCHL_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KFNHCDAGCHL_GETCLASSID_OFFSET))(this);
	}

	::System::UInt32 NGJEFGLHFHL()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KFNHCDAGCHL_NGJEFGLHFHL_OFFSET))(this);
	}

	::System::Void BPCPPMMDIAJ(::System::UInt32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KFNHCDAGCHL_BPCPPMMDIAJ_OFFSET))(this, EGEGIMGMJHN);
	}

	static ::KFNHCDAGCHL* JFDOOELFAOA()
	{
		return ((::KFNHCDAGCHL*(*)())((::PBYTE)hIl2Cpp + KFNHCDAGCHL_JFDOOELFAOA_OFFSET))();
	}

	::System::Void HBDNOJGLLDN(::System::String* KKJEJNMLIFP, ::System::Collections::Generic::List_1<::System::String*>* JLOPJAOJNKK)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + KFNHCDAGCHL_HBDNOJGLLDN_OFFSET))(this, KKJEJNMLIFP, JLOPJAOJNKK);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KFNHCDAGCHL_MEFBHFEOKGH_OFFSET))(this);
	}

	::System::Boolean PEDLHMEDIIA(::System::String* KKJEJNMLIFP, ::System::String* CPDGLJJGJDL, ::FDNCOAGCCKH& IGAAKDOIPNN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*, ::FDNCOAGCCKH&))((::PBYTE)hIl2Cpp + KFNHCDAGCHL_PEDLHMEDIIA_OFFSET))(this, KKJEJNMLIFP, CPDGLJJGJDL, IGAAKDOIPNN);
	}

	::System::Void PIHODNGJLCH(::System::String* KKJEJNMLIFP, ::System::String* CPDGLJJGJDL, ::FDNCOAGCCKH EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::FDNCOAGCCKH))((::PBYTE)hIl2Cpp + KFNHCDAGCHL_PIHODNGJLCH_OFFSET))(this, KKJEJNMLIFP, CPDGLJJGJDL, EGEGIMGMJHN);
	}

	::System::Boolean AFIMJLGLELE(::System::String* KKJEJNMLIFP, ::System::String* CPDGLJJGJDL)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + KFNHCDAGCHL_AFIMJLGLELE_OFFSET))(this, KKJEJNMLIFP, CPDGLJJGJDL);
	}

	::System::Boolean OKMKGHLOKEH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KFNHCDAGCHL_OKMKGHLOKEH_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>* BLAMCMNDOIF()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFNHCDAGCHL_BLAMCMNDOIF_OFFSET))(this);
	}

	::System::Void IAEMHOBBFJF(::DIDGHINDDMI* HMMMOCJAEOA)
	{
		return ((::System::Void(*)(::PVOID, ::DIDGHINDDMI*))((::PBYTE)hIl2Cpp + KFNHCDAGCHL_IAEMHOBBFJF_OFFSET))(this, HMMMOCJAEOA);
	}
};
