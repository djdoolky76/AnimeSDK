#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OMFJMGPMDCK.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/OMADHHOMDJC.h"

class FKNIEPCILLG;
class LHHNKBDEMGO;

#define IJHNILAAHEC_FAEAEGGPANG_OFFSET UNITYSDK_OFFSET(0xB937EA0)
#define IJHNILAAHEC_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xB937BD0)
#define IJHNILAAHEC_FROMFLX_OFFSET UNITYSDK_OFFSET(0xB9378C0)
#define IJHNILAAHEC_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0xB937C80)
#define IJHNILAAHEC_PBALIOGFFFL_OFFSET UNITYSDK_OFFSET(0xB9377C0)
#define IJHNILAAHEC_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0xB937990)
#define IJHNILAAHEC__CTOR_OFFSET UNITYSDK_OFFSET(0xB937E90)

inline static constexpr unsigned int IJHNILAAHEC_TypeDefinitionIndex = 89764;

class IJHNILAAHEC : public ::OMFJMGPMDCK
{
public:
	::Il2CppArray<::LHHNKBDEMGO*>* PIDOLKBBHFN; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJHNILAAHEC__CTOR_OFFSET))(this);
	}

	::System::Boolean PBALIOGFFFL(::OMADHHOMDJC& AAOCANGHBDG)
	{
		return ((::System::Boolean(*)(::PVOID, ::OMADHHOMDJC&))((::PBYTE)hIl2Cpp + IJHNILAAHEC_PBALIOGFFFL_OFFSET))(this, AAOCANGHBDG);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + IJHNILAAHEC_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + IJHNILAAHEC_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + IJHNILAAHEC_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean FAEAEGGPANG(::OMADHHOMDJC& MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::OMADHHOMDJC&))((::PBYTE)hIl2Cpp + IJHNILAAHEC_FAEAEGGPANG_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + IJHNILAAHEC_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
