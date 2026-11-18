#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LNODBDPJGFL.h"
#include "unitysdk/MoleMole/Config/PropertyModifyFunction.h"
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

#define KLOFIAKPJGN_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x1634B810)
#define KLOFIAKPJGN_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1634B530)
#define KLOFIAKPJGN_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1634B920)
#define KLOFIAKPJGN_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x1634BE30)
#define KLOFIAKPJGN_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x1634B910)
#define KLOFIAKPJGN_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x1634BCD0)
#define KLOFIAKPJGN_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x1634B590)
#define KLOFIAKPJGN_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x1634BFE0)
#define KLOFIAKPJGN_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x1634B410)
#define KLOFIAKPJGN_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x1634B7B0)
#define KLOFIAKPJGN_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x1634B9A0)
#define KLOFIAKPJGN__CTOR_OFFSET UNITYSDK_OFFSET(0x1634BCC0)

inline static constexpr unsigned int KLOFIAKPJGN_TypeDefinitionIndex = 52781;

class KLOFIAKPJGN : public ::LNODBDPJGFL
{
public:
	::MoleMole::Config::DynamicFloat* GPIOJBLKFAJ; // 0x50
	::MoleMole::Config::PropertyModifyFunction EMPOKNJEJPC; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLOFIAKPJGN__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB(::KFHNCJALFJK* GBELIHABEDH, ::LNODBDPJGFL* DPPFJDCEIOO, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + KLOFIAKPJGN_LBHNEFGNNNB_OFFSET))(this, GBELIHABEDH, DPPFJDCEIOO, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + KLOFIAKPJGN_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + KLOFIAKPJGN_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LNODBDPJGFL* DGNAAPGKIPL()
	{
		return ((::LNODBDPJGFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLOFIAKPJGN_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KLOFIAKPJGN_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + KLOFIAKPJGN_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::KLOFIAKPJGN* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::KLOFIAKPJGN*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + KLOFIAKPJGN_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	static ::KLOFIAKPJGN* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::KLOFIAKPJGN*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + KLOFIAKPJGN_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void JFLMLBMNFFK(::KFHNCJALFJK* MIALFKCCCPI, ::LNODBDPJGFL* KMGKAIDEIBA, ::JCADHFOKIHK* FDHMCIFPNCK, ::LNFCIBHFJHI* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::MoleMole::Battle::Entity* CEIDLKIHMLC, ::ENGKPGFGGLM* MNPNEHDOOMM)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + KLOFIAKPJGN_JFLMLBMNFFK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC, MNPNEHDOOMM);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + KLOFIAKPJGN_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + KLOFIAKPJGN_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
