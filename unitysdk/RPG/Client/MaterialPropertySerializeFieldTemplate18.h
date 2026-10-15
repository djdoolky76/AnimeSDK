#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MaterialPropertySerializeFieldTemplate17.h"
#include "unitysdk/RPG/Client/MaterialPropertySerializeFieldTemplate1_MaterialPropertySerializeField.h"
namespace System { class Object; }

#define RPG_CLIENT_MATERIALPROPERTYSERIALIZEFIELDTEMPLATE18_CTOR_OFFSET UNITYSDK_OFFSET(0xD5D8FC0)
#define RPG_CLIENT_MATERIALPROPERTYSERIALIZEFIELDTEMPLATE18_GETPROPERTYFIELDS_OFFSET UNITYSDK_OFFSET(0xD5D8970)

namespace RPG::Client
{
	class MaterialPropertySerializeFieldTemplate18 : public ::RPG::Client::MaterialPropertySerializeFieldTemplate17
	{
	public:
		::RPG::Client::MaterialPropertySerializeFieldTemplate1_MaterialPropertySerializeField Field18; // 0x3E8
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALPROPERTYSERIALIZEFIELDTEMPLATE18_CTOR_OFFSET))(this);
		}

		::Il2CppArray<::System::Object*>* GetPropertyFields()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALPROPERTYSERIALIZEFIELDTEMPLATE18_GETPROPERTYFIELDS_OFFSET))(this);
		}

	};
}
