#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class BHEKACANAMA;
class FKNIEPCILLG;
namespace MoleMole::Config { class DynamicFloat; }
namespace MoleMole::Config { class DynamicInt; }
namespace MoleMole::Config { class DynamicString; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LFLGGFELJID_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1A308E80)
#define LFLGGFELJID_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1A309460)
#define LFLGGFELJID_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x1A308EE0)
#define LFLGGFELJID_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x1A3094E0)
#define LFLGGFELJID__CTOR_OFFSET UNITYSDK_OFFSET(0x1A30A590)

inline static constexpr unsigned int LFLGGFELJID_TypeDefinitionIndex = 85071;

class LFLGGFELJID : public ::System::Object
{
public:
	::MoleMole::Config::DynamicFloat* JADPALMPGGB; // 0x10
	::BHEKACANAMA* PKDEDKLPGEH; // 0x18
	::System::Collections::Generic::List_1<::System::String*>* FGADEGGHMAB; // 0x20
	::MoleMole::Config::DynamicInt* MLEJJHFEAFP; // 0x28
	::MoleMole::Config::DynamicString* KKOEDKIPHHN; // 0x30
	::MoleMole::Config::DynamicInt* AJMONONIOLI; // 0x38
	::MoleMole::Config::DynamicInt* AINFLEFDINO; // 0x40
	::MoleMole::Config::DynamicFloat* KLJEFBCIFAB; // 0x48
	::BHEKACANAMA* AMGMIMFEAAH; // 0x50
	::System::Boolean EOIKGIKKCDF; // 0x58
	::System::Boolean DLBIDFNGDOM; // 0x59
	::System::Boolean FBOFOHPOFKA; // 0x5A

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFLGGFELJID__CTOR_OFFSET))(this);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + LFLGGFELJID_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + LFLGGFELJID_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + LFLGGFELJID_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + LFLGGFELJID_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
