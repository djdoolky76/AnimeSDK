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
namespace MoleMole::Config { class DynamicInt; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define BLFAOIEOJLC_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x18578D00)
#define BLFAOIEOJLC_FBLIIDOEHIJ_OFFSET UNITYSDK_OFFSET(0x185793E0)
#define BLFAOIEOJLC_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18578A60)
#define BLFAOIEOJLC_FROMFLX_OFFSET UNITYSDK_OFFSET(0x18578E10)
#define BLFAOIEOJLC_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x185790D0)
#define BLFAOIEOJLC_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x18578E00)
#define BLFAOIEOJLC_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x18579280)
#define BLFAOIEOJLC_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x18578AC0)
#define BLFAOIEOJLC_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x18578C70)
#define BLFAOIEOJLC_MBGCBDBNPFE_OFFSET UNITYSDK_OFFSET(0x18578960)
#define BLFAOIEOJLC_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x18578E90)
#define BLFAOIEOJLC__CTOR_OFFSET UNITYSDK_OFFSET(0x18579060)

inline static constexpr unsigned int BLFAOIEOJLC_TypeDefinitionIndex = 72089;

class BLFAOIEOJLC : public ::LHHNKBDEMGO
{
public:
	::MoleMole::Config::DynamicInt* ALJPLFHJGNH; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLFAOIEOJLC__CTOR_OFFSET))(this);
	}

	::System::Boolean MBGCBDBNPFE(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + BLFAOIEOJLC_MBGCBDBNPFE_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + BLFAOIEOJLC_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + BLFAOIEOJLC_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LHHNKBDEMGO* DGNAAPGKIPL()
	{
		return ((::LHHNKBDEMGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLFAOIEOJLC_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BLFAOIEOJLC_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + BLFAOIEOJLC_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + BLFAOIEOJLC_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::BLFAOIEOJLC* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::BLFAOIEOJLC*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + BLFAOIEOJLC_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + BLFAOIEOJLC_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::BLFAOIEOJLC* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::BLFAOIEOJLC*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + BLFAOIEOJLC_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean FBLIIDOEHIJ(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK, ::MoleMole::Battle::Entity* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::ENGKPGFGGLM* CEIDLKIHMLC)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + BLFAOIEOJLC_FBLIIDOEHIJ_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
	}
};
