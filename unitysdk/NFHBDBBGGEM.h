#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CEJPCEFDDGB.h"
#include "unitysdk/HPLCGHLHMNK.h"
#include "unitysdk/MoleMole/Config/CampType.h"
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
namespace MoleMole::Config { class DynamicString; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NFHBDBBGGEM_BMDOEGFHNLD_OFFSET UNITYSDK_OFFSET(0x172826A0)
#define NFHBDBBGGEM_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x172811A0)
#define NFHBDBBGGEM_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x172809E0)
#define NFHBDBBGGEM_FROMFLX_OFFSET UNITYSDK_OFFSET(0x172812B0)
#define NFHBDBBGGEM_GAKHPCMMPGA_OFFSET UNITYSDK_OFFSET(0x17280940)
#define NFHBDBBGGEM_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x172828A0)
#define NFHBDBBGGEM_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x172812A0)
#define NFHBDBBGGEM_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x17282740)
#define NFHBDBBGGEM_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x17280A40)
#define NFHBDBBGGEM_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x172810E0)
#define NFHBDBBGGEM_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x17281330)
#define NFHBDBBGGEM__CTOR_OFFSET UNITYSDK_OFFSET(0x17282620)

inline static constexpr unsigned int NFHBDBBGGEM_TypeDefinitionIndex = 48095;

class NFHBDBBGGEM : public ::OOHOOAFNBNF
{
public:
	::MoleMole::Config::DynamicFloat* AFIKJAIPLNG; // 0x20
	::System::Collections::Generic::List_1<::LNODBDPJGFL*>* PEFKKMEKIKA; // 0x28
	::System::Collections::Generic::List_1<::System::String*>* DHBHIBAJPJL; // 0x30
	::MoleMole::Config::DynamicFloat* CJLKFOGFONE; // 0x38
	::System::Collections::Generic::List_1<::LNODBDPJGFL*>* CNLINNFPKGD; // 0x40
	::MoleMole::Config::DynamicString* HCFMILBILHL; // 0x48
	::HPLCGHLHMNK IPGLMMBPLBM; // 0x50
	::System::Boolean MMFFNPBNPBM; // 0x54
	::System::Boolean DCHIKBHCILB; // 0x55
	::System::Boolean LIGICMNNJPM; // 0x56
	::System::Boolean HCLBPGEHEHJ; // 0x57
	::CEJPCEFDDGB DFMAHEDDDLA; // 0x58
	::MoleMole::Config::CampType JMELKKALNJB; // 0x5C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFHBDBBGGEM__CTOR_OFFSET))(this);
	}

	::ABLPDAPPABA* GAKHPCMMPGA(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM)
	{
		return ((::ABLPDAPPABA*(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*))((::PBYTE)hIl2Cpp + NFHBDBBGGEM_GAKHPCMMPGA_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + NFHBDBBGGEM_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + NFHBDBBGGEM_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::OOHOOAFNBNF* DGNAAPGKIPL()
	{
		return ((::OOHOOAFNBNF*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFHBDBBGGEM_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NFHBDBBGGEM_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + NFHBDBBGGEM_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::ABLPDAPPABA* BMDOEGFHNLD(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK)
	{
		return ((::ABLPDAPPABA*(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*))((::PBYTE)hIl2Cpp + NFHBDBBGGEM_BMDOEGFHNLD_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + NFHBDBBGGEM_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::NFHBDBBGGEM* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::NFHBDBBGGEM*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + NFHBDBBGGEM_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + NFHBDBBGGEM_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::NFHBDBBGGEM* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::NFHBDBBGGEM*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + NFHBDBBGGEM_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
