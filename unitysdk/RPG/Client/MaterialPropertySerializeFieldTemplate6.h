#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MaterialPropertySerializeFieldTemplate1_MaterialPropertySerializeField.h"
#include "unitysdk/RPG/Client/MaterialPropertySerializeFieldTemplate5.h"
namespace System { class Object; }

#define RPG_CLIENT_MATERIALPROPERTYSERIALIZEFIELDTEMPLATE6_CTOR_OFFSET UNITYSDK_OFFSET(0xD5D1B20)
#define RPG_CLIENT_MATERIALPROPERTYSERIALIZEFIELDTEMPLATE6_GETPROPERTYFIELDS_OFFSET UNITYSDK_OFFSET(0xD5D1880)

namespace RPG::Client
{
	inline static constexpr unsigned int MaterialPropertySerializeFieldTemplate6_TypeDefinitionIndex = 70673;

	class MaterialPropertySerializeFieldTemplate6 : public ::RPG::Client::MaterialPropertySerializeFieldTemplate5
	{
	public:
		::RPG::Client::MaterialPropertySerializeFieldTemplate1_MaterialPropertySerializeField Field6; // 0x148
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALPROPERTYSERIALIZEFIELDTEMPLATE6_CTOR_OFFSET))(this);
		}

		::Il2CppArray<::System::Object*>* GetPropertyFields()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALPROPERTYSERIALIZEFIELDTEMPLATE6_GETPROPERTYFIELDS_OFFSET))(this);
		}

	};
}
