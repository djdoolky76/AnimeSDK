#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HDJJJGCHLEE.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class HBIBNDIOKPG;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define LCGCPLACCAL_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x15808210)
#define LCGCPLACCAL_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x15808600)
#define LCGCPLACCAL_FROMFLX_OFFSET UNITYSDK_OFFSET(0x15808320)
#define LCGCPLACCAL_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x15808A60)
#define LCGCPLACCAL_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x15808310)
#define LCGCPLACCAL_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x15808900)
#define LCGCPLACCAL_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x15808660)
#define LCGCPLACCAL_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x15808C10)
#define LCGCPLACCAL_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x15807DF0)
#define LCGCPLACCAL_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x15808180)
#define LCGCPLACCAL_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x158083A0)
#define LCGCPLACCAL__CTOR_OFFSET UNITYSDK_OFFSET(0x15808870)

inline static constexpr unsigned int LCGCPLACCAL_TypeDefinitionIndex = 47776;

class LCGCPLACCAL : public ::HDJJJGCHLEE
{
public:
	::HBIBNDIOKPG* PBANCBCAMOI; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCGCPLACCAL__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCGCPLACCAL_LBHNEFGNNNB_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + LCGCPLACCAL_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCGCPLACCAL_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LCGCPLACCAL_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + LCGCPLACCAL_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + LCGCPLACCAL_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::LCGCPLACCAL* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::LCGCPLACCAL*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + LCGCPLACCAL_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	static ::LCGCPLACCAL* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::LCGCPLACCAL*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + LCGCPLACCAL_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void JFLMLBMNFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCGCPLACCAL_JFLMLBMNFFK_OFFSET))(this);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + LCGCPLACCAL_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + LCGCPLACCAL_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
