#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LHHNKBDEMGO.h"
#include "unitysdk/MoleMole/Config/BuffGroupName.h"
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

#define AAFJOPNKCCH_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x17C91080)
#define AAFJOPNKCCH_FBLIIDOEHIJ_OFFSET UNITYSDK_OFFSET(0x17C91750)
#define AAFJOPNKCCH_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17C90BC0)
#define AAFJOPNKCCH_FROMFLX_OFFSET UNITYSDK_OFFSET(0x17C91190)
#define AAFJOPNKCCH_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x17C915A0)
#define AAFJOPNKCCH_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x17C91180)
#define AAFJOPNKCCH_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x17C91820)
#define AAFJOPNKCCH_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x17C90C20)
#define AAFJOPNKCCH_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x17C90FE0)
#define AAFJOPNKCCH_MBGCBDBNPFE_OFFSET UNITYSDK_OFFSET(0x17C90AC0)
#define AAFJOPNKCCH_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x17C91210)
#define AAFJOPNKCCH__CTOR_OFFSET UNITYSDK_OFFSET(0x17C91590)

inline static constexpr unsigned int AAFJOPNKCCH_TypeDefinitionIndex = 78034;

class AAFJOPNKCCH : public ::LHHNKBDEMGO
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* BJOLOBPBNPN; // 0x40
	::System::Collections::Generic::List_1<::MoleMole::Config::BuffGroupName>* IBAGKOKNNDC; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAFJOPNKCCH__CTOR_OFFSET))(this);
	}

	::System::Boolean MBGCBDBNPFE(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + AAFJOPNKCCH_MBGCBDBNPFE_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + AAFJOPNKCCH_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + AAFJOPNKCCH_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LHHNKBDEMGO* DGNAAPGKIPL()
	{
		return ((::LHHNKBDEMGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + AAFJOPNKCCH_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AAFJOPNKCCH_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + AAFJOPNKCCH_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + AAFJOPNKCCH_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::AAFJOPNKCCH* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::AAFJOPNKCCH*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + AAFJOPNKCCH_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean FBLIIDOEHIJ(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK, ::MoleMole::Battle::Entity* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::ENGKPGFGGLM* CEIDLKIHMLC)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + AAFJOPNKCCH_FBLIIDOEHIJ_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
	}

	static ::AAFJOPNKCCH* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::AAFJOPNKCCH*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + AAFJOPNKCCH_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + AAFJOPNKCCH_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
