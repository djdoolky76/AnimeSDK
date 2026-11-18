#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LNODBDPJGFL.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class BHEKACANAMA;
class ENGKPGFGGLM;
class FKNIEPCILLG;
class JCADHFOKIHK;
class KFHNCJALFJK;
class LNFCIBHFJHI;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigPosRot; }
namespace MoleMole::Config { class DynamicFloat; }
namespace MoleMole::Config { class DynamicInt; }
namespace MoleMole::Config { class DynamicString; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define ODHFENMHBPG_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x16BFDAC0)
#define ODHFENMHBPG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16BFD3A0)
#define ODHFENMHBPG_FROMFLX_OFFSET UNITYSDK_OFFSET(0x16BFDBD0)
#define ODHFENMHBPG_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x16BFECE0)
#define ODHFENMHBPG_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x16BFDBC0)
#define ODHFENMHBPG_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x16BFEE90)
#define ODHFENMHBPG_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x16BFD400)
#define ODHFENMHBPG_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x16BFEFF0)
#define ODHFENMHBPG_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x16BFD2A0)
#define ODHFENMHBPG_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x16BFD9B0)
#define ODHFENMHBPG_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x16BFDC50)
#define ODHFENMHBPG__CTOR_OFFSET UNITYSDK_OFFSET(0x16BFECD0)

inline static constexpr unsigned int ODHFENMHBPG_TypeDefinitionIndex = 55224;

class ODHFENMHBPG : public ::LNODBDPJGFL
{
public:
	::MoleMole::Config::DynamicInt* BNKHCNKJKFO; // 0x50
	::MoleMole::Config::DynamicString* EBLKBABPBEB; // 0x58
	::BHEKACANAMA* JGOMDFPDMBE; // 0x60
	::BHEKACANAMA* MBBHNLFPFDF; // 0x68
	::BHEKACANAMA* MGLMOKOKKBL; // 0x70
	::BHEKACANAMA* DIPNEBLNBND; // 0x78
	::MoleMole::Config::DynamicFloat* EPJAKJNHFCH; // 0x80
	::BHEKACANAMA* JDDLBCDFDJO; // 0x88
	::MoleMole::Config::ConfigPosRot* KPAPPDGCNPE; // 0x90

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODHFENMHBPG__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB(::KFHNCJALFJK* GBELIHABEDH, ::LNODBDPJGFL* DPPFJDCEIOO, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + ODHFENMHBPG_LBHNEFGNNNB_OFFSET))(this, GBELIHABEDH, DPPFJDCEIOO, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + ODHFENMHBPG_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + ODHFENMHBPG_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LNODBDPJGFL* DGNAAPGKIPL()
	{
		return ((::LNODBDPJGFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + ODHFENMHBPG_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ODHFENMHBPG_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + ODHFENMHBPG_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::ODHFENMHBPG* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::ODHFENMHBPG*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + ODHFENMHBPG_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + ODHFENMHBPG_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::ODHFENMHBPG* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::ODHFENMHBPG*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + ODHFENMHBPG_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Void JFLMLBMNFFK(::KFHNCJALFJK* MIALFKCCCPI, ::LNODBDPJGFL* KMGKAIDEIBA, ::JCADHFOKIHK* FDHMCIFPNCK, ::LNFCIBHFJHI* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::MoleMole::Battle::Entity* CEIDLKIHMLC, ::ENGKPGFGGLM* MNPNEHDOOMM)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + ODHFENMHBPG_JFLMLBMNFFK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC, MNPNEHDOOMM);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + ODHFENMHBPG_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
