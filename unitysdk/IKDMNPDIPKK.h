#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LHHNKBDEMGO.h"
#include "unitysdk/MoleMole/Config/ValueCompareType.h"
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

#define IKDMNPDIPKK_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x13C8CFD0)
#define IKDMNPDIPKK_FBLIIDOEHIJ_OFFSET UNITYSDK_OFFSET(0x13C8D8F0)
#define IKDMNPDIPKK_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x13C8CBF0)
#define IKDMNPDIPKK_FROMFLX_OFFSET UNITYSDK_OFFSET(0x13C8D0E0)
#define IKDMNPDIPKK_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x13C8D740)
#define IKDMNPDIPKK_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x13C8D0D0)
#define IKDMNPDIPKK_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x13C8D5E0)
#define IKDMNPDIPKK_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x13C8CC50)
#define IKDMNPDIPKK_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x13C8CF40)
#define IKDMNPDIPKK_MBGCBDBNPFE_OFFSET UNITYSDK_OFFSET(0x13C8CAF0)
#define IKDMNPDIPKK_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x13C8D160)
#define IKDMNPDIPKK__CTOR_OFFSET UNITYSDK_OFFSET(0x13C8D5D0)

inline static constexpr unsigned int IKDMNPDIPKK_TypeDefinitionIndex = 65083;

class IKDMNPDIPKK : public ::LHHNKBDEMGO
{
public:
	::MoleMole::Config::DynamicFloat* JMLCPADPPNM; // 0x40
	::System::Boolean BMPPPGDAGFG; // 0x48
	::System::Byte _padding0[0x3];
	::MoleMole::Config::ValueCompareType LLDMOGGEDOD; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKDMNPDIPKK__CTOR_OFFSET))(this);
	}

	::System::Boolean MBGCBDBNPFE(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + IKDMNPDIPKK_MBGCBDBNPFE_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + IKDMNPDIPKK_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + IKDMNPDIPKK_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LHHNKBDEMGO* DGNAAPGKIPL()
	{
		return ((::LHHNKBDEMGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKDMNPDIPKK_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IKDMNPDIPKK_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + IKDMNPDIPKK_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + IKDMNPDIPKK_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::IKDMNPDIPKK* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::IKDMNPDIPKK*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + IKDMNPDIPKK_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	static ::IKDMNPDIPKK* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::IKDMNPDIPKK*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + IKDMNPDIPKK_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean FBLIIDOEHIJ(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK, ::MoleMole::Battle::Entity* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::ENGKPGFGGLM* CEIDLKIHMLC)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + IKDMNPDIPKK_FBLIIDOEHIJ_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + IKDMNPDIPKK_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
