#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/ReadOnlyCollectionBase.h"

namespace System { class String; }
namespace System::ComponentModel { class IComponent; }

#define SYSTEM_COMPONENTMODEL_COMPONENTCOLLECTION_COPYTO_OFFSET UNITYSDK_OFFSET(0x1DADA340)
#define SYSTEM_COMPONENTMODEL_COMPONENTCOLLECTION_GET_ITEM_1_OFFSET UNITYSDK_OFFSET(0x1DADA210)
#define SYSTEM_COMPONENTMODEL_COMPONENTCOLLECTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1DAD9B10)
#define SYSTEM_COMPONENTMODEL_COMPONENTCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1DAD9A50)

namespace System::ComponentModel
{
	inline static constexpr unsigned int ComponentCollection_TypeDefinitionIndex = 2838;

	class ComponentCollection : public ::System::Collections::ReadOnlyCollectionBase
	{
	public:
		::System::Void _ctor(::Il2CppArray<::System::ComponentModel::IComponent*>* components)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::ComponentModel::IComponent*>*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_COMPONENTCOLLECTION__CTOR_OFFSET))(this, components);
		}

		::System::ComponentModel::IComponent* get_Item(::System::String* name)
		{
			return ((::System::ComponentModel::IComponent*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_COMPONENTCOLLECTION_GET_ITEM_OFFSET))(this, name);
		}

		::System::ComponentModel::IComponent* get_Item_1(::System::Int32 index)
		{
			return ((::System::ComponentModel::IComponent*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_COMPONENTCOLLECTION_GET_ITEM_1_OFFSET))(this, index);
		}

		::System::Void CopyTo(::Il2CppArray<::System::ComponentModel::IComponent*>* array, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::ComponentModel::IComponent*>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_COMPONENTCOLLECTION_COPYTO_OFFSET))(this, array, index);
		}
	};
}
