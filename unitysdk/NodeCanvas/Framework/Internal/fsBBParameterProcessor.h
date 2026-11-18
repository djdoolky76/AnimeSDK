#pragma once
#include "unitysdk/unitysdk.h"

namespace ParadoxNotion::Serialization::FullSerializer { class fsData; }
namespace System { class Object; }
namespace System { class Type; }

#define NODECANVAS_FRAMEWORK_INTERNAL_FSBBPARAMETERPROCESSOR_ONBEFOREDESERIALIZEAFTERINSTANCECREATION_OFFSET UNITYSDK_OFFSET(0x1D48E3D0)
#define NODECANVAS_FRAMEWORK_INTERNAL_FSBBPARAMETERPROCESSOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1D48E7C0)

namespace NodeCanvas::Framework::Internal
{
	inline static constexpr unsigned int fsBBParameterProcessor_TypeDefinitionIndex = 30178;

	class fsBBParameterProcessor
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_INTERNAL_FSBBPARAMETERPROCESSOR__CTOR_OFFSET))(this);
		}

		::System::Void OnBeforeDeserializeAfterInstanceCreation(::System::Type* storageType, ::System::Object* instance, ::ParadoxNotion::Serialization::FullSerializer::fsData*& data)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Object*, ::ParadoxNotion::Serialization::FullSerializer::fsData*&))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_INTERNAL_FSBBPARAMETERPROCESSOR_ONBEFOREDESERIALIZEAFTERINSTANCECREATION_OFFSET))(this, storageType, instance, data);
		}
	};
}
