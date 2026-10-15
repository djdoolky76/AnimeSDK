#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace ScenenLightManager { class TransformExportData; }
namespace System { class String; }

#define GPFEAEOEGFA_EXTRAEXPORTDATA_SUBOBJECT_CTOR_OFFSET UNITYSDK_OFFSET(0x15B53CF0)

inline static constexpr unsigned int GPFEAEOEGFA_ExtraExportData_SubObject_TypeDefinitionIndex = 49041;

	class GPFEAEOEGFA_ExtraExportData_SubObject : public ::System::Object
	{
	public:
		::System::String* meshPath; // 0x10
		::ScenenLightManager::TransformExportData* transformData; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPFEAEOEGFA_EXTRAEXPORTDATA_SUBOBJECT_CTOR_OFFSET))(this);
		}

	};
