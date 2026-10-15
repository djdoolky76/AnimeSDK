#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MaterialPropertySerializeFieldTemplate16.h"
#include "unitysdk/RPG/Client/MaterialPropertySerializeFieldTemplate1_MaterialPropertySerializeField.h"
namespace System { class Object; }

#define RPG_CLIENT_MATERIALPROPERTYSERIALIZEFIELDTEMPLATE17_CTOR_OFFSET UNITYSDK_OFFSET(0xD5D8960)
#define RPG_CLIENT_MATERIALPROPERTYSERIALIZEFIELDTEMPLATE17_GETPROPERTYFIELDS_OFFSET UNITYSDK_OFFSET(0xD5D8360)

namespace RPG::Client
{
	inline static constexpr unsigned int MaterialPropertySerializeFieldTemplate17_TypeDefinitionIndex = 70665;

	class MaterialPropertySerializeFieldTemplate17 : public ::RPG::Client::MaterialPropertySerializeFieldTemplate16
	{
	public:
		::RPG::Client::MaterialPropertySerializeFieldTemplate1_MaterialPropertySerializeField Field17; // 0x3B0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALPROPERTYSERIALIZEFIELDTEMPLATE17_CTOR_OFFSET))(this);
		}

		::Il2CppArray<::System::Object*>* GetPropertyFields()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALPROPERTYSERIALIZEFIELDTEMPLATE17_GETPROPERTYFIELDS_OFFSET))(this);
		}

	};
}
