#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FJMFECAAPHD;

#define DHPBHHKHIGO_IEICHIBDAKN_CLILAJOLCAM_OFFSET UNITYSDK_OFFSET(0x194136B0)
#define DHPBHHKHIGO_IEICHIBDAKN_KINMLIPOMAK_OFFSET UNITYSDK_OFFSET(0x19413740)
#define DHPBHHKHIGO_IEICHIBDAKN__CTOR_OFFSET UNITYSDK_OFFSET(0x194136A0)

inline static constexpr unsigned int DHPBHHKHIGO_IEICHIBDAKN_TypeDefinitionIndex = 91674;

class DHPBHHKHIGO_IEICHIBDAKN : public ::System::Object
{
public:
	::FJMFECAAPHD* KAICENLHIBO; // 0x10
	::FJMFECAAPHD* NKKJKCIJPOF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHPBHHKHIGO_IEICHIBDAKN__CTOR_OFFSET))(this);
	}

	::System::Void CLILAJOLCAM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHPBHHKHIGO_IEICHIBDAKN_CLILAJOLCAM_OFFSET))(this);
	}

	::System::Void KINMLIPOMAK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHPBHHKHIGO_IEICHIBDAKN_KINMLIPOMAK_OFFSET))(this);
	}
};
