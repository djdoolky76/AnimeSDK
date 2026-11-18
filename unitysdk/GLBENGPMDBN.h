#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/PropertyModifyFunction.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class LHHNKBDEMGO;
namespace MoleMole::Config { class DynamicFloat; }

#define GLBENGPMDBN_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x10F050C0)
#define GLBENGPMDBN_FROMFLX_OFFSET UNITYSDK_OFFSET(0x10F05410)
#define GLBENGPMDBN_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x10F05120)
#define GLBENGPMDBN_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x10F05490)
#define GLBENGPMDBN__CTOR_OFFSET UNITYSDK_OFFSET(0x10F05AE0)

inline static constexpr unsigned int GLBENGPMDBN_TypeDefinitionIndex = 78175;

class GLBENGPMDBN : public ::System::Object
{
public:
	::MoleMole::Config::DynamicFloat* HBOJLFKAOOH; // 0x10
	::Il2CppArray<::LHHNKBDEMGO*>* PIDOLKBBHFN; // 0x18
	::MoleMole::Config::DynamicFloat* PMLOGFLOLNJ; // 0x20
	::MoleMole::Config::PropertyModifyFunction HDCIHCKELCC; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLBENGPMDBN__CTOR_OFFSET))(this);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + GLBENGPMDBN_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + GLBENGPMDBN_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + GLBENGPMDBN_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + GLBENGPMDBN_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
