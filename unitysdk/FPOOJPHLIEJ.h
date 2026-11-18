#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MNNHMDCKJOB.h"

class CJIEIHEDMME;
namespace System { class EventArgs; }

#define FPOOJPHLIEJ_AMHPHCLIAAF_OFFSET UNITYSDK_OFFSET(0x15F03DB0)
#define FPOOJPHLIEJ_EAGOHHDAGAF_OFFSET UNITYSDK_OFFSET(0x15F03F30)
#define FPOOJPHLIEJ_EEBDPGAFBED_OFFSET UNITYSDK_OFFSET(0x15F03D00)
#define FPOOJPHLIEJ_FEPFIODEINO_OFFSET UNITYSDK_OFFSET(0x15F04160)
#define FPOOJPHLIEJ_GAFCPMBHBIM_OFFSET UNITYSDK_OFFSET(0x15F03FC0)
#define FPOOJPHLIEJ_NENCNIMBEGI_OFFSET UNITYSDK_OFFSET(0x15F040D0)
#define FPOOJPHLIEJ_OAEMDDMHJMO_OFFSET UNITYSDK_OFFSET(0x15F03B80)
#define FPOOJPHLIEJ_OBGGEOAAODH_OFFSET UNITYSDK_OFFSET(0x15F041F0)
#define FPOOJPHLIEJ__CTOR_OFFSET UNITYSDK_OFFSET(0x15F03F20)

inline static constexpr unsigned int FPOOJPHLIEJ_TypeDefinitionIndex = 53368;

class FPOOJPHLIEJ : public ::MNNHMDCKJOB
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPOOJPHLIEJ__CTOR_OFFSET))(this);
	}

	::System::Void OAEMDDMHJMO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPOOJPHLIEJ_OAEMDDMHJMO_OFFSET))(this);
	}

	::System::Void EEBDPGAFBED(::CJIEIHEDMME* LADPIPOMBJM)
	{
		return ((::System::Void(*)(::PVOID, ::CJIEIHEDMME*))((::PBYTE)hIl2Cpp + FPOOJPHLIEJ_EEBDPGAFBED_OFFSET))(this, LADPIPOMBJM);
	}

	::System::Void AMHPHCLIAAF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPOOJPHLIEJ_AMHPHCLIAAF_OFFSET))(this);
	}

	::System::Void EAGOHHDAGAF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPOOJPHLIEJ_EAGOHHDAGAF_OFFSET))(this);
	}

	::System::Void GAFCPMBHBIM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPOOJPHLIEJ_GAFCPMBHBIM_OFFSET))(this);
	}

	::System::Void NENCNIMBEGI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPOOJPHLIEJ_NENCNIMBEGI_OFFSET))(this);
	}

	::System::Void FEPFIODEINO(::CJIEIHEDMME* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::CJIEIHEDMME*))((::PBYTE)hIl2Cpp + FPOOJPHLIEJ_FEPFIODEINO_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void OBGGEOAAODH(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + FPOOJPHLIEJ_OBGGEOAAODH_OFFSET))(this, KOIBHLHLMFC);
	}
};
