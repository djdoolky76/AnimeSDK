#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LNODBDPJGFL.h"
#include "unitysdk/MoleMole/Config/DamageElementType.h"
#include "unitysdk/MoleMole/Config/EVariantElement.h"
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

#define BCPELAPLBLO_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x1267DD60)
#define BCPELAPLBLO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1267D980)
#define BCPELAPLBLO_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1267DE70)
#define BCPELAPLBLO_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x1267E5F0)
#define BCPELAPLBLO_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x1267DE60)
#define BCPELAPLBLO_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x1267E490)
#define BCPELAPLBLO_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x1267D9E0)
#define BCPELAPLBLO_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x1267E7A0)
#define BCPELAPLBLO_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x1267D890)
#define BCPELAPLBLO_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x1267DD00)
#define BCPELAPLBLO_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x1267DEF0)
#define BCPELAPLBLO__CTOR_OFFSET UNITYSDK_OFFSET(0x1267E480)

inline static constexpr unsigned int BCPELAPLBLO_TypeDefinitionIndex = 86603;

class BCPELAPLBLO : public ::LNODBDPJGFL
{
public:
	::System::String* KIHGNGKBADE; // 0x50
	::System::Boolean MKMPNCBMANH; // 0x58
	::System::Byte _padding0[0x3];
	::MoleMole::Config::EVariantElement KNCJBOIAAPF; // 0x5C
	::MoleMole::Config::DamageElementType JLEKIOBFKMP; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCPELAPLBLO__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB(::KFHNCJALFJK* GBELIHABEDH, ::LNODBDPJGFL* DPPFJDCEIOO, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + BCPELAPLBLO_LBHNEFGNNNB_OFFSET))(this, GBELIHABEDH, DPPFJDCEIOO, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + BCPELAPLBLO_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + BCPELAPLBLO_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LNODBDPJGFL* DGNAAPGKIPL()
	{
		return ((::LNODBDPJGFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCPELAPLBLO_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BCPELAPLBLO_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + BCPELAPLBLO_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::BCPELAPLBLO* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::BCPELAPLBLO*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + BCPELAPLBLO_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + BCPELAPLBLO_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::BCPELAPLBLO* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::BCPELAPLBLO*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + BCPELAPLBLO_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void JFLMLBMNFFK(::KFHNCJALFJK* MIALFKCCCPI, ::LNODBDPJGFL* KMGKAIDEIBA, ::JCADHFOKIHK* FDHMCIFPNCK, ::LNFCIBHFJHI* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::MoleMole::Battle::Entity* CEIDLKIHMLC, ::ENGKPGFGGLM* MNPNEHDOOMM)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + BCPELAPLBLO_JFLMLBMNFFK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC, MNPNEHDOOMM);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + BCPELAPLBLO_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
