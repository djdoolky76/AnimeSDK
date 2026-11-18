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

#define KGAKIGNINMH_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x1515CDB0)
#define KGAKIGNINMH_FBLIIDOEHIJ_OFFSET UNITYSDK_OFFSET(0x1515D450)
#define KGAKIGNINMH_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1515CAE0)
#define KGAKIGNINMH_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1515CEC0)
#define KGAKIGNINMH_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x1515D2A0)
#define KGAKIGNINMH_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x1515CEB0)
#define KGAKIGNINMH_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x1515D140)
#define KGAKIGNINMH_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x1515CB40)
#define KGAKIGNINMH_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x1515CD20)
#define KGAKIGNINMH_MBGCBDBNPFE_OFFSET UNITYSDK_OFFSET(0x1515C9E0)
#define KGAKIGNINMH_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x1515CF40)
#define KGAKIGNINMH__CTOR_OFFSET UNITYSDK_OFFSET(0x1515D130)

inline static constexpr unsigned int KGAKIGNINMH_TypeDefinitionIndex = 88711;

class KGAKIGNINMH : public ::LHHNKBDEMGO
{
public:
	::MoleMole::Config::DynamicInt* MBNJLLBDIHA; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGAKIGNINMH__CTOR_OFFSET))(this);
	}

	::System::Boolean MBGCBDBNPFE(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + KGAKIGNINMH_MBGCBDBNPFE_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + KGAKIGNINMH_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + KGAKIGNINMH_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LHHNKBDEMGO* DGNAAPGKIPL()
	{
		return ((::LHHNKBDEMGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGAKIGNINMH_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KGAKIGNINMH_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + KGAKIGNINMH_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + KGAKIGNINMH_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::KGAKIGNINMH* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::KGAKIGNINMH*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + KGAKIGNINMH_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + KGAKIGNINMH_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::KGAKIGNINMH* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::KGAKIGNINMH*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + KGAKIGNINMH_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean FBLIIDOEHIJ(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK, ::MoleMole::Battle::Entity* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::ENGKPGFGGLM* CEIDLKIHMLC)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + KGAKIGNINMH_FBLIIDOEHIJ_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
	}
};
