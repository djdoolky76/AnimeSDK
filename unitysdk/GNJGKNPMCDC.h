#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DJPBMMDAFKB.h"
#include "unitysdk/System/Object.h"

class CJIEIHEDMME;
class MNNHMDCKJOB;
class PKLAICEMAHO;
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GNJGKNPMCDC_BEKLDKMFFEB_OFFSET UNITYSDK_OFFSET(0x15D89BB0)
#define GNJGKNPMCDC_CDMCFOELIGN_OFFSET UNITYSDK_OFFSET(0x15D895F0)
#define GNJGKNPMCDC_ECFLELOEBOP_OFFSET UNITYSDK_OFFSET(0x15D89820)
#define GNJGKNPMCDC_KPDMDEBMNNP_OFFSET UNITYSDK_OFFSET(0x15D886D0)
#define GNJGKNPMCDC_POFJAMKCMLI_OFFSET UNITYSDK_OFFSET(0x15D899A0)
#define GNJGKNPMCDC__CTOR_OFFSET UNITYSDK_OFFSET(0x15D88630)

inline static constexpr unsigned int GNJGKNPMCDC_TypeDefinitionIndex = 47058;

class GNJGKNPMCDC : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::DJPBMMDAFKB, ::MNNHMDCKJOB*>* DDEAKGEHBNE; // 0x10
	::PKLAICEMAHO* MIGAOFOKENO; // 0x18
	::System::Collections::Generic::Dictionary_2<::DJPBMMDAFKB, ::System::Action_1<::CJIEIHEDMME*>*>* MGILKCKEGLJ; // 0x20

	::System::Void _ctor(::PKLAICEMAHO* MIGAOFOKENO)
	{
		return ((::System::Void(*)(::PVOID, ::PKLAICEMAHO*))((::PBYTE)hIl2Cpp + GNJGKNPMCDC__CTOR_OFFSET))(this, MIGAOFOKENO);
	}

	::System::Void CDMCFOELIGN(::CJIEIHEDMME* LADPIPOMBJM)
	{
		return ((::System::Void(*)(::PVOID, ::CJIEIHEDMME*))((::PBYTE)hIl2Cpp + GNJGKNPMCDC_CDMCFOELIGN_OFFSET))(this, LADPIPOMBJM);
	}

	::System::Void ECFLELOEBOP(::CJIEIHEDMME* LADPIPOMBJM)
	{
		return ((::System::Void(*)(::PVOID, ::CJIEIHEDMME*))((::PBYTE)hIl2Cpp + GNJGKNPMCDC_ECFLELOEBOP_OFFSET))(this, LADPIPOMBJM);
	}

	::System::Void POFJAMKCMLI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNJGKNPMCDC_POFJAMKCMLI_OFFSET))(this);
	}

	::System::Void KPDMDEBMNNP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNJGKNPMCDC_KPDMDEBMNNP_OFFSET))(this);
	}

	::System::Void BEKLDKMFFEB(::CJIEIHEDMME* LADPIPOMBJM)
	{
		return ((::System::Void(*)(::PVOID, ::CJIEIHEDMME*))((::PBYTE)hIl2Cpp + GNJGKNPMCDC_BEKLDKMFFEB_OFFSET))(this, LADPIPOMBJM);
	}
};
