#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HDJJJGCHLEE.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class GPIOLGMOBLJ;
class HBIBNDIOKPG;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define LGLILKPGIEM_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x1A30F2D0)
#define LGLILKPGIEM_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1A30FC50)
#define LGLILKPGIEM_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1A30F3E0)
#define LGLILKPGIEM_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x1A310110)
#define LGLILKPGIEM_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x1A30F3D0)
#define LGLILKPGIEM_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x1A3102C0)
#define LGLILKPGIEM_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x1A30FCB0)
#define LGLILKPGIEM_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x1A310420)
#define LGLILKPGIEM_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x1A30ED60)
#define LGLILKPGIEM_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x1A30F210)
#define LGLILKPGIEM_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x1A30F460)
#define LGLILKPGIEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1A310080)

inline static constexpr unsigned int LGLILKPGIEM_TypeDefinitionIndex = 39528;

class LGLILKPGIEM : public ::HDJJJGCHLEE
{
public:
	::HBIBNDIOKPG* KEHECMCDLFC; // 0x30
	::System::String* DCPBEKFADFB; // 0x38
	::GPIOLGMOBLJ* CEJBIBJBCBC; // 0x40
	::MoleMole::Config::BaseProperty EHAKJBAKGDL; // 0x48
	::System::Boolean HAAOPCDABAI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGLILKPGIEM__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGLILKPGIEM_LBHNEFGNNNB_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + LGLILKPGIEM_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGLILKPGIEM_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LGLILKPGIEM_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + LGLILKPGIEM_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + LGLILKPGIEM_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + LGLILKPGIEM_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::LGLILKPGIEM* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::LGLILKPGIEM*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + LGLILKPGIEM_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::LGLILKPGIEM* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::LGLILKPGIEM*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + LGLILKPGIEM_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Void JFLMLBMNFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGLILKPGIEM_JFLMLBMNFFK_OFFSET))(this);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + LGLILKPGIEM_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
