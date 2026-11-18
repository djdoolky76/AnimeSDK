#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class AKKDGABKFGP;
class FKNIEPCILLG;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BCFIDMGHLEO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x13611B90)
#define BCFIDMGHLEO_FROMFLX_OFFSET UNITYSDK_OFFSET(0x136116F0)
#define BCFIDMGHLEO_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x13611C40)
#define BCFIDMGHLEO_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x136117C0)
#define BCFIDMGHLEO__CTOR_OFFSET UNITYSDK_OFFSET(0x13611EA0)

inline static constexpr unsigned int BCFIDMGHLEO_TypeDefinitionIndex = 92134;

class BCFIDMGHLEO : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::AKKDGABKFGP*>* LCMNCPCPCHL; // 0x10
	::System::String* KIPPGJJKLMM; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCFIDMGHLEO__CTOR_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + BCFIDMGHLEO_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + BCFIDMGHLEO_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + BCFIDMGHLEO_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + BCFIDMGHLEO_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
