#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::ComponentModel { class IContainer; }
namespace System::ComponentModel::Design::Serialization { class SerializationStore; }

#define SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_COMPONENTSERIALIZATIONSERVICE_DESERIALIZETO_1_OFFSET UNITYSDK_OFFSET(0x1D878290)
#define SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_COMPONENTSERIALIZATIONSERVICE_DESERIALIZETO_2_OFFSET UNITYSDK_OFFSET(0x1D8782C0)
#define SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_COMPONENTSERIALIZATIONSERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D8782F0)

namespace System::ComponentModel::Design::Serialization
{
	inline static constexpr unsigned int ComponentSerializationService_TypeDefinitionIndex = 3096;

	class ComponentSerializationService : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_COMPONENTSERIALIZATIONSERVICE__CTOR_OFFSET))(this);
		}

		::System::Void DeserializeTo_1(::System::ComponentModel::Design::Serialization::SerializationStore* store, ::System::ComponentModel::IContainer* container)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::Design::Serialization::SerializationStore*, ::System::ComponentModel::IContainer*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_COMPONENTSERIALIZATIONSERVICE_DESERIALIZETO_1_OFFSET))(this, store, container);
		}

		::System::Void DeserializeTo_2(::System::ComponentModel::Design::Serialization::SerializationStore* store, ::System::ComponentModel::IContainer* container, ::System::Boolean validateRecycledTypes)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::Design::Serialization::SerializationStore*, ::System::ComponentModel::IContainer*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_COMPONENTSERIALIZATIONSERVICE_DESERIALIZETO_2_OFFSET))(this, store, container, validateRecycledTypes);
		}
	};
}
