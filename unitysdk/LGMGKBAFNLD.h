#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GJPCMGFKAGD.h"
#include "unitysdk/MoleMole/Config/MonsterFunctionType.h"
#include "unitysdk/MoleMole/Config/ValueCompareType.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class BIPBNDIFDOL;
class ENGKPGFGGLM;
class FKNIEPCILLG;
namespace MoleMole::Battle { class Entity; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define LGMGKBAFNLD_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x126DC880)
#define LGMGKBAFNLD_FBLIIDOEHIJ_OFFSET UNITYSDK_OFFSET(0x126DD1C0)
#define LGMGKBAFNLD_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x126DCCB0)
#define LGMGKBAFNLD_FROMFLX_OFFSET UNITYSDK_OFFSET(0x126DC990)
#define LGMGKBAFNLD_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x126DD010)
#define LGMGKBAFNLD_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x126DC980)
#define LGMGKBAFNLD_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x126DCEB0)
#define LGMGKBAFNLD_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x126DCD10)
#define LGMGKBAFNLD_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x126DC870)
#define LGMGKBAFNLD_MBGCBDBNPFE_OFFSET UNITYSDK_OFFSET(0x126DC460)
#define LGMGKBAFNLD_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x126DCA10)
#define LGMGKBAFNLD__CTOR_OFFSET UNITYSDK_OFFSET(0x126DC450)

inline static constexpr unsigned int LGMGKBAFNLD_TypeDefinitionIndex = 89018;

class LGMGKBAFNLD : public ::GJPCMGFKAGD
{
public:
	::MoleMole::Config::MonsterFunctionType CHPNFGFHMAG; // 0x10
	::MoleMole::Config::ValueCompareType BCLCHCOODCE; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGMGKBAFNLD__CTOR_OFFSET))(this);
	}

	::System::Boolean MBGCBDBNPFE(::BIPBNDIFDOL* HHIJHDFHPOI, ::MoleMole::Battle::Entity* KHGFAKJKDGG, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Boolean(*)(::PVOID, ::BIPBNDIFDOL*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + LGMGKBAFNLD_MBGCBDBNPFE_OFFSET))(this, HHIJHDFHPOI, KHGFAKJKDGG, HODAIDNDKHD, FFNKDGGHBPP);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + LGMGKBAFNLD_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::GJPCMGFKAGD* DGNAAPGKIPL()
	{
		return ((::GJPCMGFKAGD*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGMGKBAFNLD_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LGMGKBAFNLD_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + LGMGKBAFNLD_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + LGMGKBAFNLD_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + LGMGKBAFNLD_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::LGMGKBAFNLD* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::LGMGKBAFNLD*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + LGMGKBAFNLD_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	static ::LGMGKBAFNLD* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::LGMGKBAFNLD*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + LGMGKBAFNLD_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + LGMGKBAFNLD_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean FBLIIDOEHIJ(::BIPBNDIFDOL* MIALFKCCCPI, ::MoleMole::Battle::Entity* KMGKAIDEIBA, ::MoleMole::Battle::Entity* FDHMCIFPNCK, ::ENGKPGFGGLM* MPBJAGIKPJM)
	{
		return ((::System::Boolean(*)(::PVOID, ::BIPBNDIFDOL*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + LGMGKBAFNLD_FBLIIDOEHIJ_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM);
	}
};
