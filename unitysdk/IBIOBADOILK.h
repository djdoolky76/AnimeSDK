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
namespace MoleMole::Config { class DynamicFloat; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IBIOBADOILK_BMDOEGFHNLD_OFFSET UNITYSDK_OFFSET(0x12EA04B0)
#define IBIOBADOILK_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x12E9F410)
#define IBIOBADOILK_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x12E9EC40)
#define IBIOBADOILK_FROMFLX_OFFSET UNITYSDK_OFFSET(0x12E9F520)
#define IBIOBADOILK_GAKHPCMMPGA_OFFSET UNITYSDK_OFFSET(0x12E9EBA0)
#define IBIOBADOILK_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x12EA0550)
#define IBIOBADOILK_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x12E9F510)
#define IBIOBADOILK_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x12EA0700)
#define IBIOBADOILK_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x12E9ECA0)
#define IBIOBADOILK_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x12E9F330)
#define IBIOBADOILK_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x12E9F5A0)
#define IBIOBADOILK__CTOR_OFFSET UNITYSDK_OFFSET(0x12EA04A0)

inline static constexpr unsigned int IBIOBADOILK_TypeDefinitionIndex = 49133;

class IBIOBADOILK : public ::OOHOOAFNBNF
{
public:
	::System::Collections::Generic::List_1<::LNODBDPJGFL*>* LDAKMNGHELE; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* IGLHBBAGKLD; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::DynamicFloat*>* HAHMFAACPEN; // 0x30
	::System::Collections::Generic::List_1<::LNODBDPJGFL*>* PCLMDDOLLIN; // 0x38
	::System::String* JFCPHCHEJLA; // 0x40
	::System::String* MCFAAOKINHK; // 0x48
	::System::String* FEHGLNGKCIA; // 0x50
	::System::Collections::Generic::List_1<::LNODBDPJGFL*>* KGKCDDJJHGI; // 0x58
	::System::Boolean CNBEGGFGKJC; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBIOBADOILK__CTOR_OFFSET))(this);
	}

	::ABLPDAPPABA* GAKHPCMMPGA(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM)
	{
		return ((::ABLPDAPPABA*(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*))((::PBYTE)hIl2Cpp + IBIOBADOILK_GAKHPCMMPGA_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + IBIOBADOILK_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + IBIOBADOILK_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::OOHOOAFNBNF* DGNAAPGKIPL()
	{
		return ((::OOHOOAFNBNF*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBIOBADOILK_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IBIOBADOILK_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + IBIOBADOILK_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::ABLPDAPPABA* BMDOEGFHNLD(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK)
	{
		return ((::ABLPDAPPABA*(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*))((::PBYTE)hIl2Cpp + IBIOBADOILK_BMDOEGFHNLD_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + IBIOBADOILK_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::IBIOBADOILK* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::IBIOBADOILK*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + IBIOBADOILK_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + IBIOBADOILK_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::IBIOBADOILK* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::IBIOBADOILK*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + IBIOBADOILK_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}
};
