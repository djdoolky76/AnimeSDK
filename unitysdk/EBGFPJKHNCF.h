#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KAALKNLPKMM.h"
#include "unitysdk/OOHOOAFNBNF.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class ABLPDAPPABA;
class FKNIEPCILLG;
class JCADHFOKIHK;
class KFHNCJALFJK;
class LNFCIBHFJHI;
namespace MoleMole::Config { class DynamicString; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EBGFPJKHNCF_BMDOEGFHNLD_OFFSET UNITYSDK_OFFSET(0x7FE4B30)
#define EBGFPJKHNCF_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x7FE3FC0)
#define EBGFPJKHNCF_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x7FE39C0)
#define EBGFPJKHNCF_FROMFLX_OFFSET UNITYSDK_OFFSET(0x7FE40D0)
#define EBGFPJKHNCF_GAKHPCMMPGA_OFFSET UNITYSDK_OFFSET(0x7FE3920)
#define EBGFPJKHNCF_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x7FE4BD0)
#define EBGFPJKHNCF_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x7FE40C0)
#define EBGFPJKHNCF_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x7FE49D0)
#define EBGFPJKHNCF_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x7FE3A20)
#define EBGFPJKHNCF_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x7FE3F40)
#define EBGFPJKHNCF_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x7FE4150)
#define EBGFPJKHNCF__CTOR_OFFSET UNITYSDK_OFFSET(0x7FE49C0)

inline static constexpr unsigned int EBGFPJKHNCF_TypeDefinitionIndex = 81812;

class EBGFPJKHNCF : public ::OOHOOAFNBNF
{
public:
	::System::Collections::Generic::List_1<::System::String*>* DBPHDHPCJGL; // 0x20
	::MoleMole::Config::DynamicString* CGFKMMOLFKP; // 0x28
	::System::Collections::Generic::List_1<::System::String*>* GDOPHEEDOFN; // 0x30
	::System::Boolean PHFGKKDHNOL; // 0x38
	::System::Byte _padding0[0x3];
	::KAALKNLPKMM NHKNNAJJJNI; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBGFPJKHNCF__CTOR_OFFSET))(this);
	}

	::ABLPDAPPABA* GAKHPCMMPGA(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM)
	{
		return ((::ABLPDAPPABA*(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*))((::PBYTE)hIl2Cpp + EBGFPJKHNCF_GAKHPCMMPGA_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + EBGFPJKHNCF_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + EBGFPJKHNCF_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::OOHOOAFNBNF* DGNAAPGKIPL()
	{
		return ((::OOHOOAFNBNF*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBGFPJKHNCF_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EBGFPJKHNCF_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + EBGFPJKHNCF_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::EBGFPJKHNCF* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::EBGFPJKHNCF*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + EBGFPJKHNCF_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + EBGFPJKHNCF_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::ABLPDAPPABA* BMDOEGFHNLD(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK)
	{
		return ((::ABLPDAPPABA*(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*))((::PBYTE)hIl2Cpp + EBGFPJKHNCF_BMDOEGFHNLD_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}

	static ::EBGFPJKHNCF* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::EBGFPJKHNCF*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + EBGFPJKHNCF_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + EBGFPJKHNCF_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
