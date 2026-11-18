#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LHCGEJLIKNF.h"
#include "unitysdk/System/Object.h"

class LJCFHGDNLPL;
class NOHGMPIMCEF;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NABBKNJOMHE_DJPJFOOKLJI_OFFSET UNITYSDK_OFFSET(0x18F85C60)
#define NABBKNJOMHE_FKNAINIHJJC_OFFSET UNITYSDK_OFFSET(0x18F85FB0)
#define NABBKNJOMHE_IPKGNNMGGFB_OFFSET UNITYSDK_OFFSET(0x18F855B0)
#define NABBKNJOMHE_JJDKICLDNIF_OFFSET UNITYSDK_OFFSET(0x18F85DC0)
#define NABBKNJOMHE_JPJJPLAOAKI_OFFSET UNITYSDK_OFFSET(0x18F86070)
#define NABBKNJOMHE_LBLAJINGLEC_OFFSET UNITYSDK_OFFSET(0x18F85E50)
#define NABBKNJOMHE_NPGNDHGIKNN_OFFSET UNITYSDK_OFFSET(0x18F85EF0)
#define NABBKNJOMHE_OMGCHFPABMA_OFFSET UNITYSDK_OFFSET(0x18F85D10)
#define NABBKNJOMHE__CTOR_OFFSET UNITYSDK_OFFSET(0x18F85550)

inline static constexpr unsigned int NABBKNJOMHE_TypeDefinitionIndex = 48330;

class NABBKNJOMHE : public ::System::Object
{
public:
	::System::Action_1<::LHCGEJLIKNF>* DMOLOEBLMEC; // 0x10
	::System::Action* HOPPBDCJJCJ; // 0x18
	::System::Collections::Generic::List_1<::LHCGEJLIKNF>* BGOAIKMPNLJ; // 0x20
	::System::Collections::Generic::List_1<::LJCFHGDNLPL*>* ONAEJPBJFMI; // 0x28
	::NOHGMPIMCEF* MHBGKCDMDBM; // 0x30
	::System::Boolean EGHMDEDGMOD; // 0x38
	::System::Boolean DHNMCMNEILH; // 0x39
	::System::Byte _padding0[0x2];
	::System::Int32 KIMPHGMLAJK; // 0x3C
	::System::Int32 KIHNHPOFAML; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NABBKNJOMHE__CTOR_OFFSET))(this);
	}

	::System::Void IPKGNNMGGFB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NABBKNJOMHE_IPKGNNMGGFB_OFFSET))(this);
	}

	::System::Void DJPJFOOKLJI(::System::Action_1<::LHCGEJLIKNF>* GJBHEJGENMI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::LHCGEJLIKNF>*))((::PBYTE)hIl2Cpp + NABBKNJOMHE_DJPJFOOKLJI_OFFSET))(this, GJBHEJGENMI);
	}

	::System::Void OMGCHFPABMA(::System::Action_1<::LHCGEJLIKNF>* GJBHEJGENMI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::LHCGEJLIKNF>*))((::PBYTE)hIl2Cpp + NABBKNJOMHE_OMGCHFPABMA_OFFSET))(this, GJBHEJGENMI);
	}

	::System::Int32 JJDKICLDNIF(::LJCFHGDNLPL* EJCBEJMGFAJ, ::LJCFHGDNLPL* EBFCACIEKBC)
	{
		return ((::System::Int32(*)(::PVOID, ::LJCFHGDNLPL*, ::LJCFHGDNLPL*))((::PBYTE)hIl2Cpp + NABBKNJOMHE_JJDKICLDNIF_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
	}

	::System::Void LBLAJINGLEC(::NOHGMPIMCEF* FNMCDIFHEEM, ::System::Int32 KIHNHPOFAML, ::System::Boolean DHNMCMNEILH, ::System::Action* PABLEDCGDGM)
	{
		return ((::System::Void(*)(::PVOID, ::NOHGMPIMCEF*, ::System::Int32, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + NABBKNJOMHE_LBLAJINGLEC_OFFSET))(this, FNMCDIFHEEM, KIHNHPOFAML, DHNMCMNEILH, PABLEDCGDGM);
	}

	::System::Void FKNAINIHJJC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NABBKNJOMHE_FKNAINIHJJC_OFFSET))(this);
	}

	::System::Void NPGNDHGIKNN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NABBKNJOMHE_NPGNDHGIKNN_OFFSET))(this);
	}

	::System::Void JPJJPLAOAKI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NABBKNJOMHE_JPJJPLAOAKI_OFFSET))(this);
	}
};
