#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MaterialPropertySerializeFieldTemplate1_MaterialPropertySerializeField.h"
#include "unitysdk/RPG/Client/MaterialPropertySerializeFieldTemplate2.h"
namespace System { class Object; }

#define RPG_CLIENT_MATERIALPROPERTYSERIALIZEFIELDTEMPLATE3_CTOR_OFFSET UNITYSDK_OFFSET(0xD5D1400)
#define RPG_CLIENT_MATERIALPROPERTYSERIALIZEFIELDTEMPLATE3_GETPROPERTYFIELDS_OFFSET UNITYSDK_OFFSET(0xD5D1250)

namespace RPG::Client
{
	inline static constexpr unsigned int MaterialPropertySerializeFieldTemplate3_TypeDefinitionIndex = 70670;

	class MaterialPropertySerializeFieldTemplate3 : public ::RPG::Client::MaterialPropertySerializeFieldTemplate2
	{
	public:
		::RPG::Client::MaterialPropertySerializeFieldTemplate1_MaterialPropertySerializeField Field3; // 0xA0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALPROPERTYSERIALIZEFIELDTEMPLATE3_CTOR_OFFSET))(this);
		}

		::Il2CppArray<::System::Object*>* GetPropertyFields()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALPROPERTYSERIALIZEFIELDTEMPLATE3_GETPROPERTYFIELDS_OFFSET))(this);
		}

	};
}
