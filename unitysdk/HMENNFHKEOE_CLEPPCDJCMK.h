#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MGJLJHECMFL_LDHINONOMIB;

#define HMENNFHKEOE_CLEPPCDJCMK_BEPALJFIFGK_OFFSET UNITYSDK_OFFSET(0x14709C00)
#define HMENNFHKEOE_CLEPPCDJCMK_MNGNKPLNEKD_OFFSET UNITYSDK_OFFSET(0x147099B0)
#define HMENNFHKEOE_CLEPPCDJCMK__CTOR_OFFSET UNITYSDK_OFFSET(0x147099A0)

inline static constexpr unsigned int HMENNFHKEOE_CLEPPCDJCMK_TypeDefinitionIndex = 53322;

class HMENNFHKEOE_CLEPPCDJCMK : public ::System::Object
{
public:
	::MGJLJHECMFL_LDHINONOMIB* LJEGAJIIMJD; // 0x10
	::System::Boolean EACOGJBBELI; // 0x18
	::System::Byte _padding0[0x3];
	::System::UInt32 LJFEPOCHDNH; // 0x1C
	::System::UInt32 CNMGPKNCNLP; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMENNFHKEOE_CLEPPCDJCMK__CTOR_OFFSET))(this);
	}

	::System::Void MNGNKPLNEKD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMENNFHKEOE_CLEPPCDJCMK_MNGNKPLNEKD_OFFSET))(this);
	}

	::System::Void BEPALJFIFGK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMENNFHKEOE_CLEPPCDJCMK_BEPALJFIFGK_OFFSET))(this);
	}
};
