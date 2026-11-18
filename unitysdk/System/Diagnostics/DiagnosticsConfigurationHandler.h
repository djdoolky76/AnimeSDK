#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Xml { class XmlNode; }

#define SYSTEM_DIAGNOSTICS_DIAGNOSTICSCONFIGURATIONHANDLER_CREATE_OFFSET UNITYSDK_OFFSET(0x1E0B6DC0)
#define SYSTEM_DIAGNOSTICS_DIAGNOSTICSCONFIGURATIONHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E0B6D80)

namespace System::Diagnostics
{
	inline static constexpr unsigned int DiagnosticsConfigurationHandler_TypeDefinitionIndex = 4167;

	class DiagnosticsConfigurationHandler : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_DIAGNOSTICSCONFIGURATIONHANDLER__CTOR_OFFSET))(this);
		}

		::System::Object* Create(::System::Object* parent, ::System::Object* configContext, ::System::Xml::XmlNode* section)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::System::Object*, ::System::Xml::XmlNode*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_DIAGNOSTICSCONFIGURATIONHANDLER_CREATE_OFFSET))(this, parent, configContext, section);
		}
	};
}
