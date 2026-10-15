#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MaterialPropertySerializeFieldTemplate1_MaterialPropertySerializeField.h"
#include "unitysdk/RPG/Client/MaterialPropertySerializeFieldTemplate7.h"
namespace System { class Object; }

#define RPG_CLIENT_MATERIALPROPERTYSERIALIZEFIELDTEMPLATE8_CTOR_OFFSET UNITYSDK_OFFSET(0xD5DADF0)
#define RPG_CLIENT_MATERIALPROPERTYSERIALIZEFIELDTEMPLATE8_GETPROPERTYFIELDS_OFFSET UNITYSDK_OFFSET(0xD5DAAB0)

namespace RPG::Client
{
	inline static constexpr unsigned int MaterialPropertySerializeFieldTemplate8_TypeDefinitionIndex = 70675;

	class MaterialPropertySerializeFieldTemplate8 : public ::RPG::Client::MaterialPropertySerializeFieldTemplate7
	{
	public:
		::RPG::Client::MaterialPropertySerializeFieldTemplate1_MaterialPropertySerializeField Field8; // 0x1B8
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALPROPERTYSERIALIZEFIELDTEMPLATE8_CTOR_OFFSET))(this);
		}

		::Il2CppArray<::System::Object*>* GetPropertyFields()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALPROPERTYSERIALIZEFIELDTEMPLATE8_GETPROPERTYFIELDS_OFFSET))(this);
		}

	};
}
