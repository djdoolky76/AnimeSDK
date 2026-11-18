#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FFEOMOMFAKP;
class HHBFOPNELHO;

#define IANGOGBBEIL_LJCPMOOMOFF_DEFIHFABCOK_OFFSET UNITYSDK_OFFSET(0x1655ED80)
#define IANGOGBBEIL_LJCPMOOMOFF_PBADNEHCCMK_OFFSET UNITYSDK_OFFSET(0x1655ECB0)
#define IANGOGBBEIL_LJCPMOOMOFF__CTOR_OFFSET UNITYSDK_OFFSET(0x1655ECA0)

inline static constexpr unsigned int IANGOGBBEIL_LJCPMOOMOFF_TypeDefinitionIndex = 57488;

class IANGOGBBEIL_LJCPMOOMOFF : public ::System::Object
{
public:
	::HHBFOPNELHO* LHPFMGBDFPN; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IANGOGBBEIL_LJCPMOOMOFF__CTOR_OFFSET))(this);
	}

	::System::Void PBADNEHCCMK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IANGOGBBEIL_LJCPMOOMOFF_PBADNEHCCMK_OFFSET))(this);
	}

	::System::Boolean DEFIHFABCOK(::FFEOMOMFAKP* HAAEBCOBKFF)
	{
		return ((::System::Boolean(*)(::PVOID, ::FFEOMOMFAKP*))((::PBYTE)hIl2Cpp + IANGOGBBEIL_LJCPMOOMOFF_DEFIHFABCOK_OFFSET))(this, HAAEBCOBKFF);
	}
};
