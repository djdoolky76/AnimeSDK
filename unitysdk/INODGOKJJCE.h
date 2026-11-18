#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace System { class String; }

#define INODGOKJJCE_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1658BC70)
#define INODGOKJJCE_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1658B890)
#define INODGOKJJCE_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x1658BCD0)
#define INODGOKJJCE_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x1658B910)
#define INODGOKJJCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1658C060)

inline static constexpr unsigned int INODGOKJJCE_TypeDefinitionIndex = 85827;

class INODGOKJJCE : public ::System::Object
{
public:
	::Il2CppArray<::System::Int32>* NBJIOBFBNPL; // 0x10
	::Il2CppArray<::System::String*>* LJICDJLAOJJ; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INODGOKJJCE__CTOR_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + INODGOKJJCE_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + INODGOKJJCE_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + INODGOKJJCE_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + INODGOKJJCE_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
