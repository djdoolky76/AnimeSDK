#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LHHNKBDEMGO.h"
#include "unitysdk/MoleMole/Config/EntityType.h"
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

#define NDMGKCOEGBF_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x105AE590)
#define NDMGKCOEGBF_FBLIIDOEHIJ_OFFSET UNITYSDK_OFFSET(0x105AEA50)
#define NDMGKCOEGBF_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x105AE280)
#define NDMGKCOEGBF_FROMFLX_OFFSET UNITYSDK_OFFSET(0x105AE6A0)
#define NDMGKCOEGBF_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x105AEC80)
#define NDMGKCOEGBF_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x105AE690)
#define NDMGKCOEGBF_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x105AEB20)
#define NDMGKCOEGBF_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x105AE2E0)
#define NDMGKCOEGBF_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x105AE500)
#define NDMGKCOEGBF_MBGCBDBNPFE_OFFSET UNITYSDK_OFFSET(0x105AE180)
#define NDMGKCOEGBF_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x105AE720)
#define NDMGKCOEGBF__CTOR_OFFSET UNITYSDK_OFFSET(0x105AEA40)

inline static constexpr unsigned int NDMGKCOEGBF_TypeDefinitionIndex = 68752;

class NDMGKCOEGBF : public ::LHHNKBDEMGO
{
public:
	::MoleMole::Config::DynamicInt* ANNAENDJPBH; // 0x40
	::MoleMole::Config::EntityType JAICKFPPOEO; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDMGKCOEGBF__CTOR_OFFSET))(this);
	}

	::System::Boolean MBGCBDBNPFE(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + NDMGKCOEGBF_MBGCBDBNPFE_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + NDMGKCOEGBF_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + NDMGKCOEGBF_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LHHNKBDEMGO* DGNAAPGKIPL()
	{
		return ((::LHHNKBDEMGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDMGKCOEGBF_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NDMGKCOEGBF_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + NDMGKCOEGBF_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FBLIIDOEHIJ(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK, ::MoleMole::Battle::Entity* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::ENGKPGFGGLM* CEIDLKIHMLC)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + NDMGKCOEGBF_FBLIIDOEHIJ_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + NDMGKCOEGBF_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + NDMGKCOEGBF_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::NDMGKCOEGBF* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::NDMGKCOEGBF*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + NDMGKCOEGBF_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	static ::NDMGKCOEGBF* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::NDMGKCOEGBF*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + NDMGKCOEGBF_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
