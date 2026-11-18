#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EBGABOFHFHL.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace MoleMole::Config { class DynamicFloat; }
namespace MoleMole::Config { class DynamicInt; }
namespace System { class String; }

#define NFCIDHJGOIB_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x13135250)
#define NFCIDHJGOIB_FROMFLX_OFFSET UNITYSDK_OFFSET(0x13135070)
#define NFCIDHJGOIB_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x1313FC40)
#define NFCIDHJGOIB_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x13140250)
#define NFCIDHJGOIB__CTOR_OFFSET UNITYSDK_OFFSET(0x13135060)

inline static constexpr unsigned int NFCIDHJGOIB_TypeDefinitionIndex = 87085;

class NFCIDHJGOIB : public ::System::Object
{
public:
	::MoleMole::Config::DynamicFloat* HDJNMOFEPFH; // 0x10
	::MoleMole::Config::DynamicFloat* HLMKENIDHLE; // 0x18
	::MoleMole::Config::DynamicFloat* DIANMLFFDAM; // 0x20
	::MoleMole::Config::DynamicFloat* COGMJELKJJL; // 0x28
	::System::String* FMLKKNMLJHH; // 0x30
	::MoleMole::Config::DynamicInt* KMMOKJLMCLE; // 0x38
	::MoleMole::Config::DynamicFloat* KEPMKCEMCHF; // 0x40
	::MoleMole::Config::DynamicFloat* PGNHHMAHHPD; // 0x48
	::MoleMole::Config::DynamicFloat* OMBKKMMKDGH; // 0x50
	::MoleMole::Config::DynamicInt* FCKMNAKNDLB; // 0x58
	::MoleMole::Config::DynamicFloat* CINIKCFLNJD; // 0x60
	::EBGABOFHFHL GIANNJMEPMJ; // 0x68
	::UnityEngine::Vector3 NJEHMLODJEK; // 0x6C
	::UnityEngine::Vector3 HBHLHBOMFDB; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFCIDHJGOIB__CTOR_OFFSET))(this);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + NFCIDHJGOIB_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + NFCIDHJGOIB_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + NFCIDHJGOIB_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + NFCIDHJGOIB_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
