#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DPHLOBCHIEA.h"
#include "unitysdk/System/Object.h"

class CFHOEGBMPKN;
class DCFKHKBLIMA;
namespace System { class EventArgs; }
template <typename T1, typename T2> class ABIDMLIHJCI_2;

#define BNJCPKEEACF_DISPOSE_OFFSET UNITYSDK_OFFSET(0xFF8F300)
#define BNJCPKEEACF_DJDJKILDPGP_OFFSET UNITYSDK_OFFSET(0xFF8F860)
#define BNJCPKEEACF_EDLPKNACKJB_OFFSET UNITYSDK_OFFSET(0xFF8F650)
#define BNJCPKEEACF_GADLPMBEFMJ_OFFSET UNITYSDK_OFFSET(0xFF90030)
#define BNJCPKEEACF_JPMHGIDOEIF_OFFSET UNITYSDK_OFFSET(0xFF8FFA0)
#define BNJCPKEEACF__CTOR_OFFSET UNITYSDK_OFFSET(0xFF8F640)

inline static constexpr unsigned int BNJCPKEEACF_TypeDefinitionIndex = 76728;

class BNJCPKEEACF : public ::System::Object
{
public:
	::ABIDMLIHJCI_2<::System::Int32, ::DCFKHKBLIMA*>* JOADEMBJHIK; // 0x10
	::CFHOEGBMPKN* EBKOMBOLONI; // 0x18
	::DPHLOBCHIEA IAFHBCHLBME; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNJCPKEEACF__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNJCPKEEACF_DISPOSE_OFFSET))(this);
	}

	::System::Void EDLPKNACKJB(::System::EventArgs* EIFONLCJOPG)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + BNJCPKEEACF_EDLPKNACKJB_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Void DJDJKILDPGP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNJCPKEEACF_DJDJKILDPGP_OFFSET))(this);
	}

	::System::Boolean JPMHGIDOEIF(::System::Int32 LJMPPBEMEPP, ::DCFKHKBLIMA*& LJBPECKCCEA)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DCFKHKBLIMA*&))((::PBYTE)hIl2Cpp + BNJCPKEEACF_JPMHGIDOEIF_OFFSET))(this, LJMPPBEMEPP, LJBPECKCCEA);
	}

	::System::Void GADLPMBEFMJ(::System::EventArgs* EIFONLCJOPG)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + BNJCPKEEACF_GADLPMBEFMJ_OFFSET))(this, EIFONLCJOPG);
	}
};
