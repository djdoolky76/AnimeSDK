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
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EHBBKFNGKMH_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0xFE0B200)
#define EHBBKFNGKMH_FBLIIDOEHIJ_OFFSET UNITYSDK_OFFSET(0xFE0B590)
#define EHBBKFNGKMH_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xFE0AE70)
#define EHBBKFNGKMH_FROMFLX_OFFSET UNITYSDK_OFFSET(0xFE0B310)
#define EHBBKFNGKMH_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0xFE0B660)
#define EHBBKFNGKMH_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0xFE0B300)
#define EHBBKFNGKMH_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0xFE0B810)
#define EHBBKFNGKMH_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0xFE0AED0)
#define EHBBKFNGKMH_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0xFE0B170)
#define EHBBKFNGKMH_MBGCBDBNPFE_OFFSET UNITYSDK_OFFSET(0xFE0AD70)
#define EHBBKFNGKMH_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0xFE0B390)
#define EHBBKFNGKMH__CTOR_OFFSET UNITYSDK_OFFSET(0xFE0B580)

inline static constexpr unsigned int EHBBKFNGKMH_TypeDefinitionIndex = 53560;

class EHBBKFNGKMH : public ::LHHNKBDEMGO
{
public:
	::System::Collections::Generic::List_1<::System::String*>* JLFHADKINEE; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHBBKFNGKMH__CTOR_OFFSET))(this);
	}

	::System::Boolean MBGCBDBNPFE(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + EHBBKFNGKMH_MBGCBDBNPFE_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + EHBBKFNGKMH_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + EHBBKFNGKMH_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LHHNKBDEMGO* DGNAAPGKIPL()
	{
		return ((::LHHNKBDEMGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHBBKFNGKMH_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EHBBKFNGKMH_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + EHBBKFNGKMH_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FBLIIDOEHIJ(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK, ::MoleMole::Battle::Entity* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::ENGKPGFGGLM* CEIDLKIHMLC)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + EHBBKFNGKMH_FBLIIDOEHIJ_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + EHBBKFNGKMH_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::EHBBKFNGKMH* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::EHBBKFNGKMH*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + EHBBKFNGKMH_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + EHBBKFNGKMH_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::EHBBKFNGKMH* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::EHBBKFNGKMH*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + EHBBKFNGKMH_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}
};
