#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace System { class String; }

#define NOKJBIJIFHG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x13172FB0)
#define NOKJBIJIFHG_FROMFLX_OFFSET UNITYSDK_OFFSET(0x13173460)
#define NOKJBIJIFHG_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x13173010)
#define NOKJBIJIFHG_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x131734E0)
#define NOKJBIJIFHG__CTOR_OFFSET UNITYSDK_OFFSET(0x131739C0)

inline static constexpr unsigned int NOKJBIJIFHG_TypeDefinitionIndex = 76382;

class NOKJBIJIFHG : public ::System::Object
{
public:
	::Il2CppArray<::System::Int32>* MJKCBLKAAKJ; // 0x10
	::Il2CppArray<::System::String*>* JEFIMHBLBOE; // 0x18
	::System::Boolean DEBGKPLOPCG; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOKJBIJIFHG__CTOR_OFFSET))(this);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + NOKJBIJIFHG_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + NOKJBIJIFHG_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + NOKJBIJIFHG_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + NOKJBIJIFHG_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
