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
namespace MoleMole::Config { class DynamicInt; }
namespace MoleMole::Config { class DynamicString; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define OOCAMMGEKPE_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x16C42890)
#define OOCAMMGEKPE_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16C42470)
#define OOCAMMGEKPE_FROMFLX_OFFSET UNITYSDK_OFFSET(0x16C429A0)
#define OOCAMMGEKPE_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x16C430C0)
#define OOCAMMGEKPE_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x16C42990)
#define OOCAMMGEKPE_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x16C43350)
#define OOCAMMGEKPE_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x16C424D0)
#define OOCAMMGEKPE_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x16C43270)
#define OOCAMMGEKPE_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x16C42370)
#define OOCAMMGEKPE_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x16C42800)
#define OOCAMMGEKPE_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x16C42A20)
#define OOCAMMGEKPE__CTOR_OFFSET UNITYSDK_OFFSET(0x16C430B0)

inline static constexpr unsigned int OOCAMMGEKPE_TypeDefinitionIndex = 74175;

class OOCAMMGEKPE : public ::LNODBDPJGFL
{
public:
	::MoleMole::Config::DynamicInt* HFPCJJLPEBD; // 0x50
	::MoleMole::Config::DynamicInt* LEEJEBIJDPL; // 0x58
	::MoleMole::Config::DynamicString* KDEFPBLCEHB; // 0x60
	::MoleMole::Config::DynamicInt* GGAAIFFGPGF; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOCAMMGEKPE__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB(::KFHNCJALFJK* GBELIHABEDH, ::LNODBDPJGFL* DPPFJDCEIOO, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + OOCAMMGEKPE_LBHNEFGNNNB_OFFSET))(this, GBELIHABEDH, DPPFJDCEIOO, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + OOCAMMGEKPE_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + OOCAMMGEKPE_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LNODBDPJGFL* DGNAAPGKIPL()
	{
		return ((::LNODBDPJGFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + OOCAMMGEKPE_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OOCAMMGEKPE_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + OOCAMMGEKPE_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + OOCAMMGEKPE_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::OOCAMMGEKPE* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::OOCAMMGEKPE*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + OOCAMMGEKPE_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + OOCAMMGEKPE_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Void JFLMLBMNFFK(::KFHNCJALFJK* MIALFKCCCPI, ::LNODBDPJGFL* KMGKAIDEIBA, ::JCADHFOKIHK* FDHMCIFPNCK, ::LNFCIBHFJHI* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::MoleMole::Battle::Entity* CEIDLKIHMLC, ::ENGKPGFGGLM* MNPNEHDOOMM)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + OOCAMMGEKPE_JFLMLBMNFFK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC, MNPNEHDOOMM);
	}

	static ::OOCAMMGEKPE* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::OOCAMMGEKPE*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + OOCAMMGEKPE_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}
};
