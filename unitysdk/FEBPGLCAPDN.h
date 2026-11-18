#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJHDNMKGLBJ.h"

class AINLDBCGKOO;
namespace MoleMole::Config { class InteractEntry; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FEBPGLCAPDN_AIENOOEOCNH_OFFSET UNITYSDK_OFFSET(0x11D013E0)
#define FEBPGLCAPDN_BFKBKNPINLN_OFFSET UNITYSDK_OFFSET(0x11D007B0)
#define FEBPGLCAPDN_CDAMNJCMADN_OFFSET UNITYSDK_OFFSET(0x11D00AF0)
#define FEBPGLCAPDN_COGHFKGEIBH_OFFSET UNITYSDK_OFFSET(0x11D01120)
#define FEBPGLCAPDN_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x11D00550)
#define FEBPGLCAPDN_HFGBBEMFMEH_OFFSET UNITYSDK_OFFSET(0x11D012F0)
#define FEBPGLCAPDN_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x11D00A70)
#define FEBPGLCAPDN_LHPJAGKIDJF_OFFSET UNITYSDK_OFFSET(0x11D00840)
#define FEBPGLCAPDN_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x11D01350)
#define FEBPGLCAPDN_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x11D003B0)
#define FEBPGLCAPDN__CCTOR_OFFSET UNITYSDK_OFFSET(0x11D005A0)
#define FEBPGLCAPDN__CTOR_OFFSET UNITYSDK_OFFSET(0x11D00620)

inline static constexpr unsigned int FEBPGLCAPDN_TypeDefinitionIndex = 49634;

class FEBPGLCAPDN : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0xB2; // 0x0
	::AINLDBCGKOO* GPPOJFBHPHE; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::Tuple_2<::System::UInt32, ::System::Int32>*>*>* NNKEJHMCLKM; // 0x50
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::Tuple_2<::System::UInt32, ::System::Int32>*>*>* KOCNODAGOKM; // 0x58
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* KOLJMACJNCI; // 0x60

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FEBPGLCAPDN__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEBPGLCAPDN__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEBPGLCAPDN_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FEBPGLCAPDN_GETCLASSID_OFFSET))(this);
	}

	::System::Void BFKBKNPINLN(::System::String* AELLPLBJELA)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FEBPGLCAPDN_BFKBKNPINLN_OFFSET))(this, AELLPLBJELA);
	}

	::System::Void LHPJAGKIDJF(::System::String* AELLPLBJELA, ::System::UInt32 NJNCGJLHLKC, ::System::Int32 BCCENALHBHL)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + FEBPGLCAPDN_LHPJAGKIDJF_OFFSET))(this, AELLPLBJELA, NJNCGJLHLKC, BCCENALHBHL);
	}

	static ::FEBPGLCAPDN* JFDOOELFAOA()
	{
		return ((::FEBPGLCAPDN*(*)())((::PBYTE)hIl2Cpp + FEBPGLCAPDN_JFDOOELFAOA_OFFSET))();
	}

	::System::Int32 CDAMNJCMADN(::System::String* OOONELGGOKM, ::System::String* AELLPLBJELA, ::System::Int32 BCCENALHBHL, ::AINLDBCGKOO* GBELIHABEDH, ::MoleMole::Config::InteractEntry* AAIJGGIEOGK)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32, ::AINLDBCGKOO*, ::MoleMole::Config::InteractEntry*))((::PBYTE)hIl2Cpp + FEBPGLCAPDN_CDAMNJCMADN_OFFSET))(this, OOONELGGOKM, AELLPLBJELA, BCCENALHBHL, GBELIHABEDH, AAIJGGIEOGK);
	}

	::System::Void COGHFKGEIBH(::System::String* OOONELGGOKM, ::AINLDBCGKOO* GBELIHABEDH, ::System::Boolean GILCNGEIKIF)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::AINLDBCGKOO*, ::System::Boolean))((::PBYTE)hIl2Cpp + FEBPGLCAPDN_COGHFKGEIBH_OFFSET))(this, OOONELGGOKM, GBELIHABEDH, GILCNGEIKIF);
	}

	::System::Boolean HFGBBEMFMEH(::AINLDBCGKOO* CCKFAJDPCCF)
	{
		return ((::System::Boolean(*)(::PVOID, ::AINLDBCGKOO*))((::PBYTE)hIl2Cpp + FEBPGLCAPDN_HFGBBEMFMEH_OFFSET))(this, CCKFAJDPCCF);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FEBPGLCAPDN_MEFBHFEOKGH_OFFSET))(this);
	}

	::System::Void AIENOOEOCNH(::System::String* OOONELGGOKM, ::System::Int32 NKKMCNMJPCN, ::AINLDBCGKOO* GBELIHABEDH)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::AINLDBCGKOO*))((::PBYTE)hIl2Cpp + FEBPGLCAPDN_AIENOOEOCNH_OFFSET))(this, OOONELGGOKM, NKKMCNMJPCN, GBELIHABEDH);
	}
};
