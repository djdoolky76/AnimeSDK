#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LNODBDPJGFL.h"
#include "unitysdk/MoleMole/Config/EnterBattleState.h"
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

#define IDIKMJNOPIL_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x15BFB260)
#define IDIKMJNOPIL_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x15BFA520)
#define IDIKMJNOPIL_FROMFLX_OFFSET UNITYSDK_OFFSET(0x15BFB370)
#define IDIKMJNOPIL_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x15BFD210)
#define IDIKMJNOPIL_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x15BFB360)
#define IDIKMJNOPIL_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x15BFD3C0)
#define IDIKMJNOPIL_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x15BFA580)
#define IDIKMJNOPIL_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x15BFD520)
#define IDIKMJNOPIL_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x15BF9CB0)
#define IDIKMJNOPIL_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x15BFB170)
#define IDIKMJNOPIL_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x15BFB3F0)
#define IDIKMJNOPIL__CTOR_OFFSET UNITYSDK_OFFSET(0x15BFD1E0)

inline static constexpr unsigned int IDIKMJNOPIL_TypeDefinitionIndex = 60059;

class IDIKMJNOPIL : public ::LNODBDPJGFL
{
public:
	::MoleMole::Config::DynamicFloat* JDDELHMABGM; // 0x50
	::System::String* KIHGNGKBADE; // 0x58
	::MoleMole::Config::DynamicFloat* PICDLIMPCLN; // 0x60
	::MoleMole::Config::DynamicInt* IDABGAPHFBO; // 0x68
	::MoleMole::Config::DynamicInt* OENCGAIDOGC; // 0x70
	::MoleMole::Config::DynamicFloat* CBMEKJEBIHG; // 0x78
	::MoleMole::Config::DynamicFloat* IBLOOOKDOAL; // 0x80
	::MoleMole::Config::DynamicFloat* LBAAPKFMGMI; // 0x88
	::System::Boolean IPILLDIHBDF; // 0x90
	::System::Boolean EJPGDHLKLLE; // 0x91
	::System::Boolean AKDILPOGGFH; // 0x92
	::System::Boolean BFALELFGEDH; // 0x93
	::System::Boolean NJDKFKNMKHA; // 0x94
	::System::Boolean LJAPMEGABEP; // 0x95
	::System::Boolean KFCFKBMFFGE; // 0x96
	::System::Boolean MJMGDNLCIDL; // 0x97
	::System::Boolean LIHALOKNIKF; // 0x98
	::System::Boolean DBLFKOBPMDC; // 0x99
	::System::Boolean FABOJJMJMGL; // 0x9A
	::System::Boolean PNNHEHDGDCJ; // 0x9B
	::MoleMole::Config::EnterBattleState OCOJFKMOKMK; // 0x9C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDIKMJNOPIL__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB(::KFHNCJALFJK* GBELIHABEDH, ::LNODBDPJGFL* DPPFJDCEIOO, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + IDIKMJNOPIL_LBHNEFGNNNB_OFFSET))(this, GBELIHABEDH, DPPFJDCEIOO, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + IDIKMJNOPIL_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + IDIKMJNOPIL_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LNODBDPJGFL* DGNAAPGKIPL()
	{
		return ((::LNODBDPJGFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDIKMJNOPIL_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IDIKMJNOPIL_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + IDIKMJNOPIL_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + IDIKMJNOPIL_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::IDIKMJNOPIL* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::IDIKMJNOPIL*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + IDIKMJNOPIL_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + IDIKMJNOPIL_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::IDIKMJNOPIL* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::IDIKMJNOPIL*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + IDIKMJNOPIL_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Void JFLMLBMNFFK(::KFHNCJALFJK* MIALFKCCCPI, ::LNODBDPJGFL* KMGKAIDEIBA, ::JCADHFOKIHK* FDHMCIFPNCK, ::LNFCIBHFJHI* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::MoleMole::Battle::Entity* CEIDLKIHMLC, ::ENGKPGFGGLM* MNPNEHDOOMM)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + IDIKMJNOPIL_JFLMLBMNFFK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC, MNPNEHDOOMM);
	}
};
