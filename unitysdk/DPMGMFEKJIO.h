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
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define DPMGMFEKJIO_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x17217FB0)
#define DPMGMFEKJIO_FBLIIDOEHIJ_OFFSET UNITYSDK_OFFSET(0x17218590)
#define DPMGMFEKJIO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17217C80)
#define DPMGMFEKJIO_FROMFLX_OFFSET UNITYSDK_OFFSET(0x172180C0)
#define DPMGMFEKJIO_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x17218660)
#define DPMGMFEKJIO_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x172180B0)
#define DPMGMFEKJIO_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x17218430)
#define DPMGMFEKJIO_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x17217CE0)
#define DPMGMFEKJIO_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x17217F60)
#define DPMGMFEKJIO_MBGCBDBNPFE_OFFSET UNITYSDK_OFFSET(0x17217B50)
#define DPMGMFEKJIO_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x17218140)
#define DPMGMFEKJIO__CTOR_OFFSET UNITYSDK_OFFSET(0x17218420)

inline static constexpr unsigned int DPMGMFEKJIO_TypeDefinitionIndex = 85135;

class DPMGMFEKJIO : public ::LHHNKBDEMGO
{
public:
	::MoleMole::Config::ValueCompareType LLDMOGGEDOD; // 0x40
	::System::Boolean CJGKDAIMJHL; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPMGMFEKJIO__CTOR_OFFSET))(this);
	}

	::System::Boolean MBGCBDBNPFE(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + DPMGMFEKJIO_MBGCBDBNPFE_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + DPMGMFEKJIO_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + DPMGMFEKJIO_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LHHNKBDEMGO* DGNAAPGKIPL()
	{
		return ((::LHHNKBDEMGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPMGMFEKJIO_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DPMGMFEKJIO_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + DPMGMFEKJIO_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::DPMGMFEKJIO* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::DPMGMFEKJIO*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + DPMGMFEKJIO_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + DPMGMFEKJIO_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FBLIIDOEHIJ(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK, ::MoleMole::Battle::Entity* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::ENGKPGFGGLM* CEIDLKIHMLC)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + DPMGMFEKJIO_FBLIIDOEHIJ_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + DPMGMFEKJIO_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::DPMGMFEKJIO* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::DPMGMFEKJIO*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + DPMGMFEKJIO_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
