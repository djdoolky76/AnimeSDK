#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LNODBDPJGFL.h"
#include "unitysdk/MoleMole/Config/ColliderLayerType.h"
#include "unitysdk/NDDGJMFPAKF.h"
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
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BEHECOKICLC_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0xF795E20)
#define BEHECOKICLC_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xF7957A0)
#define BEHECOKICLC_FROMFLX_OFFSET UNITYSDK_OFFSET(0xF795F30)
#define BEHECOKICLC_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0xF796B30)
#define BEHECOKICLC_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0xF795F20)
#define BEHECOKICLC_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0xF7968F0)
#define BEHECOKICLC_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0xF795800)
#define BEHECOKICLC_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0xF796A50)
#define BEHECOKICLC_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0xF7956D0)
#define BEHECOKICLC_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0xF795DB0)
#define BEHECOKICLC_NHAADOCOPBN_OFFSET UNITYSDK_OFFSET(0xF795790)
#define BEHECOKICLC_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0xF795FB0)
#define BEHECOKICLC__CTOR_OFFSET UNITYSDK_OFFSET(0xF7968E0)

inline static constexpr unsigned int BEHECOKICLC_TypeDefinitionIndex = 75722;

class BEHECOKICLC : public ::LNODBDPJGFL
{
public:
	::System::Collections::Generic::List_1<::System::String*>* JFPNILCHFGO; // 0x50
	::System::String* KIHGNGKBADE; // 0x58
	::System::Boolean BKIMKIKJKND; // 0x60
	::System::Boolean ONEPEMBJNMB; // 0x61
	::System::Boolean JPGLHOFPIEG; // 0x62
	::System::Byte _padding0[0x1];
	::MoleMole::Config::ColliderLayerType BPJEIJMMDLN; // 0x64

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHECOKICLC__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB(::KFHNCJALFJK* GBELIHABEDH, ::LNODBDPJGFL* DPPFJDCEIOO, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + BEHECOKICLC_LBHNEFGNNNB_OFFSET))(this, GBELIHABEDH, DPPFJDCEIOO, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::NDDGJMFPAKF NHAADOCOPBN()
	{
		return ((::NDDGJMFPAKF(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHECOKICLC_NHAADOCOPBN_OFFSET))(this);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + BEHECOKICLC_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + BEHECOKICLC_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LNODBDPJGFL* DGNAAPGKIPL()
	{
		return ((::LNODBDPJGFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHECOKICLC_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHECOKICLC_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + BEHECOKICLC_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + BEHECOKICLC_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::BEHECOKICLC* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::BEHECOKICLC*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + BEHECOKICLC_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + BEHECOKICLC_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Void JFLMLBMNFFK(::KFHNCJALFJK* MIALFKCCCPI, ::LNODBDPJGFL* KMGKAIDEIBA, ::JCADHFOKIHK* FDHMCIFPNCK, ::LNFCIBHFJHI* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::MoleMole::Battle::Entity* CEIDLKIHMLC, ::ENGKPGFGGLM* MNPNEHDOOMM)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + BEHECOKICLC_JFLMLBMNFFK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC, MNPNEHDOOMM);
	}

	static ::BEHECOKICLC* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::BEHECOKICLC*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + BEHECOKICLC_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
