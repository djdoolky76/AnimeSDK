#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class CMLEOMMLODC;
class FKNIEPCILLG;
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HNGEILFEGAG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18198640)
#define HNGEILFEGAG_FROMFLX_OFFSET UNITYSDK_OFFSET(0x181983E0)
#define HNGEILFEGAG_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x181986A0)
#define HNGEILFEGAG_IGCGENIMIIP_OFFSET UNITYSDK_OFFSET(0x18198370)
#define HNGEILFEGAG_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x18198320)
#define HNGEILFEGAG_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x18198460)
#define HNGEILFEGAG__CTOR_OFFSET UNITYSDK_OFFSET(0x18198870)

inline static constexpr unsigned int HNGEILFEGAG_TypeDefinitionIndex = 72846;

class HNGEILFEGAG : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::CMLEOMMLODC*>* DPKHPCFOLKC; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNGEILFEGAG__CTOR_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + HNGEILFEGAG_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void IGCGENIMIIP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNGEILFEGAG_IGCGENIMIIP_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + HNGEILFEGAG_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + HNGEILFEGAG_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + HNGEILFEGAG_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + HNGEILFEGAG_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
