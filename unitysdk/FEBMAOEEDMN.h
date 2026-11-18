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
namespace MoleMole::Config { class DynamicFloat; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define FEBMAOEEDMN_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x140EB660)
#define FEBMAOEEDMN_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x140EB290)
#define FEBMAOEEDMN_FROMFLX_OFFSET UNITYSDK_OFFSET(0x140EB770)
#define FEBMAOEEDMN_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x140EBF80)
#define FEBMAOEEDMN_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x140EB760)
#define FEBMAOEEDMN_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x140EBE20)
#define FEBMAOEEDMN_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x140EB2F0)
#define FEBMAOEEDMN_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x140EC130)
#define FEBMAOEEDMN_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x140EB180)
#define FEBMAOEEDMN_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x140EB5E0)
#define FEBMAOEEDMN_NHAADOCOPBN_OFFSET UNITYSDK_OFFSET(0x140EB280)
#define FEBMAOEEDMN_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x140EB7F0)
#define FEBMAOEEDMN__CTOR_OFFSET UNITYSDK_OFFSET(0x140EBE10)

inline static constexpr unsigned int FEBMAOEEDMN_TypeDefinitionIndex = 86514;

class FEBMAOEEDMN : public ::LNODBDPJGFL
{
public:
	::System::String* NLMDCHJBIJD; // 0x50
	::MoleMole::Config::DynamicFloat* HBOJLFKAOOH; // 0x58
	::MoleMole::Config::DynamicFloat* PMLOGFLOLNJ; // 0x60
	::MoleMole::Config::AbilityTargetting BHMLIFIKCEL; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEBMAOEEDMN__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB(::KFHNCJALFJK* GBELIHABEDH, ::LNODBDPJGFL* DPPFJDCEIOO, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + FEBMAOEEDMN_LBHNEFGNNNB_OFFSET))(this, GBELIHABEDH, DPPFJDCEIOO, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::NDDGJMFPAKF NHAADOCOPBN()
	{
		return ((::NDDGJMFPAKF(*)(::PVOID))((::PBYTE)hIl2Cpp + FEBMAOEEDMN_NHAADOCOPBN_OFFSET))(this);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + FEBMAOEEDMN_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + FEBMAOEEDMN_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LNODBDPJGFL* DGNAAPGKIPL()
	{
		return ((::LNODBDPJGFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + FEBMAOEEDMN_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FEBMAOEEDMN_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + FEBMAOEEDMN_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + FEBMAOEEDMN_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::FEBMAOEEDMN* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::FEBMAOEEDMN*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + FEBMAOEEDMN_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + FEBMAOEEDMN_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::FEBMAOEEDMN* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::FEBMAOEEDMN*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + FEBMAOEEDMN_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void JFLMLBMNFFK(::KFHNCJALFJK* MIALFKCCCPI, ::LNODBDPJGFL* KMGKAIDEIBA, ::JCADHFOKIHK* FDHMCIFPNCK, ::LNFCIBHFJHI* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::MoleMole::Battle::Entity* CEIDLKIHMLC, ::ENGKPGFGGLM* MNPNEHDOOMM)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + FEBMAOEEDMN_JFLMLBMNFFK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC, MNPNEHDOOMM);
	}
};
