#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/EditorBrowsableState.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Object; }

#define SYSTEM_COMPONENTMODEL_EDITORBROWSABLEATTRIBUTE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1CFA54C0)
#define SYSTEM_COMPONENTMODEL_EDITORBROWSABLEATTRIBUTE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1CFA5520)
#define SYSTEM_COMPONENTMODEL_EDITORBROWSABLEATTRIBUTE_GET_STATE_OFFSET UNITYSDK_OFFSET(0x1CFA54B0)
#define SYSTEM_COMPONENTMODEL_EDITORBROWSABLEATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CFA54A0)
#define SYSTEM_COMPONENTMODEL_EDITORBROWSABLEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFA5490)

namespace System::ComponentModel
{
	inline static constexpr unsigned int EditorBrowsableAttribute_TypeDefinitionIndex = 2873;

	class EditorBrowsableAttribute : public ::System::Attribute
	{
	public:
		::System::ComponentModel::EditorBrowsableState browsableState; // 0x10

		::System::Void _ctor(::System::ComponentModel::EditorBrowsableState state)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::EditorBrowsableState))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EDITORBROWSABLEATTRIBUTE__CTOR_OFFSET))(this, state);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EDITORBROWSABLEATTRIBUTE__CTOR_1_OFFSET))(this);
		}

		::System::ComponentModel::EditorBrowsableState get_State()
		{
			return ((::System::ComponentModel::EditorBrowsableState(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EDITORBROWSABLEATTRIBUTE_GET_STATE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EDITORBROWSABLEATTRIBUTE_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EDITORBROWSABLEATTRIBUTE_GETHASHCODE_OFFSET))(this);
		}
	};
}
