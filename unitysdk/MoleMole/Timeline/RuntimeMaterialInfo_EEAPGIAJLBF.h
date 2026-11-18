#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Timeline { class FloatRecorderUnit; }
namespace System { class String; }

#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_EEAPGIAJLBF_LINBNMEIACA_OFFSET UNITYSDK_OFFSET(0x19F5E310)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_EEAPGIAJLBF__CTOR_OFFSET UNITYSDK_OFFSET(0x19F5E300)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int RuntimeMaterialInfo_EEAPGIAJLBF_TypeDefinitionIndex = 65822;

	class RuntimeMaterialInfo_EEAPGIAJLBF : public ::System::Object
	{
	public:
		::MoleMole::Timeline::FloatRecorderUnit* DDHBIKHJACM; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_EEAPGIAJLBF__CTOR_OFFSET))(this);
		}

		::System::Boolean LINBNMEIACA(::System::String* KEKLFCCONCL)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_EEAPGIAJLBF_LINBNMEIACA_OFFSET))(this, KEKLFCCONCL);
		}
	};
}
