#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HDJJJGCHLEE.h"
#include "unitysdk/MEBGCKEHHIN.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class HBIBNDIOKPG;
namespace MoleMole::Config { class ConfigDynamicValue; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define AGLGKKCMDOE_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x16D77C50)
#define AGLGKKCMDOE_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16D78420)
#define AGLGKKCMDOE_FROMFLX_OFFSET UNITYSDK_OFFSET(0x16D77D60)
#define AGLGKKCMDOE_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x16D78A20)
#define AGLGKKCMDOE_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x16D77D50)
#define AGLGKKCMDOE_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x16D78830)
#define AGLGKKCMDOE_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x16D78480)
#define AGLGKKCMDOE_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x16D78990)
#define AGLGKKCMDOE_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x16D77830)
#define AGLGKKCMDOE_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x16D77B90)
#define AGLGKKCMDOE_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x16D77DE0)
#define AGLGKKCMDOE__CTOR_OFFSET UNITYSDK_OFFSET(0x16D787A0)

inline static constexpr unsigned int AGLGKKCMDOE_TypeDefinitionIndex = 61078;

class AGLGKKCMDOE : public ::HDJJJGCHLEE
{
public:
	::HBIBNDIOKPG* MFKJLJJGHJF; // 0x30
	::System::String* OPNMCKJHKLC; // 0x38
	::MoleMole::Config::ConfigDynamicValue* FLDBAEPPAEB; // 0x40
	::MEBGCKEHHIN MEFDBLDPCIL; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGLGKKCMDOE__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGLGKKCMDOE_LBHNEFGNNNB_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + AGLGKKCMDOE_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGLGKKCMDOE_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AGLGKKCMDOE_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + AGLGKKCMDOE_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + AGLGKKCMDOE_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::AGLGKKCMDOE* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::AGLGKKCMDOE*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + AGLGKKCMDOE_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Void JFLMLBMNFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGLGKKCMDOE_JFLMLBMNFFK_OFFSET))(this);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + AGLGKKCMDOE_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::AGLGKKCMDOE* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::AGLGKKCMDOE*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + AGLGKKCMDOE_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + AGLGKKCMDOE_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
