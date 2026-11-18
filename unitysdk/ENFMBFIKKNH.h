#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace System { template <typename T> class Action_1; }

#define ENFMBFIKKNH_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x1417EA90)
#define ENFMBFIKKNH_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1417EDC0)
#define ENFMBFIKKNH_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1417EBA0)
#define ENFMBFIKKNH_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x1417F130)
#define ENFMBFIKKNH_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x1417EB90)
#define ENFMBFIKKNH_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x1417F060)
#define ENFMBFIKKNH_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x1417EE20)
#define ENFMBFIKKNH_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x1417EA80)
#define ENFMBFIKKNH_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x1417EC20)
#define ENFMBFIKKNH__CTOR_OFFSET UNITYSDK_OFFSET(0x1417F050)

inline static constexpr unsigned int ENFMBFIKKNH_TypeDefinitionIndex = 73560;

class ENFMBFIKKNH : public ::System::Object
{
public:
	::System::Int32 OHFNOPDDLPL; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENFMBFIKKNH__CTOR_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + ENFMBFIKKNH_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::ENFMBFIKKNH* DGNAAPGKIPL()
	{
		return ((::ENFMBFIKKNH*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENFMBFIKKNH_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ENFMBFIKKNH_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + ENFMBFIKKNH_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + ENFMBFIKKNH_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + ENFMBFIKKNH_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + ENFMBFIKKNH_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::ENFMBFIKKNH* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::ENFMBFIKKNH*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + ENFMBFIKKNH_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	static ::ENFMBFIKKNH* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::ENFMBFIKKNH*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + ENFMBFIKKNH_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
