#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LNODBDPJGFL.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/MoleMole/Config/PropertyModifyFunction.h"
#include "unitysdk/NDDGJMFPAKF.h"
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

#define ELOCMHPEIFE_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x1417A920)
#define ELOCMHPEIFE_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1417A3D0)
#define ELOCMHPEIFE_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1417AA30)
#define ELOCMHPEIFE_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x1417B540)
#define ELOCMHPEIFE_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x1417AA20)
#define ELOCMHPEIFE_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x1417B6F0)
#define ELOCMHPEIFE_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x1417A430)
#define ELOCMHPEIFE_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x1417B850)
#define ELOCMHPEIFE_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x1417A2D0)
#define ELOCMHPEIFE_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x1417A890)
#define ELOCMHPEIFE_NHAADOCOPBN_OFFSET UNITYSDK_OFFSET(0x1417A3C0)
#define ELOCMHPEIFE_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x1417AAB0)
#define ELOCMHPEIFE__CTOR_OFFSET UNITYSDK_OFFSET(0x1417B530)

inline static constexpr unsigned int ELOCMHPEIFE_TypeDefinitionIndex = 70247;

class ELOCMHPEIFE : public ::LNODBDPJGFL
{
public:
	::MoleMole::Config::DynamicFloat* PMLOGFLOLNJ; // 0x50
	::System::String* KDEFPBLCEHB; // 0x58
	::MoleMole::Config::DynamicFloat* HBOJLFKAOOH; // 0x60
	::System::String* LFNMPOCHPLP; // 0x68
	::MoleMole::Config::BaseProperty EHAKJBAKGDL; // 0x70
	::MoleMole::Config::PropertyModifyFunction EMPOKNJEJPC; // 0x74
	::System::Boolean BJHJJDDIFMK; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELOCMHPEIFE__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB(::KFHNCJALFJK* GBELIHABEDH, ::LNODBDPJGFL* DPPFJDCEIOO, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + ELOCMHPEIFE_LBHNEFGNNNB_OFFSET))(this, GBELIHABEDH, DPPFJDCEIOO, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::NDDGJMFPAKF NHAADOCOPBN()
	{
		return ((::NDDGJMFPAKF(*)(::PVOID))((::PBYTE)hIl2Cpp + ELOCMHPEIFE_NHAADOCOPBN_OFFSET))(this);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + ELOCMHPEIFE_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + ELOCMHPEIFE_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LNODBDPJGFL* DGNAAPGKIPL()
	{
		return ((::LNODBDPJGFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELOCMHPEIFE_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ELOCMHPEIFE_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + ELOCMHPEIFE_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + ELOCMHPEIFE_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + ELOCMHPEIFE_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::ELOCMHPEIFE* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::ELOCMHPEIFE*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + ELOCMHPEIFE_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::ELOCMHPEIFE* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::ELOCMHPEIFE*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + ELOCMHPEIFE_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Void JFLMLBMNFFK(::KFHNCJALFJK* MIALFKCCCPI, ::LNODBDPJGFL* KMGKAIDEIBA, ::JCADHFOKIHK* FDHMCIFPNCK, ::LNFCIBHFJHI* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::MoleMole::Battle::Entity* CEIDLKIHMLC, ::ENGKPGFGGLM* MNPNEHDOOMM)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + ELOCMHPEIFE_JFLMLBMNFFK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC, MNPNEHDOOMM);
	}
};
