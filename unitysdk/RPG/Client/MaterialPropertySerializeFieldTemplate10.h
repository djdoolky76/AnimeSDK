#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MaterialPropertySerializeFieldTemplate1_MaterialPropertySerializeField.h"
#include "unitysdk/RPG/Client/MaterialPropertySerializeFieldTemplate9.h"
namespace System { class Object; }

#define RPG_CLIENT_MATERIALPROPERTYSERIALIZEFIELDTEMPLATE10_CTOR_OFFSET UNITYSDK_OFFSET(0xD5D6570)
#define RPG_CLIENT_MATERIALPROPERTYSERIALIZEFIELDTEMPLATE10_GETPROPERTYFIELDS_OFFSET UNITYSDK_OFFSET(0xD5D61A0)

namespace RPG::Client
{
	inline static constexpr unsigned int MaterialPropertySerializeFieldTemplate10_TypeDefinitionIndex = 70658;

	class MaterialPropertySerializeFieldTemplate10 : public ::RPG::Client::MaterialPropertySerializeFieldTemplate9
	{
	public:
		::RPG::Client::MaterialPropertySerializeFieldTemplate1_MaterialPropertySerializeField Field10; // 0x228
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALPROPERTYSERIALIZEFIELDTEMPLATE10_CTOR_OFFSET))(this);
		}

		::Il2CppArray<::System::Object*>* GetPropertyFields()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALPROPERTYSERIALIZEFIELDTEMPLATE10_GETPROPERTYFIELDS_OFFSET))(this);
		}

	};
}
