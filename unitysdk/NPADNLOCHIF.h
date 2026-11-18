#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KGAKFDIEBPN.h"
#include "unitysdk/LNODBDPJGFL.h"
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

#define NPADNLOCHIF_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0xE0B3B20)
#define NPADNLOCHIF_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xE0B3710)
#define NPADNLOCHIF_FROMFLX_OFFSET UNITYSDK_OFFSET(0xE0B3C30)
#define NPADNLOCHIF_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0xE0B4420)
#define NPADNLOCHIF_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0xE0B3C20)
#define NPADNLOCHIF_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0xE0B45D0)
#define NPADNLOCHIF_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0xE0B3770)
#define NPADNLOCHIF_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0xE0B4730)
#define NPADNLOCHIF_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0xE0B35A0)
#define NPADNLOCHIF_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0xE0B3AA0)
#define NPADNLOCHIF_NHAADOCOPBN_OFFSET UNITYSDK_OFFSET(0xE0B3700)
#define NPADNLOCHIF_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0xE0B3CB0)
#define NPADNLOCHIF__CTOR_OFFSET UNITYSDK_OFFSET(0xE0B4410)

inline static constexpr unsigned int NPADNLOCHIF_TypeDefinitionIndex = 41244;

class NPADNLOCHIF : public ::LNODBDPJGFL
{
public:
	::MoleMole::Config::DynamicFloat* PMLOGFLOLNJ; // 0x50
	::System::String* HFHJMKDAMCN; // 0x58
	::MoleMole::Config::DynamicFloat* HBOJLFKAOOH; // 0x60
	::KGAKFDIEBPN JEJABEHHBIJ; // 0x68
	::MoleMole::Config::PropertyModifyFunction EMPOKNJEJPC; // 0x6C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPADNLOCHIF__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB(::KFHNCJALFJK* GBELIHABEDH, ::LNODBDPJGFL* DPPFJDCEIOO, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + NPADNLOCHIF_LBHNEFGNNNB_OFFSET))(this, GBELIHABEDH, DPPFJDCEIOO, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::NDDGJMFPAKF NHAADOCOPBN()
	{
		return ((::NDDGJMFPAKF(*)(::PVOID))((::PBYTE)hIl2Cpp + NPADNLOCHIF_NHAADOCOPBN_OFFSET))(this);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + NPADNLOCHIF_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + NPADNLOCHIF_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LNODBDPJGFL* DGNAAPGKIPL()
	{
		return ((::LNODBDPJGFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPADNLOCHIF_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPADNLOCHIF_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + NPADNLOCHIF_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::NPADNLOCHIF* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::NPADNLOCHIF*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + NPADNLOCHIF_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::NPADNLOCHIF* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::NPADNLOCHIF*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + NPADNLOCHIF_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Void JFLMLBMNFFK(::KFHNCJALFJK* MIALFKCCCPI, ::LNODBDPJGFL* KMGKAIDEIBA, ::JCADHFOKIHK* FDHMCIFPNCK, ::LNFCIBHFJHI* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::MoleMole::Battle::Entity* CEIDLKIHMLC, ::ENGKPGFGGLM* MNPNEHDOOMM)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + NPADNLOCHIF_JFLMLBMNFFK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC, MNPNEHDOOMM);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + NPADNLOCHIF_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + NPADNLOCHIF_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
