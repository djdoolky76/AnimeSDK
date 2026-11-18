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
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EJMLDNDENJD_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x10641720)
#define EJMLDNDENJD_FBLIIDOEHIJ_OFFSET UNITYSDK_OFFSET(0x10641C10)
#define EJMLDNDENJD_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x10641390)
#define EJMLDNDENJD_FROMFLX_OFFSET UNITYSDK_OFFSET(0x10641830)
#define EJMLDNDENJD_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x10641CE0)
#define EJMLDNDENJD_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x10641820)
#define EJMLDNDENJD_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x10641AB0)
#define EJMLDNDENJD_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x106413F0)
#define EJMLDNDENJD_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x10641690)
#define EJMLDNDENJD_MBGCBDBNPFE_OFFSET UNITYSDK_OFFSET(0x10641290)
#define EJMLDNDENJD_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x106418B0)
#define EJMLDNDENJD__CTOR_OFFSET UNITYSDK_OFFSET(0x10641AA0)

inline static constexpr unsigned int EJMLDNDENJD_TypeDefinitionIndex = 63972;

class EJMLDNDENJD : public ::LHHNKBDEMGO
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* BJOLOBPBNPN; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJMLDNDENJD__CTOR_OFFSET))(this);
	}

	::System::Boolean MBGCBDBNPFE(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + EJMLDNDENJD_MBGCBDBNPFE_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + EJMLDNDENJD_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + EJMLDNDENJD_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LHHNKBDEMGO* DGNAAPGKIPL()
	{
		return ((::LHHNKBDEMGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJMLDNDENJD_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EJMLDNDENJD_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + EJMLDNDENJD_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + EJMLDNDENJD_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + EJMLDNDENJD_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::EJMLDNDENJD* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::EJMLDNDENJD*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + EJMLDNDENJD_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean FBLIIDOEHIJ(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK, ::MoleMole::Battle::Entity* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::ENGKPGFGGLM* CEIDLKIHMLC)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + EJMLDNDENJD_FBLIIDOEHIJ_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
	}

	static ::EJMLDNDENJD* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::EJMLDNDENJD*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + EJMLDNDENJD_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
