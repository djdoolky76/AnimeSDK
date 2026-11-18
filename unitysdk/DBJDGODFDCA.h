#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorHitEffect.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace System { class String; }

#define DBJDGODFDCA_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x13285CF0)
#define DBJDGODFDCA_FROMFLX_OFFSET UNITYSDK_OFFSET(0x13285680)
#define DBJDGODFDCA_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x13285D50)
#define DBJDGODFDCA_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x13285700)
#define DBJDGODFDCA__CTOR_OFFSET UNITYSDK_OFFSET(0x13286060)

inline static constexpr unsigned int DBJDGODFDCA_TypeDefinitionIndex = 88191;

class DBJDGODFDCA : public ::System::Object
{
public:
	::System::String* OMMICIJCCKB; // 0x10
	::System::Single EPMNIJOAOOG; // 0x18
	::MoleMole::Config::AnimatorHitEffect DFFOMDOCDFI; // 0x1C
	::System::Int32 DFDGHHIGBOG; // 0x20

	::System::Void _ctor(::System::Single FNIOPKPHDEH, ::System::String* LDNCGMNHANO, ::MoleMole::Config::AnimatorHitEffect AADMNLBGGMI, ::System::Int32 HFMCLJBHOFO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::String*, ::MoleMole::Config::AnimatorHitEffect, ::System::Int32))((::PBYTE)hIl2Cpp + DBJDGODFDCA__CTOR_OFFSET))(this, FNIOPKPHDEH, LDNCGMNHANO, AADMNLBGGMI, HFMCLJBHOFO);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + DBJDGODFDCA_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + DBJDGODFDCA_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + DBJDGODFDCA_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + DBJDGODFDCA_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
