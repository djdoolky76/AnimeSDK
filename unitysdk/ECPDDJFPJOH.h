#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AbilityTargetting.h"
#include "unitysdk/OOHOOAFNBNF.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class ABLPDAPPABA;
class FKNIEPCILLG;
class JCADHFOKIHK;
class KFHNCJALFJK;
class LNFCIBHFJHI;
class LNODBDPJGFL;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ECPDDJFPJOH_BMDOEGFHNLD_OFFSET UNITYSDK_OFFSET(0x16991770)
#define ECPDDJFPJOH_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x16990DE0)
#define ECPDDJFPJOH_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x169908E0)
#define ECPDDJFPJOH_FROMFLX_OFFSET UNITYSDK_OFFSET(0x16990EF0)
#define ECPDDJFPJOH_GAKHPCMMPGA_OFFSET UNITYSDK_OFFSET(0x16990840)
#define ECPDDJFPJOH_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x16991810)
#define ECPDDJFPJOH_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x16990EE0)
#define ECPDDJFPJOH_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x169919C0)
#define ECPDDJFPJOH_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x16990940)
#define ECPDDJFPJOH_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x16990D50)
#define ECPDDJFPJOH_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x16990F70)
#define ECPDDJFPJOH__CTOR_OFFSET UNITYSDK_OFFSET(0x16991760)

inline static constexpr unsigned int ECPDDJFPJOH_TypeDefinitionIndex = 86694;

class ECPDDJFPJOH : public ::OOHOOAFNBNF
{
public:
	::System::Collections::Generic::List_1<::LNODBDPJGFL*>* GLGOGPFIPIG; // 0x20
	::System::String* AOLGDHDOCLP; // 0x28
	::System::Collections::Generic::List_1<::LNODBDPJGFL*>* GMABANAGNMG; // 0x30
	::System::Collections::Generic::List_1<::LNODBDPJGFL*>* NNJFHECOCFN; // 0x38
	::MoleMole::Config::AbilityTargetting IPGLMMBPLBM; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECPDDJFPJOH__CTOR_OFFSET))(this);
	}

	::ABLPDAPPABA* GAKHPCMMPGA(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM)
	{
		return ((::ABLPDAPPABA*(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*))((::PBYTE)hIl2Cpp + ECPDDJFPJOH_GAKHPCMMPGA_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + ECPDDJFPJOH_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + ECPDDJFPJOH_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::OOHOOAFNBNF* DGNAAPGKIPL()
	{
		return ((::OOHOOAFNBNF*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECPDDJFPJOH_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ECPDDJFPJOH_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + ECPDDJFPJOH_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + ECPDDJFPJOH_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::ABLPDAPPABA* BMDOEGFHNLD(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK)
	{
		return ((::ABLPDAPPABA*(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*))((::PBYTE)hIl2Cpp + ECPDDJFPJOH_BMDOEGFHNLD_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}

	static ::ECPDDJFPJOH* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::ECPDDJFPJOH*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + ECPDDJFPJOH_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + ECPDDJFPJOH_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::ECPDDJFPJOH* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::ECPDDJFPJOH*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + ECPDDJFPJOH_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}
};
