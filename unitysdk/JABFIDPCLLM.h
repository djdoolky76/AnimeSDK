#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LHHNKBDEMGO.h"
#include "unitysdk/MoleMole/Config/CharacterAnimatorStateType.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class ENGKPGFGGLM;
class FKNIEPCILLG;
class JCADHFOKIHK;
class KFHNCJALFJK;
class LNFCIBHFJHI;
namespace MoleMole::Battle { class Entity; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define JABFIDPCLLM_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x13CA37C0)
#define JABFIDPCLLM_FBLIIDOEHIJ_OFFSET UNITYSDK_OFFSET(0x13CA3C40)
#define JABFIDPCLLM_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x13CA3490)
#define JABFIDPCLLM_FROMFLX_OFFSET UNITYSDK_OFFSET(0x13CA38D0)
#define JABFIDPCLLM_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x13CA3E70)
#define JABFIDPCLLM_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x13CA38C0)
#define JABFIDPCLLM_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x13CA3D10)
#define JABFIDPCLLM_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x13CA34F0)
#define JABFIDPCLLM_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x13CA3770)
#define JABFIDPCLLM_MBGCBDBNPFE_OFFSET UNITYSDK_OFFSET(0x13CA3390)
#define JABFIDPCLLM_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x13CA3950)
#define JABFIDPCLLM__CTOR_OFFSET UNITYSDK_OFFSET(0x13CA3C30)

inline static constexpr unsigned int JABFIDPCLLM_TypeDefinitionIndex = 61793;

class JABFIDPCLLM : public ::LHHNKBDEMGO
{
public:
	::MoleMole::Config::CharacterAnimatorStateType KDHDBEJDFOA; // 0x40
	::System::Boolean GJIOHFGAOBB; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JABFIDPCLLM__CTOR_OFFSET))(this);
	}

	::System::Boolean MBGCBDBNPFE(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + JABFIDPCLLM_MBGCBDBNPFE_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + JABFIDPCLLM_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + JABFIDPCLLM_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LHHNKBDEMGO* DGNAAPGKIPL()
	{
		return ((::LHHNKBDEMGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + JABFIDPCLLM_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JABFIDPCLLM_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + JABFIDPCLLM_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + JABFIDPCLLM_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean FBLIIDOEHIJ(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK, ::MoleMole::Battle::Entity* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::ENGKPGFGGLM* CEIDLKIHMLC)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + JABFIDPCLLM_FBLIIDOEHIJ_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + JABFIDPCLLM_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::JABFIDPCLLM* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::JABFIDPCLLM*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + JABFIDPCLLM_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	static ::JABFIDPCLLM* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::JABFIDPCLLM*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + JABFIDPCLLM_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
