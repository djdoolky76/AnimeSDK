#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MNNHMDCKJOB.h"

class CJIEIHEDMME;
namespace System { class EventArgs; }

#define DFAMONPFJAC_AMHPHCLIAAF_OFFSET UNITYSDK_OFFSET(0x149A2170)
#define DFAMONPFJAC_EAGOHHDAGAF_OFFSET UNITYSDK_OFFSET(0x149A2570)
#define DFAMONPFJAC_EEBDPGAFBED_OFFSET UNITYSDK_OFFSET(0x149A20C0)
#define DFAMONPFJAC_FEPFIODEINO_OFFSET UNITYSDK_OFFSET(0x149A22F0)
#define DFAMONPFJAC_GAFCPMBHBIM_OFFSET UNITYSDK_OFFSET(0x149A2410)
#define DFAMONPFJAC_NENCNIMBEGI_OFFSET UNITYSDK_OFFSET(0x149A2380)
#define DFAMONPFJAC_OAEMDDMHJMO_OFFSET UNITYSDK_OFFSET(0x149A1F40)
#define DFAMONPFJAC_OBGGEOAAODH_OFFSET UNITYSDK_OFFSET(0x149A2520)
#define DFAMONPFJAC__CTOR_OFFSET UNITYSDK_OFFSET(0x149A22E0)

inline static constexpr unsigned int DFAMONPFJAC_TypeDefinitionIndex = 49680;

class DFAMONPFJAC : public ::MNNHMDCKJOB
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFAMONPFJAC__CTOR_OFFSET))(this);
	}

	::System::Void OAEMDDMHJMO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFAMONPFJAC_OAEMDDMHJMO_OFFSET))(this);
	}

	::System::Void EEBDPGAFBED(::CJIEIHEDMME* LADPIPOMBJM)
	{
		return ((::System::Void(*)(::PVOID, ::CJIEIHEDMME*))((::PBYTE)hIl2Cpp + DFAMONPFJAC_EEBDPGAFBED_OFFSET))(this, LADPIPOMBJM);
	}

	::System::Void AMHPHCLIAAF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFAMONPFJAC_AMHPHCLIAAF_OFFSET))(this);
	}

	::System::Void FEPFIODEINO(::CJIEIHEDMME* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::CJIEIHEDMME*))((::PBYTE)hIl2Cpp + DFAMONPFJAC_FEPFIODEINO_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void NENCNIMBEGI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFAMONPFJAC_NENCNIMBEGI_OFFSET))(this);
	}

	::System::Void GAFCPMBHBIM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFAMONPFJAC_GAFCPMBHBIM_OFFSET))(this);
	}

	::System::Void OBGGEOAAODH(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + DFAMONPFJAC_OBGGEOAAODH_OFFSET))(this, KOIBHLHLMFC);
	}

	::System::Void EAGOHHDAGAF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFAMONPFJAC_EAGOHHDAGAF_OFFSET))(this);
	}
};
