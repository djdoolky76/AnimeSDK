#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystem/EnviroClipType.h"
#include "unitysdk/System/Object.h"
namespace EnviromentSystem { class EnviroProperty; }
namespace EnviromentSystem { class EnviromentClip; }
namespace EnviromentSystem { class EnviromentProfile; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define ENVIROMENTSYSTEM_ENVIROMENTCLIP_APIDHHKLGEJ_OFFSET UNITYSDK_OFFSET(0x155F31B0)
#define ENVIROMENTSYSTEM_ENVIROMENTCLIP_CTOR_OFFSET UNITYSDK_OFFSET(0x155F4CE0)
#define ENVIROMENTSYSTEM_ENVIROMENTCLIP_DCEDDCPIHPC_OFFSET UNITYSDK_OFFSET(0x15626890)
#define ENVIROMENTSYSTEM_ENVIROMENTCLIP_DJPEJOPFANL_OFFSET UNITYSDK_OFFSET(0x15626740)
#define ENVIROMENTSYSTEM_ENVIROMENTCLIP_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x156269E0)
#define ENVIROMENTSYSTEM_ENVIROMENTCLIP_HLFJDPAIBLE_OFFSET UNITYSDK_OFFSET(0x15627090)
#define ENVIROMENTSYSTEM_ENVIROMENTCLIP_IIDAAPIMLJK_OFFSET UNITYSDK_OFFSET(0x15626D20)
#define ENVIROMENTSYSTEM_ENVIROMENTCLIP_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x15626C50)
#define ENVIROMENTSYSTEM_ENVIROMENTCLIP_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x156265D0)
#define ENVIROMENTSYSTEM_ENVIROMENTCLIP_LGNNAOLPNIP_OFFSET UNITYSDK_OFFSET(0x15626F30)
#define ENVIROMENTSYSTEM_ENVIROMENTCLIP_LPANPOJMENG_OFFSET UNITYSDK_OFFSET(0x15626DE0)
#define ENVIROMENTSYSTEM_ENVIROMENTCLIP_MEALGFHDGDH_OFFSET UNITYSDK_OFFSET(0x15626680)
#define ENVIROMENTSYSTEM_ENVIROMENTCLIP_PPEGOIODAKI_OFFSET UNITYSDK_OFFSET(0x15626A90)

namespace EnviromentSystem
{
	class EnviromentClip : public ::System::Object
	{
	public:
		::EnviromentSystem::EnviroClipType EnviroClipType; // 0x10
		::System::Int32 AsyncLoadCount; // 0x14
		::System::Int32 AsyncLoadTotalCount; // 0x18
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::List_1<::EnviromentSystem::EnviroProperty*>* EnviroProperties; // 0x20
		::EnviromentSystem::EnviromentProfile* _ProfileParent; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTCLIP_CTOR_OFFSET))(this);
		}

		::System::Void APIDHHKLGEJ(::EnviromentSystem::EnviromentProfile* a1, ::System::Collections::Generic::List_1<::EnviromentSystem::EnviroProperty*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentProfile*, ::System::Collections::Generic::List_1<::EnviromentSystem::EnviroProperty*>*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTCLIP_APIDHHKLGEJ_OFFSET))(this, a1, a2);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTCLIP_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void MEALGFHDGDH(::System::Collections::Generic::List_1<::EnviromentSystem::EnviroProperty*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::EnviromentSystem::EnviroProperty*>*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTCLIP_MEALGFHDGDH_OFFSET))(this, a1);
		}

		::System::Void DJPEJOPFANL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTCLIP_DJPEJOPFANL_OFFSET))(this);
		}

		::System::Void DCEDDCPIHPC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTCLIP_DCEDDCPIHPC_OFFSET))(this);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTCLIP_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void PPEGOIODAKI(::EnviromentSystem::EnviromentClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentClip*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTCLIP_PPEGOIODAKI_OFFSET))(this, a1);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTCLIP_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void IIDAAPIMLJK(::UnityEngine::Rendering::CommandBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTCLIP_IIDAAPIMLJK_OFFSET))(this, a1);
		}

		::System::Void LPANPOJMENG(::System::Object* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTCLIP_LPANPOJMENG_OFFSET))(this, a1, a2);
		}

		::System::Void LGNNAOLPNIP(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTCLIP_LGNNAOLPNIP_OFFSET))(this, a1);
		}

		::System::Void HLFJDPAIBLE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTCLIP_HLFJDPAIBLE_OFFSET))(this);
		}

	};
}
