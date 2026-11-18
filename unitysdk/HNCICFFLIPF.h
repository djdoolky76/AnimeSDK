#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LCFOHDJHJPD;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HNCICFFLIPF_CHNCKLOLLOK_OFFSET UNITYSDK_OFFSET(0x17B11AC0)
#define HNCICFFLIPF_JDCKBHCJOFL_OFFSET UNITYSDK_OFFSET(0x17B11DF0)
#define HNCICFFLIPF__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17B116F0)
#define HNCICFFLIPF__CTOR_OFFSET UNITYSDK_OFFSET(0x17B11480)

inline static constexpr unsigned int HNCICFFLIPF_TypeDefinitionIndex = 46400;

class HNCICFFLIPF : public ::System::Object
{
public:
	::System::String* AIOBOJMHNNG; // 0x10
	::System::Collections::Generic::List_1<::System::Object*>* PPNKEHOBGJD; // 0x18
	::System::Collections::Generic::List_1<::System::Object*>* PBAMGBNOLKB; // 0x20
	::System::Int32 LDNPOHKDALL; // 0x28
	::System::UInt32 IHDCGPLNEBJ; // 0x2C
	::System::Int32 FCIBJGDEJCO; // 0x30
	::System::Int32 MMJEICJFIGO; // 0x34
	::System::UInt32 ACHBBPJIBIE; // 0x38

	::System::Void _ctor(::System::Int32 KOEBKFPOLAL, ::System::Int32 EOGLMAEPALE, ::System::Collections::Generic::HashSet_1<::System::UInt32>* IKMDAGLHJFD)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + HNCICFFLIPF__CTOR_OFFSET))(this, KOEBKFPOLAL, EOGLMAEPALE, IKMDAGLHJFD);
	}

	::System::Void _ctor_1(::LCFOHDJHJPD* AJKLIIMJGCM, ::System::Collections::Generic::HashSet_1<::System::UInt32>* IKMDAGLHJFD)
	{
		return ((::System::Void(*)(::PVOID, ::LCFOHDJHJPD*, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + HNCICFFLIPF__CTOR_1_OFFSET))(this, AJKLIIMJGCM, IKMDAGLHJFD);
	}

	::System::Int32 CHNCKLOLLOK(::System::Collections::Generic::IReadOnlyList_1<::System::Object*>* DJLOKMMLFJC)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::Object*>*))((::PBYTE)hIl2Cpp + HNCICFFLIPF_CHNCKLOLLOK_OFFSET))(this, DJLOKMMLFJC);
	}

	::LCFOHDJHJPD* JDCKBHCJOFL()
	{
		return ((::LCFOHDJHJPD*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNCICFFLIPF_JDCKBHCJOFL_OFFSET))(this);
	}
};
