#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LHHNKBDEMGO.h"
#include "unitysdk/MoleMole/Config/AbilityTargetting.h"
#include "unitysdk/MoleMole/Config/ValueCompareType.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class ENGKPGFGGLM;
class FKNIEPCILLG;
class JCADHFOKIHK;
class KFHNCJALFJK;
class LNFCIBHFJHI;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigPosRot; }
namespace MoleMole::Config { class DynamicFloat; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define PIELHBKGIHB_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x1555D020)
#define PIELHBKGIHB_FBLIIDOEHIJ_OFFSET UNITYSDK_OFFSET(0x1555DE10)
#define PIELHBKGIHB_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1555C9A0)
#define PIELHBKGIHB_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1555D130)
#define PIELHBKGIHB_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x1555DEE0)
#define PIELHBKGIHB_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x1555D120)
#define PIELHBKGIHB_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x1555DCB0)
#define PIELHBKGIHB_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x1555CA00)
#define PIELHBKGIHB_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x1555CF50)
#define PIELHBKGIHB_MBGCBDBNPFE_OFFSET UNITYSDK_OFFSET(0x1555C8B0)
#define PIELHBKGIHB_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x1555D1B0)
#define PIELHBKGIHB__CTOR_OFFSET UNITYSDK_OFFSET(0x1555DCA0)

inline static constexpr unsigned int PIELHBKGIHB_TypeDefinitionIndex = 65030;

class PIELHBKGIHB : public ::LHHNKBDEMGO
{
public:
	::System::String* EPBHCNOJCBD; // 0x40
	::MoleMole::Config::ConfigPosRot* GKINLPJPGKO; // 0x48
	::MoleMole::Config::DynamicFloat* PFPNPKNBNFI; // 0x50
	::MoleMole::Config::ConfigPosRot* DGNBELEIBKC; // 0x58
	::MoleMole::Config::AbilityTargetting ACCKNFEIBOO; // 0x60
	::MoleMole::Config::ValueCompareType LLDMOGGEDOD; // 0x64

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIELHBKGIHB__CTOR_OFFSET))(this);
	}

	::System::Boolean MBGCBDBNPFE(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + PIELHBKGIHB_MBGCBDBNPFE_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PIELHBKGIHB_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + PIELHBKGIHB_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LHHNKBDEMGO* DGNAAPGKIPL()
	{
		return ((::LHHNKBDEMGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIELHBKGIHB_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIELHBKGIHB_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + PIELHBKGIHB_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::PIELHBKGIHB* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::PIELHBKGIHB*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + PIELHBKGIHB_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PIELHBKGIHB_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + PIELHBKGIHB_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FBLIIDOEHIJ(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK, ::MoleMole::Battle::Entity* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::ENGKPGFGGLM* CEIDLKIHMLC)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + PIELHBKGIHB_FBLIIDOEHIJ_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
	}

	static ::PIELHBKGIHB* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::PIELHBKGIHB*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PIELHBKGIHB_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
