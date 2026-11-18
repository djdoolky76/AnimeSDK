#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LNODBDPJGFL.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class ENGKPGFGGLM;
class FKNIEPCILLG;
class JCADHFOKIHK;
class KFHNCJALFJK;
class LNFCIBHFJHI;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class DynamicFloat; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define NIFIJCGHOJB_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0xE19F630)
#define NIFIJCGHOJB_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xE19F210)
#define NIFIJCGHOJB_FROMFLX_OFFSET UNITYSDK_OFFSET(0xE19F740)
#define NIFIJCGHOJB_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0xE1A00A0)
#define NIFIJCGHOJB_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0xE19F730)
#define NIFIJCGHOJB_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0xE19FE60)
#define NIFIJCGHOJB_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0xE19F270)
#define NIFIJCGHOJB_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0xE19FFC0)
#define NIFIJCGHOJB_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0xE19F110)
#define NIFIJCGHOJB_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0xE19F5A0)
#define NIFIJCGHOJB_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0xE19F7C0)
#define NIFIJCGHOJB__CTOR_OFFSET UNITYSDK_OFFSET(0xE19FE50)

inline static constexpr unsigned int NIFIJCGHOJB_TypeDefinitionIndex = 65460;

class NIFIJCGHOJB : public ::LNODBDPJGFL
{
public:
	::MoleMole::Config::DynamicFloat* KMLABLGAEEB; // 0x50
	::MoleMole::Config::DynamicFloat* MJJOKMKCMID; // 0x58
	::MoleMole::Config::DynamicFloat* NMDPGMMLIKD; // 0x60
	::MoleMole::Config::DynamicFloat* CDGEBNNGBLG; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIFIJCGHOJB__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB(::KFHNCJALFJK* GBELIHABEDH, ::LNODBDPJGFL* DPPFJDCEIOO, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + NIFIJCGHOJB_LBHNEFGNNNB_OFFSET))(this, GBELIHABEDH, DPPFJDCEIOO, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + NIFIJCGHOJB_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + NIFIJCGHOJB_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LNODBDPJGFL* DGNAAPGKIPL()
	{
		return ((::LNODBDPJGFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + NIFIJCGHOJB_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NIFIJCGHOJB_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + NIFIJCGHOJB_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::NIFIJCGHOJB* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::NIFIJCGHOJB*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + NIFIJCGHOJB_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Void JFLMLBMNFFK(::KFHNCJALFJK* MIALFKCCCPI, ::LNODBDPJGFL* KMGKAIDEIBA, ::JCADHFOKIHK* FDHMCIFPNCK, ::LNFCIBHFJHI* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::MoleMole::Battle::Entity* CEIDLKIHMLC, ::ENGKPGFGGLM* MNPNEHDOOMM)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + NIFIJCGHOJB_JFLMLBMNFFK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC, MNPNEHDOOMM);
	}

	static ::NIFIJCGHOJB* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::NIFIJCGHOJB*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + NIFIJCGHOJB_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + NIFIJCGHOJB_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + NIFIJCGHOJB_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
