#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Timeline { class Vector4RecorderUnit; }
namespace System { class String; }

#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_POELBJFNGDO_HPNPICAFKMN_OFFSET UNITYSDK_OFFSET(0x19CFDD20)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_POELBJFNGDO__CTOR_OFFSET UNITYSDK_OFFSET(0x19CFDD10)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int RuntimeMaterialInfo_POELBJFNGDO_TypeDefinitionIndex = 65825;

	class RuntimeMaterialInfo_POELBJFNGDO : public ::System::Object
	{
	public:
		::System::String* HMEJPIJJGOH; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_POELBJFNGDO__CTOR_OFFSET))(this);
		}

		::System::Boolean HPNPICAFKMN(::MoleMole::Timeline::Vector4RecorderUnit* IPMMCGDMODG)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Timeline::Vector4RecorderUnit*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_POELBJFNGDO_HPNPICAFKMN_OFFSET))(this, IPMMCGDMODG);
		}
	};
}
