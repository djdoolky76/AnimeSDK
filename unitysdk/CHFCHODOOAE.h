#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class MNEHPJOKCFF;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CHFCHODOOAE_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1153F1A0)
#define CHFCHODOOAE_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1153EF60)
#define CHFCHODOOAE_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x1153F200)
#define CHFCHODOOAE_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x1153EFE0)
#define CHFCHODOOAE__CTOR_OFFSET UNITYSDK_OFFSET(0x1153F3B0)

inline static constexpr unsigned int CHFCHODOOAE_TypeDefinitionIndex = 70371;

class CHFCHODOOAE : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::MNEHPJOKCFF*>* GOGMCNFPCFP; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFCHODOOAE__CTOR_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CHFCHODOOAE_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + CHFCHODOOAE_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + CHFCHODOOAE_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CHFCHODOOAE_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
