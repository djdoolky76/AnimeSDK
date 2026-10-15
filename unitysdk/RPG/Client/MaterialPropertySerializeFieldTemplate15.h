#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MaterialPropertySerializeFieldTemplate14.h"
#include "unitysdk/RPG/Client/MaterialPropertySerializeFieldTemplate1_MaterialPropertySerializeField.h"
namespace System { class Object; }

#define RPG_CLIENT_MATERIALPROPERTYSERIALIZEFIELDTEMPLATE15_CTOR_OFFSET UNITYSDK_OFFSET(0xD5D7D90)
#define RPG_CLIENT_MATERIALPROPERTYSERIALIZEFIELDTEMPLATE15_GETPROPERTYFIELDS_OFFSET UNITYSDK_OFFSET(0xD5D7830)

namespace RPG::Client
{
	class MaterialPropertySerializeFieldTemplate15 : public ::RPG::Client::MaterialPropertySerializeFieldTemplate14
	{
	public:
		::RPG::Client::MaterialPropertySerializeFieldTemplate1_MaterialPropertySerializeField Field15; // 0x340
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALPROPERTYSERIALIZEFIELDTEMPLATE15_CTOR_OFFSET))(this);
		}

		::Il2CppArray<::System::Object*>* GetPropertyFields()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALPROPERTYSERIALIZEFIELDTEMPLATE15_GETPROPERTYFIELDS_OFFSET))(this);
		}

	};
}
