#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIBangkovBagPageController_LocalBangkovItemInfo.h"
#include "unitysdk/System/Object.h"

class DONGCBIGJJL;
class FAKLNMJEGOJ;
class FMHDMLBDIJC;
class IFOHGNLIAKH;

#define DONGCBIGJJL_FCAIMMHOKDB_HDFJLILOLHF_OFFSET UNITYSDK_OFFSET(0x1697D600)
#define DONGCBIGJJL_FCAIMMHOKDB_HMJLHHHPKAO_OFFSET UNITYSDK_OFFSET(0x1697D430)
#define DONGCBIGJJL_FCAIMMHOKDB_IICEGOHCEAA_OFFSET UNITYSDK_OFFSET(0x1697D490)
#define DONGCBIGJJL_FCAIMMHOKDB_NCNDDIJLAPA_OFFSET UNITYSDK_OFFSET(0x1697CF40)
#define DONGCBIGJJL_FCAIMMHOKDB__CTOR_OFFSET UNITYSDK_OFFSET(0x1697CF30)

inline static constexpr unsigned int DONGCBIGJJL_FCAIMMHOKDB_TypeDefinitionIndex = 70499;

class DONGCBIGJJL_FCAIMMHOKDB : public ::System::Object
{
public:
	::MoleMole::UIBangkovBagPageController_LocalBangkovItemInfo LCMCAPGFJLO; // 0x10
	::FMHDMLBDIJC* BLFMEHNGIPN; // 0x28
	::DONGCBIGJJL* KLHPEBKNIFB; // 0x30
	::FAKLNMJEGOJ* IPMMCGDMODG; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DONGCBIGJJL_FCAIMMHOKDB__CTOR_OFFSET))(this);
	}

	::System::Void NCNDDIJLAPA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DONGCBIGJJL_FCAIMMHOKDB_NCNDDIJLAPA_OFFSET))(this);
	}

	::System::Object* HMJLHHHPKAO()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + DONGCBIGJJL_FCAIMMHOKDB_HMJLHHHPKAO_OFFSET))(this);
	}

	::System::Void IICEGOHCEAA(::IFOHGNLIAKH* JOLDOMEIKEF)
	{
		return ((::System::Void(*)(::PVOID, ::IFOHGNLIAKH*))((::PBYTE)hIl2Cpp + DONGCBIGJJL_FCAIMMHOKDB_IICEGOHCEAA_OFFSET))(this, JOLDOMEIKEF);
	}

	::System::Boolean HDFJLILOLHF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DONGCBIGJJL_FCAIMMHOKDB_HDFJLILOLHF_OFFSET))(this);
	}
};
