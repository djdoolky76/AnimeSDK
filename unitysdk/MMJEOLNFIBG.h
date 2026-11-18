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
namespace MoleMole::Config { class DynamicString; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MMJEOLNFIBG_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x13026790)
#define MMJEOLNFIBG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x130262A0)
#define MMJEOLNFIBG_FROMFLX_OFFSET UNITYSDK_OFFSET(0x130268A0)
#define MMJEOLNFIBG_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x13027290)
#define MMJEOLNFIBG_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x13026890)
#define MMJEOLNFIBG_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x13027130)
#define MMJEOLNFIBG_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x13026300)
#define MMJEOLNFIBG_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x13027440)
#define MMJEOLNFIBG_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x130261B0)
#define MMJEOLNFIBG_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x13026700)
#define MMJEOLNFIBG_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x13026920)
#define MMJEOLNFIBG__CTOR_OFFSET UNITYSDK_OFFSET(0x13027120)

inline static constexpr unsigned int MMJEOLNFIBG_TypeDefinitionIndex = 47975;

class MMJEOLNFIBG : public ::LNODBDPJGFL
{
public:
	::MoleMole::Config::DynamicString* DCJCHGOGLMF; // 0x50
	::MoleMole::Config::DynamicFloat* OMAIMFOELNN; // 0x58
	::MoleMole::Config::DynamicFloat* GPIOJBLKFAJ; // 0x60
	::MoleMole::Config::DynamicFloat* BKLHHDEELFL; // 0x68
	::System::Boolean PFJJABIBCFB; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMJEOLNFIBG__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB(::KFHNCJALFJK* GBELIHABEDH, ::LNODBDPJGFL* DPPFJDCEIOO, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + MMJEOLNFIBG_LBHNEFGNNNB_OFFSET))(this, GBELIHABEDH, DPPFJDCEIOO, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MMJEOLNFIBG_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MMJEOLNFIBG_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LNODBDPJGFL* DGNAAPGKIPL()
	{
		return ((::LNODBDPJGFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMJEOLNFIBG_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MMJEOLNFIBG_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MMJEOLNFIBG_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MMJEOLNFIBG_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MMJEOLNFIBG_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::MMJEOLNFIBG* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::MMJEOLNFIBG*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MMJEOLNFIBG_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	static ::MMJEOLNFIBG* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::MMJEOLNFIBG*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MMJEOLNFIBG_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void JFLMLBMNFFK(::KFHNCJALFJK* MIALFKCCCPI, ::LNODBDPJGFL* KMGKAIDEIBA, ::JCADHFOKIHK* FDHMCIFPNCK, ::LNFCIBHFJHI* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::MoleMole::Battle::Entity* CEIDLKIHMLC, ::ENGKPGFGGLM* MNPNEHDOOMM)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + MMJEOLNFIBG_JFLMLBMNFFK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC, MNPNEHDOOMM);
	}
};
