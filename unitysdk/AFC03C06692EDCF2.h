#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define AFC03C06692EDCF2_BD787FEDC7848B47_OFFSET UNITYSDK_OFFSET(0x299D100)
#define AFC03C06692EDCF2_E3A6840538A3334C_OFFSET UNITYSDK_OFFSET(0x299D240)
#define AFC03C06692EDCF2_F7B0A23335A3DB16_OFFSET UNITYSDK_OFFSET(0x299D370)
#define AFC03C06692EDCF2__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int AFC03C06692EDCF2_TypeDefinitionIndex = 15556;

class AFC03C06692EDCF2 : public ::System::Object
{
public:
	static ::AFC03C06692EDCF2** StaticGet_E0E7A5F93551109B()
	{
		return (::AFC03C06692EDCF2**)Il2CppClass::FromTypeDefinitionIndex(AFC03C06692EDCF2_TypeDefinitionIndex)->GetStaticField(0x0);
	}

	::System::Void E3A6840538A3334C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFC03C06692EDCF2_E3A6840538A3334C_OFFSET))(this);
	}

	::System::Void BD787FEDC7848B47()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFC03C06692EDCF2_BD787FEDC7848B47_OFFSET))(this);
	}

	static ::AFC03C06692EDCF2* F7B0A23335A3DB16()
	{
		return ((::AFC03C06692EDCF2*(*)())((::PBYTE)hIl2Cpp + AFC03C06692EDCF2_F7B0A23335A3DB16_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFC03C06692EDCF2__CTOR_OFFSET))(this);
	}
};
