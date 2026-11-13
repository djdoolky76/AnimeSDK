#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MaterialPropertySerializeFieldTemplate19.h"
#include "unitysdk/RPG/Client/MaterialPropertySerializeFieldTemplate1_MaterialPropertySerializeField.h"
namespace System { class Object; }

#define RPG_CLIENT_MATERIALPROPERTYSERIALIZEFIELDTEMPLATE20_CTOR_OFFSET UNITYSDK_OFFSET(0x1D72CC30)
#define RPG_CLIENT_MATERIALPROPERTYSERIALIZEFIELDTEMPLATE20_GETPROPERTYFIELDS_OFFSET UNITYSDK_OFFSET(0x1D72C550)

namespace RPG::Client
{
	inline static constexpr unsigned int MaterialPropertySerializeFieldTemplate20_TypeDefinitionIndex = 72646;

	class MaterialPropertySerializeFieldTemplate20 : public ::RPG::Client::MaterialPropertySerializeFieldTemplate19
	{
	public:
		::RPG::Client::MaterialPropertySerializeFieldTemplate1_MaterialPropertySerializeField Field20; // 0x458
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALPROPERTYSERIALIZEFIELDTEMPLATE20_CTOR_OFFSET))(this);
		}

		::Il2CppArray<::System::Object*>* GetPropertyFields()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALPROPERTYSERIALIZEFIELDTEMPLATE20_GETPROPERTYFIELDS_OFFSET))(this);
		}

	};
}
