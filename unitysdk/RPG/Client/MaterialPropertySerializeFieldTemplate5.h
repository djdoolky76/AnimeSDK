#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MaterialPropertySerializeFieldTemplate1_MaterialPropertySerializeField.h"
#include "unitysdk/RPG/Client/MaterialPropertySerializeFieldTemplate4.h"
namespace System { class Object; }

#define RPG_CLIENT_MATERIALPROPERTYSERIALIZEFIELDTEMPLATE5_CTOR_OFFSET UNITYSDK_OFFSET(0xD5D1870)
#define RPG_CLIENT_MATERIALPROPERTYSERIALIZEFIELDTEMPLATE5_GETPROPERTYFIELDS_OFFSET UNITYSDK_OFFSET(0xD5D1620)

namespace RPG::Client
{
	inline static constexpr unsigned int MaterialPropertySerializeFieldTemplate5_TypeDefinitionIndex = 70672;

	class MaterialPropertySerializeFieldTemplate5 : public ::RPG::Client::MaterialPropertySerializeFieldTemplate4
	{
	public:
		::RPG::Client::MaterialPropertySerializeFieldTemplate1_MaterialPropertySerializeField Field5; // 0x110
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALPROPERTYSERIALIZEFIELDTEMPLATE5_CTOR_OFFSET))(this);
		}

		::Il2CppArray<::System::Object*>* GetPropertyFields()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALPROPERTYSERIALIZEFIELDTEMPLATE5_GETPROPERTYFIELDS_OFFSET))(this);
		}

	};
}
