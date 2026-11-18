#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/MoleMole/Config/PropertyModifyFunction.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class LHHNKBDEMGO;
namespace MoleMole::Config { class DynamicFloat; }
namespace System { class String; }

#define ECDBKIANFHH_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x148C5180)
#define ECDBKIANFHH_FROMFLX_OFFSET UNITYSDK_OFFSET(0x148C5570)
#define ECDBKIANFHH_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x148C51E0)
#define ECDBKIANFHH_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x148C55F0)
#define ECDBKIANFHH__CTOR_OFFSET UNITYSDK_OFFSET(0x148C5F20)

inline static constexpr unsigned int ECDBKIANFHH_TypeDefinitionIndex = 88278;

class ECDBKIANFHH : public ::System::Object
{
public:
	::MoleMole::Config::DynamicFloat* HBOJLFKAOOH; // 0x10
	::MoleMole::Config::DynamicFloat* PMLOGFLOLNJ; // 0x18
	::System::String* LFNMPOCHPLP; // 0x20
	::Il2CppArray<::LHHNKBDEMGO*>* PIDOLKBBHFN; // 0x28
	::MoleMole::Config::BaseProperty EHAKJBAKGDL; // 0x30
	::MoleMole::Config::PropertyModifyFunction HDCIHCKELCC; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECDBKIANFHH__CTOR_OFFSET))(this);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + ECDBKIANFHH_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + ECDBKIANFHH_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + ECDBKIANFHH_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + ECDBKIANFHH_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
