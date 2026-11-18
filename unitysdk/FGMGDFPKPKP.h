#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LNODBDPJGFL.h"
#include "unitysdk/MoleMole/Config/AbilityTargetting.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class ENGKPGFGGLM;
class FKNIEPCILLG;
class JCADHFOKIHK;
class KFHNCJALFJK;
class LNFCIBHFJHI;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class DynamicInt; }
namespace MoleMole::Config { class DynamicString; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define FGMGDFPKPKP_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x141A5450)
#define FGMGDFPKPKP_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x141A5360)
#define FGMGDFPKPKP_FROMFLX_OFFSET UNITYSDK_OFFSET(0x141A5560)
#define FGMGDFPKPKP_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x174FAAC0)
#define FGMGDFPKPKP_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x141A5550)
#define FGMGDFPKPKP_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x174FA960)
#define FGMGDFPKPKP_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x174FA600)
#define FGMGDFPKPKP_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x141A5DA0)
#define FGMGDFPKPKP_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x141A5260)
#define FGMGDFPKPKP_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x141A53C0)
#define FGMGDFPKPKP_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x141A55E0)
#define FGMGDFPKPKP__CTOR_OFFSET UNITYSDK_OFFSET(0x141A5D90)

inline static constexpr unsigned int FGMGDFPKPKP_TypeDefinitionIndex = 53526;

class FGMGDFPKPKP : public ::LNODBDPJGFL
{
public:
	::MoleMole::Config::DynamicString* GJCKLFGKFBM; // 0x50
	::MoleMole::Config::DynamicInt* DKJAGFGENHI; // 0x58
	::MoleMole::Config::DynamicString* KIHGNGKBADE; // 0x60
	::System::String* JODIOPGJIIC; // 0x68
	::MoleMole::Config::AbilityTargetting ALBCFGOBAEK; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGMGDFPKPKP__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB(::KFHNCJALFJK* GBELIHABEDH, ::LNODBDPJGFL* DPPFJDCEIOO, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + FGMGDFPKPKP_LBHNEFGNNNB_OFFSET))(this, GBELIHABEDH, DPPFJDCEIOO, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + FGMGDFPKPKP_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + FGMGDFPKPKP_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LNODBDPJGFL* DGNAAPGKIPL()
	{
		return ((::LNODBDPJGFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + FGMGDFPKPKP_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FGMGDFPKPKP_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + FGMGDFPKPKP_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Void JFLMLBMNFFK(::KFHNCJALFJK* MIALFKCCCPI, ::LNODBDPJGFL* KMGKAIDEIBA, ::JCADHFOKIHK* FDHMCIFPNCK, ::LNFCIBHFJHI* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::MoleMole::Battle::Entity* CEIDLKIHMLC, ::ENGKPGFGGLM* MNPNEHDOOMM)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + FGMGDFPKPKP_JFLMLBMNFFK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC, MNPNEHDOOMM);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + FGMGDFPKPKP_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + FGMGDFPKPKP_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::FGMGDFPKPKP* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::FGMGDFPKPKP*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + FGMGDFPKPKP_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	static ::FGMGDFPKPKP* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::FGMGDFPKPKP*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + FGMGDFPKPKP_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
