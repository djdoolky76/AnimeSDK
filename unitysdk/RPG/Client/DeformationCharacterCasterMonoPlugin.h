#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_DEFORMATIONCHARACTERCASTERMONOPLUGIN_BIND_OFFSET UNITYSDK_OFFSET(0xCBF0D10)
#define RPG_CLIENT_DEFORMATIONCHARACTERCASTERMONOPLUGIN_CTOR_OFFSET UNITYSDK_OFFSET(0xCBF0E00)
#define RPG_CLIENT_DEFORMATIONCHARACTERCASTERMONOPLUGIN_GET_REGISTEREDCASTERINFOS_OFFSET UNITYSDK_OFFSET(0xCBF0DF0)
#define RPG_CLIENT_DEFORMATIONCHARACTERCASTERMONOPLUGIN_UNBIND_OFFSET UNITYSDK_OFFSET(0xCBF0D90)

namespace RPG::Client
{
	inline static constexpr unsigned int DeformationCharacterCasterMonoPlugin_TypeDefinitionIndex = 70269;

	class DeformationCharacterCasterMonoPlugin
	{
	public:
		::System::Boolean OverrideAutoBind; // 0x30
		::System::Byte _padding0[0x7];
		::System::String* BoneName; // 0x38
		::System::Collections::Generic::List_1<::System::Object*>* DeformationCasterList; // 0x40
		::System::Collections::Generic::List_1<::System::Object*>* _RegisteredCasterInfos_k__BackingField; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEFORMATIONCHARACTERCASTERMONOPLUGIN_CTOR_OFFSET))(this);
		}

		::System::Void Bind(::UnityEngine::GameObject* a1, ::Il2CppArray<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEFORMATIONCHARACTERCASTERMONOPLUGIN_BIND_OFFSET))(this, a1, a2);
		}

		::System::Void Unbind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEFORMATIONCHARACTERCASTERMONOPLUGIN_UNBIND_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Object*>* get_RegisteredCasterInfos()
		{
			return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEFORMATIONCHARACTERCASTERMONOPLUGIN_GET_REGISTEREDCASTERINFOS_OFFSET))(this);
		}

	};
}
