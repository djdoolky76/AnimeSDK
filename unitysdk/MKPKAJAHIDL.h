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

#define MKPKAJAHIDL_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x17D47E50)
#define MKPKAJAHIDL_FBLIIDOEHIJ_OFFSET UNITYSDK_OFFSET(0x17D481E0)
#define MKPKAJAHIDL_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17D47B80)
#define MKPKAJAHIDL_FROMFLX_OFFSET UNITYSDK_OFFSET(0x17D47F60)
#define MKPKAJAHIDL_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x17D48410)
#define MKPKAJAHIDL_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x17D47F50)
#define MKPKAJAHIDL_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x17D482B0)
#define MKPKAJAHIDL_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x17D47BE0)
#define MKPKAJAHIDL_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x17D47DC0)
#define MKPKAJAHIDL_MBGCBDBNPFE_OFFSET UNITYSDK_OFFSET(0x17D47A80)
#define MKPKAJAHIDL_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x17D47FE0)
#define MKPKAJAHIDL__CTOR_OFFSET UNITYSDK_OFFSET(0x17D481D0)

inline static constexpr unsigned int MKPKAJAHIDL_TypeDefinitionIndex = 68692;

class MKPKAJAHIDL : public ::LHHNKBDEMGO
{
public:
	::MoleMole::Config::DynamicInt* GCOKMKPLLPP; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKPKAJAHIDL__CTOR_OFFSET))(this);
	}

	::System::Boolean MBGCBDBNPFE(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + MKPKAJAHIDL_MBGCBDBNPFE_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MKPKAJAHIDL_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MKPKAJAHIDL_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LHHNKBDEMGO* DGNAAPGKIPL()
	{
		return ((::LHHNKBDEMGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKPKAJAHIDL_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MKPKAJAHIDL_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MKPKAJAHIDL_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MKPKAJAHIDL_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean FBLIIDOEHIJ(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK, ::MoleMole::Battle::Entity* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::ENGKPGFGGLM* CEIDLKIHMLC)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + MKPKAJAHIDL_FBLIIDOEHIJ_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
	}

	static ::MKPKAJAHIDL* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::MKPKAJAHIDL*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MKPKAJAHIDL_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	static ::MKPKAJAHIDL* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::MKPKAJAHIDL*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MKPKAJAHIDL_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MKPKAJAHIDL_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
