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
namespace MoleMole::Config { class DynamicFloat; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define LIPPAOELCJB_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x16852AA0)
#define LIPPAOELCJB_FBLIIDOEHIJ_OFFSET UNITYSDK_OFFSET(0x16853180)
#define LIPPAOELCJB_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16852800)
#define LIPPAOELCJB_FROMFLX_OFFSET UNITYSDK_OFFSET(0x16852BB0)
#define LIPPAOELCJB_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x16852FD0)
#define LIPPAOELCJB_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x16852BA0)
#define LIPPAOELCJB_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x16852E70)
#define LIPPAOELCJB_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x16852860)
#define LIPPAOELCJB_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x16852A10)
#define LIPPAOELCJB_MBGCBDBNPFE_OFFSET UNITYSDK_OFFSET(0x16852700)
#define LIPPAOELCJB_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x16852C30)
#define LIPPAOELCJB__CTOR_OFFSET UNITYSDK_OFFSET(0x16852E00)

inline static constexpr unsigned int LIPPAOELCJB_TypeDefinitionIndex = 46748;

class LIPPAOELCJB : public ::LHHNKBDEMGO
{
public:
	::MoleMole::Config::DynamicFloat* NLLKOICDPNM; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIPPAOELCJB__CTOR_OFFSET))(this);
	}

	::System::Boolean MBGCBDBNPFE(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + LIPPAOELCJB_MBGCBDBNPFE_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + LIPPAOELCJB_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + LIPPAOELCJB_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LHHNKBDEMGO* DGNAAPGKIPL()
	{
		return ((::LHHNKBDEMGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + LIPPAOELCJB_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LIPPAOELCJB_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + LIPPAOELCJB_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::LIPPAOELCJB* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::LIPPAOELCJB*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + LIPPAOELCJB_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	static ::LIPPAOELCJB* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::LIPPAOELCJB*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + LIPPAOELCJB_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + LIPPAOELCJB_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean FBLIIDOEHIJ(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK, ::MoleMole::Battle::Entity* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::ENGKPGFGGLM* CEIDLKIHMLC)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + LIPPAOELCJB_FBLIIDOEHIJ_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + LIPPAOELCJB_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
