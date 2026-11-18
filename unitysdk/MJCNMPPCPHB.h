#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GJPJCHFGNAB.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class LNODBDPJGFL;
namespace MoleMole::Config { class DynamicFloat; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MJCNMPPCPHB_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16C8F390)
#define MJCNMPPCPHB_FROMFLX_OFFSET UNITYSDK_OFFSET(0x16C8F670)
#define MJCNMPPCPHB_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x16C8F3F0)
#define MJCNMPPCPHB_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x16C8F6F0)
#define MJCNMPPCPHB__CTOR_OFFSET UNITYSDK_OFFSET(0x16C8FB90)

inline static constexpr unsigned int MJCNMPPCPHB_TypeDefinitionIndex = 74244;

class MJCNMPPCPHB : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::LNODBDPJGFL*>* HDDKMBEPAEA; // 0x10
	::MoleMole::Config::DynamicFloat* OJLNDNBCFMD; // 0x18
	::GJPJCHFGNAB LPLDIOEBDNL; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJCNMPPCPHB__CTOR_OFFSET))(this);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MJCNMPPCPHB_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MJCNMPPCPHB_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MJCNMPPCPHB_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MJCNMPPCPHB_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
