#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GJPCMGFKAGD.h"
#include "unitysdk/MoleMole/Config/MonsterStrengthType.h"
#include "unitysdk/MoleMole/Config/ValueCompareType.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class BIPBNDIFDOL;
class ENGKPGFGGLM;
class FKNIEPCILLG;
namespace MoleMole::Battle { class Entity; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define LCOBNGKMALM_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x129C1FF0)
#define LCOBNGKMALM_FBLIIDOEHIJ_OFFSET UNITYSDK_OFFSET(0x1254D910)
#define LCOBNGKMALM_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1254D310)
#define LCOBNGKMALM_FROMFLX_OFFSET UNITYSDK_OFFSET(0x129C2100)
#define LCOBNGKMALM_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x1254D9C0)
#define LCOBNGKMALM_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x129C20F0)
#define LCOBNGKMALM_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x1254D510)
#define LCOBNGKMALM_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x1254D370)
#define LCOBNGKMALM_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x129C1FE0)
#define LCOBNGKMALM_MBGCBDBNPFE_OFFSET UNITYSDK_OFFSET(0x129C1DA0)
#define LCOBNGKMALM_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x1254D670)
#define LCOBNGKMALM__CTOR_OFFSET UNITYSDK_OFFSET(0x129C1D90)

inline static constexpr unsigned int LCOBNGKMALM_TypeDefinitionIndex = 86711;

class LCOBNGKMALM : public ::GJPCMGFKAGD
{
public:
	::MoleMole::Config::ValueCompareType LLDMOGGEDOD; // 0x10
	::MoleMole::Config::MonsterStrengthType EGOFOKBAILN; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCOBNGKMALM__CTOR_OFFSET))(this);
	}

	::System::Boolean MBGCBDBNPFE(::BIPBNDIFDOL* HHIJHDFHPOI, ::MoleMole::Battle::Entity* KHGFAKJKDGG, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Boolean(*)(::PVOID, ::BIPBNDIFDOL*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + LCOBNGKMALM_MBGCBDBNPFE_OFFSET))(this, HHIJHDFHPOI, KHGFAKJKDGG, HODAIDNDKHD, FFNKDGGHBPP);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + LCOBNGKMALM_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::GJPCMGFKAGD* DGNAAPGKIPL()
	{
		return ((::GJPCMGFKAGD*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCOBNGKMALM_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LCOBNGKMALM_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + LCOBNGKMALM_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + LCOBNGKMALM_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::LCOBNGKMALM* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::LCOBNGKMALM*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + LCOBNGKMALM_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + LCOBNGKMALM_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + LCOBNGKMALM_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FBLIIDOEHIJ(::BIPBNDIFDOL* MIALFKCCCPI, ::MoleMole::Battle::Entity* KMGKAIDEIBA, ::MoleMole::Battle::Entity* FDHMCIFPNCK, ::ENGKPGFGGLM* MPBJAGIKPJM)
	{
		return ((::System::Boolean(*)(::PVOID, ::BIPBNDIFDOL*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + LCOBNGKMALM_FBLIIDOEHIJ_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM);
	}

	static ::LCOBNGKMALM* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::LCOBNGKMALM*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + LCOBNGKMALM_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
