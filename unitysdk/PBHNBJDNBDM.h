#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LNODBDPJGFL.h"
#include "unitysdk/MoleMole/Config/AbilityTargetting.h"
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

#define PBHNBJDNBDM_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x1552B5E0)
#define PBHNBJDNBDM_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1552B070)
#define PBHNBJDNBDM_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1552B6F0)
#define PBHNBJDNBDM_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x1552C0C0)
#define PBHNBJDNBDM_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x1552B6E0)
#define PBHNBJDNBDM_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x1552C270)
#define PBHNBJDNBDM_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x1552B0D0)
#define PBHNBJDNBDM_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x1552C3D0)
#define PBHNBJDNBDM_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x1552AF80)
#define PBHNBJDNBDM_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x1552B560)
#define PBHNBJDNBDM_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x1552B770)
#define PBHNBJDNBDM__CTOR_OFFSET UNITYSDK_OFFSET(0x1552C0B0)

inline static constexpr unsigned int PBHNBJDNBDM_TypeDefinitionIndex = 73852;

class PBHNBJDNBDM : public ::LNODBDPJGFL
{
public:
	::System::String* LMDDCDBEKOO; // 0x50
	::System::String* NGJEPAHEIPA; // 0x58
	::System::String* EPBHCNOJCBD; // 0x60
	::MoleMole::Config::AbilityTargetting ACCKNFEIBOO; // 0x68
	::System::Boolean BJHJJDDIFMK; // 0x6C
	::System::Boolean MDKGHBFJMPF; // 0x6D

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBHNBJDNBDM__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB(::KFHNCJALFJK* GBELIHABEDH, ::LNODBDPJGFL* DPPFJDCEIOO, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + PBHNBJDNBDM_LBHNEFGNNNB_OFFSET))(this, GBELIHABEDH, DPPFJDCEIOO, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PBHNBJDNBDM_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + PBHNBJDNBDM_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LNODBDPJGFL* DGNAAPGKIPL()
	{
		return ((::LNODBDPJGFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBHNBJDNBDM_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PBHNBJDNBDM_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + PBHNBJDNBDM_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::PBHNBJDNBDM* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::PBHNBJDNBDM*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PBHNBJDNBDM_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + PBHNBJDNBDM_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PBHNBJDNBDM_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::PBHNBJDNBDM* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::PBHNBJDNBDM*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + PBHNBJDNBDM_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Void JFLMLBMNFFK(::KFHNCJALFJK* MIALFKCCCPI, ::LNODBDPJGFL* KMGKAIDEIBA, ::JCADHFOKIHK* FDHMCIFPNCK, ::LNFCIBHFJHI* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::MoleMole::Battle::Entity* CEIDLKIHMLC, ::ENGKPGFGGLM* MNPNEHDOOMM)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + PBHNBJDNBDM_JFLMLBMNFFK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC, MNPNEHDOOMM);
	}
};
