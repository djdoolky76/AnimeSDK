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

#define OPBKAPKJBDL_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x15521750)
#define OPBKAPKJBDL_FBLIIDOEHIJ_OFFSET UNITYSDK_OFFSET(0x15521DF0)
#define OPBKAPKJBDL_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x15521480)
#define OPBKAPKJBDL_FROMFLX_OFFSET UNITYSDK_OFFSET(0x15521860)
#define OPBKAPKJBDL_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x15521C40)
#define OPBKAPKJBDL_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x15521850)
#define OPBKAPKJBDL_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x15521AE0)
#define OPBKAPKJBDL_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x155214E0)
#define OPBKAPKJBDL_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x155216C0)
#define OPBKAPKJBDL_MBGCBDBNPFE_OFFSET UNITYSDK_OFFSET(0x15521380)
#define OPBKAPKJBDL_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x155218E0)
#define OPBKAPKJBDL__CTOR_OFFSET UNITYSDK_OFFSET(0x15521AD0)

inline static constexpr unsigned int OPBKAPKJBDL_TypeDefinitionIndex = 86792;

class OPBKAPKJBDL : public ::LHHNKBDEMGO
{
public:
	::MoleMole::Config::DynamicInt* NLBPOACGCDA; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPBKAPKJBDL__CTOR_OFFSET))(this);
	}

	::System::Boolean MBGCBDBNPFE(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + OPBKAPKJBDL_MBGCBDBNPFE_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + OPBKAPKJBDL_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + OPBKAPKJBDL_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LHHNKBDEMGO* DGNAAPGKIPL()
	{
		return ((::LHHNKBDEMGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + OPBKAPKJBDL_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OPBKAPKJBDL_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + OPBKAPKJBDL_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + OPBKAPKJBDL_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::OPBKAPKJBDL* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::OPBKAPKJBDL*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + OPBKAPKJBDL_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + OPBKAPKJBDL_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::OPBKAPKJBDL* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::OPBKAPKJBDL*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + OPBKAPKJBDL_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean FBLIIDOEHIJ(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK, ::MoleMole::Battle::Entity* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::ENGKPGFGGLM* CEIDLKIHMLC)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + OPBKAPKJBDL_FBLIIDOEHIJ_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
	}
};
