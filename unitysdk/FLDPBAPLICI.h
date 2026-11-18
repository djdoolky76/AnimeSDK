#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class EKHEOJOFLLA;
class FKNIEPCILLG;
namespace MoleMole::Config { class ConfigViewObjectTraitBase; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FLDPBAPLICI_APMCKICIGDA_OFFSET UNITYSDK_OFFSET(0x15E6C4D0)
#define FLDPBAPLICI_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x15E6C3C0)
#define FLDPBAPLICI_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x15E6BF40)
#define FLDPBAPLICI_FROMFLX_OFFSET UNITYSDK_OFFSET(0x15E6B9D0)
#define FLDPBAPLICI_GCOOPBNKPKL_OFFSET UNITYSDK_OFFSET(0x15E6C720)
#define FLDPBAPLICI_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x15E6BFA0)
#define FLDPBAPLICI_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x15E6BA50)
#define FLDPBAPLICI__CTOR_OFFSET UNITYSDK_OFFSET(0x15E6C4C0)

inline static constexpr unsigned int FLDPBAPLICI_TypeDefinitionIndex = 50531;

class FLDPBAPLICI : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::MoleMole::Config::ConfigViewObjectTraitBase*>* FOOHOHKPNBL; // 0x10
	::System::Collections::Generic::List_1<::System::String*>* CLAMIIKGKAD; // 0x18
	::System::Int32 GEHABEKNGBI; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLDPBAPLICI__CTOR_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + FLDPBAPLICI_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + FLDPBAPLICI_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::FLDPBAPLICI* DGNAAPGKIPL()
	{
		return ((::FLDPBAPLICI*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLDPBAPLICI_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + FLDPBAPLICI_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean APMCKICIGDA(::EKHEOJOFLLA* AAOCANGHBDG)
	{
		return ((::System::Boolean(*)(::PVOID, ::EKHEOJOFLLA*))((::PBYTE)hIl2Cpp + FLDPBAPLICI_APMCKICIGDA_OFFSET))(this, AAOCANGHBDG);
	}

	::FLDPBAPLICI* GCOOPBNKPKL(::EKHEOJOFLLA* AAOCANGHBDG)
	{
		return ((::FLDPBAPLICI*(*)(::PVOID, ::EKHEOJOFLLA*))((::PBYTE)hIl2Cpp + FLDPBAPLICI_GCOOPBNKPKL_OFFSET))(this, AAOCANGHBDG);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + FLDPBAPLICI_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
