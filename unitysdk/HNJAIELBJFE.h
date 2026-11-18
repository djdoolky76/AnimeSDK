#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CCIKICBGGLP.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class HACAMEGIBJA;
namespace MoleMole::Config { class RenderMaterial; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HNJAIELBJFE_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0xE9FEC60)
#define HNJAIELBJFE_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xE9FE5F0)
#define HNJAIELBJFE_FROMFLX_OFFSET UNITYSDK_OFFSET(0xE9FED70)
#define HNJAIELBJFE_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0xE9FF900)
#define HNJAIELBJFE_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0xE9FED60)
#define HNJAIELBJFE_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0xE9FF7A0)
#define HNJAIELBJFE_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0xE9FE650)
#define HNJAIELBJFE_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0xE9FEB90)
#define HNJAIELBJFE_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0xE9FEDF0)
#define HNJAIELBJFE__CTOR_OFFSET UNITYSDK_OFFSET(0xE9FF790)

inline static constexpr unsigned int HNJAIELBJFE_TypeDefinitionIndex = 84864;

class HNJAIELBJFE : public ::CCIKICBGGLP
{
public:
	::System::String* KIHGNGKBADE; // 0x20
	::HACAMEGIBJA* NALDAHMJFHL; // 0x28
	::System::String* DCJCHGOGLMF; // 0x30
	::System::Collections::Generic::List_1<::MoleMole::Config::RenderMaterial*>* OAIHPMLLJJO; // 0x38
	::System::Int32 HLBKHEFJAPH; // 0x40
	::System::Boolean JNMPJONKHCA; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNJAIELBJFE__CTOR_OFFSET))(this);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + HNJAIELBJFE_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + HNJAIELBJFE_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::CCIKICBGGLP* DGNAAPGKIPL()
	{
		return ((::CCIKICBGGLP*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNJAIELBJFE_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HNJAIELBJFE_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + HNJAIELBJFE_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::HNJAIELBJFE* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::HNJAIELBJFE*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + HNJAIELBJFE_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + HNJAIELBJFE_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + HNJAIELBJFE_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::HNJAIELBJFE* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::HNJAIELBJFE*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + HNJAIELBJFE_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
