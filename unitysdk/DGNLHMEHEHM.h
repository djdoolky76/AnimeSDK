#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JKFFEFMBPDF.h"
#include "unitysdk/OIFPPFEDHKI.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class LHHNKBDEMGO;
namespace MoleMole::Config { class DynamicFloat; }
namespace MoleMole::Config { class DynamicInt; }
namespace System { class String; }

#define DGNLHMEHEHM_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1207EEF0)
#define DGNLHMEHEHM_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1207F4B0)
#define DGNLHMEHEHM_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x1207EF50)
#define DGNLHMEHEHM_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x1207F530)
#define DGNLHMEHEHM__CTOR_OFFSET UNITYSDK_OFFSET(0x12080750)

inline static constexpr unsigned int DGNLHMEHEHM_TypeDefinitionIndex = 48778;

class DGNLHMEHEHM : public ::System::Object
{
public:
	::System::String* GJLFKFNMDKP; // 0x10
	::Il2CppArray<::LHHNKBDEMGO*>* MGPACFPMDMP; // 0x18
	::MoleMole::Config::DynamicInt* AMCDAOJKFNF; // 0x20
	::Il2CppArray<::LHHNKBDEMGO*>* NONNGPPGBLM; // 0x28
	::MoleMole::Config::DynamicFloat* GKBDGNOIMIH; // 0x30
	::MoleMole::Config::DynamicFloat* PMLOGFLOLNJ; // 0x38
	::MoleMole::Config::DynamicFloat* CJLKFOGFONE; // 0x40
	::MoleMole::Config::DynamicFloat* HBOJLFKAOOH; // 0x48
	::MoleMole::Config::DynamicInt* OJFAKMLOBOB; // 0x50
	::OIFPPFEDHKI GBBBPFMHEBG; // 0x58
	::JKFFEFMBPDF HHBCJGFOIDM; // 0x5C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGNLHMEHEHM__CTOR_OFFSET))(this);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + DGNLHMEHEHM_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + DGNLHMEHEHM_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + DGNLHMEHEHM_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + DGNLHMEHEHM_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
