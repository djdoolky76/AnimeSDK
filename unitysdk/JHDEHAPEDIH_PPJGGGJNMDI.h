#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MECPGCBLFAE_JKIOJGIINAO.h"
#include "unitysdk/System/Object.h"

class JHDEHAPEDIH_FDOONENCLDN;

#define JHDEHAPEDIH_PPJGGGJNMDI_AJFLLDMCFJG_OFFSET UNITYSDK_OFFSET(0x14A7DE20)
#define JHDEHAPEDIH_PPJGGGJNMDI__CTOR_OFFSET UNITYSDK_OFFSET(0x14A7DE10)

inline static constexpr unsigned int JHDEHAPEDIH_PPJGGGJNMDI_TypeDefinitionIndex = 48710;

class JHDEHAPEDIH_PPJGGGJNMDI : public ::System::Object
{
public:
	::JHDEHAPEDIH_FDOONENCLDN* EEMOEMFLABI; // 0x10
	::MECPGCBLFAE_JKIOJGIINAO PHHDHIBOCKA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHDEHAPEDIH_PPJGGGJNMDI__CTOR_OFFSET))(this);
	}

	::System::Void AJFLLDMCFJG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHDEHAPEDIH_PPJGGGJNMDI_AJFLLDMCFJG_OFFSET))(this);
	}
};
