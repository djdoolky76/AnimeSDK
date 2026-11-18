#pragma once
#include "unitysdk/unitysdk.h"
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
namespace MoleMole::Config { class ConfigEntityAttackProperty; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define DNEPGJHPBAN_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x1A1FBD70)
#define DNEPGJHPBAN_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1A1FBC40)
#define DNEPGJHPBAN_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1A1FBE80)
#define DNEPGJHPBAN_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x10F15BD0)
#define DNEPGJHPBAN_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x1A1FBE70)
#define DNEPGJHPBAN_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x10F154B0)
#define DNEPGJHPBAN_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x10F156F0)
#define DNEPGJHPBAN_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x10F15610)
#define DNEPGJHPBAN_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x1A1FBB40)
#define DNEPGJHPBAN_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x1A1FBCA0)
#define DNEPGJHPBAN_NHAADOCOPBN_OFFSET UNITYSDK_OFFSET(0x1A1FBC30)
#define DNEPGJHPBAN_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x1A1FBF00)
#define DNEPGJHPBAN__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1FD090)

inline static constexpr unsigned int DNEPGJHPBAN_TypeDefinitionIndex = 78886;

class DNEPGJHPBAN : public ::LNODBDPJGFL
{
public:
	::System::String* BODECKIDFGF; // 0x50
	::System::String* LILLJOCJNHN; // 0x58
	::System::String* MKGEIOJPPPK; // 0x60
	::System::String* NHCJPNOKDNL; // 0x68
	::MoleMole::Config::ConfigEntityAttackProperty* BJPGCNGIOME; // 0x70
	::System::String* JODIOPGJIIC; // 0x78
	::System::Single CMHHCLECPIN; // 0x80
	::MoleMole::Config::AbilityTargetting FDBJDBACPOD; // 0x84
	::System::Boolean KIAGICPPNPD; // 0x88
	::System::Byte _padding0[0x3];
	::MoleMole::Config::AbilityTargetting JJOKLBLMBIK; // 0x8C
	::MoleMole::Config::AbilityTargetting ALBCFGOBAEK; // 0x90

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNEPGJHPBAN__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB(::KFHNCJALFJK* GBELIHABEDH, ::LNODBDPJGFL* DPPFJDCEIOO, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + DNEPGJHPBAN_LBHNEFGNNNB_OFFSET))(this, GBELIHABEDH, DPPFJDCEIOO, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::NDDGJMFPAKF NHAADOCOPBN()
	{
		return ((::NDDGJMFPAKF(*)(::PVOID))((::PBYTE)hIl2Cpp + DNEPGJHPBAN_NHAADOCOPBN_OFFSET))(this);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + DNEPGJHPBAN_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + DNEPGJHPBAN_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LNODBDPJGFL* DGNAAPGKIPL()
	{
		return ((::LNODBDPJGFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNEPGJHPBAN_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DNEPGJHPBAN_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + DNEPGJHPBAN_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + DNEPGJHPBAN_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::DNEPGJHPBAN* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::DNEPGJHPBAN*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + DNEPGJHPBAN_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Void JFLMLBMNFFK(::KFHNCJALFJK* MIALFKCCCPI, ::LNODBDPJGFL* KMGKAIDEIBA, ::JCADHFOKIHK* FDHMCIFPNCK, ::LNFCIBHFJHI* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::MoleMole::Battle::Entity* CEIDLKIHMLC, ::ENGKPGFGGLM* MNPNEHDOOMM)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + DNEPGJHPBAN_JFLMLBMNFFK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC, MNPNEHDOOMM);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + DNEPGJHPBAN_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::DNEPGJHPBAN* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::DNEPGJHPBAN*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + DNEPGJHPBAN_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
