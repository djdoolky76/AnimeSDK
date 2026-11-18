#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OOHOOAFNBNF.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class ABLPDAPPABA;
class EIIJFDEMGEG;
class FKNIEPCILLG;
class JCADHFOKIHK;
class KFHNCJALFJK;
class LNFCIBHFJHI;
namespace MoleMole::Config { class ConfigPosRot; }
namespace MoleMole::Config { class DynamicFloat; }
namespace MoleMole::Config { class DynamicInt; }
namespace MoleMole::Config { class DynamicString; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define FKKFMHOHCEN_BMDOEGFHNLD_OFFSET UNITYSDK_OFFSET(0x191F9C90)
#define FKKFMHOHCEN_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x191F8B70)
#define FKKFMHOHCEN_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x191F8550)
#define FKKFMHOHCEN_FROMFLX_OFFSET UNITYSDK_OFFSET(0x191F8C80)
#define FKKFMHOHCEN_GAKHPCMMPGA_OFFSET UNITYSDK_OFFSET(0x191F84B0)
#define FKKFMHOHCEN_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x191F9980)
#define FKKFMHOHCEN_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x191F8C70)
#define FKKFMHOHCEN_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x191F9B30)
#define FKKFMHOHCEN_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x191F85B0)
#define FKKFMHOHCEN_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x191F8AB0)
#define FKKFMHOHCEN_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x191F8D00)
#define FKKFMHOHCEN__CTOR_OFFSET UNITYSDK_OFFSET(0x191F98E0)

inline static constexpr unsigned int FKKFMHOHCEN_TypeDefinitionIndex = 85659;

class FKKFMHOHCEN : public ::OOHOOAFNBNF
{
public:
	::MoleMole::Config::DynamicString* AOLGDHDOCLP; // 0x20
	::MoleMole::Config::DynamicInt* HOBCCLDCHNL; // 0x28
	::MoleMole::Config::DynamicInt* PLMGMGBHNIB; // 0x30
	::MoleMole::Config::DynamicFloat* LMMPGGNLILP; // 0x38
	::MoleMole::Config::ConfigPosRot* KDKDBHIJECK; // 0x40
	::EIIJFDEMGEG* DDEGKHJDIGE; // 0x48
	::System::Boolean MDMBOKGFPIO; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKKFMHOHCEN__CTOR_OFFSET))(this);
	}

	::ABLPDAPPABA* GAKHPCMMPGA(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM)
	{
		return ((::ABLPDAPPABA*(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*))((::PBYTE)hIl2Cpp + FKKFMHOHCEN_GAKHPCMMPGA_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + FKKFMHOHCEN_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + FKKFMHOHCEN_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::OOHOOAFNBNF* DGNAAPGKIPL()
	{
		return ((::OOHOOAFNBNF*(*)(::PVOID))((::PBYTE)hIl2Cpp + FKKFMHOHCEN_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FKKFMHOHCEN_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + FKKFMHOHCEN_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::FKKFMHOHCEN* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::FKKFMHOHCEN*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + FKKFMHOHCEN_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + FKKFMHOHCEN_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + FKKFMHOHCEN_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::FKKFMHOHCEN* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::FKKFMHOHCEN*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + FKKFMHOHCEN_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::ABLPDAPPABA* BMDOEGFHNLD(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK)
	{
		return ((::ABLPDAPPABA*(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*))((::PBYTE)hIl2Cpp + FKKFMHOHCEN_BMDOEGFHNLD_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}
};
