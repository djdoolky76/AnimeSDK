#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HDJJJGCHLEE.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class HBIBNDIOKPG;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define HKFDCLAJFCD_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x15DBE750)
#define HKFDCLAJFCD_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x15DBEB40)
#define HKFDCLAJFCD_FROMFLX_OFFSET UNITYSDK_OFFSET(0x15DBE860)
#define HKFDCLAJFCD_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x15DBEED0)
#define HKFDCLAJFCD_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x15DBE850)
#define HKFDCLAJFCD_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x15DBF080)
#define HKFDCLAJFCD_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x15DBEBA0)
#define HKFDCLAJFCD_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x15DBEE40)
#define HKFDCLAJFCD_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x15DBE5A0)
#define HKFDCLAJFCD_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x15DBE6C0)
#define HKFDCLAJFCD_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x15DBE8E0)
#define HKFDCLAJFCD__CTOR_OFFSET UNITYSDK_OFFSET(0x15DBEDB0)

inline static constexpr unsigned int HKFDCLAJFCD_TypeDefinitionIndex = 39977;

class HKFDCLAJFCD : public ::HDJJJGCHLEE
{
public:
	::HBIBNDIOKPG* MOOHFHCPOIE; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKFDCLAJFCD__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKFDCLAJFCD_LBHNEFGNNNB_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + HKFDCLAJFCD_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKFDCLAJFCD_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HKFDCLAJFCD_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + HKFDCLAJFCD_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + HKFDCLAJFCD_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + HKFDCLAJFCD_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void JFLMLBMNFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKFDCLAJFCD_JFLMLBMNFFK_OFFSET))(this);
	}

	static ::HKFDCLAJFCD* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::HKFDCLAJFCD*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + HKFDCLAJFCD_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::HKFDCLAJFCD* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::HKFDCLAJFCD*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + HKFDCLAJFCD_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + HKFDCLAJFCD_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
