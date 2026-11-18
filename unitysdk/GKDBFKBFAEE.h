#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FOBNALGHPPD_1.h"
#include "unitysdk/KHFGGFPIAOM.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class GPIOLGMOBLJ;
class HDJJJGCHLEE;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define GKDBFKBFAEE_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x149DA7C0)
#define GKDBFKBFAEE_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x149DACD0)
#define GKDBFKBFAEE_FROMFLX_OFFSET UNITYSDK_OFFSET(0x149DA8D0)
#define GKDBFKBFAEE_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x149DB160)
#define GKDBFKBFAEE_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x149DA8C0)
#define GKDBFKBFAEE_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x149DB000)
#define GKDBFKBFAEE_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x149DAD30)
#define GKDBFKBFAEE_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x149DB3E0)
#define GKDBFKBFAEE_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x149DA600)
#define GKDBFKBFAEE_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x149DA730)
#define GKDBFKBFAEE_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x149DA950)
#define GKDBFKBFAEE__CTOR_OFFSET UNITYSDK_OFFSET(0x149DAF70)

inline static constexpr unsigned int GKDBFKBFAEE_TypeDefinitionIndex = 53915;

class GKDBFKBFAEE : public ::KHFGGFPIAOM
{
public:
	::FOBNALGHPPD_1<::System::Single> KLBGAHPJAJO; // 0x30
	::System::Byte _padding0[0x18];
	::GPIOLGMOBLJ* EPMNNELBGFG; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKDBFKBFAEE__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKDBFKBFAEE_LBHNEFGNNNB_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + GKDBFKBFAEE_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKDBFKBFAEE_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GKDBFKBFAEE_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + GKDBFKBFAEE_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + GKDBFKBFAEE_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::GKDBFKBFAEE* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::GKDBFKBFAEE*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + GKDBFKBFAEE_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	static ::GKDBFKBFAEE* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::GKDBFKBFAEE*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + GKDBFKBFAEE_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + GKDBFKBFAEE_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Void JFLMLBMNFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKDBFKBFAEE_JFLMLBMNFFK_OFFSET))(this);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + GKDBFKBFAEE_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
