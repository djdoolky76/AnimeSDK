#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EBNGDFDPOEC.h"
#include "unitysdk/EELLKAJFJFM.h"
#include "unitysdk/LNODBDPJGFL.h"
#include "unitysdk/MoleMole/Config/AbilityTargetting.h"
#include "unitysdk/NDDGJMFPAKF.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class ENGKPGFGGLM;
class FKNIEPCILLG;
class JCADHFOKIHK;
class KFHNCJALFJK;
class LNFCIBHFJHI;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigPosRot; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define BAHLKLEEGNA_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x143C2A70)
#define BAHLKLEEGNA_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x143C2450)
#define BAHLKLEEGNA_FROMFLX_OFFSET UNITYSDK_OFFSET(0x143C2B80)
#define BAHLKLEEGNA_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x143C3CF0)
#define BAHLKLEEGNA_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x143C2B70)
#define BAHLKLEEGNA_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x143C3EA0)
#define BAHLKLEEGNA_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x143C24B0)
#define BAHLKLEEGNA_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x143C4000)
#define BAHLKLEEGNA_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x143C2350)
#define BAHLKLEEGNA_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x143C29C0)
#define BAHLKLEEGNA_NHAADOCOPBN_OFFSET UNITYSDK_OFFSET(0x143C2440)
#define BAHLKLEEGNA_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x143C2C00)
#define BAHLKLEEGNA__CTOR_OFFSET UNITYSDK_OFFSET(0x143C3CD0)

inline static constexpr unsigned int BAHLKLEEGNA_TypeDefinitionIndex = 85121;

class BAHLKLEEGNA : public ::LNODBDPJGFL
{
public:
	::System::String* BPOPIDAAKAH; // 0x50
	::MoleMole::Config::ConfigPosRot* JCLJIOFBHPL; // 0x58
	::System::String* OGAFIPJEAKA; // 0x60
	::System::String* POFDCFPHLNI; // 0x68
	::System::String* MHMBMEOKCIO; // 0x70
	::EBNGDFDPOEC GCKGOHCKEGM; // 0x78
	::EELLKAJFJFM EMOFEGNKKDG; // 0x7C
	::MoleMole::Config::AbilityTargetting GMLBOEGCACH; // 0x80
	::System::Boolean OOAFLBKAAPI; // 0x84
	::System::Byte _padding0[0x3];
	::MoleMole::Config::AbilityTargetting NGAMIMPINCG; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAHLKLEEGNA__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB(::KFHNCJALFJK* GBELIHABEDH, ::LNODBDPJGFL* DPPFJDCEIOO, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + BAHLKLEEGNA_LBHNEFGNNNB_OFFSET))(this, GBELIHABEDH, DPPFJDCEIOO, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::NDDGJMFPAKF NHAADOCOPBN()
	{
		return ((::NDDGJMFPAKF(*)(::PVOID))((::PBYTE)hIl2Cpp + BAHLKLEEGNA_NHAADOCOPBN_OFFSET))(this);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + BAHLKLEEGNA_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + BAHLKLEEGNA_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LNODBDPJGFL* DGNAAPGKIPL()
	{
		return ((::LNODBDPJGFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + BAHLKLEEGNA_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BAHLKLEEGNA_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + BAHLKLEEGNA_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + BAHLKLEEGNA_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::BAHLKLEEGNA* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::BAHLKLEEGNA*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + BAHLKLEEGNA_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + BAHLKLEEGNA_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::BAHLKLEEGNA* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::BAHLKLEEGNA*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + BAHLKLEEGNA_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Void JFLMLBMNFFK(::KFHNCJALFJK* MIALFKCCCPI, ::LNODBDPJGFL* KMGKAIDEIBA, ::JCADHFOKIHK* FDHMCIFPNCK, ::LNFCIBHFJHI* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::MoleMole::Battle::Entity* CEIDLKIHMLC, ::ENGKPGFGGLM* MNPNEHDOOMM)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + BAHLKLEEGNA_JFLMLBMNFFK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC, MNPNEHDOOMM);
	}
};
