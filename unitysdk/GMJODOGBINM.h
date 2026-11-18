#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LNODBDPJGFL.h"
#include "unitysdk/MoleMole/Config/PropertyModifyFunction.h"
#include "unitysdk/PJAKEPNHHCJ.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class ENGKPGFGGLM;
class FKNIEPCILLG;
class JCADHFOKIHK;
class KFHNCJALFJK;
class LNFCIBHFJHI;
namespace MoleMole::Battle { class Entity; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define GMJODOGBINM_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x17A15980)
#define GMJODOGBINM_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17A155A0)
#define GMJODOGBINM_FROMFLX_OFFSET UNITYSDK_OFFSET(0x17A15A90)
#define GMJODOGBINM_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x17A16220)
#define GMJODOGBINM_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x17A15A80)
#define GMJODOGBINM_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x17A163D0)
#define GMJODOGBINM_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x17A15600)
#define GMJODOGBINM_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x17A16140)
#define GMJODOGBINM_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x17A154A0)
#define GMJODOGBINM_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x17A15920)
#define GMJODOGBINM_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x17A15B10)
#define GMJODOGBINM__CTOR_OFFSET UNITYSDK_OFFSET(0x17A16130)

inline static constexpr unsigned int GMJODOGBINM_TypeDefinitionIndex = 41542;

class GMJODOGBINM : public ::LNODBDPJGFL
{
public:
	::System::String* KDEFPBLCEHB; // 0x50
	::MoleMole::Config::PropertyModifyFunction EMPOKNJEJPC; // 0x58
	::System::Boolean BJHJJDDIFMK; // 0x5C
	::System::Byte _padding0[0x3];
	::PJAKEPNHHCJ PGFGDBNHCOC; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMJODOGBINM__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB(::KFHNCJALFJK* GBELIHABEDH, ::LNODBDPJGFL* DPPFJDCEIOO, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + GMJODOGBINM_LBHNEFGNNNB_OFFSET))(this, GBELIHABEDH, DPPFJDCEIOO, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + GMJODOGBINM_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + GMJODOGBINM_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LNODBDPJGFL* DGNAAPGKIPL()
	{
		return ((::LNODBDPJGFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMJODOGBINM_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GMJODOGBINM_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + GMJODOGBINM_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + GMJODOGBINM_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void JFLMLBMNFFK(::KFHNCJALFJK* MIALFKCCCPI, ::LNODBDPJGFL* KMGKAIDEIBA, ::JCADHFOKIHK* FDHMCIFPNCK, ::LNFCIBHFJHI* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::MoleMole::Battle::Entity* CEIDLKIHMLC, ::ENGKPGFGGLM* MNPNEHDOOMM)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + GMJODOGBINM_JFLMLBMNFFK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC, MNPNEHDOOMM);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + GMJODOGBINM_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::GMJODOGBINM* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::GMJODOGBINM*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + GMJODOGBINM_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::GMJODOGBINM* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::GMJODOGBINM*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + GMJODOGBINM_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}
};
