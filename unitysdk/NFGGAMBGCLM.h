#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CIJKMEDBHMM;
class JDCJAJHEDDA;
class MainCityObjectState_ScriptConfig;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NFGGAMBGCLM_FGNHANKHFOL_OFFSET UNITYSDK_OFFSET(0x12C5A660)
#define NFGGAMBGCLM_IDIBNPFLCHG_OFFSET UNITYSDK_OFFSET(0x12C5A530)
#define NFGGAMBGCLM_KOKJFEMHEAB_OFFSET UNITYSDK_OFFSET(0x12C5A430)
#define NFGGAMBGCLM_ODFLCJDHABA_OFFSET UNITYSDK_OFFSET(0x12C5A2E0)
#define NFGGAMBGCLM__CTOR_OFFSET UNITYSDK_OFFSET(0x12C59FD0)

inline static constexpr unsigned int NFGGAMBGCLM_TypeDefinitionIndex = 46547;

class NFGGAMBGCLM : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::CIJKMEDBHMM*>* GJJPHHAECDN; // 0x10
	::System::Int32 OIDEPALIEID; // 0x18

	::System::Void _ctor(::System::Collections::Generic::Dictionary_2<::System::Int32, ::JDCJAJHEDDA*>* INBACCBOBDN, ::System::Int32 OIDEPALIEID)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::JDCJAJHEDDA*>*, ::System::Int32))((::PBYTE)hIl2Cpp + NFGGAMBGCLM__CTOR_OFFSET))(this, INBACCBOBDN, OIDEPALIEID);
	}

	::CIJKMEDBHMM* ODFLCJDHABA(::System::Int32 KBNIOABPILH)
	{
		return ((::CIJKMEDBHMM*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NFGGAMBGCLM_ODFLCJDHABA_OFFSET))(this, KBNIOABPILH);
	}

	::MainCityObjectState_ScriptConfig* KOKJFEMHEAB(::System::String* CAGFMLEKFGG)
	{
		return ((::MainCityObjectState_ScriptConfig*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NFGGAMBGCLM_KOKJFEMHEAB_OFFSET))(this, CAGFMLEKFGG);
	}

	::System::Int32 IDIBNPFLCHG(::System::String* CAGFMLEKFGG)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NFGGAMBGCLM_IDIBNPFLCHG_OFFSET))(this, CAGFMLEKFGG);
	}

	::System::Int32 FGNHANKHFOL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NFGGAMBGCLM_FGNHANKHFOL_OFFSET))(this);
	}
};
