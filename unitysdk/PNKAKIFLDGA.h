#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LHHNKBDEMGO.h"
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
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PNKAKIFLDGA_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x1B9F8040)
#define PNKAKIFLDGA_FBLIIDOEHIJ_OFFSET UNITYSDK_OFFSET(0x1B9F8580)
#define PNKAKIFLDGA_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B9F7CB0)
#define PNKAKIFLDGA_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1B9F8150)
#define PNKAKIFLDGA_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x1B9F83D0)
#define PNKAKIFLDGA_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x1B9F8140)
#define PNKAKIFLDGA_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x1B9F8650)
#define PNKAKIFLDGA_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x1B9F7D10)
#define PNKAKIFLDGA_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x1B9F7FB0)
#define PNKAKIFLDGA_MBGCBDBNPFE_OFFSET UNITYSDK_OFFSET(0x1B9F7BB0)
#define PNKAKIFLDGA_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x1B9F81D0)
#define PNKAKIFLDGA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9F83C0)

inline static constexpr unsigned int PNKAKIFLDGA_TypeDefinitionIndex = 72340;

class PNKAKIFLDGA : public ::LHHNKBDEMGO
{
public:
	::System::Collections::Generic::List_1<::System::String*>* KLDMPGPGMFG; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNKAKIFLDGA__CTOR_OFFSET))(this);
	}

	::System::Boolean MBGCBDBNPFE(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + PNKAKIFLDGA_MBGCBDBNPFE_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PNKAKIFLDGA_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + PNKAKIFLDGA_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LHHNKBDEMGO* DGNAAPGKIPL()
	{
		return ((::LHHNKBDEMGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNKAKIFLDGA_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PNKAKIFLDGA_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + PNKAKIFLDGA_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::PNKAKIFLDGA* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::PNKAKIFLDGA*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PNKAKIFLDGA_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean FBLIIDOEHIJ(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK, ::MoleMole::Battle::Entity* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::ENGKPGFGGLM* CEIDLKIHMLC)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + PNKAKIFLDGA_FBLIIDOEHIJ_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PNKAKIFLDGA_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + PNKAKIFLDGA_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::PNKAKIFLDGA* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::PNKAKIFLDGA*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + PNKAKIFLDGA_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}
};
