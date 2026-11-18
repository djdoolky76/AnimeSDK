#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FOBNALGHPPD_1.h"
#include "unitysdk/HDJJJGCHLEE.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class GPIOLGMOBLJ;
class HBIBNDIOKPG;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define OGNMJILHIAC_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x129314E0)
#define OGNMJILHIAC_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x12931B30)
#define OGNMJILHIAC_FROMFLX_OFFSET UNITYSDK_OFFSET(0x129315F0)
#define OGNMJILHIAC_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x12931ED0)
#define OGNMJILHIAC_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x129315E0)
#define OGNMJILHIAC_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x12932110)
#define OGNMJILHIAC_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x12931B90)
#define OGNMJILHIAC_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x12932080)
#define OGNMJILHIAC_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x129311C0)
#define OGNMJILHIAC_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x12931440)
#define OGNMJILHIAC_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x12931670)
#define OGNMJILHIAC__CTOR_OFFSET UNITYSDK_OFFSET(0x12931E40)

inline static constexpr unsigned int OGNMJILHIAC_TypeDefinitionIndex = 91917;

class OGNMJILHIAC : public ::HDJJJGCHLEE
{
public:
	::FOBNALGHPPD_1<::System::String*> LGJINFINDPN; // 0x30
	::System::Byte _padding0[0x18];
	::HBIBNDIOKPG* KEHECMCDLFC; // 0x50
	::GPIOLGMOBLJ* EPMNNELBGFG; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGNMJILHIAC__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGNMJILHIAC_LBHNEFGNNNB_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + OGNMJILHIAC_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGNMJILHIAC_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OGNMJILHIAC_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + OGNMJILHIAC_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + OGNMJILHIAC_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::OGNMJILHIAC* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::OGNMJILHIAC*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + OGNMJILHIAC_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void JFLMLBMNFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGNMJILHIAC_JFLMLBMNFFK_OFFSET))(this);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + OGNMJILHIAC_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::OGNMJILHIAC* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::OGNMJILHIAC*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + OGNMJILHIAC_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + OGNMJILHIAC_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
