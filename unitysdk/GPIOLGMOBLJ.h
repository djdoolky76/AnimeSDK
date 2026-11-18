#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace System { template <typename T> class Action_1; }

#define GPIOLGMOBLJ_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x149F5040)
#define GPIOLGMOBLJ_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x149F5380)
#define GPIOLGMOBLJ_FROMFLX_OFFSET UNITYSDK_OFFSET(0x149F5160)
#define GPIOLGMOBLJ_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x149DB470)
#define GPIOLGMOBLJ_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x149F5140)
#define GPIOLGMOBLJ_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x149DB310)
#define GPIOLGMOBLJ_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x149F53E0)
#define GPIOLGMOBLJ_IGCGENIMIIP_OFFSET UNITYSDK_OFFSET(0x149F5150)
#define GPIOLGMOBLJ_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x149F4FF0)
#define GPIOLGMOBLJ_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x149F51E0)
#define GPIOLGMOBLJ__CTOR_OFFSET UNITYSDK_OFFSET(0x149F5600)

inline static constexpr unsigned int GPIOLGMOBLJ_TypeDefinitionIndex = 84394;

class GPIOLGMOBLJ : public ::System::Object
{
public:
	::Il2CppArray<::System::Int32>* COMIBBNLGMK; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPIOLGMOBLJ__CTOR_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + GPIOLGMOBLJ_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::GPIOLGMOBLJ* DGNAAPGKIPL()
	{
		return ((::GPIOLGMOBLJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + GPIOLGMOBLJ_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GPIOLGMOBLJ_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Void IGCGENIMIIP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPIOLGMOBLJ_IGCGENIMIIP_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + GPIOLGMOBLJ_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + GPIOLGMOBLJ_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::GPIOLGMOBLJ* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::GPIOLGMOBLJ*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + GPIOLGMOBLJ_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + GPIOLGMOBLJ_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + GPIOLGMOBLJ_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::GPIOLGMOBLJ* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::GPIOLGMOBLJ*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + GPIOLGMOBLJ_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
