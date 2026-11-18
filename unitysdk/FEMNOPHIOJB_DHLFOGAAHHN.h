#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FEMNOPHIOJB;
class HPMBBDGJECD;

#define FEMNOPHIOJB_DHLFOGAAHHN_MJGEFMEOECJ_OFFSET UNITYSDK_OFFSET(0x15E5B140)
#define FEMNOPHIOJB_DHLFOGAAHHN__CTOR_OFFSET UNITYSDK_OFFSET(0x15E5B130)

inline static constexpr unsigned int FEMNOPHIOJB_DHLFOGAAHHN_TypeDefinitionIndex = 50220;

class FEMNOPHIOJB_DHLFOGAAHHN : public ::System::Object
{
public:
	::FEMNOPHIOJB* KLHPEBKNIFB; // 0x10
	::System::Int32 INEPJABHIIG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEMNOPHIOJB_DHLFOGAAHHN__CTOR_OFFSET))(this);
	}

	::System::Void MJGEFMEOECJ(::HPMBBDGJECD* DIEFNGMBMKF)
	{
		return ((::System::Void(*)(::PVOID, ::HPMBBDGJECD*))((::PBYTE)hIl2Cpp + FEMNOPHIOJB_DHLFOGAAHHN_MJGEFMEOECJ_OFFSET))(this, DIEFNGMBMKF);
	}
};
