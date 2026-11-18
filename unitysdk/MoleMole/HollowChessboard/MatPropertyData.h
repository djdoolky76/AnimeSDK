#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/ShaderPropertyType.h"

namespace System { class String; }

#define MOLEMOLE_HOLLOWCHESSBOARD_MATPROPERTYDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1A908700)
#define MOLEMOLE_HOLLOWCHESSBOARD_MATPROPERTYDATA_GET_SHADERPROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0x1A9086E0)
#define MOLEMOLE_HOLLOWCHESSBOARD_MATPROPERTYDATA_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1A908710)
#define MOLEMOLE_HOLLOWCHESSBOARD_MATPROPERTYDATA_SET_SHADERPROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0x1A9086F0)
#define MOLEMOLE_HOLLOWCHESSBOARD_MATPROPERTYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A908390)

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int MatPropertyData_TypeDefinitionIndex = 69551;

	class MatPropertyData : public ::System::Object
	{
	public:
		::System::String* _Name_k__BackingField; // 0x10
		::System::Boolean NeedSave; // 0x18
		::System::Byte _padding0[0x3];
		::UnityEngine::Rendering::ShaderPropertyType _ShaderPropertyType_k__BackingField; // 0x1C

		::System::Void _ctor(::UnityEngine::Rendering::ShaderPropertyType shaderPropertyType, ::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ShaderPropertyType, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_MATPROPERTYDATA__CTOR_OFFSET))(this, shaderPropertyType, name);
		}

		::UnityEngine::Rendering::ShaderPropertyType get_ShaderPropertyType()
		{
			return ((::UnityEngine::Rendering::ShaderPropertyType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_MATPROPERTYDATA_GET_SHADERPROPERTYTYPE_OFFSET))(this);
		}

		::System::Void set_ShaderPropertyType(::UnityEngine::Rendering::ShaderPropertyType value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ShaderPropertyType))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_MATPROPERTYDATA_SET_SHADERPROPERTYTYPE_OFFSET))(this, value);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_MATPROPERTYDATA_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_MATPROPERTYDATA_SET_NAME_OFFSET))(this, value);
		}
	};
}
