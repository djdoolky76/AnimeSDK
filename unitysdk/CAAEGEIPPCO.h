#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HDJJJGCHLEE.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class GPIOLGMOBLJ;
class HBIBNDIOKPG;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define CAAEGEIPPCO_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x18590F30)
#define CAAEGEIPPCO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18591710)
#define CAAEGEIPPCO_FROMFLX_OFFSET UNITYSDK_OFFSET(0x18591040)
#define CAAEGEIPPCO_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x18591CF0)
#define CAAEGEIPPCO_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x18591030)
#define CAAEGEIPPCO_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x18591B90)
#define CAAEGEIPPCO_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x18591770)
#define CAAEGEIPPCO_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x18591B00)
#define CAAEGEIPPCO_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x185907D0)
#define CAAEGEIPPCO_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x18590E60)
#define CAAEGEIPPCO_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x185910C0)
#define CAAEGEIPPCO__CTOR_OFFSET UNITYSDK_OFFSET(0x18591A70)

inline static constexpr unsigned int CAAEGEIPPCO_TypeDefinitionIndex = 51670;

class CAAEGEIPPCO : public ::HDJJJGCHLEE
{
public:
	::GPIOLGMOBLJ* BOGHCBIHHBF; // 0x30
	::HBIBNDIOKPG* KEHECMCDLFC; // 0x38
	::GPIOLGMOBLJ* CONBBLDCMED; // 0x40
	::GPIOLGMOBLJ* LKCGCKABIOH; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAAEGEIPPCO__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAAEGEIPPCO_LBHNEFGNNNB_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CAAEGEIPPCO_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAAEGEIPPCO_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CAAEGEIPPCO_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CAAEGEIPPCO_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + CAAEGEIPPCO_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void JFLMLBMNFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAAEGEIPPCO_JFLMLBMNFFK_OFFSET))(this);
	}

	static ::CAAEGEIPPCO* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::CAAEGEIPPCO*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CAAEGEIPPCO_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CAAEGEIPPCO_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + CAAEGEIPPCO_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::CAAEGEIPPCO* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::CAAEGEIPPCO*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + CAAEGEIPPCO_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
