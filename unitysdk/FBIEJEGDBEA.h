#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HDJJJGCHLEE.h"
#include "unitysdk/MoleMole/Config/TeamRelationship.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class GPIOLGMOBLJ;
class HBIBNDIOKPG;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define FBIEJEGDBEA_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x11AB5450)
#define FBIEJEGDBEA_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x11AB5C50)
#define FBIEJEGDBEA_FROMFLX_OFFSET UNITYSDK_OFFSET(0x11AB5560)
#define FBIEJEGDBEA_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x11AB6080)
#define FBIEJEGDBEA_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x11AB5550)
#define FBIEJEGDBEA_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x11AB62C0)
#define FBIEJEGDBEA_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x11AB5CB0)
#define FBIEJEGDBEA_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x11AB6230)
#define FBIEJEGDBEA_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x11AB5000)
#define FBIEJEGDBEA_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x11AB5390)
#define FBIEJEGDBEA_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x11AB55E0)
#define FBIEJEGDBEA__CTOR_OFFSET UNITYSDK_OFFSET(0x11AB5FF0)

inline static constexpr unsigned int FBIEJEGDBEA_TypeDefinitionIndex = 56133;

class FBIEJEGDBEA : public ::HDJJJGCHLEE
{
public:
	::GPIOLGMOBLJ* EPMNNELBGFG; // 0x30
	::HBIBNDIOKPG* OGDNJKJANEK; // 0x38
	::HBIBNDIOKPG* HJGIIMJMGAF; // 0x40
	::MoleMole::Config::TeamRelationship CHLOIDLBPFP; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBIEJEGDBEA__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBIEJEGDBEA_LBHNEFGNNNB_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + FBIEJEGDBEA_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBIEJEGDBEA_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FBIEJEGDBEA_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + FBIEJEGDBEA_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + FBIEJEGDBEA_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + FBIEJEGDBEA_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::FBIEJEGDBEA* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::FBIEJEGDBEA*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + FBIEJEGDBEA_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void JFLMLBMNFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBIEJEGDBEA_JFLMLBMNFFK_OFFSET))(this);
	}

	static ::FBIEJEGDBEA* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::FBIEJEGDBEA*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + FBIEJEGDBEA_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + FBIEJEGDBEA_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
