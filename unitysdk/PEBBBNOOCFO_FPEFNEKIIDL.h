#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MapRotation/EffectType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
namespace RPG::Client { class MapNpcDef; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PEBBBNOOCFO_FPEFNEKIIDL_BAHBJMACJNA_OFFSET UNITYSDK_OFFSET(0xC030CE0)
#define PEBBBNOOCFO_FPEFNEKIIDL_CLEAR_OFFSET UNITYSDK_OFFSET(0xC032420)
#define PEBBBNOOCFO_FPEFNEKIIDL_CPLJLJPLLNC_OFFSET UNITYSDK_OFFSET(0xC0313D0)
#define PEBBBNOOCFO_FPEFNEKIIDL_CTOR_OFFSET UNITYSDK_OFFSET(0xC031370)

inline static constexpr unsigned int PEBBBNOOCFO_FPEFNEKIIDL_TypeDefinitionIndex = 60605;

	class PEBBBNOOCFO_FPEFNEKIIDL : public ::System::Object
	{
	public:
		::RPG::Client::MapNpcDef* ODOBMHNHNEB; // 0x10
		::System::Collections::Generic::List_1<::System::Object*>* KBKIKFGJBII; // 0x18
		::RPG::Client::MapRotation::EffectType DLMINHHKKMK; // 0x20
		::System::UInt32 GJPPHJMHBPF; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEBBBNOOCFO_FPEFNEKIIDL_CTOR_OFFSET))(this);
		}

		::System::ValueTuple_2<::System::UInt32, ::System::UInt32> CPLJLJPLLNC()
		{
			return ((::System::ValueTuple_2<::System::UInt32, ::System::UInt32>(*)(::PVOID))((::PBYTE)hIl2Cpp + PEBBBNOOCFO_FPEFNEKIIDL_CPLJLJPLLNC_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEBBBNOOCFO_FPEFNEKIIDL_CLEAR_OFFSET))(this);
		}

		::System::Boolean BAHBJMACJNA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PEBBBNOOCFO_FPEFNEKIIDL_BAHBJMACJNA_OFFSET))(this);
		}

	};
