#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class FLDPBAPLICI;
class HNPECBKAPMG;
namespace MoleMole::Config { class ConfigDynamicValue; }
namespace MoleMole::Config { class ConfigViewObjectTraitBase; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NAIIOGFMJAN_AFJHHCKNCDE_OFFSET UNITYSDK_OFFSET(0x12C35A80)
#define NAIIOGFMJAN_CGLCEKGEINN_OFFSET UNITYSDK_OFFSET(0x12C35A70)
#define NAIIOGFMJAN_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x12C35430)
#define NAIIOGFMJAN_FROMFLX_OFFSET UNITYSDK_OFFSET(0x12C34B90)
#define NAIIOGFMJAN_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x12C35490)
#define NAIIOGFMJAN_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x12C34C10)
#define NAIIOGFMJAN_PJFOBIAMCEN_OFFSET UNITYSDK_OFFSET(0x12C35BA0)
#define NAIIOGFMJAN__CCTOR_OFFSET UNITYSDK_OFFSET(0x12C35A30)
#define NAIIOGFMJAN__CTOR_OFFSET UNITYSDK_OFFSET(0x12C35A20)

inline static constexpr unsigned int NAIIOGFMJAN_TypeDefinitionIndex = 44118;

class NAIIOGFMJAN : public ::System::Object
{
public:
	static ::HNPECBKAPMG** StaticGet_AOFIMHMNCIK()
	{
		return (::HNPECBKAPMG**)Il2CppClass::FromTypeDefinitionIndex(NAIIOGFMJAN_TypeDefinitionIndex)->GetStaticField(0x50EA0);
	}
	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigDynamicValue*>* GNPLJIMBICN; // 0x10
	::System::Collections::Generic::List_1<::System::String*>* OBEGEAHPMJK; // 0x18
	::FLDPBAPLICI* _FLIFPDKOOJJ_k__BackingField; // 0x20
	::System::Collections::Generic::List_1<::MoleMole::Config::ConfigViewObjectTraitBase*>* PBLANBLFFBD; // 0x28
	::System::Boolean BDHEEDBEIKP; // 0x30
	::System::Byte _padding0[0x3];
	::System::Int32 KMLPFPOCOEO; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAIIOGFMJAN__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NAIIOGFMJAN__CCTOR_OFFSET))();
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + NAIIOGFMJAN_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + NAIIOGFMJAN_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void CGLCEKGEINN(::FLDPBAPLICI* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::FLDPBAPLICI*))((::PBYTE)hIl2Cpp + NAIIOGFMJAN_CGLCEKGEINN_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void AFJHHCKNCDE(::FLDPBAPLICI* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::FLDPBAPLICI*))((::PBYTE)hIl2Cpp + NAIIOGFMJAN_AFJHHCKNCDE_OFFSET))(this, DFMKILICPFB);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + NAIIOGFMJAN_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + NAIIOGFMJAN_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::FLDPBAPLICI* PJFOBIAMCEN()
	{
		return ((::FLDPBAPLICI*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAIIOGFMJAN_PJFOBIAMCEN_OFFSET))(this);
	}
};
