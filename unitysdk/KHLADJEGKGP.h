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
namespace MoleMole::Config { class DynamicInt; }
namespace MoleMole::Config { class DynamicString; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define KHLADJEGKGP_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x157EC970)
#define KHLADJEGKGP_FBLIIDOEHIJ_OFFSET UNITYSDK_OFFSET(0x157ED110)
#define KHLADJEGKGP_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x157EC5E0)
#define KHLADJEGKGP_FROMFLX_OFFSET UNITYSDK_OFFSET(0x157ECA80)
#define KHLADJEGKGP_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x157ED1E0)
#define KHLADJEGKGP_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x157ECA70)
#define KHLADJEGKGP_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x157ECFB0)
#define KHLADJEGKGP_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x157EC640)
#define KHLADJEGKGP_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x157EC8D0)
#define KHLADJEGKGP_MBGCBDBNPFE_OFFSET UNITYSDK_OFFSET(0x157EC4E0)
#define KHLADJEGKGP_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x157ECB00)
#define KHLADJEGKGP__CTOR_OFFSET UNITYSDK_OFFSET(0x157ECFA0)

inline static constexpr unsigned int KHLADJEGKGP_TypeDefinitionIndex = 44049;

class KHLADJEGKGP : public ::LHHNKBDEMGO
{
public:
	::MoleMole::Config::DynamicInt* OAKNODKILCN; // 0x40
	::MoleMole::Config::DynamicString* CAKEOMODDCA; // 0x48
	::MoleMole::Config::ValueCompareType LLDMOGGEDOD; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHLADJEGKGP__CTOR_OFFSET))(this);
	}

	::System::Boolean MBGCBDBNPFE(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + KHLADJEGKGP_MBGCBDBNPFE_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + KHLADJEGKGP_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + KHLADJEGKGP_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LHHNKBDEMGO* DGNAAPGKIPL()
	{
		return ((::LHHNKBDEMGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHLADJEGKGP_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KHLADJEGKGP_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + KHLADJEGKGP_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::KHLADJEGKGP* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::KHLADJEGKGP*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + KHLADJEGKGP_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean FBLIIDOEHIJ(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK, ::MoleMole::Battle::Entity* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::ENGKPGFGGLM* CEIDLKIHMLC)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + KHLADJEGKGP_FBLIIDOEHIJ_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
	}

	static ::KHLADJEGKGP* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::KHLADJEGKGP*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + KHLADJEGKGP_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + KHLADJEGKGP_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + KHLADJEGKGP_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
