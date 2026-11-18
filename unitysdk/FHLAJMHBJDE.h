#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OOHOOAFNBNF.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class ABLPDAPPABA;
class FKNIEPCILLG;
class JCADHFOKIHK;
class KFHNCJALFJK;
class LNFCIBHFJHI;
class LNODBDPJGFL;
namespace MoleMole::Config { class DynamicString; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FHLAJMHBJDE_BMDOEGFHNLD_OFFSET UNITYSDK_OFFSET(0x13217D10)
#define FHLAJMHBJDE_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x13215EF0)
#define FHLAJMHBJDE_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x13215290)
#define FHLAJMHBJDE_FROMFLX_OFFSET UNITYSDK_OFFSET(0x13216000)
#define FHLAJMHBJDE_GAKHPCMMPGA_OFFSET UNITYSDK_OFFSET(0x132151F0)
#define FHLAJMHBJDE_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x13217B60)
#define FHLAJMHBJDE_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x13215FF0)
#define FHLAJMHBJDE_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x13217DB0)
#define FHLAJMHBJDE_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x132152F0)
#define FHLAJMHBJDE_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x13215D90)
#define FHLAJMHBJDE_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x13216080)
#define FHLAJMHBJDE__CTOR_OFFSET UNITYSDK_OFFSET(0x13217B50)

inline static constexpr unsigned int FHLAJMHBJDE_TypeDefinitionIndex = 73585;

class FHLAJMHBJDE : public ::OOHOOAFNBNF
{
public:
	::System::Collections::Generic::List_1<::LNODBDPJGFL*>* HPCPDGBNGBP; // 0x20
	::System::Collections::Generic::List_1<::LNODBDPJGFL*>* PLBLPOLCBAK; // 0x28
	::System::Collections::Generic::List_1<::LNODBDPJGFL*>* IGJIPLPKKOI; // 0x30
	::System::Collections::Generic::List_1<::LNODBDPJGFL*>* CEHOIALOFAM; // 0x38
	::System::Collections::Generic::List_1<::LNODBDPJGFL*>* CDBDEDIHDPJ; // 0x40
	::System::Collections::Generic::List_1<::LNODBDPJGFL*>* LMGILAFAEHG; // 0x48
	::MoleMole::Config::DynamicString* KHPIGDCCPLJ; // 0x50
	::System::Collections::Generic::List_1<::LNODBDPJGFL*>* JELKAMGANEL; // 0x58
	::System::Collections::Generic::List_1<::LNODBDPJGFL*>* HGKLMEJLCEO; // 0x60
	::System::Collections::Generic::List_1<::LNODBDPJGFL*>* IDAGBODDAHK; // 0x68
	::System::Collections::Generic::List_1<::LNODBDPJGFL*>* KHMNANAPINN; // 0x70
	::System::Collections::Generic::List_1<::LNODBDPJGFL*>* FIMINFNNAME; // 0x78
	::System::Collections::Generic::List_1<::LNODBDPJGFL*>* OOOIOPFHMNB; // 0x80
	::System::Collections::Generic::List_1<::LNODBDPJGFL*>* MGKJNBIBLPI; // 0x88
	::System::Boolean MOABFBHNHPH; // 0x90
	::System::Boolean ONCGMGFMLPA; // 0x91
	::System::Boolean FLEHACNGDGA; // 0x92

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHLAJMHBJDE__CTOR_OFFSET))(this);
	}

	::ABLPDAPPABA* GAKHPCMMPGA(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM)
	{
		return ((::ABLPDAPPABA*(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*))((::PBYTE)hIl2Cpp + FHLAJMHBJDE_GAKHPCMMPGA_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + FHLAJMHBJDE_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + FHLAJMHBJDE_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::OOHOOAFNBNF* DGNAAPGKIPL()
	{
		return ((::OOHOOAFNBNF*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHLAJMHBJDE_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHLAJMHBJDE_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + FHLAJMHBJDE_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::FHLAJMHBJDE* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::FHLAJMHBJDE*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + FHLAJMHBJDE_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + FHLAJMHBJDE_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::ABLPDAPPABA* BMDOEGFHNLD(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK)
	{
		return ((::ABLPDAPPABA*(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*))((::PBYTE)hIl2Cpp + FHLAJMHBJDE_BMDOEGFHNLD_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}

	static ::FHLAJMHBJDE* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::FHLAJMHBJDE*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + FHLAJMHBJDE_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + FHLAJMHBJDE_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
