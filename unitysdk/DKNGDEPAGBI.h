#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AMOJICHEAGH.h"
#include "unitysdk/GJPCMGFKAGD.h"
#include "unitysdk/MoleMole/Config/EntityType.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class BIPBNDIFDOL;
class ENGKPGFGGLM;
class FKNIEPCILLG;
namespace MoleMole::Battle { class Entity; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define DKNGDEPAGBI_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x18348A30)
#define DKNGDEPAGBI_FBLIIDOEHIJ_OFFSET UNITYSDK_OFFSET(0x18349060)
#define DKNGDEPAGBI_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18348E60)
#define DKNGDEPAGBI_FROMFLX_OFFSET UNITYSDK_OFFSET(0x18348B40)
#define DKNGDEPAGBI_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x18349110)
#define DKNGDEPAGBI_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x18348B30)
#define DKNGDEPAGBI_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x183492C0)
#define DKNGDEPAGBI_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x18348EC0)
#define DKNGDEPAGBI_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x18348A20)
#define DKNGDEPAGBI_MBGCBDBNPFE_OFFSET UNITYSDK_OFFSET(0x183489A0)
#define DKNGDEPAGBI_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x18348BC0)
#define DKNGDEPAGBI__CTOR_OFFSET UNITYSDK_OFFSET(0x18348990)

inline static constexpr unsigned int DKNGDEPAGBI_TypeDefinitionIndex = 83911;

class DKNGDEPAGBI : public ::GJPCMGFKAGD
{
public:
	::MoleMole::Config::EntityType JAICKFPPOEO; // 0x10
	::AMOJICHEAGH ACEDLDAFBDD; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKNGDEPAGBI__CTOR_OFFSET))(this);
	}

	::System::Boolean MBGCBDBNPFE(::BIPBNDIFDOL* HHIJHDFHPOI, ::MoleMole::Battle::Entity* KHGFAKJKDGG, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Boolean(*)(::PVOID, ::BIPBNDIFDOL*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + DKNGDEPAGBI_MBGCBDBNPFE_OFFSET))(this, HHIJHDFHPOI, KHGFAKJKDGG, HODAIDNDKHD, FFNKDGGHBPP);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + DKNGDEPAGBI_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::GJPCMGFKAGD* DGNAAPGKIPL()
	{
		return ((::GJPCMGFKAGD*(*)(::PVOID))((::PBYTE)hIl2Cpp + DKNGDEPAGBI_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DKNGDEPAGBI_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + DKNGDEPAGBI_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + DKNGDEPAGBI_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + DKNGDEPAGBI_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean FBLIIDOEHIJ(::BIPBNDIFDOL* MIALFKCCCPI, ::MoleMole::Battle::Entity* KMGKAIDEIBA, ::MoleMole::Battle::Entity* FDHMCIFPNCK, ::ENGKPGFGGLM* MPBJAGIKPJM)
	{
		return ((::System::Boolean(*)(::PVOID, ::BIPBNDIFDOL*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + DKNGDEPAGBI_FBLIIDOEHIJ_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM);
	}

	static ::DKNGDEPAGBI* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::DKNGDEPAGBI*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + DKNGDEPAGBI_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::DKNGDEPAGBI* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::DKNGDEPAGBI*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + DKNGDEPAGBI_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + DKNGDEPAGBI_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
