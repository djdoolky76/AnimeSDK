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
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EDKPCLBDAEK_BMDOEGFHNLD_OFFSET UNITYSDK_OFFSET(0xFDD8420)
#define EDKPCLBDAEK_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0xFDD6AB0)
#define EDKPCLBDAEK_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xFDD63E0)
#define EDKPCLBDAEK_FROMFLX_OFFSET UNITYSDK_OFFSET(0xFDD6BC0)
#define EDKPCLBDAEK_GAKHPCMMPGA_OFFSET UNITYSDK_OFFSET(0xFDD6340)
#define EDKPCLBDAEK_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0xFDD8270)
#define EDKPCLBDAEK_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0xFDD6BB0)
#define EDKPCLBDAEK_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0xFDD84C0)
#define EDKPCLBDAEK_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0xFDD6440)
#define EDKPCLBDAEK_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0xFDD6A20)
#define EDKPCLBDAEK_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0xFDD6C40)
#define EDKPCLBDAEK__CTOR_OFFSET UNITYSDK_OFFSET(0xFDD8260)

inline static constexpr unsigned int EDKPCLBDAEK_TypeDefinitionIndex = 76452;

class EDKPCLBDAEK : public ::OOHOOAFNBNF
{
public:
	::System::String* GIOHGIKMNJH; // 0x20
	::System::String* AMLADBNOCLG; // 0x28
	::System::Collections::Generic::List_1<::System::String*>* NBHOKFPCBHJ; // 0x30
	::System::Collections::Generic::List_1<::System::String*>* OMGOMBJDAKK; // 0x38
	::System::Single BIJFBEELHAB; // 0x40
	::System::Single BLEBLHLNKFH; // 0x44
	::System::Boolean GMOMBKLMDGD; // 0x48
	::System::Boolean CHHDILPDBCJ; // 0x49
	::System::Byte _padding0[0x2];
	::System::Single DBCGHMEMHCD; // 0x4C
	::System::Single OJLPECDDFPO; // 0x50
	::System::Single PINEIPABFBK; // 0x54
	::System::Single ADLJPOLPBPL; // 0x58
	::System::Single FDINAMDIJCI; // 0x5C
	::System::Single IKANFDCAFGM; // 0x60
	::System::Single ACIGPOKNIMI; // 0x64

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDKPCLBDAEK__CTOR_OFFSET))(this);
	}

	::ABLPDAPPABA* GAKHPCMMPGA(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM)
	{
		return ((::ABLPDAPPABA*(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*))((::PBYTE)hIl2Cpp + EDKPCLBDAEK_GAKHPCMMPGA_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + EDKPCLBDAEK_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + EDKPCLBDAEK_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::OOHOOAFNBNF* DGNAAPGKIPL()
	{
		return ((::OOHOOAFNBNF*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDKPCLBDAEK_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EDKPCLBDAEK_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + EDKPCLBDAEK_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + EDKPCLBDAEK_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::EDKPCLBDAEK* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::EDKPCLBDAEK*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + EDKPCLBDAEK_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::ABLPDAPPABA* BMDOEGFHNLD(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK)
	{
		return ((::ABLPDAPPABA*(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*))((::PBYTE)hIl2Cpp + EDKPCLBDAEK_BMDOEGFHNLD_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}

	static ::EDKPCLBDAEK* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::EDKPCLBDAEK*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + EDKPCLBDAEK_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + EDKPCLBDAEK_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
