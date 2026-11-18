#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LNODBDPJGFL.h"
#include "unitysdk/UnityEngine/Vector3.h"
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
namespace System { template <typename T> class Action_1; }

#define MOGNGKKJIFA_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x11F64660)
#define MOGNGKKJIFA_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x11F63E40)
#define MOGNGKKJIFA_FROMFLX_OFFSET UNITYSDK_OFFSET(0x11F64770)
#define MOGNGKKJIFA_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x11F65D60)
#define MOGNGKKJIFA_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x11F64760)
#define MOGNGKKJIFA_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x11F65F10)
#define MOGNGKKJIFA_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x11F63EA0)
#define MOGNGKKJIFA_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x11F66070)
#define MOGNGKKJIFA_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x11F63D40)
#define MOGNGKKJIFA_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x11F64510)
#define MOGNGKKJIFA_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x11F647F0)
#define MOGNGKKJIFA__CTOR_OFFSET UNITYSDK_OFFSET(0x11F65D50)

inline static constexpr unsigned int MOGNGKKJIFA_TypeDefinitionIndex = 89518;

class MOGNGKKJIFA : public ::LNODBDPJGFL
{
public:
	::MoleMole::Config::DynamicInt* OPJIOANOFLK; // 0x50
	::MoleMole::Config::DynamicString* CHFHFJBNCFI; // 0x58
	::MoleMole::Config::DynamicString* KLGBABDBCCG; // 0x60
	::MoleMole::Config::DynamicFloat* OCCMPIHFNGB; // 0x68
	::BHEKACANAMA* AHDPAGJEIGK; // 0x70
	::MoleMole::Config::DynamicString* KIHGNGKBADE; // 0x78
	::MoleMole::Config::DynamicInt* FNHDDJHKCOO; // 0x80
	::BHEKACANAMA* HDPMBJOFEHA; // 0x88
	::BHEKACANAMA* FOIPJFHEOKC; // 0x90
	::MoleMole::Config::DynamicFloat* NIJHHNAMDDP; // 0x98
	::BHEKACANAMA* HMLCOEENKNC; // 0xA0
	::BHEKACANAMA* MNAFNKEADAP; // 0xA8
	::UnityEngine::Vector3 DCMNNLOAPFM; // 0xB0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOGNGKKJIFA__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB(::KFHNCJALFJK* GBELIHABEDH, ::LNODBDPJGFL* DPPFJDCEIOO, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + MOGNGKKJIFA_LBHNEFGNNNB_OFFSET))(this, GBELIHABEDH, DPPFJDCEIOO, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOGNGKKJIFA_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOGNGKKJIFA_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LNODBDPJGFL* DGNAAPGKIPL()
	{
		return ((::LNODBDPJGFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOGNGKKJIFA_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOGNGKKJIFA_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOGNGKKJIFA_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::MOGNGKKJIFA* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::MOGNGKKJIFA*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOGNGKKJIFA_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOGNGKKJIFA_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::MOGNGKKJIFA* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::MOGNGKKJIFA*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOGNGKKJIFA_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOGNGKKJIFA_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void JFLMLBMNFFK(::KFHNCJALFJK* MIALFKCCCPI, ::LNODBDPJGFL* KMGKAIDEIBA, ::JCADHFOKIHK* FDHMCIFPNCK, ::LNFCIBHFJHI* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::MoleMole::Battle::Entity* CEIDLKIHMLC, ::ENGKPGFGGLM* MNPNEHDOOMM)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + MOGNGKKJIFA_JFLMLBMNFFK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC, MNPNEHDOOMM);
	}
};
