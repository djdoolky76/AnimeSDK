#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LHHNKBDEMGO.h"
#include "unitysdk/MoleMole/Config/ValueCompareType.h"
#include "unitysdk/POOKDOMDEGK.h"
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
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CNLHLPKKLJN_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x1971BA20)
#define CNLHLPKKLJN_FBLIIDOEHIJ_OFFSET UNITYSDK_OFFSET(0x1971C190)
#define CNLHLPKKLJN_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1971B660)
#define CNLHLPKKLJN_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1971BB30)
#define CNLHLPKKLJN_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x1971C260)
#define CNLHLPKKLJN_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x1971BB20)
#define CNLHLPKKLJN_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x1971C410)
#define CNLHLPKKLJN_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x1971B6C0)
#define CNLHLPKKLJN_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x1971B980)
#define CNLHLPKKLJN_MBGCBDBNPFE_OFFSET UNITYSDK_OFFSET(0x1971B560)
#define CNLHLPKKLJN_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x1971BBB0)
#define CNLHLPKKLJN__CTOR_OFFSET UNITYSDK_OFFSET(0x1971C180)

inline static constexpr unsigned int CNLHLPKKLJN_TypeDefinitionIndex = 70839;

class CNLHLPKKLJN : public ::LHHNKBDEMGO
{
public:
	::MoleMole::Config::DynamicFloat* NAFHEFNJHIK; // 0x40
	::System::String* AMHODJLPFGE; // 0x48
	::POOKDOMDEGK BIFGGGKJEIO; // 0x50
	::MoleMole::Config::ValueCompareType LLDMOGGEDOD; // 0x54

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNLHLPKKLJN__CTOR_OFFSET))(this);
	}

	::System::Boolean MBGCBDBNPFE(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + CNLHLPKKLJN_MBGCBDBNPFE_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + CNLHLPKKLJN_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CNLHLPKKLJN_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LHHNKBDEMGO* DGNAAPGKIPL()
	{
		return ((::LHHNKBDEMGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + CNLHLPKKLJN_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CNLHLPKKLJN_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CNLHLPKKLJN_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FBLIIDOEHIJ(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK, ::MoleMole::Battle::Entity* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::ENGKPGFGGLM* CEIDLKIHMLC)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + CNLHLPKKLJN_FBLIIDOEHIJ_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + CNLHLPKKLJN_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CNLHLPKKLJN_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::CNLHLPKKLJN* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::CNLHLPKKLJN*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + CNLHLPKKLJN_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::CNLHLPKKLJN* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::CNLHLPKKLJN*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CNLHLPKKLJN_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}
};
