#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MaterialPropertySerializeFieldTemplate11.h"
#include "unitysdk/RPG/Client/MaterialPropertySerializeFieldTemplate1_MaterialPropertySerializeField.h"
namespace System { class Object; }

#define RPG_CLIENT_MATERIALPROPERTYSERIALIZEFIELDTEMPLATE12_CTOR_OFFSET UNITYSDK_OFFSET(0xD5D6E30)
#define RPG_CLIENT_MATERIALPROPERTYSERIALIZEFIELDTEMPLATE12_GETPROPERTYFIELDS_OFFSET UNITYSDK_OFFSET(0xD5D69C0)

namespace RPG::Client
{
	inline static constexpr unsigned int MaterialPropertySerializeFieldTemplate12_TypeDefinitionIndex = 70660;

	class MaterialPropertySerializeFieldTemplate12 : public ::RPG::Client::MaterialPropertySerializeFieldTemplate11
	{
	public:
		::RPG::Client::MaterialPropertySerializeFieldTemplate1_MaterialPropertySerializeField Field12; // 0x298
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALPROPERTYSERIALIZEFIELDTEMPLATE12_CTOR_OFFSET))(this);
		}

		::Il2CppArray<::System::Object*>* GetPropertyFields()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALPROPERTYSERIALIZEFIELDTEMPLATE12_GETPROPERTYFIELDS_OFFSET))(this);
		}

	};
}
