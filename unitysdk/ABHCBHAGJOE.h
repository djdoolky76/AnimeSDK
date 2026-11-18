#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BJGEHPLJCMC.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace System { class String; }

#define ABHCBHAGJOE_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x181E5F30)
#define ABHCBHAGJOE_FROMFLX_OFFSET UNITYSDK_OFFSET(0x181E5BA0)
#define ABHCBHAGJOE_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x181E5F90)
#define ABHCBHAGJOE_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x181E5C20)
#define ABHCBHAGJOE__CTOR_OFFSET UNITYSDK_OFFSET(0x181E6160)

inline static constexpr unsigned int ABHCBHAGJOE_TypeDefinitionIndex = 88313;

class ABHCBHAGJOE : public ::System::Object
{
public:
	::System::String* MFICCJKHMHJ; // 0x10
	::BJGEHPLJCMC CGDDLMHAKFJ; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABHCBHAGJOE__CTOR_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + ABHCBHAGJOE_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + ABHCBHAGJOE_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + ABHCBHAGJOE_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + ABHCBHAGJOE_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
