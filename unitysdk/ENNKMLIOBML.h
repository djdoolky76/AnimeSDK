#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/MoleMole/Config/PropertyModifyFunction.h"
#include "unitysdk/OOHOOAFNBNF.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class ABLPDAPPABA;
class FKNIEPCILLG;
class JCADHFOKIHK;
class KFHNCJALFJK;
class LNFCIBHFJHI;
namespace MoleMole::Config { class DynamicFloat; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define ENNKMLIOBML_BMDOEGFHNLD_OFFSET UNITYSDK_OFFSET(0x11AAB1A0)
#define ENNKMLIOBML_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x11AAA5A0)
#define ENNKMLIOBML_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x11AAA190)
#define ENNKMLIOBML_FROMFLX_OFFSET UNITYSDK_OFFSET(0x11AAA6B0)
#define ENNKMLIOBML_GAKHPCMMPGA_OFFSET UNITYSDK_OFFSET(0x11AAA0F0)
#define ENNKMLIOBML_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x11AAAE90)
#define ENNKMLIOBML_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x11AAA6A0)
#define ENNKMLIOBML_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x11AAB040)
#define ENNKMLIOBML_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x11AAA1F0)
#define ENNKMLIOBML_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x11AAA520)
#define ENNKMLIOBML_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x11AAA730)
#define ENNKMLIOBML__CTOR_OFFSET UNITYSDK_OFFSET(0x11AAAE80)

inline static constexpr unsigned int ENNKMLIOBML_TypeDefinitionIndex = 84335;

class ENNKMLIOBML : public ::OOHOOAFNBNF
{
public:
	::MoleMole::Config::DynamicFloat* HBOJLFKAOOH; // 0x20
	::System::String* LFNMPOCHPLP; // 0x28
	::MoleMole::Config::DynamicFloat* PMLOGFLOLNJ; // 0x30
	::MoleMole::Config::PropertyModifyFunction HDCIHCKELCC; // 0x38
	::MoleMole::Config::BaseProperty EHAKJBAKGDL; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENNKMLIOBML__CTOR_OFFSET))(this);
	}

	::ABLPDAPPABA* GAKHPCMMPGA(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM)
	{
		return ((::ABLPDAPPABA*(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*))((::PBYTE)hIl2Cpp + ENNKMLIOBML_GAKHPCMMPGA_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + ENNKMLIOBML_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + ENNKMLIOBML_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::OOHOOAFNBNF* DGNAAPGKIPL()
	{
		return ((::OOHOOAFNBNF*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENNKMLIOBML_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ENNKMLIOBML_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + ENNKMLIOBML_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::ENNKMLIOBML* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::ENNKMLIOBML*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + ENNKMLIOBML_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + ENNKMLIOBML_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + ENNKMLIOBML_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::ENNKMLIOBML* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::ENNKMLIOBML*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + ENNKMLIOBML_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::ABLPDAPPABA* BMDOEGFHNLD(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK)
	{
		return ((::ABLPDAPPABA*(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*))((::PBYTE)hIl2Cpp + ENNKMLIOBML_BMDOEGFHNLD_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}
};
