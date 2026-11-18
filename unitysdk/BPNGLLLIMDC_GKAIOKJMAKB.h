#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BPNGLLLIMDC_GKAIOKJMAKB_BCIBLCFMJIK_OFFSET UNITYSDK_OFFSET(0x10E25120)
#define BPNGLLLIMDC_GKAIOKJMAKB_BDJOKDELCNG_OFFSET UNITYSDK_OFFSET(0x10E25200)
#define BPNGLLLIMDC_GKAIOKJMAKB_BEIJNBPANHD_OFFSET UNITYSDK_OFFSET(0x10E25630)
#define BPNGLLLIMDC_GKAIOKJMAKB_EGGOBPHOCFJ_OFFSET UNITYSDK_OFFSET(0x10E25160)
#define BPNGLLLIMDC_GKAIOKJMAKB_FLOIEPKHIIE_OFFSET UNITYSDK_OFFSET(0x10E255D0)
#define BPNGLLLIMDC_GKAIOKJMAKB_JCKOFMNHBEN_OFFSET UNITYSDK_OFFSET(0x10E256C0)
#define BPNGLLLIMDC_GKAIOKJMAKB_KDILOBDBNPB_OFFSET UNITYSDK_OFFSET(0x10E25390)
#define BPNGLLLIMDC_GKAIOKJMAKB_OEINFAPAJDH_OFFSET UNITYSDK_OFFSET(0x10E254B0)
#define BPNGLLLIMDC_GKAIOKJMAKB__CTOR_OFFSET UNITYSDK_OFFSET(0x10E24850)

inline static constexpr unsigned int BPNGLLLIMDC_GKAIOKJMAKB_TypeDefinitionIndex = 56031;

class BPNGLLLIMDC_GKAIOKJMAKB : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* JADHLPNIJDM; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::HashSet_1<::System::Int32>*>* JEDOHGDPNCF; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KOMAIAJCOKC; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* IKIGHJDJEAC; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* IGAOFNGFNFB; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPNGLLLIMDC_GKAIOKJMAKB__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* BCIBLCFMJIK()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPNGLLLIMDC_GKAIOKJMAKB_BCIBLCFMJIK_OFFSET))(this);
	}

	::System::Int32 EGGOBPHOCFJ(::System::Int32 LEHABHCOMGH)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BPNGLLLIMDC_GKAIOKJMAKB_EGGOBPHOCFJ_OFFSET))(this, LEHABHCOMGH);
	}

	::System::Collections::Generic::List_1<::System::Int32>* BDJOKDELCNG(::System::Int32 OFGCDAOHIMC)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BPNGLLLIMDC_GKAIOKJMAKB_BDJOKDELCNG_OFFSET))(this, OFGCDAOHIMC);
	}

	::System::Collections::Generic::List_1<::System::Int32>* KDILOBDBNPB()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPNGLLLIMDC_GKAIOKJMAKB_KDILOBDBNPB_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* OEINFAPAJDH()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPNGLLLIMDC_GKAIOKJMAKB_OEINFAPAJDH_OFFSET))(this);
	}

	::System::Boolean FLOIEPKHIIE(::System::Int32 LEHABHCOMGH)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BPNGLLLIMDC_GKAIOKJMAKB_FLOIEPKHIIE_OFFSET))(this, LEHABHCOMGH);
	}

	::System::Int32 BEIJNBPANHD(::System::Int32 LEHABHCOMGH)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BPNGLLLIMDC_GKAIOKJMAKB_BEIJNBPANHD_OFFSET))(this, LEHABHCOMGH);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* JCKOFMNHBEN()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPNGLLLIMDC_GKAIOKJMAKB_JCKOFMNHBEN_OFFSET))(this);
	}
};
