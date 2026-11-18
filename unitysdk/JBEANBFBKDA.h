#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DOCDAAJKFIN.h"
#include "unitysdk/LNODBDPJGFL.h"
#include "unitysdk/MoleMole/Config/AbilityTargetting.h"
#include "unitysdk/MoleMole/Config/BuffGroupName.h"
#include "unitysdk/NDDGJMFPAKF.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class BHEKACANAMA;
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
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JBEANBFBKDA_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0xF88B5D0)
#define JBEANBFBKDA_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xF88AF00)
#define JBEANBFBKDA_FROMFLX_OFFSET UNITYSDK_OFFSET(0xF88B6E0)
#define JBEANBFBKDA_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0xF88C690)
#define JBEANBFBKDA_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0xF88B6D0)
#define JBEANBFBKDA_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0xF88C920)
#define JBEANBFBKDA_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0xF88AF60)
#define JBEANBFBKDA_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0xF88C840)
#define JBEANBFBKDA_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0xF88ADF0)
#define JBEANBFBKDA_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0xF88B4F0)
#define JBEANBFBKDA_NHAADOCOPBN_OFFSET UNITYSDK_OFFSET(0xF88AEF0)
#define JBEANBFBKDA_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0xF88B760)
#define JBEANBFBKDA__CTOR_OFFSET UNITYSDK_OFFSET(0xF88C610)

inline static constexpr unsigned int JBEANBFBKDA_TypeDefinitionIndex = 73701;

class JBEANBFBKDA : public ::LNODBDPJGFL
{
public:
	::System::String* OLBGDKKFCFG; // 0x50
	::BHEKACANAMA* JEDJLPLPCHC; // 0x58
	::MoleMole::Config::DynamicFloat* BPOLKBPCKNP; // 0x60
	::System::Collections::Generic::List_1<::MoleMole::Config::BuffGroupName>* IBAGKOKNNDC; // 0x68
	::System::String* GIKFDDLHINH; // 0x70
	::System::Collections::Generic::List_1<::System::String*>* KLDMPGPGMFG; // 0x78
	::MoleMole::Config::DynamicFloat* LGKJKJKADII; // 0x80
	::DOCDAAJKFIN MHJKLFBDDFO; // 0x88
	::MoleMole::Config::AbilityTargetting KOMJBONPNIF; // 0x8C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBEANBFBKDA__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB(::KFHNCJALFJK* GBELIHABEDH, ::LNODBDPJGFL* DPPFJDCEIOO, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + JBEANBFBKDA_LBHNEFGNNNB_OFFSET))(this, GBELIHABEDH, DPPFJDCEIOO, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::NDDGJMFPAKF NHAADOCOPBN()
	{
		return ((::NDDGJMFPAKF(*)(::PVOID))((::PBYTE)hIl2Cpp + JBEANBFBKDA_NHAADOCOPBN_OFFSET))(this);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + JBEANBFBKDA_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + JBEANBFBKDA_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LNODBDPJGFL* DGNAAPGKIPL()
	{
		return ((::LNODBDPJGFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBEANBFBKDA_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JBEANBFBKDA_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + JBEANBFBKDA_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::JBEANBFBKDA* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::JBEANBFBKDA*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + JBEANBFBKDA_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void JFLMLBMNFFK(::KFHNCJALFJK* MIALFKCCCPI, ::LNODBDPJGFL* KMGKAIDEIBA, ::JCADHFOKIHK* FDHMCIFPNCK, ::LNFCIBHFJHI* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::MoleMole::Battle::Entity* CEIDLKIHMLC, ::ENGKPGFGGLM* MNPNEHDOOMM)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + JBEANBFBKDA_JFLMLBMNFFK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC, MNPNEHDOOMM);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + JBEANBFBKDA_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + JBEANBFBKDA_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::JBEANBFBKDA* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::JBEANBFBKDA*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + JBEANBFBKDA_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}
};
