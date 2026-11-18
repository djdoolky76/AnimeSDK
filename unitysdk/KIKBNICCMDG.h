#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DAHAIEHANOH.h"
#include "unitysdk/GFFFFCMCHJP.h"
#include "unitysdk/JGELKBLKFHE.h"
#include "unitysdk/KPBPGBNIDOK.h"

namespace System { template <typename T> class Action_1; }

#define KIKBNICCMDG_AOFNPGEBEAP_OFFSET UNITYSDK_OFFSET(0x15160C50)
#define KIKBNICCMDG_DPOFCKGCPIM_OFFSET UNITYSDK_OFFSET(0x15160C00)
#define KIKBNICCMDG_FEBGDGJCEOF_OFFSET UNITYSDK_OFFSET(0x15160BF0)
#define KIKBNICCMDG_FGMNHBEFHBN_OFFSET UNITYSDK_OFFSET(0x151606B0)
#define KIKBNICCMDG_IKBGGLFLFJB_OFFSET UNITYSDK_OFFSET(0x15160F50)
#define KIKBNICCMDG_JFHOBAOPKLE_OFFSET UNITYSDK_OFFSET(0x15160BA0)
#define KIKBNICCMDG__CTOR_OFFSET UNITYSDK_OFFSET(0x151606A0)

inline static constexpr unsigned int KIKBNICCMDG_TypeDefinitionIndex = 47484;

class KIKBNICCMDG : public ::JGELKBLKFHE
{
public:
	::System::Int32 ECBDGEOENIO; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIKBNICCMDG__CTOR_OFFSET))(this);
	}

	::System::Void FGMNHBEFHBN(::System::Int32 KPHKCPBPNDL, ::System::Int32 BCCENALHBHL, ::KPBPGBNIDOK HGCAEIPFNHM, ::System::Action_1<::DAHAIEHANOH>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::KPBPGBNIDOK, ::System::Action_1<::DAHAIEHANOH>*))((::PBYTE)hIl2Cpp + KIKBNICCMDG_FGMNHBEFHBN_OFFSET))(this, KPHKCPBPNDL, BCCENALHBHL, HGCAEIPFNHM, EJGDHCIBCJH);
	}

	::System::Void JFHOBAOPKLE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIKBNICCMDG_JFHOBAOPKLE_OFFSET))(this);
	}

	::System::Boolean FEBGDGJCEOF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KIKBNICCMDG_FEBGDGJCEOF_OFFSET))(this);
	}

	::System::Boolean DPOFCKGCPIM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KIKBNICCMDG_DPOFCKGCPIM_OFFSET))(this);
	}

	::System::Void AOFNPGEBEAP(::GFFFFCMCHJP LBPIPEAKPDG, ::System::Boolean KMPCLKEOLAO)
	{
		return ((::System::Void(*)(::PVOID, ::GFFFFCMCHJP, ::System::Boolean))((::PBYTE)hIl2Cpp + KIKBNICCMDG_AOFNPGEBEAP_OFFSET))(this, LBPIPEAKPDG, KMPCLKEOLAO);
	}

	::System::Int32 IKBGGLFLFJB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KIKBNICCMDG_IKBGGLFLFJB_OFFSET))(this);
	}
};
