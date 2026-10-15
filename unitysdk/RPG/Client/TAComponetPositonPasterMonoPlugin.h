#pragma once
#include "unitysdk/unitysdk.h"
class NILFOJGCPHI;
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_TACOMPONETPOSITONPASTERMONOPLUGIN_CTOR_OFFSET UNITYSDK_OFFSET(0xE17FF30)
#define RPG_CLIENT_TACOMPONETPOSITONPASTERMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0xE17FEE0)

namespace RPG::Client
{
	inline static constexpr unsigned int TAComponetPositonPasterMonoPlugin_TypeDefinitionIndex = 70764;

	class TAComponetPositonPasterMonoPlugin
	{
	public:
		::UnityEngine::GameObject* referencePos; // 0x30
		::Il2CppArray<::UnityEngine::GameObject*>* flotageObjects; // 0x38
		::System::Boolean pastPlayerPos; // 0x40
		::System::Byte _padding0[0x7];
		::UnityEngine::GameObject* posReceiver; // 0x48
		::System::Boolean projectionDebug; // 0x50
		::System::Byte _padding1[0x7];
		::UnityEngine::GameObject* DebugObj; // 0x58
		::NILFOJGCPHI* _Behavior; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TACOMPONETPOSITONPASTERMONOPLUGIN_CTOR_OFFSET))(this);
		}

		::System::String* GetTickLodTemplateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TACOMPONETPOSITONPASTERMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET))(this);
		}

	};
}
