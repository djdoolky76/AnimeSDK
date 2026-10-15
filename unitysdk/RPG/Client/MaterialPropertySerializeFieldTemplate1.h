#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MaterialPropertySerializeFieldTemplate1_MaterialPropertySerializeField.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace System { class Object; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_MATERIALPROPERTYSERIALIZEFIELDTEMPLATE1_CTOR_OFFSET UNITYSDK_OFFSET(0xD5CD510)
#define RPG_CLIENT_MATERIALPROPERTYSERIALIZEFIELDTEMPLATE1_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD5CD3B0)
#define RPG_CLIENT_MATERIALPROPERTYSERIALIZEFIELDTEMPLATE1_GETPROPERTYFIELDS_OFFSET UNITYSDK_OFFSET(0xD5CD400)

namespace RPG::Client
{
	inline static constexpr unsigned int MaterialPropertySerializeFieldTemplate1_TypeDefinitionIndex = 70656;

	class MaterialPropertySerializeFieldTemplate1 : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Renderer* Renderer; // 0x18
		::System::Int32 MaterialIndex; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::Client::MaterialPropertySerializeFieldTemplate1_MaterialPropertySerializeField Field1; // 0x28
		::Il2CppArray<::System::Object*>* PABBMLCKLDH; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALPROPERTYSERIALIZEFIELDTEMPLATE1_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALPROPERTYSERIALIZEFIELDTEMPLATE1_DISPOSE_OFFSET))(this);
		}

		::Il2CppArray<::System::Object*>* GetPropertyFields()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALPROPERTYSERIALIZEFIELDTEMPLATE1_GETPROPERTYFIELDS_OFFSET))(this);
		}

	};
}
