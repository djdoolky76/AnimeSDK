#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MaterialPropertySerializeFieldTemplate15.h"
#include "unitysdk/RPG/Client/MaterialPropertySerializeFieldTemplate1_MaterialPropertySerializeField.h"
namespace System { class Object; }

#define RPG_CLIENT_MATERIALPROPERTYSERIALIZEFIELDTEMPLATE16_CTOR_OFFSET UNITYSDK_OFFSET(0xD5D8350)
#define RPG_CLIENT_MATERIALPROPERTYSERIALIZEFIELDTEMPLATE16_GETPROPERTYFIELDS_OFFSET UNITYSDK_OFFSET(0xD5D7DA0)

namespace RPG::Client
{
	class MaterialPropertySerializeFieldTemplate16 : public ::RPG::Client::MaterialPropertySerializeFieldTemplate15
	{
	public:
		::RPG::Client::MaterialPropertySerializeFieldTemplate1_MaterialPropertySerializeField Field16; // 0x378
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALPROPERTYSERIALIZEFIELDTEMPLATE16_CTOR_OFFSET))(this);
		}

		::Il2CppArray<::System::Object*>* GetPropertyFields()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALPROPERTYSERIALIZEFIELDTEMPLATE16_GETPROPERTYFIELDS_OFFSET))(this);
		}

	};
}
