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
namespace MoleMole::Config { class DynamicInt; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define DMCAMOMIIIC_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x7FC53E0)
#define DMCAMOMIIIC_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x7FC4EC0)
#define DMCAMOMIIIC_FROMFLX_OFFSET UNITYSDK_OFFSET(0x7FC54F0)
#define DMCAMOMIIIC_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x7FC5FA0)
#define DMCAMOMIIIC_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x7FC54E0)
#define DMCAMOMIIIC_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x7FC6150)
#define DMCAMOMIIIC_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x7FC4F20)
#define DMCAMOMIIIC_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x7FC5EC0)
#define DMCAMOMIIIC_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x7FC4DD0)
#define DMCAMOMIIIC_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x7FC5350)
#define DMCAMOMIIIC_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x7FC5570)
#define DMCAMOMIIIC__CTOR_OFFSET UNITYSDK_OFFSET(0x7FC5EB0)

inline static constexpr unsigned int DMCAMOMIIIC_TypeDefinitionIndex = 84310;

class DMCAMOMIIIC : public ::LNODBDPJGFL
{
public:
	::MoleMole::Config::DynamicFloat* PMLOGFLOLNJ; // 0x50
	::MoleMole::Config::DynamicInt* DGIAGIMPCEA; // 0x58
	::System::String* KDEFPBLCEHB; // 0x60
	::MoleMole::Config::DynamicFloat* HBOJLFKAOOH; // 0x68
	::MoleMole::Config::PropertyModifyFunction EMPOKNJEJPC; // 0x70
	::System::Boolean BJHJJDDIFMK; // 0x74

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMCAMOMIIIC__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB(::KFHNCJALFJK* GBELIHABEDH, ::LNODBDPJGFL* DPPFJDCEIOO, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + DMCAMOMIIIC_LBHNEFGNNNB_OFFSET))(this, GBELIHABEDH, DPPFJDCEIOO, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + DMCAMOMIIIC_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + DMCAMOMIIIC_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LNODBDPJGFL* DGNAAPGKIPL()
	{
		return ((::LNODBDPJGFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMCAMOMIIIC_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DMCAMOMIIIC_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + DMCAMOMIIIC_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + DMCAMOMIIIC_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Void JFLMLBMNFFK(::KFHNCJALFJK* MIALFKCCCPI, ::LNODBDPJGFL* KMGKAIDEIBA, ::JCADHFOKIHK* FDHMCIFPNCK, ::LNFCIBHFJHI* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::MoleMole::Battle::Entity* CEIDLKIHMLC, ::ENGKPGFGGLM* MNPNEHDOOMM)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + DMCAMOMIIIC_JFLMLBMNFFK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC, MNPNEHDOOMM);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + DMCAMOMIIIC_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::DMCAMOMIIIC* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::DMCAMOMIIIC*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + DMCAMOMIIIC_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::DMCAMOMIIIC* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::DMCAMOMIIIC*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + DMCAMOMIIIC_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}
};
