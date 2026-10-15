#pragma once
#include "unitysdk/unitysdk.h"
class IDGOINOHFEE;
namespace System { class String; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }

#define RPG_CLIENT_STAGELITEINSTANCEITEMRENDERERMONOPLUGIN_CTOR_OFFSET UNITYSDK_OFFSET(0xE122A40)
#define RPG_CLIENT_STAGELITEINSTANCEITEMRENDERERMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0xE1229F0)
#define RPG_CLIENT_STAGELITEINSTANCEITEMRENDERERMONOPLUGIN_REGISTERITEMINSTANCE_OFFSET UNITYSDK_OFFSET(0xE1228B0)
#define RPG_CLIENT_STAGELITEINSTANCEITEMRENDERERMONOPLUGIN_UNREGISTERITEMINSTANCE_OFFSET UNITYSDK_OFFSET(0xE122960)

namespace RPG::Client
{
	class StageLiteInstanceItemRendererMonoPlugin
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGELITEINSTANCEITEMRENDERERMONOPLUGIN_CTOR_OFFSET))(this);
		}

		::IDGOINOHFEE* RegisterItemInstance(::UnityEngine::Mesh* a1, ::System::Int32 a2, ::UnityEngine::Material* a3)
		{
			return ((::IDGOINOHFEE*(*)(::PVOID, ::UnityEngine::Mesh*, ::System::Int32, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGELITEINSTANCEITEMRENDERERMONOPLUGIN_REGISTERITEMINSTANCE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void UnregisterItemInstance(::IDGOINOHFEE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IDGOINOHFEE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGELITEINSTANCEITEMRENDERERMONOPLUGIN_UNREGISTERITEMINSTANCE_OFFSET))(this, a1);
		}

		::System::String* GetTickLodTemplateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGELITEINSTANCEITEMRENDERERMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET))(this);
		}

	};
}
