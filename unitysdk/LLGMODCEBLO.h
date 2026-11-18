#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LNODBDPJGFL.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class BHEKACANAMA;
class ENGKPGFGGLM;
class FKNIEPCILLG;
class JCADHFOKIHK;
class KFHNCJALFJK;
class LNFCIBHFJHI;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigPosRot; }
namespace MoleMole::Config { class DynamicFloat; }
namespace MoleMole::Config { class DynamicInt; }
namespace MoleMole::Config { class DynamicString; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define LLGMODCEBLO_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x15E07540)
#define LLGMODCEBLO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x15E06E20)
#define LLGMODCEBLO_FROMFLX_OFFSET UNITYSDK_OFFSET(0x15E07650)
#define LLGMODCEBLO_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x15E08820)
#define LLGMODCEBLO_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x15E07640)
#define LLGMODCEBLO_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x15E089D0)
#define LLGMODCEBLO_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x15E06E80)
#define LLGMODCEBLO_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x15E08740)
#define LLGMODCEBLO_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x15E06D20)
#define LLGMODCEBLO_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x15E07430)
#define LLGMODCEBLO_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x15E076D0)
#define LLGMODCEBLO__CTOR_OFFSET UNITYSDK_OFFSET(0x15E08730)

inline static constexpr unsigned int LLGMODCEBLO_TypeDefinitionIndex = 75751;

class LLGMODCEBLO : public ::LNODBDPJGFL
{
public:
	::MoleMole::Config::ConfigPosRot* OBAAJBNMNLC; // 0x50
	::BHEKACANAMA* PNEEEFHBDHM; // 0x58
	::MoleMole::Config::DynamicFloat* HGLLPLIJCME; // 0x60
	::MoleMole::Config::DynamicString* DKNNNIACCIG; // 0x68
	::MoleMole::Config::DynamicInt* CKAHPMGAGBI; // 0x70
	::BHEKACANAMA* IKIHNKMPAKL; // 0x78
	::MoleMole::Config::DynamicFloat* CLHBNIDCAEE; // 0x80
	::MoleMole::Config::DynamicString* DKKENMPNHHB; // 0x88
	::BHEKACANAMA* NFJJLEEAFFM; // 0x90

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLGMODCEBLO__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB(::KFHNCJALFJK* GBELIHABEDH, ::LNODBDPJGFL* DPPFJDCEIOO, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + LLGMODCEBLO_LBHNEFGNNNB_OFFSET))(this, GBELIHABEDH, DPPFJDCEIOO, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + LLGMODCEBLO_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + LLGMODCEBLO_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LNODBDPJGFL* DGNAAPGKIPL()
	{
		return ((::LNODBDPJGFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLGMODCEBLO_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LLGMODCEBLO_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + LLGMODCEBLO_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + LLGMODCEBLO_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void JFLMLBMNFFK(::KFHNCJALFJK* MIALFKCCCPI, ::LNODBDPJGFL* KMGKAIDEIBA, ::JCADHFOKIHK* FDHMCIFPNCK, ::LNFCIBHFJHI* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::MoleMole::Battle::Entity* CEIDLKIHMLC, ::ENGKPGFGGLM* MNPNEHDOOMM)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + LLGMODCEBLO_JFLMLBMNFFK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC, MNPNEHDOOMM);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + LLGMODCEBLO_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::LLGMODCEBLO* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::LLGMODCEBLO*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + LLGMODCEBLO_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::LLGMODCEBLO* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::LLGMODCEBLO*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + LLGMODCEBLO_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}
};
