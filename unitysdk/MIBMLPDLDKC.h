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
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIBMLPDLDKC_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x17D34020)
#define MIBMLPDLDKC_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17D33A70)
#define MIBMLPDLDKC_FROMFLX_OFFSET UNITYSDK_OFFSET(0x17D34130)
#define MIBMLPDLDKC_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x17D34E20)
#define MIBMLPDLDKC_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x17D34120)
#define MIBMLPDLDKC_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x17D34CC0)
#define MIBMLPDLDKC_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x17D33AD0)
#define MIBMLPDLDKC_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x17D34FD0)
#define MIBMLPDLDKC_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x17D33980)
#define MIBMLPDLDKC_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x17D33F70)
#define MIBMLPDLDKC_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x17D341B0)
#define MIBMLPDLDKC__CTOR_OFFSET UNITYSDK_OFFSET(0x17D34CB0)

inline static constexpr unsigned int MIBMLPDLDKC_TypeDefinitionIndex = 76901;

class MIBMLPDLDKC : public ::LNODBDPJGFL
{
public:
	::MoleMole::Config::DynamicFloat* NEDIPIAMHHM; // 0x50
	::MoleMole::Config::DynamicFloat* GPIOJBLKFAJ; // 0x58
	::MoleMole::Config::DynamicFloat* OMAIMFOELNN; // 0x60
	::System::String* DCJCHGOGLMF; // 0x68
	::MoleMole::Config::DynamicFloat* BKLHHDEELFL; // 0x70
	::System::Boolean PFJJABIBCFB; // 0x78
	::System::Byte _padding0[0x3];
	::MoleMole::Config::PropertyModifyFunction EMPOKNJEJPC; // 0x7C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIBMLPDLDKC__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB(::KFHNCJALFJK* GBELIHABEDH, ::LNODBDPJGFL* DPPFJDCEIOO, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + MIBMLPDLDKC_LBHNEFGNNNB_OFFSET))(this, GBELIHABEDH, DPPFJDCEIOO, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MIBMLPDLDKC_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MIBMLPDLDKC_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LNODBDPJGFL* DGNAAPGKIPL()
	{
		return ((::LNODBDPJGFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIBMLPDLDKC_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIBMLPDLDKC_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MIBMLPDLDKC_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::MIBMLPDLDKC* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::MIBMLPDLDKC*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MIBMLPDLDKC_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	static ::MIBMLPDLDKC* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::MIBMLPDLDKC*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MIBMLPDLDKC_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void JFLMLBMNFFK(::KFHNCJALFJK* MIALFKCCCPI, ::LNODBDPJGFL* KMGKAIDEIBA, ::JCADHFOKIHK* FDHMCIFPNCK, ::LNFCIBHFJHI* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::MoleMole::Battle::Entity* CEIDLKIHMLC, ::ENGKPGFGGLM* MNPNEHDOOMM)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + MIBMLPDLDKC_JFLMLBMNFFK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC, MNPNEHDOOMM);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MIBMLPDLDKC_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MIBMLPDLDKC_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
