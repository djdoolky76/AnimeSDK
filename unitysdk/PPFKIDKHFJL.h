#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HDJJJGCHLEE.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class GPIOLGMOBLJ;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define PPFKIDKHFJL_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x119A9A20)
#define PPFKIDKHFJL_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x119A9D80)
#define PPFKIDKHFJL_FROMFLX_OFFSET UNITYSDK_OFFSET(0x119A9B30)
#define PPFKIDKHFJL_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x119AA030)
#define PPFKIDKHFJL_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x119A9B20)
#define PPFKIDKHFJL_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x119AA270)
#define PPFKIDKHFJL_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x119A9DE0)
#define PPFKIDKHFJL_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x119AA1E0)
#define PPFKIDKHFJL_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x119A9650)
#define PPFKIDKHFJL_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x119A9990)
#define PPFKIDKHFJL_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x119A9BB0)
#define PPFKIDKHFJL__CTOR_OFFSET UNITYSDK_OFFSET(0x119A9FA0)

inline static constexpr unsigned int PPFKIDKHFJL_TypeDefinitionIndex = 64295;

class PPFKIDKHFJL : public ::HDJJJGCHLEE
{
public:
	::GPIOLGMOBLJ* CPLFOFKKGGO; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPFKIDKHFJL__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPFKIDKHFJL_LBHNEFGNNNB_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + PPFKIDKHFJL_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + PPFKIDKHFJL_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PPFKIDKHFJL_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + PPFKIDKHFJL_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PPFKIDKHFJL_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::PPFKIDKHFJL* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::PPFKIDKHFJL*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PPFKIDKHFJL_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PPFKIDKHFJL_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void JFLMLBMNFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPFKIDKHFJL_JFLMLBMNFFK_OFFSET))(this);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + PPFKIDKHFJL_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::PPFKIDKHFJL* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::PPFKIDKHFJL*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + PPFKIDKHFJL_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}
};
