#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace MoleMole::Config { class ConfigPosRot; }
namespace System { class String; }

#define CGOMGNAJNAI_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16867AA0)
#define CGOMGNAJNAI_FROMFLX_OFFSET UNITYSDK_OFFSET(0x16867DF0)
#define CGOMGNAJNAI_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x16867B00)
#define CGOMGNAJNAI_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x16867E70)
#define CGOMGNAJNAI__CTOR_OFFSET UNITYSDK_OFFSET(0x168682D0)

inline static constexpr unsigned int CGOMGNAJNAI_TypeDefinitionIndex = 55482;

class CGOMGNAJNAI : public ::System::Object
{
public:
	::MoleMole::Config::ConfigPosRot* LPNPEPBFLLN; // 0x10
	::System::String* NHCAGEPNIHA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGOMGNAJNAI__CTOR_OFFSET))(this);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + CGOMGNAJNAI_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CGOMGNAJNAI_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + CGOMGNAJNAI_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CGOMGNAJNAI_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
