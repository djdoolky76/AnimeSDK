#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LNODBDPJGFL.h"
#include "unitysdk/MoleMole/Config/DamageElementType.h"
#include "unitysdk/MoleMole/Config/EVariantElement.h"
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

#define BDFEBEJPHLF_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0xF792480)
#define BDFEBEJPHLF_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xF791F60)
#define BDFEBEJPHLF_FROMFLX_OFFSET UNITYSDK_OFFSET(0xF792590)
#define BDFEBEJPHLF_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0xF793190)
#define BDFEBEJPHLF_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0xF792580)
#define BDFEBEJPHLF_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0xF793030)
#define BDFEBEJPHLF_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0xF791FC0)
#define BDFEBEJPHLF_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0xF793340)
#define BDFEBEJPHLF_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0xF791E70)
#define BDFEBEJPHLF_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0xF792400)
#define BDFEBEJPHLF_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0xF792610)
#define BDFEBEJPHLF__CTOR_OFFSET UNITYSDK_OFFSET(0xF793020)

inline static constexpr unsigned int BDFEBEJPHLF_TypeDefinitionIndex = 53289;

class BDFEBEJPHLF : public ::LNODBDPJGFL
{
public:
	::System::String* KDEFPBLCEHB; // 0x50
	::MoleMole::Config::DynamicFloat* PMLOGFLOLNJ; // 0x58
	::MoleMole::Config::DynamicFloat* HBOJLFKAOOH; // 0x60
	::MoleMole::Config::EVariantElement KNCJBOIAAPF; // 0x68
	::System::Boolean BJHJJDDIFMK; // 0x6C
	::System::Byte _padding0[0x3];
	::MoleMole::Config::PropertyModifyFunction EMPOKNJEJPC; // 0x70
	::MoleMole::Config::DamageElementType PGDKBJFNLOG; // 0x74

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDFEBEJPHLF__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB(::KFHNCJALFJK* GBELIHABEDH, ::LNODBDPJGFL* DPPFJDCEIOO, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + BDFEBEJPHLF_LBHNEFGNNNB_OFFSET))(this, GBELIHABEDH, DPPFJDCEIOO, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + BDFEBEJPHLF_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + BDFEBEJPHLF_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LNODBDPJGFL* DGNAAPGKIPL()
	{
		return ((::LNODBDPJGFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDFEBEJPHLF_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BDFEBEJPHLF_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + BDFEBEJPHLF_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + BDFEBEJPHLF_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::BDFEBEJPHLF* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::BDFEBEJPHLF*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + BDFEBEJPHLF_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	static ::BDFEBEJPHLF* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::BDFEBEJPHLF*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + BDFEBEJPHLF_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + BDFEBEJPHLF_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Void JFLMLBMNFFK(::KFHNCJALFJK* MIALFKCCCPI, ::LNODBDPJGFL* KMGKAIDEIBA, ::JCADHFOKIHK* FDHMCIFPNCK, ::LNFCIBHFJHI* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::MoleMole::Battle::Entity* CEIDLKIHMLC, ::ENGKPGFGGLM* MNPNEHDOOMM)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + BDFEBEJPHLF_JFLMLBMNFFK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC, MNPNEHDOOMM);
	}
};
