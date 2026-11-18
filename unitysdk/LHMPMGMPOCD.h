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

#define LHMPMGMPOCD_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x15660150)
#define LHMPMGMPOCD_FBLIIDOEHIJ_OFFSET UNITYSDK_OFFSET(0x156607F0)
#define LHMPMGMPOCD_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1565FDC0)
#define LHMPMGMPOCD_FROMFLX_OFFSET UNITYSDK_OFFSET(0x15660260)
#define LHMPMGMPOCD_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x156604E0)
#define LHMPMGMPOCD_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x15660250)
#define LHMPMGMPOCD_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x15660690)
#define LHMPMGMPOCD_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x1565FE20)
#define LHMPMGMPOCD_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x156600C0)
#define LHMPMGMPOCD_MBGCBDBNPFE_OFFSET UNITYSDK_OFFSET(0x1565FCC0)
#define LHMPMGMPOCD_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x156602E0)
#define LHMPMGMPOCD__CTOR_OFFSET UNITYSDK_OFFSET(0x156604D0)

inline static constexpr unsigned int LHMPMGMPOCD_TypeDefinitionIndex = 86318;

class LHMPMGMPOCD : public ::LHHNKBDEMGO
{
public:
	::System::Collections::Generic::List_1<::System::String*>* JLFHADKINEE; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHMPMGMPOCD__CTOR_OFFSET))(this);
	}

	::System::Boolean MBGCBDBNPFE(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + LHMPMGMPOCD_MBGCBDBNPFE_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + LHMPMGMPOCD_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + LHMPMGMPOCD_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LHHNKBDEMGO* DGNAAPGKIPL()
	{
		return ((::LHHNKBDEMGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHMPMGMPOCD_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LHMPMGMPOCD_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + LHMPMGMPOCD_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + LHMPMGMPOCD_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + LHMPMGMPOCD_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::LHMPMGMPOCD* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::LHMPMGMPOCD*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + LHMPMGMPOCD_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::LHMPMGMPOCD* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::LHMPMGMPOCD*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + LHMPMGMPOCD_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean FBLIIDOEHIJ(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK, ::MoleMole::Battle::Entity* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::ENGKPGFGGLM* CEIDLKIHMLC)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + LHMPMGMPOCD_FBLIIDOEHIJ_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
	}
};
