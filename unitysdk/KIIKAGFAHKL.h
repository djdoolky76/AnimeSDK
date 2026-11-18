#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GJPCMGFKAGD.h"
#include "unitysdk/MoleMole/Config/ValueCompareType.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class BIPBNDIFDOL;
class ENGKPGFGGLM;
class FKNIEPCILLG;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class DynamicFloat; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define KIIKAGFAHKL_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x1790BE10)
#define KIIKAGFAHKL_FBLIIDOEHIJ_OFFSET UNITYSDK_OFFSET(0x1790C680)
#define KIIKAGFAHKL_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1790C2A0)
#define KIIKAGFAHKL_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1790BF20)
#define KIIKAGFAHKL_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x1790C4D0)
#define KIIKAGFAHKL_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x1790BF10)
#define KIIKAGFAHKL_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x1790C730)
#define KIIKAGFAHKL_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x1790C300)
#define KIIKAGFAHKL_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x1790BDC0)
#define KIIKAGFAHKL_MBGCBDBNPFE_OFFSET UNITYSDK_OFFSET(0x1790BC30)
#define KIIKAGFAHKL_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x1790BFA0)
#define KIIKAGFAHKL__CTOR_OFFSET UNITYSDK_OFFSET(0x1790BBC0)

inline static constexpr unsigned int KIIKAGFAHKL_TypeDefinitionIndex = 44670;

class KIIKAGFAHKL : public ::GJPCMGFKAGD
{
public:
	::MoleMole::Config::DynamicFloat* GPBKCIMPJIK; // 0x10
	::MoleMole::Config::ValueCompareType EMGLFBHJLLC; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIIKAGFAHKL__CTOR_OFFSET))(this);
	}

	::System::Boolean MBGCBDBNPFE(::BIPBNDIFDOL* HHIJHDFHPOI, ::MoleMole::Battle::Entity* KHGFAKJKDGG, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Boolean(*)(::PVOID, ::BIPBNDIFDOL*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + KIIKAGFAHKL_MBGCBDBNPFE_OFFSET))(this, HHIJHDFHPOI, KHGFAKJKDGG, HODAIDNDKHD, FFNKDGGHBPP);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + KIIKAGFAHKL_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::GJPCMGFKAGD* DGNAAPGKIPL()
	{
		return ((::GJPCMGFKAGD*(*)(::PVOID))((::PBYTE)hIl2Cpp + KIIKAGFAHKL_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KIIKAGFAHKL_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + KIIKAGFAHKL_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + KIIKAGFAHKL_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + KIIKAGFAHKL_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::KIIKAGFAHKL* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::KIIKAGFAHKL*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + KIIKAGFAHKL_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean FBLIIDOEHIJ(::BIPBNDIFDOL* MIALFKCCCPI, ::MoleMole::Battle::Entity* KMGKAIDEIBA, ::MoleMole::Battle::Entity* FDHMCIFPNCK, ::ENGKPGFGGLM* MPBJAGIKPJM)
	{
		return ((::System::Boolean(*)(::PVOID, ::BIPBNDIFDOL*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + KIIKAGFAHKL_FBLIIDOEHIJ_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM);
	}

	static ::KIIKAGFAHKL* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::KIIKAGFAHKL*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + KIIKAGFAHKL_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + KIIKAGFAHKL_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
