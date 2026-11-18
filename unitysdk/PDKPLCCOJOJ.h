#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HLCMFOODODN.h"
#include "unitysdk/LHHNKBDEMGO.h"
#include "unitysdk/UnityEngine/Vector3.h"
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
namespace System { template <typename T> class Action_1; }

#define PDKPLCCOJOJ_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x14B94980)
#define PDKPLCCOJOJ_FBLIIDOEHIJ_OFFSET UNITYSDK_OFFSET(0x14B95D50)
#define PDKPLCCOJOJ_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x14B94360)
#define PDKPLCCOJOJ_FROMFLX_OFFSET UNITYSDK_OFFSET(0x14B94A90)
#define PDKPLCCOJOJ_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x14B95BA0)
#define PDKPLCCOJOJ_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x14B94A80)
#define PDKPLCCOJOJ_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x14B95E20)
#define PDKPLCCOJOJ_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x14B943C0)
#define PDKPLCCOJOJ_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x14B94870)
#define PDKPLCCOJOJ_MBGCBDBNPFE_OFFSET UNITYSDK_OFFSET(0x14B94270)
#define PDKPLCCOJOJ_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x14B94B10)
#define PDKPLCCOJOJ__CTOR_OFFSET UNITYSDK_OFFSET(0x14B95B90)

inline static constexpr unsigned int PDKPLCCOJOJ_TypeDefinitionIndex = 83646;

class PDKPLCCOJOJ : public ::LHHNKBDEMGO
{
public:
	::MoleMole::Config::DynamicFloat* DNLANPMKPBM; // 0x40
	::MoleMole::Config::DynamicFloat* MEDIBAAHGCL; // 0x48
	::MoleMole::Config::DynamicFloat* PJJHJFOJHOH; // 0x50
	::MoleMole::Config::DynamicFloat* HBMNNLCOGEP; // 0x58
	::MoleMole::Config::DynamicFloat* NANGMADJDOE; // 0x60
	::MoleMole::Config::DynamicFloat* CPAAOKLJMMN; // 0x68
	::MoleMole::Config::DynamicFloat* FCDBDKPCKGM; // 0x70
	::UnityEngine::Vector3 BFFPHIMMOEK; // 0x78
	::HLCMFOODODN HJOAMIFOGME; // 0x84
	::System::Boolean GIILGNAKIIJ; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDKPLCCOJOJ__CTOR_OFFSET))(this);
	}

	::System::Boolean MBGCBDBNPFE(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + PDKPLCCOJOJ_MBGCBDBNPFE_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PDKPLCCOJOJ_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + PDKPLCCOJOJ_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LHHNKBDEMGO* DGNAAPGKIPL()
	{
		return ((::LHHNKBDEMGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + PDKPLCCOJOJ_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PDKPLCCOJOJ_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + PDKPLCCOJOJ_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::PDKPLCCOJOJ* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::PDKPLCCOJOJ*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PDKPLCCOJOJ_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean FBLIIDOEHIJ(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK, ::MoleMole::Battle::Entity* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::ENGKPGFGGLM* CEIDLKIHMLC)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + PDKPLCCOJOJ_FBLIIDOEHIJ_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
	}

	static ::PDKPLCCOJOJ* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::PDKPLCCOJOJ*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + PDKPLCCOJOJ_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + PDKPLCCOJOJ_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PDKPLCCOJOJ_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
