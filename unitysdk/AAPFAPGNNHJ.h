#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OOHOOAFNBNF.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class ABLPDAPPABA;
class CKLPJOFCALH;
class FKNIEPCILLG;
class JCADHFOKIHK;
class KFHNCJALFJK;
class LNFCIBHFJHI;
class LNODBDPJGFL;
namespace MoleMole::Config { class ConfigPosRot; }
namespace MoleMole::Config { class DynamicFloat; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AAPFAPGNNHJ_BMDOEGFHNLD_OFFSET UNITYSDK_OFFSET(0x17DBB150)
#define AAPFAPGNNHJ_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x17DB9F10)
#define AAPFAPGNNHJ_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17DB97B0)
#define AAPFAPGNNHJ_FROMFLX_OFFSET UNITYSDK_OFFSET(0x17DBA020)
#define AAPFAPGNNHJ_GAKHPCMMPGA_OFFSET UNITYSDK_OFFSET(0x17DB9710)
#define AAPFAPGNNHJ_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x17DBB1F0)
#define AAPFAPGNNHJ_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x17DBA010)
#define AAPFAPGNNHJ_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x17DBAFF0)
#define AAPFAPGNNHJ_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x17DB9810)
#define AAPFAPGNNHJ_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x17DB9E30)
#define AAPFAPGNNHJ_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x17DBA0A0)
#define AAPFAPGNNHJ__CTOR_OFFSET UNITYSDK_OFFSET(0x17DBAFE0)

inline static constexpr unsigned int AAPFAPGNNHJ_TypeDefinitionIndex = 90819;

class AAPFAPGNNHJ : public ::OOHOOAFNBNF
{
public:
	::MoleMole::Config::DynamicFloat* PEAAMHGANAG; // 0x20
	::MoleMole::Config::DynamicFloat* JEAFAAKONAI; // 0x28
	::CKLPJOFCALH* BPBOAEJLBDM; // 0x30
	::System::String* EBLKBABPBEB; // 0x38
	::MoleMole::Config::ConfigPosRot* GKINLPJPGKO; // 0x40
	::MoleMole::Config::DynamicFloat* GKPNFLAIAGD; // 0x48
	::MoleMole::Config::DynamicFloat* GNDAIMHHOKO; // 0x50
	::System::Collections::Generic::List_1<::LNODBDPJGFL*>* AJDLHAFEEEF; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAPFAPGNNHJ__CTOR_OFFSET))(this);
	}

	::ABLPDAPPABA* GAKHPCMMPGA(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM)
	{
		return ((::ABLPDAPPABA*(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*))((::PBYTE)hIl2Cpp + AAPFAPGNNHJ_GAKHPCMMPGA_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + AAPFAPGNNHJ_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + AAPFAPGNNHJ_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::OOHOOAFNBNF* DGNAAPGKIPL()
	{
		return ((::OOHOOAFNBNF*(*)(::PVOID))((::PBYTE)hIl2Cpp + AAPFAPGNNHJ_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AAPFAPGNNHJ_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + AAPFAPGNNHJ_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::AAPFAPGNNHJ* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::AAPFAPGNNHJ*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + AAPFAPGNNHJ_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + AAPFAPGNNHJ_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + AAPFAPGNNHJ_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::ABLPDAPPABA* BMDOEGFHNLD(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK)
	{
		return ((::ABLPDAPPABA*(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*))((::PBYTE)hIl2Cpp + AAPFAPGNNHJ_BMDOEGFHNLD_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}

	static ::AAPFAPGNNHJ* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::AAPFAPGNNHJ*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + AAPFAPGNNHJ_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
