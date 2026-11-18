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
namespace MoleMole::Config { class DynamicString; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define KPKJKCNCNLE_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x16353120)
#define KPKJKCNCNLE_FBLIIDOEHIJ_OFFSET UNITYSDK_OFFSET(0x16353610)
#define KPKJKCNCNLE_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16352E50)
#define KPKJKCNCNLE_FROMFLX_OFFSET UNITYSDK_OFFSET(0x16353230)
#define KPKJKCNCNLE_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x163536E0)
#define KPKJKCNCNLE_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x16353220)
#define KPKJKCNCNLE_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x163534B0)
#define KPKJKCNCNLE_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x16352EB0)
#define KPKJKCNCNLE_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x16353090)
#define KPKJKCNCNLE_MBGCBDBNPFE_OFFSET UNITYSDK_OFFSET(0x16352D60)
#define KPKJKCNCNLE_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x163532B0)
#define KPKJKCNCNLE__CTOR_OFFSET UNITYSDK_OFFSET(0x163534A0)

inline static constexpr unsigned int KPKJKCNCNLE_TypeDefinitionIndex = 83216;

class KPKJKCNCNLE : public ::LHHNKBDEMGO
{
public:
	::MoleMole::Config::DynamicString* IPJHFCPGNLC; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPKJKCNCNLE__CTOR_OFFSET))(this);
	}

	::System::Boolean MBGCBDBNPFE(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + KPKJKCNCNLE_MBGCBDBNPFE_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + KPKJKCNCNLE_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + KPKJKCNCNLE_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LHHNKBDEMGO* DGNAAPGKIPL()
	{
		return ((::LHHNKBDEMGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPKJKCNCNLE_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KPKJKCNCNLE_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + KPKJKCNCNLE_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::KPKJKCNCNLE* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::KPKJKCNCNLE*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + KPKJKCNCNLE_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean FBLIIDOEHIJ(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK, ::MoleMole::Battle::Entity* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::ENGKPGFGGLM* CEIDLKIHMLC)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + KPKJKCNCNLE_FBLIIDOEHIJ_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + KPKJKCNCNLE_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::KPKJKCNCNLE* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::KPKJKCNCNLE*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + KPKJKCNCNLE_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + KPKJKCNCNLE_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
