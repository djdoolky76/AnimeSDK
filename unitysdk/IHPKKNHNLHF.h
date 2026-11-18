#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KFNMABCCOEB.h"
#include "unitysdk/MoleMole/Config/SceneConfigRuntimeDataArea.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IHPKKNHNLHF_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1A468A20)
#define IHPKKNHNLHF_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1A468630)
#define IHPKKNHNLHF_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x1A468A80)
#define IHPKKNHNLHF_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x1A4686B0)
#define IHPKKNHNLHF__CTOR_OFFSET UNITYSDK_OFFSET(0x1A468C60)

inline static constexpr unsigned int IHPKKNHNLHF_TypeDefinitionIndex = 66120;

class IHPKKNHNLHF : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::MoleMole::Config::SceneConfigRuntimeDataArea>* IGKDHNHBOAH; // 0x10
	::KFNMABCCOEB CPDEHOIDOAF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHPKKNHNLHF__CTOR_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + IHPKKNHNLHF_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + IHPKKNHNLHF_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + IHPKKNHNLHF_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + IHPKKNHNLHF_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
