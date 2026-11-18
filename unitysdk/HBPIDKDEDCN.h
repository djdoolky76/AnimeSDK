#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ValueCompareType.h"
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
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HBPIDKDEDCN_BMDOEGFHNLD_OFFSET UNITYSDK_OFFSET(0x17E2D070)
#define HBPIDKDEDCN_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x17E2C400)
#define HBPIDKDEDCN_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17E2BF20)
#define HBPIDKDEDCN_FROMFLX_OFFSET UNITYSDK_OFFSET(0x17E2C510)
#define HBPIDKDEDCN_GAKHPCMMPGA_OFFSET UNITYSDK_OFFSET(0x17E2BE80)
#define HBPIDKDEDCN_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x17E2CD60)
#define HBPIDKDEDCN_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x17E2C500)
#define HBPIDKDEDCN_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x17E2CF10)
#define HBPIDKDEDCN_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x17E2BF80)
#define HBPIDKDEDCN_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x17E2C380)
#define HBPIDKDEDCN_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x17E2C590)
#define HBPIDKDEDCN__CTOR_OFFSET UNITYSDK_OFFSET(0x17E2CD50)

inline static constexpr unsigned int HBPIDKDEDCN_TypeDefinitionIndex = 77430;

class HBPIDKDEDCN : public ::OOHOOAFNBNF
{
public:
	::System::Collections::Generic::List_1<::LNODBDPJGFL*>* JDFOHCGOHCN; // 0x20
	::MoleMole::Config::DynamicFloat* KEHPGDHEFBJ; // 0x28
	::System::String* LMIEHNEEGEM; // 0x30
	::MoleMole::Config::ValueCompareType LLDMOGGEDOD; // 0x38
	::System::Boolean GPDBFDHIPKK; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBPIDKDEDCN__CTOR_OFFSET))(this);
	}

	::ABLPDAPPABA* GAKHPCMMPGA(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM)
	{
		return ((::ABLPDAPPABA*(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*))((::PBYTE)hIl2Cpp + HBPIDKDEDCN_GAKHPCMMPGA_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + HBPIDKDEDCN_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + HBPIDKDEDCN_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::OOHOOAFNBNF* DGNAAPGKIPL()
	{
		return ((::OOHOOAFNBNF*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBPIDKDEDCN_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HBPIDKDEDCN_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + HBPIDKDEDCN_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::HBPIDKDEDCN* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::HBPIDKDEDCN*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + HBPIDKDEDCN_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + HBPIDKDEDCN_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + HBPIDKDEDCN_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::HBPIDKDEDCN* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::HBPIDKDEDCN*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + HBPIDKDEDCN_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::ABLPDAPPABA* BMDOEGFHNLD(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK)
	{
		return ((::ABLPDAPPABA*(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*))((::PBYTE)hIl2Cpp + HBPIDKDEDCN_BMDOEGFHNLD_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}
};
