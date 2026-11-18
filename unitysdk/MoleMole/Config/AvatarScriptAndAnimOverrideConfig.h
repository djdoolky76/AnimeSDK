#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_AVATARSCRIPTANDANIMOVERRIDECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x174F2C00)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AvatarScriptAndAnimOverrideConfig_TypeDefinitionIndex = 72085;

	class AvatarScriptAndAnimOverrideConfig : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>* ScriptAndAnimOverrideParamsDictionary; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AVATARSCRIPTANDANIMOVERRIDECONFIG__CTOR_OFFSET))(this);
		}
	};
}
