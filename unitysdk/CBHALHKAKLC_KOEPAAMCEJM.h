#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CBHALHKAKLC;
class CBHALHKAKLC_OMCMPLFMCAM;
class GEKNEEMAHBC;

#define CBHALHKAKLC_KOEPAAMCEJM_OHAMCFAGBEL_OFFSET UNITYSDK_OFFSET(0x11421500)
#define CBHALHKAKLC_KOEPAAMCEJM__CTOR_OFFSET UNITYSDK_OFFSET(0x114214F0)

inline static constexpr unsigned int CBHALHKAKLC_KOEPAAMCEJM_TypeDefinitionIndex = 55863;

class CBHALHKAKLC_KOEPAAMCEJM : public ::System::Object
{
public:
	::CBHALHKAKLC* KLHPEBKNIFB; // 0x10
	::CBHALHKAKLC_OMCMPLFMCAM* LJBPECKCCEA; // 0x18
	::GEKNEEMAHBC* EGGOCICCFJC; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBHALHKAKLC_KOEPAAMCEJM__CTOR_OFFSET))(this);
	}

	::System::Void OHAMCFAGBEL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBHALHKAKLC_KOEPAAMCEJM_OHAMCFAGBEL_OFFSET))(this);
	}
};
