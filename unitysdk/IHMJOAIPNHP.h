#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJEJBPGJPJN.h"

class BDCPCMMOKDG;
class BNMECMGNJDL;
class DHOPEBFAMPP;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class DBMAHDDGMHM_1;
template <typename T> class LJHFMILANJA_1;

#define IHMJOAIPNHP_ADNLJMNEDEL_OFFSET UNITYSDK_OFFSET(0x1A4676C0)
#define IHMJOAIPNHP_DAKCINNCFKN_OFFSET UNITYSDK_OFFSET(0x1A468320)
#define IHMJOAIPNHP_DIJGKMCCCDK_OFFSET UNITYSDK_OFFSET(0x1A467C50)
#define IHMJOAIPNHP_FGAMNJOBAKI_OFFSET UNITYSDK_OFFSET(0x1A468400)
#define IHMJOAIPNHP_FMDADHCGMKF_OFFSET UNITYSDK_OFFSET(0x1A467E80)
#define IHMJOAIPNHP_JEHFCMBKFFI_OFFSET UNITYSDK_OFFSET(0x1A4678D0)
#define IHMJOAIPNHP_OMLDDKMINNI_OFFSET UNITYSDK_OFFSET(0x1A468110)
#define IHMJOAIPNHP_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x1A4674D0)
#define IHMJOAIPNHP_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1A467B00)
#define IHMJOAIPNHP__CTOR_OFFSET UNITYSDK_OFFSET(0x1A467570)

inline static constexpr unsigned int IHMJOAIPNHP_TypeDefinitionIndex = 60698;

class IHMJOAIPNHP : public ::JJEJBPGJPJN
{
public:
	::System::Collections::Generic::List_1<::DHOPEBFAMPP*>* OCGAGAKAOAG; // 0x88
	::DBMAHDDGMHM_1<::System::UInt32>* CCIOJDCGMGD; // 0x90
	::LJHFMILANJA_1<::System::Int64>* HMHDMLMOMKG; // 0x98
	::System::Collections::Generic::List_1<::BNMECMGNJDL*>* GHADLGNFKIP; // 0xA0
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::BDCPCMMOKDG*>* ICEOBIGHCPG; // 0xA8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHMJOAIPNHP__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHMJOAIPNHP_ONCREATEPROPERTY_OFFSET))(this);
	}

	::System::Void ADNLJMNEDEL(::System::UInt32 ACHBBPJIBIE)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IHMJOAIPNHP_ADNLJMNEDEL_OFFSET))(this, ACHBBPJIBIE);
	}

	::BNMECMGNJDL* JEHFCMBKFFI(::System::UInt32 ACHBBPJIBIE)
	{
		return ((::BNMECMGNJDL*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IHMJOAIPNHP_JEHFCMBKFFI_OFFSET))(this, ACHBBPJIBIE);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHMJOAIPNHP_PHOADBJGFBE_OFFSET))(this);
	}

	::DHOPEBFAMPP* DIJGKMCCCDK(::System::UInt32 ACHBBPJIBIE)
	{
		return ((::DHOPEBFAMPP*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IHMJOAIPNHP_DIJGKMCCCDK_OFFSET))(this, ACHBBPJIBIE);
	}

	::System::Collections::Generic::List_1<::DHOPEBFAMPP*>* FMDADHCGMKF(::System::UInt32 ACHBBPJIBIE)
	{
		return ((::System::Collections::Generic::List_1<::DHOPEBFAMPP*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IHMJOAIPNHP_FMDADHCGMKF_OFFSET))(this, ACHBBPJIBIE);
	}

	::System::Void OMLDDKMINNI(::System::UInt32 ACHBBPJIBIE)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IHMJOAIPNHP_OMLDDKMINNI_OFFSET))(this, ACHBBPJIBIE);
	}

	::BDCPCMMOKDG* DAKCINNCFKN(::System::Int32 ANMAHPKFECH)
	{
		return ((::BDCPCMMOKDG*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IHMJOAIPNHP_DAKCINNCFKN_OFFSET))(this, ANMAHPKFECH);
	}

	::DHOPEBFAMPP* FGAMNJOBAKI(::System::Int32 MGMDLMBEDJF)
	{
		return ((::DHOPEBFAMPP*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IHMJOAIPNHP_FGAMNJOBAKI_OFFSET))(this, MGMDLMBEDJF);
	}
};
