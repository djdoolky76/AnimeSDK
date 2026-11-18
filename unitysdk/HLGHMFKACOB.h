#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class FLDPBAPLICI;
class HNPECBKAPMG;
class JHAEDNPFIGC;
namespace MoleMole::Config { class ConfigDynamicValue; }
namespace MoleMole::Config { class ConfigViewObjectTraitBase; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HLGHMFKACOB_DICNCIKAHIB_OFFSET UNITYSDK_OFFSET(0x15DC34E0)
#define HLGHMFKACOB_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x15DC2F30)
#define HLGHMFKACOB_FROMFLX_OFFSET UNITYSDK_OFFSET(0x15DC26A0)
#define HLGHMFKACOB_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x15DC2F90)
#define HLGHMFKACOB_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x15DC2720)
#define HLGHMFKACOB_PNNJKJEOHAL_OFFSET UNITYSDK_OFFSET(0x15DC34D0)
#define HLGHMFKACOB__CCTOR_OFFSET UNITYSDK_OFFSET(0x15DC3490)
#define HLGHMFKACOB__CTOR_OFFSET UNITYSDK_OFFSET(0x15DC3480)

inline static constexpr unsigned int HLGHMFKACOB_TypeDefinitionIndex = 51801;

class HLGHMFKACOB : public ::System::Object
{
public:
	static ::HNPECBKAPMG** StaticGet_HNIBGLEDFKO()
	{
		return (::HNPECBKAPMG**)Il2CppClass::FromTypeDefinitionIndex(HLGHMFKACOB_TypeDefinitionIndex)->GetStaticField(0x40C00);
	}
	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigDynamicValue*>* GNPLJIMBICN; // 0x10
	::System::String* AFKIBFHFJKJ; // 0x18
	::FLDPBAPLICI* EBIAIMCAGOF; // 0x20
	::System::Collections::Generic::List_1<::MoleMole::Config::ConfigViewObjectTraitBase*>* BEDBOMNPFDG; // 0x28
	::System::Int32 ANNAENDJPBH; // 0x30
	::System::Int32 LLDMEMMJPDP; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLGHMFKACOB__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HLGHMFKACOB__CCTOR_OFFSET))();
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + HLGHMFKACOB_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + HLGHMFKACOB_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + HLGHMFKACOB_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PNNJKJEOHAL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HLGHMFKACOB_PNNJKJEOHAL_OFFSET))(this);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + HLGHMFKACOB_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean DICNCIKAHIB(::JHAEDNPFIGC* KEFDNGODJFE, ::FLDPBAPLICI*& NIIMMMOMGHC)
	{
		return ((::System::Boolean(*)(::PVOID, ::JHAEDNPFIGC*, ::FLDPBAPLICI*&))((::PBYTE)hIl2Cpp + HLGHMFKACOB_DICNCIKAHIB_OFFSET))(this, KEFDNGODJFE, NIIMMMOMGHC);
	}
};
