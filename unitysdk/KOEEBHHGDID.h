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

#define KOEEBHHGDID_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x1A2DDA00)
#define KOEEBHHGDID_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1A2DDF30)
#define KOEEBHHGDID_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1A2DDB10)
#define KOEEBHHGDID_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x1A2DE280)
#define KOEEBHHGDID_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x1A2DDB00)
#define KOEEBHHGDID_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x1A2DE4C0)
#define KOEEBHHGDID_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x1A2DDF90)
#define KOEEBHHGDID_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x1A2DE430)
#define KOEEBHHGDID_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x1A2DD750)
#define KOEEBHHGDID_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x1A2DD960)
#define KOEEBHHGDID_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x1A2DDB90)
#define KOEEBHHGDID__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2DE1F0)

inline static constexpr unsigned int KOEEBHHGDID_TypeDefinitionIndex = 68065;

class KOEEBHHGDID : public ::HDJJJGCHLEE
{
public:
	::GPIOLGMOBLJ* KCBLKLHAFAJ; // 0x30
	::HBIBNDIOKPG* MOOHFHCPOIE; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOEEBHHGDID__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOEEBHHGDID_LBHNEFGNNNB_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + KOEEBHHGDID_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + KOEEBHHGDID_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KOEEBHHGDID_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + KOEEBHHGDID_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + KOEEBHHGDID_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::KOEEBHHGDID* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::KOEEBHHGDID*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + KOEEBHHGDID_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + KOEEBHHGDID_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Void JFLMLBMNFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOEEBHHGDID_JFLMLBMNFFK_OFFSET))(this);
	}

	static ::KOEEBHHGDID* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::KOEEBHHGDID*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + KOEEBHHGDID_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + KOEEBHHGDID_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
