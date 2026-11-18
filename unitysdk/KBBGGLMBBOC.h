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
namespace MoleMole::Config { class DynamicInt; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define KBBGGLMBBOC_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x1632AFA0)
#define KBBGGLMBBOC_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1632ACC0)
#define KBBGGLMBBOC_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1632B0B0)
#define KBBGGLMBBOC_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x1632B460)
#define KBBGGLMBBOC_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x1632B0A0)
#define KBBGGLMBBOC_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x1632B6F0)
#define KBBGGLMBBOC_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x1632AD20)
#define KBBGGLMBBOC_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x1632B610)
#define KBBGGLMBBOC_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x1632ABC0)
#define KBBGGLMBBOC_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x1632AF40)
#define KBBGGLMBBOC_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x1632B130)
#define KBBGGLMBBOC__CTOR_OFFSET UNITYSDK_OFFSET(0x1632B450)

inline static constexpr unsigned int KBBGGLMBBOC_TypeDefinitionIndex = 74412;

class KBBGGLMBBOC : public ::LNODBDPJGFL
{
public:
	::MoleMole::Config::DynamicInt* EGEGIMGMJHN; // 0x50
	::MoleMole::Config::PropertyModifyFunction EMPOKNJEJPC; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBBGGLMBBOC__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB(::KFHNCJALFJK* GBELIHABEDH, ::LNODBDPJGFL* DPPFJDCEIOO, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + KBBGGLMBBOC_LBHNEFGNNNB_OFFSET))(this, GBELIHABEDH, DPPFJDCEIOO, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + KBBGGLMBBOC_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + KBBGGLMBBOC_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LNODBDPJGFL* DGNAAPGKIPL()
	{
		return ((::LNODBDPJGFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBBGGLMBBOC_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KBBGGLMBBOC_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + KBBGGLMBBOC_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + KBBGGLMBBOC_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + KBBGGLMBBOC_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::KBBGGLMBBOC* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::KBBGGLMBBOC*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + KBBGGLMBBOC_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void JFLMLBMNFFK(::KFHNCJALFJK* MIALFKCCCPI, ::LNODBDPJGFL* KMGKAIDEIBA, ::JCADHFOKIHK* FDHMCIFPNCK, ::LNFCIBHFJHI* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::MoleMole::Battle::Entity* CEIDLKIHMLC, ::ENGKPGFGGLM* MNPNEHDOOMM)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + KBBGGLMBBOC_JFLMLBMNFFK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC, MNPNEHDOOMM);
	}

	static ::KBBGGLMBBOC* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::KBBGGLMBBOC*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + KBBGGLMBBOC_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}
};
