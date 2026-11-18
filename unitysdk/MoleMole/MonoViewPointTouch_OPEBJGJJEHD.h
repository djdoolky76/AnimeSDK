#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }

#define MOLEMOLE_MONOVIEWPOINTTOUCH_OPEBJGJJEHD_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x1469E480)
#define MOLEMOLE_MONOVIEWPOINTTOUCH_OPEBJGJJEHD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1469E0E0)
#define MOLEMOLE_MONOVIEWPOINTTOUCH_OPEBJGJJEHD__CTOR_OFFSET UNITYSDK_OFFSET(0x1469E470)

namespace MoleMole
{
	inline static constexpr unsigned int MonoViewPointTouch_OPEBJGJJEHD_TypeDefinitionIndex = 43873;

	class MonoViewPointTouch_OPEBJGJJEHD : public ::System::Object
	{
	public:
		::UnityEngine::Vector2 PAICAJCMNDI; // 0x10
		::UnityEngine::Vector2 NFGDPFPPGBJ; // 0x18
		::System::Boolean GIPECNMEEPB; // 0x20
		::System::Boolean BLCFALHOGAJ; // 0x21
		::System::Byte _padding0[0x2];
		::System::Int32 PHOJIGFHMED; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOVIEWPOINTTOUCH_OPEBJGJJEHD__CTOR_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOVIEWPOINTTOUCH_OPEBJGJJEHD_TOSTRING_OFFSET))(this);
		}

		::System::String* DPIHOJBBGLA()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOVIEWPOINTTOUCH_OPEBJGJJEHD_DPIHOJBBGLA_OFFSET))(this);
		}
	};
}
