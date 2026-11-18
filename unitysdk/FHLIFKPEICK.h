#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FFPBJJNBCPK;
class FKNIEPCILLG;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FHLIFKPEICK_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x140F8C30)
#define FHLIFKPEICK_FROMFLX_OFFSET UNITYSDK_OFFSET(0x140F8880)
#define FHLIFKPEICK_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x140F8C90)
#define FHLIFKPEICK_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x140F8900)
#define FHLIFKPEICK__CTOR_OFFSET UNITYSDK_OFFSET(0x140F8EA0)

inline static constexpr unsigned int FHLIFKPEICK_TypeDefinitionIndex = 70768;

class FHLIFKPEICK : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::FFPBJJNBCPK*>* PKPECCFOLLM; // 0x10
	::System::String* OJIEDECHHAK; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHLIFKPEICK__CTOR_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + FHLIFKPEICK_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + FHLIFKPEICK_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + FHLIFKPEICK_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + FHLIFKPEICK_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
