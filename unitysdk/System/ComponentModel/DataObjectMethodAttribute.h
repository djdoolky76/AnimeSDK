#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/DataObjectMethodType.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Object; }

#define SYSTEM_COMPONENTMODEL_DATAOBJECTMETHODATTRIBUTE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DB9B140)
#define SYSTEM_COMPONENTMODEL_DATAOBJECTMETHODATTRIBUTE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DB9B1B0)
#define SYSTEM_COMPONENTMODEL_DATAOBJECTMETHODATTRIBUTE_GET_ISDEFAULT_OFFSET UNITYSDK_OFFSET(0x1DB9B120)
#define SYSTEM_COMPONENTMODEL_DATAOBJECTMETHODATTRIBUTE_GET_METHODTYPE_OFFSET UNITYSDK_OFFSET(0x1DB9B130)
#define SYSTEM_COMPONENTMODEL_DATAOBJECTMETHODATTRIBUTE_MATCH_OFFSET UNITYSDK_OFFSET(0x1DB9B1C0)
#define SYSTEM_COMPONENTMODEL_DATAOBJECTMETHODATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DB9B110)
#define SYSTEM_COMPONENTMODEL_DATAOBJECTMETHODATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB9B100)

namespace System::ComponentModel
{
	inline static constexpr unsigned int DataObjectMethodAttribute_TypeDefinitionIndex = 2851;

	class DataObjectMethodAttribute : public ::System::Attribute
	{
	public:
		::System::ComponentModel::DataObjectMethodType _methodType; // 0x10
		::System::Boolean _isDefault; // 0x14

		::System::Void _ctor(::System::ComponentModel::DataObjectMethodType methodType)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::DataObjectMethodType))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DATAOBJECTMETHODATTRIBUTE__CTOR_OFFSET))(this, methodType);
		}

		::System::Void _ctor_1(::System::ComponentModel::DataObjectMethodType methodType, ::System::Boolean isDefault)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::DataObjectMethodType, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DATAOBJECTMETHODATTRIBUTE__CTOR_1_OFFSET))(this, methodType, isDefault);
		}

		::System::Boolean get_IsDefault()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DATAOBJECTMETHODATTRIBUTE_GET_ISDEFAULT_OFFSET))(this);
		}

		::System::ComponentModel::DataObjectMethodType get_MethodType()
		{
			return ((::System::ComponentModel::DataObjectMethodType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DATAOBJECTMETHODATTRIBUTE_GET_METHODTYPE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DATAOBJECTMETHODATTRIBUTE_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DATAOBJECTMETHODATTRIBUTE_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Match(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DATAOBJECTMETHODATTRIBUTE_MATCH_OFFSET))(this, obj);
		}
	};
}
