#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MaterialPropertySerializeFieldTemplate1_MaterialPropertySerializeField.h"
#include "unitysdk/RPG/Client/MaterialPropertySerializeFieldTemplate3.h"
namespace System { class Object; }

#define RPG_CLIENT_MATERIALPROPERTYSERIALIZEFIELDTEMPLATE4_CTOR_OFFSET UNITYSDK_OFFSET(0xD5DA290)
#define RPG_CLIENT_MATERIALPROPERTYSERIALIZEFIELDTEMPLATE4_GETPROPERTYFIELDS_OFFSET UNITYSDK_OFFSET(0xD5DA090)

namespace RPG::Client
{
	class MaterialPropertySerializeFieldTemplate4 : public ::RPG::Client::MaterialPropertySerializeFieldTemplate3
	{
	public:
		::RPG::Client::MaterialPropertySerializeFieldTemplate1_MaterialPropertySerializeField Field4; // 0xD8
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALPROPERTYSERIALIZEFIELDTEMPLATE4_CTOR_OFFSET))(this);
		}

		::Il2CppArray<::System::Object*>* GetPropertyFields()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALPROPERTYSERIALIZEFIELDTEMPLATE4_GETPROPERTYFIELDS_OFFSET))(this);
		}

	};
}
