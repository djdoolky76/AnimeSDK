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
namespace MoleMole::Config { class DynamicInt; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define EJFLEDKBCIL_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x16BEF6A0)
#define EJFLEDKBCIL_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16BEF290)
#define EJFLEDKBCIL_FROMFLX_OFFSET UNITYSDK_OFFSET(0x16BEF7B0)
#define EJFLEDKBCIL_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x16BF0120)
#define EJFLEDKBCIL_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x16BEF7A0)
#define EJFLEDKBCIL_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x16BEFFC0)
#define EJFLEDKBCIL_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x16BEF2F0)
#define EJFLEDKBCIL_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x16BEFEE0)
#define EJFLEDKBCIL_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x16BEF160)
#define EJFLEDKBCIL_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x16BEF610)
#define EJFLEDKBCIL_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x16BEF830)
#define EJFLEDKBCIL__CTOR_OFFSET UNITYSDK_OFFSET(0x16BEFED0)

inline static constexpr unsigned int EJFLEDKBCIL_TypeDefinitionIndex = 74096;

class EJFLEDKBCIL : public ::LNODBDPJGFL
{
public:
	::MoleMole::Config::DynamicFloat* GPIOJBLKFAJ; // 0x50
	::MoleMole::Config::DynamicFloat* CJLKFOGFONE; // 0x58
	::MoleMole::Config::DynamicInt* JNMIFDPKACH; // 0x60
	::System::String* BODGHKHEOJF; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJFLEDKBCIL__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB(::KFHNCJALFJK* GBELIHABEDH, ::LNODBDPJGFL* DPPFJDCEIOO, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + EJFLEDKBCIL_LBHNEFGNNNB_OFFSET))(this, GBELIHABEDH, DPPFJDCEIOO, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + EJFLEDKBCIL_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + EJFLEDKBCIL_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LNODBDPJGFL* DGNAAPGKIPL()
	{
		return ((::LNODBDPJGFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJFLEDKBCIL_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EJFLEDKBCIL_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + EJFLEDKBCIL_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Void JFLMLBMNFFK(::KFHNCJALFJK* MIALFKCCCPI, ::LNODBDPJGFL* KMGKAIDEIBA, ::JCADHFOKIHK* FDHMCIFPNCK, ::LNFCIBHFJHI* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::MoleMole::Battle::Entity* CEIDLKIHMLC, ::ENGKPGFGGLM* MNPNEHDOOMM)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + EJFLEDKBCIL_JFLMLBMNFFK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC, MNPNEHDOOMM);
	}

	static ::EJFLEDKBCIL* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::EJFLEDKBCIL*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + EJFLEDKBCIL_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + EJFLEDKBCIL_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + EJFLEDKBCIL_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::EJFLEDKBCIL* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::EJFLEDKBCIL*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + EJFLEDKBCIL_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
