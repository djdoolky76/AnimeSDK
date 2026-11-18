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
namespace MoleMole::Config { class DynamicInt; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define DMDGEGDPPNI_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x19423A50)
#define DMDGEGDPPNI_FBLIIDOEHIJ_OFFSET UNITYSDK_OFFSET(0x194240F0)
#define DMDGEGDPPNI_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19423780)
#define DMDGEGDPPNI_FROMFLX_OFFSET UNITYSDK_OFFSET(0x19423B60)
#define DMDGEGDPPNI_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x19423F40)
#define DMDGEGDPPNI_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x19423B50)
#define DMDGEGDPPNI_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x19423DE0)
#define DMDGEGDPPNI_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x194237E0)
#define DMDGEGDPPNI_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x194239C0)
#define DMDGEGDPPNI_MBGCBDBNPFE_OFFSET UNITYSDK_OFFSET(0x19423680)
#define DMDGEGDPPNI_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x19423BE0)
#define DMDGEGDPPNI__CTOR_OFFSET UNITYSDK_OFFSET(0x19423DD0)

inline static constexpr unsigned int DMDGEGDPPNI_TypeDefinitionIndex = 83345;

class DMDGEGDPPNI : public ::LHHNKBDEMGO
{
public:
	::MoleMole::Config::DynamicInt* BLIFOCHPOCF; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMDGEGDPPNI__CTOR_OFFSET))(this);
	}

	::System::Boolean MBGCBDBNPFE(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + DMDGEGDPPNI_MBGCBDBNPFE_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + DMDGEGDPPNI_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + DMDGEGDPPNI_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LHHNKBDEMGO* DGNAAPGKIPL()
	{
		return ((::LHHNKBDEMGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMDGEGDPPNI_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DMDGEGDPPNI_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + DMDGEGDPPNI_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + DMDGEGDPPNI_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::DMDGEGDPPNI* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::DMDGEGDPPNI*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + DMDGEGDPPNI_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + DMDGEGDPPNI_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::DMDGEGDPPNI* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::DMDGEGDPPNI*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + DMDGEGDPPNI_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean FBLIIDOEHIJ(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK, ::MoleMole::Battle::Entity* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::ENGKPGFGGLM* CEIDLKIHMLC)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + DMDGEGDPPNI_FBLIIDOEHIJ_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
	}
};
