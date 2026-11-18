#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LHHNKBDEMGO.h"
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
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define HPALDDNEHLP_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x16D05BA0)
#define HPALDDNEHLP_FBLIIDOEHIJ_OFFSET UNITYSDK_OFFSET(0x16D06DA0)
#define HPALDDNEHLP_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16D05590)
#define HPALDDNEHLP_FROMFLX_OFFSET UNITYSDK_OFFSET(0x16D05CB0)
#define HPALDDNEHLP_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x16D06E70)
#define HPALDDNEHLP_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x16D05CA0)
#define HPALDDNEHLP_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x16D06C40)
#define HPALDDNEHLP_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x16D055F0)
#define HPALDDNEHLP_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x16D05A80)
#define HPALDDNEHLP_MBGCBDBNPFE_OFFSET UNITYSDK_OFFSET(0x16D05490)
#define HPALDDNEHLP_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x16D05D30)
#define HPALDDNEHLP__CTOR_OFFSET UNITYSDK_OFFSET(0x16D06C30)

inline static constexpr unsigned int HPALDDNEHLP_TypeDefinitionIndex = 59167;

class HPALDDNEHLP : public ::LHHNKBDEMGO
{
public:
	::MoleMole::Config::DynamicFloat* JADPALMPGGB; // 0x40
	::MoleMole::Config::DynamicInt* MLEJJHFEAFP; // 0x48
	::MoleMole::Config::DynamicInt* AJMONONIOLI; // 0x50
	::MoleMole::Config::DynamicInt* AINFLEFDINO; // 0x58
	::BHEKACANAMA* PKDEDKLPGEH; // 0x60
	::MoleMole::Config::DynamicFloat* KLJEFBCIFAB; // 0x68
	::System::String* KKOEDKIPHHN; // 0x70
	::BHEKACANAMA* AMGMIMFEAAH; // 0x78
	::System::Boolean EOIKGIKKCDF; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPALDDNEHLP__CTOR_OFFSET))(this);
	}

	::System::Boolean MBGCBDBNPFE(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + HPALDDNEHLP_MBGCBDBNPFE_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + HPALDDNEHLP_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + HPALDDNEHLP_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LHHNKBDEMGO* DGNAAPGKIPL()
	{
		return ((::LHHNKBDEMGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPALDDNEHLP_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HPALDDNEHLP_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + HPALDDNEHLP_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::HPALDDNEHLP* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::HPALDDNEHLP*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + HPALDDNEHLP_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + HPALDDNEHLP_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + HPALDDNEHLP_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FBLIIDOEHIJ(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK, ::MoleMole::Battle::Entity* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::ENGKPGFGGLM* CEIDLKIHMLC)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + HPALDDNEHLP_FBLIIDOEHIJ_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
	}

	static ::HPALDDNEHLP* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::HPALDDNEHLP*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + HPALDDNEHLP_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
