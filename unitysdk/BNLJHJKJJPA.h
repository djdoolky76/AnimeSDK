#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JAMHBBGHFAF.h"
#include "unitysdk/OOHOOAFNBNF.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class ABLPDAPPABA;
class DDBNHPLAKIE;
class FKNIEPCILLG;
class JCADHFOKIHK;
class KFHNCJALFJK;
class LNFCIBHFJHI;
namespace MoleMole::Config { class ConfigPosRot; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BNLJHJKJJPA_BECBIBJCMNL_OFFSET UNITYSDK_OFFSET(0x1692F650)
#define BNLJHJKJJPA_BMDOEGFHNLD_OFFSET UNITYSDK_OFFSET(0x169319C0)
#define BNLJHJKJJPA_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x1692FF70)
#define BNLJHJKJJPA_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1692F660)
#define BNLJHJKJJPA_FROMFLX_OFFSET UNITYSDK_OFFSET(0x16930080)
#define BNLJHJKJJPA_GAKHPCMMPGA_OFFSET UNITYSDK_OFFSET(0x1692F5B0)
#define BNLJHJKJJPA_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x169316B0)
#define BNLJHJKJJPA_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x16930070)
#define BNLJHJKJJPA_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x16931860)
#define BNLJHJKJJPA_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x1692F6C0)
#define BNLJHJKJJPA_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x1692FE40)
#define BNLJHJKJJPA_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x16930100)
#define BNLJHJKJJPA__CTOR_OFFSET UNITYSDK_OFFSET(0x169316A0)

inline static constexpr unsigned int BNLJHJKJJPA_TypeDefinitionIndex = 83894;

class BNLJHJKJJPA : public ::OOHOOAFNBNF
{
public:
	::System::String* DKDIBJHICGG; // 0x20
	::System::String* MEBIFGHLJHF; // 0x28
	::System::String* AAOFOJDIMJC; // 0x30
	::System::String* JBJDCAOHHNC; // 0x38
	::System::String* EFIACIMHHFC; // 0x40
	::System::Collections::Generic::List_1<::DDBNHPLAKIE*>* HDBGDEPHDIB; // 0x48
	::System::Collections::Generic::List_1<::System::String*>* AGDLDHOOKBO; // 0x50
	::System::String* BCCEHNMBPOH; // 0x58
	::MoleMole::Config::ConfigPosRot* NBJHINLGBKM; // 0x60
	::System::Collections::Generic::List_1<::System::String*>* OMPLILHJGJP; // 0x68
	::System::String* GNCFBODOFEC; // 0x70
	::System::String* EBMDOAMJKNL; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNLJHJKJJPA__CTOR_OFFSET))(this);
	}

	::ABLPDAPPABA* GAKHPCMMPGA(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM)
	{
		return ((::ABLPDAPPABA*(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*))((::PBYTE)hIl2Cpp + BNLJHJKJJPA_GAKHPCMMPGA_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM);
	}

	::JAMHBBGHFAF BECBIBJCMNL()
	{
		return ((::JAMHBBGHFAF(*)(::PVOID))((::PBYTE)hIl2Cpp + BNLJHJKJJPA_BECBIBJCMNL_OFFSET))(this);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + BNLJHJKJJPA_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + BNLJHJKJJPA_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::OOHOOAFNBNF* DGNAAPGKIPL()
	{
		return ((::OOHOOAFNBNF*(*)(::PVOID))((::PBYTE)hIl2Cpp + BNLJHJKJJPA_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BNLJHJKJJPA_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + BNLJHJKJJPA_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + BNLJHJKJJPA_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::BNLJHJKJJPA* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::BNLJHJKJJPA*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + BNLJHJKJJPA_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + BNLJHJKJJPA_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::BNLJHJKJJPA* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::BNLJHJKJJPA*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + BNLJHJKJJPA_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::ABLPDAPPABA* BMDOEGFHNLD(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK)
	{
		return ((::ABLPDAPPABA*(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*))((::PBYTE)hIl2Cpp + BNLJHJKJJPA_BMDOEGFHNLD_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}
};
