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

#define KPIBJFHDIAL_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x126B8010)
#define KPIBJFHDIAL_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x126B78F0)
#define KPIBJFHDIAL_FROMFLX_OFFSET UNITYSDK_OFFSET(0x126B8120)
#define KPIBJFHDIAL_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x126B9260)
#define KPIBJFHDIAL_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x126B8110)
#define KPIBJFHDIAL_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x126B9100)
#define KPIBJFHDIAL_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x126B7950)
#define KPIBJFHDIAL_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x126B9020)
#define KPIBJFHDIAL_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x126B77F0)
#define KPIBJFHDIAL_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x126B7F20)
#define KPIBJFHDIAL_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x126B81A0)
#define KPIBJFHDIAL__CTOR_OFFSET UNITYSDK_OFFSET(0x126B9010)

inline static constexpr unsigned int KPIBJFHDIAL_TypeDefinitionIndex = 55736;

class KPIBJFHDIAL : public ::LNODBDPJGFL
{
public:
	::MoleMole::Config::DynamicFloat* CLHBNIDCAEE; // 0x50
	::MoleMole::Config::DynamicString* EBLKBABPBEB; // 0x58
	::MoleMole::Config::DynamicInt* NFJGDDPEGHG; // 0x60
	::MoleMole::Config::DynamicFloat* HGLLPLIJCME; // 0x68
	::BHEKACANAMA* PNEEEFHBDHM; // 0x70
	::MoleMole::Config::DynamicInt* BNKHCNKJKFO; // 0x78
	::MoleMole::Config::ConfigPosRot* KPAPPDGCNPE; // 0x80
	::BHEKACANAMA* IKIHNKMPAKL; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPIBJFHDIAL__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB(::KFHNCJALFJK* GBELIHABEDH, ::LNODBDPJGFL* DPPFJDCEIOO, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + KPIBJFHDIAL_LBHNEFGNNNB_OFFSET))(this, GBELIHABEDH, DPPFJDCEIOO, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + KPIBJFHDIAL_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + KPIBJFHDIAL_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LNODBDPJGFL* DGNAAPGKIPL()
	{
		return ((::LNODBDPJGFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPIBJFHDIAL_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KPIBJFHDIAL_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + KPIBJFHDIAL_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + KPIBJFHDIAL_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Void JFLMLBMNFFK(::KFHNCJALFJK* MIALFKCCCPI, ::LNODBDPJGFL* KMGKAIDEIBA, ::JCADHFOKIHK* FDHMCIFPNCK, ::LNFCIBHFJHI* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::MoleMole::Battle::Entity* CEIDLKIHMLC, ::ENGKPGFGGLM* MNPNEHDOOMM)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + KPIBJFHDIAL_JFLMLBMNFFK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC, MNPNEHDOOMM);
	}

	static ::KPIBJFHDIAL* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::KPIBJFHDIAL*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + KPIBJFHDIAL_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + KPIBJFHDIAL_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::KPIBJFHDIAL* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::KPIBJFHDIAL*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + KPIBJFHDIAL_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
