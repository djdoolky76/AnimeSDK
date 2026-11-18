#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PEJOBIHMGDE_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16FA1860)
#define PEJOBIHMGDE_FROMFLX_OFFSET UNITYSDK_OFFSET(0x16FA1EE0)
#define PEJOBIHMGDE_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x16FA18C0)
#define PEJOBIHMGDE_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x16FA1F60)
#define PEJOBIHMGDE__CTOR_OFFSET UNITYSDK_OFFSET(0x16FA27F0)

inline static constexpr unsigned int PEJOBIHMGDE_TypeDefinitionIndex = 71469;

class PEJOBIHMGDE : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* JJCGFEAEBHH; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* PLGEMFDIPBH; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* BCJKKHOHAPA; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* HAOLKJBDKOM; // 0x28
	::System::String* AEAFLLDMMPH; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEJOBIHMGDE__CTOR_OFFSET))(this);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PEJOBIHMGDE_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + PEJOBIHMGDE_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PEJOBIHMGDE_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + PEJOBIHMGDE_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
