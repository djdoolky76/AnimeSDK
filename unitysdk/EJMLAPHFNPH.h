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

#define EJMLAPHFNPH_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x14AA1280)
#define EJMLAPHFNPH_FBLIIDOEHIJ_OFFSET UNITYSDK_OFFSET(0x14AA1700)
#define EJMLAPHFNPH_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x14AA0F20)
#define EJMLAPHFNPH_FROMFLX_OFFSET UNITYSDK_OFFSET(0x14AA1390)
#define EJMLAPHFNPH_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x14AA1930)
#define EJMLAPHFNPH_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x14AA1380)
#define EJMLAPHFNPH_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x14AA17D0)
#define EJMLAPHFNPH_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x14AA0F80)
#define EJMLAPHFNPH_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x14AA1230)
#define EJMLAPHFNPH_MBGCBDBNPFE_OFFSET UNITYSDK_OFFSET(0x14AA0DF0)
#define EJMLAPHFNPH_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x14AA1410)
#define EJMLAPHFNPH__CTOR_OFFSET UNITYSDK_OFFSET(0x14AA16F0)

inline static constexpr unsigned int EJMLAPHFNPH_TypeDefinitionIndex = 47661;

class EJMLAPHFNPH : public ::LHHNKBDEMGO
{
public:
	::System::Int32 AMCDAOJKFNF; // 0x40
	::MoleMole::Config::ValueCompareType LLDMOGGEDOD; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJMLAPHFNPH__CTOR_OFFSET))(this);
	}

	::System::Boolean MBGCBDBNPFE(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + EJMLAPHFNPH_MBGCBDBNPFE_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + EJMLAPHFNPH_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + EJMLAPHFNPH_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LHHNKBDEMGO* DGNAAPGKIPL()
	{
		return ((::LHHNKBDEMGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJMLAPHFNPH_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EJMLAPHFNPH_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + EJMLAPHFNPH_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FBLIIDOEHIJ(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK, ::MoleMole::Battle::Entity* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::ENGKPGFGGLM* CEIDLKIHMLC)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + EJMLAPHFNPH_FBLIIDOEHIJ_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
	}

	static ::EJMLAPHFNPH* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::EJMLAPHFNPH*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + EJMLAPHFNPH_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	static ::EJMLAPHFNPH* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::EJMLAPHFNPH*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + EJMLAPHFNPH_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + EJMLAPHFNPH_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + EJMLAPHFNPH_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
