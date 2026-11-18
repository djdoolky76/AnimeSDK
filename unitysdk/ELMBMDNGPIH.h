#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LBKGMOIKFPG.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FHLIFKPEICK;
class FKNIEPCILLG;
namespace System { class String; }

#define ELMBMDNGPIH_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x141798C0)
#define ELMBMDNGPIH_FROMFLX_OFFSET UNITYSDK_OFFSET(0x14178D50)
#define ELMBMDNGPIH_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x14179920)
#define ELMBMDNGPIH_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x14178DD0)
#define ELMBMDNGPIH__CTOR_OFFSET UNITYSDK_OFFSET(0x14179CE0)

inline static constexpr unsigned int ELMBMDNGPIH_TypeDefinitionIndex = 91998;

class ELMBMDNGPIH : public ::System::Object
{
public:
	::FHLIFKPEICK* PJNMEPDHONK; // 0x10
	::System::String* OKLLBNDINPE; // 0x18
	::System::String* NKKPDHMOCBJ; // 0x20
	::System::String* AMOOAHPKMGP; // 0x28
	::UnityEngine::Vector3 OHOGDOMNHNK; // 0x30
	::LBKGMOIKFPG FKNDKHILEGB; // 0x3C
	::UnityEngine::Vector3 FAPPLOHNCIG; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELMBMDNGPIH__CTOR_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + ELMBMDNGPIH_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + ELMBMDNGPIH_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + ELMBMDNGPIH_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + ELMBMDNGPIH_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
