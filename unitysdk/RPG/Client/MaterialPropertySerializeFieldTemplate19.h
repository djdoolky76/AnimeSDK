#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MaterialPropertySerializeFieldTemplate18.h"
#include "unitysdk/RPG/Client/MaterialPropertySerializeFieldTemplate1_MaterialPropertySerializeField.h"
namespace System { class Object; }

#define RPG_CLIENT_MATERIALPROPERTYSERIALIZEFIELDTEMPLATE19_CTOR_OFFSET UNITYSDK_OFFSET(0xE02C0E0)
#define RPG_CLIENT_MATERIALPROPERTYSERIALIZEFIELDTEMPLATE19_GETPROPERTYFIELDS_OFFSET UNITYSDK_OFFSET(0xE02BA50)

namespace RPG::Client
{
	inline static constexpr unsigned int MaterialPropertySerializeFieldTemplate19_TypeDefinitionIndex = 72644;

	class MaterialPropertySerializeFieldTemplate19 : public ::RPG::Client::MaterialPropertySerializeFieldTemplate18
	{
	public:
		::RPG::Client::MaterialPropertySerializeFieldTemplate1_MaterialPropertySerializeField Field19; // 0x420
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALPROPERTYSERIALIZEFIELDTEMPLATE19_CTOR_OFFSET))(this);
		}

		::Il2CppArray<::System::Object*>* GetPropertyFields()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALPROPERTYSERIALIZEFIELDTEMPLATE19_GETPROPERTYFIELDS_OFFSET))(this);
		}

	};
}
