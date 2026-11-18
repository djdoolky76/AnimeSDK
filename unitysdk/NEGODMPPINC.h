#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace MoleMole::Config { class DynamicFloat; }
namespace System { class String; }

#define NEGODMPPINC_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xE576910)
#define NEGODMPPINC_FROMFLX_OFFSET UNITYSDK_OFFSET(0xE576C20)
#define NEGODMPPINC_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0xE576970)
#define NEGODMPPINC_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0xE576CA0)
#define NEGODMPPINC__CTOR_OFFSET UNITYSDK_OFFSET(0xE5772F0)

inline static constexpr unsigned int NEGODMPPINC_TypeDefinitionIndex = 67237;

class NEGODMPPINC : public ::System::Object
{
public:
	::MoleMole::Config::DynamicFloat* PMLOGFLOLNJ; // 0x10
	::System::String* LFNMPOCHPLP; // 0x18
	::MoleMole::Config::DynamicFloat* HBOJLFKAOOH; // 0x20
	::MoleMole::Config::BaseProperty EHAKJBAKGDL; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEGODMPPINC__CTOR_OFFSET))(this);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + NEGODMPPINC_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + NEGODMPPINC_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + NEGODMPPINC_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + NEGODMPPINC_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
