#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LHHNKBDEMGO.h"
#include "unitysdk/MoleMole/Config/DamageElementType.h"
#include "unitysdk/MoleMole/Config/EVariantElement.h"
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

#define AIFNACHEPJI_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x17DD93B0)
#define AIFNACHEPJI_FBLIIDOEHIJ_OFFSET UNITYSDK_OFFSET(0x17DD9C70)
#define AIFNACHEPJI_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17DD9040)
#define AIFNACHEPJI_FROMFLX_OFFSET UNITYSDK_OFFSET(0x17DD94C0)
#define AIFNACHEPJI_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x17DD9AC0)
#define AIFNACHEPJI_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x17DD94B0)
#define AIFNACHEPJI_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x17DD9960)
#define AIFNACHEPJI_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x17DD90A0)
#define AIFNACHEPJI_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x17DD9360)
#define AIFNACHEPJI_MBGCBDBNPFE_OFFSET UNITYSDK_OFFSET(0x17DD8F40)
#define AIFNACHEPJI_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x17DD9540)
#define AIFNACHEPJI__CTOR_OFFSET UNITYSDK_OFFSET(0x17DD9950)

inline static constexpr unsigned int AIFNACHEPJI_TypeDefinitionIndex = 63610;

class AIFNACHEPJI : public ::LHHNKBDEMGO
{
public:
	::MoleMole::Config::EVariantElement KNCJBOIAAPF; // 0x40
	::System::Boolean NHGBLKHMBCA; // 0x44
	::System::Byte _padding0[0x3];
	::MoleMole::Config::DamageElementType JLEKIOBFKMP; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIFNACHEPJI__CTOR_OFFSET))(this);
	}

	::System::Boolean MBGCBDBNPFE(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + AIFNACHEPJI_MBGCBDBNPFE_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + AIFNACHEPJI_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + AIFNACHEPJI_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LHHNKBDEMGO* DGNAAPGKIPL()
	{
		return ((::LHHNKBDEMGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIFNACHEPJI_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AIFNACHEPJI_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + AIFNACHEPJI_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + AIFNACHEPJI_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + AIFNACHEPJI_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::AIFNACHEPJI* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::AIFNACHEPJI*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + AIFNACHEPJI_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	static ::AIFNACHEPJI* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::AIFNACHEPJI*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + AIFNACHEPJI_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean FBLIIDOEHIJ(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK, ::MoleMole::Battle::Entity* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::ENGKPGFGGLM* CEIDLKIHMLC)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + AIFNACHEPJI_FBLIIDOEHIJ_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
	}
};
