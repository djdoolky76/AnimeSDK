#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LNODBDPJGFL.h"
#include "unitysdk/MoleMole/Config/PropertyModifyFunction.h"
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
namespace MoleMole::Config { class DynamicInt; }
namespace MoleMole::Config { class DynamicString; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define GBBPIELPCPH_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x125BFCC0)
#define GBBPIELPCPH_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x125C07E0)
#define GBBPIELPCPH_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x125BF7E0)
#define GBBPIELPCPH_FROMFLX_OFFSET UNITYSDK_OFFSET(0x125BFDD0)
#define GBBPIELPCPH_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x125C08A0)
#define GBBPIELPCPH_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x125BFDC0)
#define GBBPIELPCPH_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x125C0B30)
#define GBBPIELPCPH_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x125BF840)
#define GBBPIELPCPH_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x125C0A50)
#define GBBPIELPCPH_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x125BF660)
#define GBBPIELPCPH_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x125BFC10)
#define GBBPIELPCPH_NHAADOCOPBN_OFFSET UNITYSDK_OFFSET(0x125BF750)
#define GBBPIELPCPH_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x125BFE50)
#define GBBPIELPCPH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x125BF760)
#define GBBPIELPCPH__CTOR_OFFSET UNITYSDK_OFFSET(0x125C07D0)

inline static constexpr unsigned int GBBPIELPCPH_TypeDefinitionIndex = 80078;

class GBBPIELPCPH : public ::LNODBDPJGFL
{
public:
	::MoleMole::Config::DynamicInt* AHPPICIDJHG; // 0x50
	::MoleMole::Config::DynamicString* JPHFBCMLFGE; // 0x58
	::MoleMole::Config::DynamicFloat* BIKBGOPABFE; // 0x60
	::BHEKACANAMA* BNLAEBBEKMP; // 0x68
	::System::String* KDEFPBLCEHB; // 0x70
	::MoleMole::Config::PropertyModifyFunction EMPOKNJEJPC; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBBPIELPCPH__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB(::KFHNCJALFJK* GBELIHABEDH, ::LNODBDPJGFL* DPPFJDCEIOO, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + GBBPIELPCPH_LBHNEFGNNNB_OFFSET))(this, GBELIHABEDH, DPPFJDCEIOO, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::NDDGJMFPAKF NHAADOCOPBN()
	{
		return ((::NDDGJMFPAKF(*)(::PVOID))((::PBYTE)hIl2Cpp + GBBPIELPCPH_NHAADOCOPBN_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBBPIELPCPH_TOSTRING_OFFSET))(this);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + GBBPIELPCPH_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + GBBPIELPCPH_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LNODBDPJGFL* DGNAAPGKIPL()
	{
		return ((::LNODBDPJGFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBBPIELPCPH_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GBBPIELPCPH_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + GBBPIELPCPH_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBBPIELPCPH_DPIHOJBBGLA_OFFSET))(this);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + GBBPIELPCPH_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + GBBPIELPCPH_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::GBBPIELPCPH* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::GBBPIELPCPH*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + GBBPIELPCPH_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void JFLMLBMNFFK(::KFHNCJALFJK* MIALFKCCCPI, ::LNODBDPJGFL* KMGKAIDEIBA, ::JCADHFOKIHK* FDHMCIFPNCK, ::LNFCIBHFJHI* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::MoleMole::Battle::Entity* CEIDLKIHMLC, ::ENGKPGFGGLM* MNPNEHDOOMM)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + GBBPIELPCPH_JFLMLBMNFFK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC, MNPNEHDOOMM);
	}

	static ::GBBPIELPCPH* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::GBBPIELPCPH*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + GBBPIELPCPH_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}
};
