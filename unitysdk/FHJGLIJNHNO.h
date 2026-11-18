#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OOHOOAFNBNF.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class ABLPDAPPABA;
class FKNIEPCILLG;
class JCADHFOKIHK;
class KFHNCJALFJK;
class KIBEBIJLGPJ;
class LHHNKBDEMGO;
class LNFCIBHFJHI;
class LNODBDPJGFL;
namespace MoleMole::Config { class ConfigPosRot; }
namespace MoleMole::Config { class DynamicFloat; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FHJGLIJNHNO_BMDOEGFHNLD_OFFSET UNITYSDK_OFFSET(0x11D7C020)
#define FHJGLIJNHNO_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x11D79D70)
#define FHJGLIJNHNO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x11D78F10)
#define FHJGLIJNHNO_FROMFLX_OFFSET UNITYSDK_OFFSET(0x11D79E80)
#define FHJGLIJNHNO_GAKHPCMMPGA_OFFSET UNITYSDK_OFFSET(0x11D78E70)
#define FHJGLIJNHNO_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x11D7BEA0)
#define FHJGLIJNHNO_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x11D79E70)
#define FHJGLIJNHNO_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x11D7BDB0)
#define FHJGLIJNHNO_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x11D78F70)
#define FHJGLIJNHNO_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x11D79C40)
#define FHJGLIJNHNO_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x11D79F00)
#define FHJGLIJNHNO__CTOR_OFFSET UNITYSDK_OFFSET(0x11D7BD30)

inline static constexpr unsigned int FHJGLIJNHNO_TypeDefinitionIndex = 43069;

class FHJGLIJNHNO : public ::OOHOOAFNBNF
{
public:
	::System::Collections::Generic::List_1<::LNODBDPJGFL*>* BECCMBGKCHN; // 0x20
	::MoleMole::Config::ConfigPosRot* ACPBPFJJKKN; // 0x28
	::System::Collections::Generic::List_1<::LNODBDPJGFL*>* PJBJAHGOOMM; // 0x30
	::KIBEBIJLGPJ* AHENPLJIAPH; // 0x38
	::System::Collections::Generic::List_1<::LNODBDPJGFL*>* LMAOFADECFH; // 0x40
	::System::Collections::Generic::List_1<::LNODBDPJGFL*>* JPKJCOAIJIK; // 0x48
	::MoleMole::Config::DynamicFloat* IAPPEMEBMKC; // 0x50
	::System::Collections::Generic::List_1<::LNODBDPJGFL*>* IEDDHBFCFCH; // 0x58
	::System::String* GGMBCLPNHJG; // 0x60
	::MoleMole::Config::ConfigPosRot* CKPGEABJMIG; // 0x68
	::Il2CppArray<::LHHNKBDEMGO*>* HIJAMFJKKCP; // 0x70
	::MoleMole::Config::DynamicFloat* DPGOGCJJNEJ; // 0x78
	::UnityEngine::Vector3 PMGHJCLDCON; // 0x80
	::System::Int32 NFJGDDPEGHG; // 0x8C
	::System::Int32 BNKHCNKJKFO; // 0x90
	::System::Int32 AHBMOPCNOFA; // 0x94
	::System::Boolean NHOILBNKKOC; // 0x98
	::System::Byte _padding0[0x3];
	::System::Int32 JLDPFFHIEMC; // 0x9C
	::System::Int32 PLNMMLKNCIC; // 0xA0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHJGLIJNHNO__CTOR_OFFSET))(this);
	}

	::ABLPDAPPABA* GAKHPCMMPGA(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM)
	{
		return ((::ABLPDAPPABA*(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*))((::PBYTE)hIl2Cpp + FHJGLIJNHNO_GAKHPCMMPGA_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + FHJGLIJNHNO_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + FHJGLIJNHNO_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::OOHOOAFNBNF* DGNAAPGKIPL()
	{
		return ((::OOHOOAFNBNF*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHJGLIJNHNO_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHJGLIJNHNO_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + FHJGLIJNHNO_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + FHJGLIJNHNO_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::FHJGLIJNHNO* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::FHJGLIJNHNO*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + FHJGLIJNHNO_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	static ::FHJGLIJNHNO* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::FHJGLIJNHNO*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + FHJGLIJNHNO_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + FHJGLIJNHNO_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::ABLPDAPPABA* BMDOEGFHNLD(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK)
	{
		return ((::ABLPDAPPABA*(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*))((::PBYTE)hIl2Cpp + FHJGLIJNHNO_BMDOEGFHNLD_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}
};
