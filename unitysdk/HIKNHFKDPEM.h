#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FFEDCPGAKHE.h"
#include "unitysdk/HIKNHFKDPEM_INDGNODFJOE.h"
#include "unitysdk/NHPFMFABMEC.h"

namespace System { class EventArgs; }

#define HIKNHFKDPEM_ANEOCOIFDDJ_OFFSET UNITYSDK_OFFSET(0x101127A0)
#define HIKNHFKDPEM_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x10112680)
#define HIKNHFKDPEM_FCMNHLDLJCI_OFFSET UNITYSDK_OFFSET(0x10112560)
#define HIKNHFKDPEM_NOGKIHLPJDO_OFFSET UNITYSDK_OFFSET(0x10112710)
#define HIKNHFKDPEM_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x10112190)
#define HIKNHFKDPEM_PEABAPPBKAD_OFFSET UNITYSDK_OFFSET(0x101123B0)
#define HIKNHFKDPEM_PNIFINLBMOE_OFFSET UNITYSDK_OFFSET(0x10112340)
#define HIKNHFKDPEM__CTOR_OFFSET UNITYSDK_OFFSET(0x10112670)

inline static constexpr unsigned int HIKNHFKDPEM_TypeDefinitionIndex = 61548;

class HIKNHFKDPEM : public ::NHPFMFABMEC
{
public:
	::HIKNHFKDPEM_INDGNODFJOE GCGGOHDHJCO; // 0x38
	::FFEDCPGAKHE LHJMEOCJPJO; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIKNHFKDPEM__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIKNHFKDPEM_OJENCMOGDKL_OFFSET))(this);
	}

	::System::Void PNIFINLBMOE(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + HIKNHFKDPEM_PNIFINLBMOE_OFFSET))(this, KOIBHLHLMFC);
	}

	::System::Void FCMNHLDLJCI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIKNHFKDPEM_FCMNHLDLJCI_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIKNHFKDPEM_ECNOGHHOPPF_OFFSET))(this);
	}

	::System::Void NOGKIHLPJDO(::System::EventArgs* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + HIKNHFKDPEM_NOGKIHLPJDO_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Boolean PEABAPPBKAD(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + HIKNHFKDPEM_PEABAPPBKAD_OFFSET))(this, KOIBHLHLMFC);
	}

	::System::Void ANEOCOIFDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIKNHFKDPEM_ANEOCOIFDDJ_OFFSET))(this);
	}
};
