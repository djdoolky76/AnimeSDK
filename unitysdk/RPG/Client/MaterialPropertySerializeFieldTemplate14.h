#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MaterialPropertySerializeFieldTemplate13.h"
#include "unitysdk/RPG/Client/MaterialPropertySerializeFieldTemplate1_MaterialPropertySerializeField.h"
namespace System { class Object; }

#define RPG_CLIENT_MATERIALPROPERTYSERIALIZEFIELDTEMPLATE14_CTOR_OFFSET UNITYSDK_OFFSET(0x1D72A590)
#define RPG_CLIENT_MATERIALPROPERTYSERIALIZEFIELDTEMPLATE14_GETPROPERTYFIELDS_OFFSET UNITYSDK_OFFSET(0x1D72A080)

namespace RPG::Client
{
	inline static constexpr unsigned int MaterialPropertySerializeFieldTemplate14_TypeDefinitionIndex = 72639;

	class MaterialPropertySerializeFieldTemplate14 : public ::RPG::Client::MaterialPropertySerializeFieldTemplate13
	{
	public:
		::RPG::Client::MaterialPropertySerializeFieldTemplate1_MaterialPropertySerializeField Field14; // 0x308
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALPROPERTYSERIALIZEFIELDTEMPLATE14_CTOR_OFFSET))(this);
		}

		::Il2CppArray<::System::Object*>* GetPropertyFields()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALPROPERTYSERIALIZEFIELDTEMPLATE14_GETPROPERTYFIELDS_OFFSET))(this);
		}

	};
}
