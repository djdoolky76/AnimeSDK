#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace System { class String; }

#define CIAIBDLGEOG_BFDANFKFPDO_OFFSET UNITYSDK_OFFSET(0x159DAFF0)
#define CIAIBDLGEOG_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x159DADE0)
#define CIAIBDLGEOG_NFAOKJPILBO_OFFSET UNITYSDK_OFFSET(0x159DB440)
#define CIAIBDLGEOG_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x159DB0C0)
#define CIAIBDLGEOG__CTOR_OFFSET UNITYSDK_OFFSET(0x159DADD0)

inline static constexpr unsigned int CIAIBDLGEOG_TypeDefinitionIndex = 61853;

class CIAIBDLGEOG : public ::System::Object
{
public:
	::System::String* CBHILGCLCDH; // 0x10
	::System::Single MPDKKIBAONL; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIAIBDLGEOG__CTOR_OFFSET))(this);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + CIAIBDLGEOG_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean BFDANFKFPDO(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CIAIBDLGEOG_BFDANFKFPDO_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean NFAOKJPILBO(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + CIAIBDLGEOG_NFAOKJPILBO_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CIAIBDLGEOG_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
