#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IGNPHCCAJFA.h"
#include "unitysdk/HHCFLCEDGMK_OCMMKLMKHNE.h"

#define HHCFLCEDGMK_BAHNJLIOMKD_OFFSET UNITYSDK_OFFSET(0x16F36F90)
#define HHCFLCEDGMK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16F36E60)
#define HHCFLCEDGMK_DLGFHCIGCPJ_OFFSET UNITYSDK_OFFSET(0x16F36FF0)
#define HHCFLCEDGMK_EFFIBJJPKPO_OFFSET UNITYSDK_OFFSET(0x16F36E20)
#define HHCFLCEDGMK_KLMGCHMDGML_OFFSET UNITYSDK_OFFSET(0x16F36FA0)
#define HHCFLCEDGMK_MDGEEHJNJHN_OFFSET UNITYSDK_OFFSET(0x16F36EC0)
#define HHCFLCEDGMK_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16F36DE0)
#define HHCFLCEDGMK__CTOR_OFFSET UNITYSDK_OFFSET(0x16F36EB0)

inline static constexpr unsigned int HHCFLCEDGMK_TypeDefinitionIndex = 79361;

class HHCFLCEDGMK : public ::IGNPHCCAJFA
{
public:
	::System::Boolean _ALDNDJMPEJK_k__BackingField; // 0x18
	::System::Byte _padding0[0x3];
	::System::Int32 NDIBKDIFMNO; // 0x1C
	::System::Int32 BGJIOPPABEK; // 0x20

	::System::Void _ctor(::System::Int32 ACHBBPJIBIE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HHCFLCEDGMK__CTOR_OFFSET))(this, ACHBBPJIBIE);
	}

	::System::Void OJENCMOGDKL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHCFLCEDGMK_OJENCMOGDKL_OFFSET))(this);
	}

	::System::Void EFFIBJJPKPO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHCFLCEDGMK_EFFIBJJPKPO_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHCFLCEDGMK_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MDGEEHJNJHN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HHCFLCEDGMK_MDGEEHJNJHN_OFFSET))(this);
	}

	::System::Boolean BAHNJLIOMKD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HHCFLCEDGMK_BAHNJLIOMKD_OFFSET))(this);
	}

	::HHCFLCEDGMK_OCMMKLMKHNE KLMGCHMDGML()
	{
		return ((::HHCFLCEDGMK_OCMMKLMKHNE(*)(::PVOID))((::PBYTE)hIl2Cpp + HHCFLCEDGMK_KLMGCHMDGML_OFFSET))(this);
	}

	::System::Void DLGFHCIGCPJ(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HHCFLCEDGMK_DLGFHCIGCPJ_OFFSET))(this, EGEGIMGMJHN);
	}
};
