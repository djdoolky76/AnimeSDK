#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class NEAPGKAPCJF;
namespace MoleMole::Config { class DynamicFloat; }
namespace MoleMole::Config { class DynamicInt; }

#define GAABKNKPPMA_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x125BC7F0)
#define GAABKNKPPMA_FROMFLX_OFFSET UNITYSDK_OFFSET(0x125BCD50)
#define GAABKNKPPMA_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x125BC850)
#define GAABKNKPPMA_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x125BCDD0)
#define GAABKNKPPMA__CTOR_OFFSET UNITYSDK_OFFSET(0x125BDCF0)

inline static constexpr unsigned int GAABKNKPPMA_TypeDefinitionIndex = 47329;

class GAABKNKPPMA : public ::System::Object
{
public:
	::NEAPGKAPCJF* DCIPNHGBKEF; // 0x10
	::MoleMole::Config::DynamicFloat* GEDEMFCMJAI; // 0x18
	::MoleMole::Config::DynamicFloat* LKFICGDPEDE; // 0x20
	::MoleMole::Config::DynamicFloat* AAAPFBILEOO; // 0x28
	::MoleMole::Config::DynamicFloat* LAJMBLBHFFG; // 0x30
	::MoleMole::Config::DynamicInt* AMLPLMGCEME; // 0x38
	::MoleMole::Config::DynamicFloat* CMKEIKHCBCD; // 0x40
	::UnityEngine::Vector3 JEJMGCNBMAD; // 0x48
	::System::Boolean PEDANHBGIGE; // 0x54

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAABKNKPPMA__CTOR_OFFSET))(this);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + GAABKNKPPMA_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + GAABKNKPPMA_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + GAABKNKPPMA_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + GAABKNKPPMA_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
