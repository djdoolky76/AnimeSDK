#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FFEDCPGAKHE.h"
#include "unitysdk/NHPFMFABMEC.h"

namespace System { class EventArgs; }

#define FPIPIJJGCOL_ANEOCOIFDDJ_OFFSET UNITYSDK_OFFSET(0x125B9FD0)
#define FPIPIJJGCOL_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x125BA060)
#define FPIPIJJGCOL_FCMNHLDLJCI_OFFSET UNITYSDK_OFFSET(0x125B9E20)
#define FPIPIJJGCOL_NOGKIHLPJDO_OFFSET UNITYSDK_OFFSET(0x125B9F40)
#define FPIPIJJGCOL_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x125B9A90)
#define FPIPIJJGCOL_PNIFINLBMOE_OFFSET UNITYSDK_OFFSET(0x125B9BF0)
#define FPIPIJJGCOL__CTOR_OFFSET UNITYSDK_OFFSET(0x125B9F30)

inline static constexpr unsigned int FPIPIJJGCOL_TypeDefinitionIndex = 81494;

class FPIPIJJGCOL : public ::NHPFMFABMEC
{
public:
	::FFEDCPGAKHE LHJMEOCJPJO; // 0x38
	::System::Int32 GEAOFHIFCMG; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPIPIJJGCOL__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPIPIJJGCOL_OJENCMOGDKL_OFFSET))(this);
	}

	::System::Void PNIFINLBMOE(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + FPIPIJJGCOL_PNIFINLBMOE_OFFSET))(this, KOIBHLHLMFC);
	}

	::System::Void FCMNHLDLJCI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPIPIJJGCOL_FCMNHLDLJCI_OFFSET))(this);
	}

	::System::Void NOGKIHLPJDO(::System::EventArgs* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + FPIPIJJGCOL_NOGKIHLPJDO_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void ANEOCOIFDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPIPIJJGCOL_ANEOCOIFDDJ_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPIPIJJGCOL_ECNOGHHOPPF_OFFSET))(this);
	}
};
