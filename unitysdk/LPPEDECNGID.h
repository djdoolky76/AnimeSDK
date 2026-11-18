#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace MoleMole::Config { class RenderMaterial; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LPPEDECNGID_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x13D0E2B0)
#define LPPEDECNGID_FROMFLX_OFFSET UNITYSDK_OFFSET(0x13D0E760)
#define LPPEDECNGID_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x13D0E310)
#define LPPEDECNGID_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x13D0E7E0)
#define LPPEDECNGID__CTOR_OFFSET UNITYSDK_OFFSET(0x13D0EFC0)

inline static constexpr unsigned int LPPEDECNGID_TypeDefinitionIndex = 74409;

class LPPEDECNGID : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::MoleMole::Config::RenderMaterial*>* OAIHPMLLJJO; // 0x10
	::System::String* MCOHLHMKLIP; // 0x18
	::System::String* KIHGNGKBADE; // 0x20
	::System::Int32 HLBKHEFJAPH; // 0x28
	::System::Boolean JNMPJONKHCA; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPPEDECNGID__CTOR_OFFSET))(this);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + LPPEDECNGID_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + LPPEDECNGID_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + LPPEDECNGID_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + LPPEDECNGID_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
