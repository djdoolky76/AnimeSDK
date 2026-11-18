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

#define LBJAKLGCEPA_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x1A2E9CE0)
#define LBJAKLGCEPA_FBLIIDOEHIJ_OFFSET UNITYSDK_OFFSET(0x1A2EA220)
#define LBJAKLGCEPA_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1A2E9950)
#define LBJAKLGCEPA_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1A2E9DF0)
#define LBJAKLGCEPA_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x1A2EA070)
#define LBJAKLGCEPA_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x1A2E9DE0)
#define LBJAKLGCEPA_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x1A2EA2F0)
#define LBJAKLGCEPA_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x1A2E99B0)
#define LBJAKLGCEPA_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x1A2E9C50)
#define LBJAKLGCEPA_MBGCBDBNPFE_OFFSET UNITYSDK_OFFSET(0x1A2E9850)
#define LBJAKLGCEPA_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x1A2E9E70)
#define LBJAKLGCEPA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2EA060)

inline static constexpr unsigned int LBJAKLGCEPA_TypeDefinitionIndex = 61624;

class LBJAKLGCEPA : public ::LHHNKBDEMGO
{
public:
	::System::Collections::Generic::List_1<::System::String*>* KLDMPGPGMFG; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBJAKLGCEPA__CTOR_OFFSET))(this);
	}

	::System::Boolean MBGCBDBNPFE(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + LBJAKLGCEPA_MBGCBDBNPFE_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + LBJAKLGCEPA_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + LBJAKLGCEPA_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LHHNKBDEMGO* DGNAAPGKIPL()
	{
		return ((::LHHNKBDEMGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBJAKLGCEPA_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LBJAKLGCEPA_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + LBJAKLGCEPA_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + LBJAKLGCEPA_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::LBJAKLGCEPA* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::LBJAKLGCEPA*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + LBJAKLGCEPA_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean FBLIIDOEHIJ(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK, ::MoleMole::Battle::Entity* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::ENGKPGFGGLM* CEIDLKIHMLC)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + LBJAKLGCEPA_FBLIIDOEHIJ_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + LBJAKLGCEPA_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::LBJAKLGCEPA* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::LBJAKLGCEPA*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + LBJAKLGCEPA_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}
};
