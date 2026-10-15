#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MaterialPropertySerializeFieldTemplate12.h"
#include "unitysdk/RPG/Client/MaterialPropertySerializeFieldTemplate1_MaterialPropertySerializeField.h"
namespace System { class Object; }

#define RPG_CLIENT_MATERIALPROPERTYSERIALIZEFIELDTEMPLATE13_CTOR_OFFSET UNITYSDK_OFFSET(0xD5D7300)
#define RPG_CLIENT_MATERIALPROPERTYSERIALIZEFIELDTEMPLATE13_GETPROPERTYFIELDS_OFFSET UNITYSDK_OFFSET(0xD5D6E40)

namespace RPG::Client
{
	class MaterialPropertySerializeFieldTemplate13 : public ::RPG::Client::MaterialPropertySerializeFieldTemplate12
	{
	public:
		::RPG::Client::MaterialPropertySerializeFieldTemplate1_MaterialPropertySerializeField Field13; // 0x2D0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALPROPERTYSERIALIZEFIELDTEMPLATE13_CTOR_OFFSET))(this);
		}

		::Il2CppArray<::System::Object*>* GetPropertyFields()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALPROPERTYSERIALIZEFIELDTEMPLATE13_GETPROPERTYFIELDS_OFFSET))(this);
		}

	};
}
