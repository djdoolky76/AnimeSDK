#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LNODBDPJGFL.h"
#include "unitysdk/MoleMole/Config/InlevelCameraState.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class ENGKPGFGGLM;
class FKNIEPCILLG;
class JCADHFOKIHK;
class KFHNCJALFJK;
class LNFCIBHFJHI;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class DynamicString; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define ADDCMLNGMAP_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x12646420)
#define ADDCMLNGMAP_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x12646140)
#define ADDCMLNGMAP_FROMFLX_OFFSET UNITYSDK_OFFSET(0x12646530)
#define ADDCMLNGMAP_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x126468E0)
#define ADDCMLNGMAP_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x12646520)
#define ADDCMLNGMAP_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x12646B70)
#define ADDCMLNGMAP_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x126461A0)
#define ADDCMLNGMAP_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x12646A90)
#define ADDCMLNGMAP_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x12646040)
#define ADDCMLNGMAP_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x126463C0)
#define ADDCMLNGMAP_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x126465B0)
#define ADDCMLNGMAP__CTOR_OFFSET UNITYSDK_OFFSET(0x126468D0)

inline static constexpr unsigned int ADDCMLNGMAP_TypeDefinitionIndex = 83115;

class ADDCMLNGMAP : public ::LNODBDPJGFL
{
public:
	::MoleMole::Config::DynamicString* KIHGNGKBADE; // 0x50
	::MoleMole::Config::InlevelCameraState HCLBNLIKGDP; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADDCMLNGMAP__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB(::KFHNCJALFJK* GBELIHABEDH, ::LNODBDPJGFL* DPPFJDCEIOO, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + ADDCMLNGMAP_LBHNEFGNNNB_OFFSET))(this, GBELIHABEDH, DPPFJDCEIOO, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + ADDCMLNGMAP_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + ADDCMLNGMAP_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LNODBDPJGFL* DGNAAPGKIPL()
	{
		return ((::LNODBDPJGFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + ADDCMLNGMAP_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ADDCMLNGMAP_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + ADDCMLNGMAP_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::ADDCMLNGMAP* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::ADDCMLNGMAP*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + ADDCMLNGMAP_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + ADDCMLNGMAP_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + ADDCMLNGMAP_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Void JFLMLBMNFFK(::KFHNCJALFJK* MIALFKCCCPI, ::LNODBDPJGFL* KMGKAIDEIBA, ::JCADHFOKIHK* FDHMCIFPNCK, ::LNFCIBHFJHI* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::MoleMole::Battle::Entity* CEIDLKIHMLC, ::ENGKPGFGGLM* MNPNEHDOOMM)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + ADDCMLNGMAP_JFLMLBMNFFK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC, MNPNEHDOOMM);
	}

	static ::ADDCMLNGMAP* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::ADDCMLNGMAP*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + ADDCMLNGMAP_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}
};
