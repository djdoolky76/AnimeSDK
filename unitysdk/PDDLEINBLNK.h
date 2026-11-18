#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HDJJJGCHLEE.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class HBIBNDIOKPG;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define PDDLEINBLNK_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x150B55F0)
#define PDDLEINBLNK_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x150B5CB0)
#define PDDLEINBLNK_FROMFLX_OFFSET UNITYSDK_OFFSET(0x150B5700)
#define PDDLEINBLNK_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x150B61E0)
#define PDDLEINBLNK_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x150B56F0)
#define PDDLEINBLNK_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x150B6080)
#define PDDLEINBLNK_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x150B5D10)
#define PDDLEINBLNK_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x150B5530)
#define PDDLEINBLNK_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x150B5780)
#define PDDLEINBLNK__CTOR_OFFSET UNITYSDK_OFFSET(0x150B5FF0)

inline static constexpr unsigned int PDDLEINBLNK_TypeDefinitionIndex = 54834;

class PDDLEINBLNK : public ::HDJJJGCHLEE
{
public:
	::System::String* LOEKCMKCNDC; // 0x30
	::HBIBNDIOKPG* KEHECMCDLFC; // 0x38
	::System::String* BGPMDIKJFPJ; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDDLEINBLNK__CTOR_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + PDDLEINBLNK_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + PDDLEINBLNK_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PDDLEINBLNK_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + PDDLEINBLNK_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PDDLEINBLNK_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::PDDLEINBLNK* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::PDDLEINBLNK*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + PDDLEINBLNK_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + PDDLEINBLNK_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PDDLEINBLNK_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::PDDLEINBLNK* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::PDDLEINBLNK*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PDDLEINBLNK_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
