#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class CMJCCDIEHEH;
class FKNIEPCILLG;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IEFCLAHIMIK_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1656DFF0)
#define IEFCLAHIMIK_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1656DAF0)
#define IEFCLAHIMIK_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x1656E050)
#define IEFCLAHIMIK_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x1656DB70)
#define IEFCLAHIMIK__CTOR_OFFSET UNITYSDK_OFFSET(0x1656E410)

inline static constexpr unsigned int IEFCLAHIMIK_TypeDefinitionIndex = 39355;

class IEFCLAHIMIK : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::CMJCCDIEHEH*>* GIDKJBGGHHA; // 0x10
	::System::Int32 GKCFJOMECMM; // 0x18
	::System::Int32 APKIKLPPHEA; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEFCLAHIMIK__CTOR_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + IEFCLAHIMIK_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + IEFCLAHIMIK_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + IEFCLAHIMIK_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + IEFCLAHIMIK_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
