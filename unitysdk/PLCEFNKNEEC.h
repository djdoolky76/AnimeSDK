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
class NEAPGKAPCJF;
namespace MoleMole::Config { class DynamicFloat; }
namespace MoleMole::Config { class DynamicInt; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PLCEFNKNEEC_BMDOEGFHNLD_OFFSET UNITYSDK_OFFSET(0x178E8DA0)
#define PLCEFNKNEEC_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x178E6030)
#define PLCEFNKNEEC_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x178E4FE0)
#define PLCEFNKNEEC_FROMFLX_OFFSET UNITYSDK_OFFSET(0x178E6140)
#define PLCEFNKNEEC_GAKHPCMMPGA_OFFSET UNITYSDK_OFFSET(0x178E4F40)
#define PLCEFNKNEEC_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x178E8BF0)
#define PLCEFNKNEEC_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x178E6130)
#define PLCEFNKNEEC_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x178E8A90)
#define PLCEFNKNEEC_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x178E5040)
#define PLCEFNKNEEC_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x178E5E30)
#define PLCEFNKNEEC_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x178E61C0)
#define PLCEFNKNEEC__CTOR_OFFSET UNITYSDK_OFFSET(0x178E8A00)

inline static constexpr unsigned int PLCEFNKNEEC_TypeDefinitionIndex = 63750;

class PLCEFNKNEEC : public ::OOHOOAFNBNF
{
public:
	::MoleMole::Config::DynamicFloat* PCDAGFFHHCE; // 0x20
	::MoleMole::Config::DynamicFloat* LDGPNGHCHBL; // 0x28
	::MoleMole::Config::DynamicFloat* CICDNHDJHCK; // 0x30
	::System::Collections::Generic::List_1<::LNODBDPJGFL*>* BBFPNGAPEPA; // 0x38
	::NEAPGKAPCJF* HDBGFBCCKHM; // 0x40
	::MoleMole::Config::DynamicFloat* AACMJMOKMBA; // 0x48
	::NEAPGKAPCJF* HNPFBGKHPDD; // 0x50
	::System::String* CCHCCNEFNBF; // 0x58
	::NEAPGKAPCJF* CPPMPPLHDMF; // 0x60
	::MoleMole::Config::DynamicFloat* COFPAEHFLDO; // 0x68
	::MoleMole::Config::DynamicFloat* NIMPKDCBPOD; // 0x70
	::System::String* AOFLGPPNBGJ; // 0x78
	::NEAPGKAPCJF* KBEDDOHELBD; // 0x80
	::MoleMole::Config::DynamicInt* DEGLPNDOIHN; // 0x88
	::System::String* EMOACPDKJJM; // 0x90
	::MoleMole::Config::DynamicInt* CNMFBCCBCNA; // 0x98
	::NEAPGKAPCJF* JBAEIFAIKEN; // 0xA0
	::MoleMole::Config::DynamicFloat* CPOKBHGOFIM; // 0xA8
	::System::Collections::Generic::List_1<::LNODBDPJGFL*>* JKBPBBIONMM; // 0xB0
	::MoleMole::Config::DynamicFloat* GLKHBOMIPPF; // 0xB8
	::System::Collections::Generic::List_1<::LNODBDPJGFL*>* HMOLMHAMIIF; // 0xC0
	::MoleMole::Config::AbilityTargetting IJNCLKILHIM; // 0xC8
	::System::Boolean KDPNLMPMIIB; // 0xCC
	::System::Boolean LOCHFHCKDII; // 0xCD
	::System::Boolean JHCJLHEMIPI; // 0xCE
	::System::Byte _padding0[0x1];
	::MoleMole::Config::AbilityTargetting KAIDIMOPEHA; // 0xD0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLCEFNKNEEC__CTOR_OFFSET))(this);
	}

	::ABLPDAPPABA* GAKHPCMMPGA(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM)
	{
		return ((::ABLPDAPPABA*(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*))((::PBYTE)hIl2Cpp + PLCEFNKNEEC_GAKHPCMMPGA_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PLCEFNKNEEC_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + PLCEFNKNEEC_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::OOHOOAFNBNF* DGNAAPGKIPL()
	{
		return ((::OOHOOAFNBNF*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLCEFNKNEEC_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PLCEFNKNEEC_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + PLCEFNKNEEC_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PLCEFNKNEEC_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::PLCEFNKNEEC* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::PLCEFNKNEEC*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + PLCEFNKNEEC_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	static ::PLCEFNKNEEC* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::PLCEFNKNEEC*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PLCEFNKNEEC_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + PLCEFNKNEEC_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::ABLPDAPPABA* BMDOEGFHNLD(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK)
	{
		return ((::ABLPDAPPABA*(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*))((::PBYTE)hIl2Cpp + PLCEFNKNEEC_BMDOEGFHNLD_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}
};
