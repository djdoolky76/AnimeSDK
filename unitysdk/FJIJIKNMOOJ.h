#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace System { class String; }

#define FJIJIKNMOOJ_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x1429C7D0)
#define FJIJIKNMOOJ_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1429C190)
#define FJIJIKNMOOJ_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1429BDB0)
#define FJIJIKNMOOJ_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x1429C1F0)
#define FJIJIKNMOOJ_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x1429BE30)
#define FJIJIKNMOOJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1429C4C0)
#define FJIJIKNMOOJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1429C7C0)

inline static constexpr unsigned int FJIJIKNMOOJ_TypeDefinitionIndex = 46668;

class FJIJIKNMOOJ : public ::System::Object
{
public:
	::System::String* EIMKEPPGLNF; // 0x10
	::Il2CppArray<::System::Byte>* NDHNLGPPAJP; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJIJIKNMOOJ__CTOR_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + FJIJIKNMOOJ_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + FJIJIKNMOOJ_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJIJIKNMOOJ_TOSTRING_OFFSET))(this);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + FJIJIKNMOOJ_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + FJIJIKNMOOJ_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJIJIKNMOOJ_DPIHOJBBGLA_OFFSET))(this);
	}
};
