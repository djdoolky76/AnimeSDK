#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_DESIGNERLOADER_FLUSH_OFFSET UNITYSDK_OFFSET(0x1DEF2370)
#define SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_DESIGNERLOADER_GET_LOADING_OFFSET UNITYSDK_OFFSET(0x1DEF2360)
#define SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_DESIGNERLOADER__CTOR_OFFSET UNITYSDK_OFFSET(0x1DEF2380)

namespace System::ComponentModel::Design::Serialization
{
	inline static constexpr unsigned int DesignerLoader_TypeDefinitionIndex = 3099;

	class DesignerLoader : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_DESIGNERLOADER__CTOR_OFFSET))(this);
		}

		::System::Boolean get_Loading()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_DESIGNERLOADER_GET_LOADING_OFFSET))(this);
		}

		::System::Void Flush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_DESIGNERLOADER_FLUSH_OFFSET))(this);
		}
	};
}
