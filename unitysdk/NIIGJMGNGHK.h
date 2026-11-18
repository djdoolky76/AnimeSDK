#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;

#define NIIGJMGNGHK_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17291390)
#define NIIGJMGNGHK_FROMFLX_OFFSET UNITYSDK_OFFSET(0x17290FF0)
#define NIIGJMGNGHK_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x172913F0)
#define NIIGJMGNGHK_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x17291070)
#define NIIGJMGNGHK__CTOR_OFFSET UNITYSDK_OFFSET(0x17291720)

inline static constexpr unsigned int NIIGJMGNGHK_TypeDefinitionIndex = 81104;

class NIIGJMGNGHK : public ::System::Object
{
public:
	::System::Int32 HAAEBCOBKFF; // 0x10
	::System::Int32 BFMMEICFNCD; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIIGJMGNGHK__CTOR_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + NIIGJMGNGHK_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + NIIGJMGNGHK_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + NIIGJMGNGHK_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + NIIGJMGNGHK_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
