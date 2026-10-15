#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MaterialPropertySerializeFieldTemplate10.h"
#include "unitysdk/RPG/Client/MaterialPropertySerializeFieldTemplate1_MaterialPropertySerializeField.h"
namespace System { class Object; }

#define RPG_CLIENT_MATERIALPROPERTYSERIALIZEFIELDTEMPLATE11_CTOR_OFFSET UNITYSDK_OFFSET(0xD5D69B0)
#define RPG_CLIENT_MATERIALPROPERTYSERIALIZEFIELDTEMPLATE11_GETPROPERTYFIELDS_OFFSET UNITYSDK_OFFSET(0xD5D6590)

namespace RPG::Client
{
	inline static constexpr unsigned int MaterialPropertySerializeFieldTemplate11_TypeDefinitionIndex = 70659;

	class MaterialPropertySerializeFieldTemplate11 : public ::RPG::Client::MaterialPropertySerializeFieldTemplate10
	{
	public:
		::RPG::Client::MaterialPropertySerializeFieldTemplate1_MaterialPropertySerializeField Field11; // 0x260
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALPROPERTYSERIALIZEFIELDTEMPLATE11_CTOR_OFFSET))(this);
		}

		::Il2CppArray<::System::Object*>* GetPropertyFields()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALPROPERTYSERIALIZEFIELDTEMPLATE11_GETPROPERTYFIELDS_OFFSET))(this);
		}

	};
}
