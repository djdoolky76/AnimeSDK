#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PCBJHAOEOEN.h"

class BCMJNECADGK;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_REALTIMEQTESUBSYSTEM_DESTROYREALTIMEQTE_OFFSET UNITYSDK_OFFSET(0x1A715010)
#define MOLEMOLE_REALTIMEQTESUBSYSTEM_DESTROYTASK_OFFSET UNITYSDK_OFFSET(0x1A714BF0)
#define MOLEMOLE_REALTIMEQTESUBSYSTEM_GETTASKBYTAG_OFFSET UNITYSDK_OFFSET(0x1A7149C0)
#define MOLEMOLE_REALTIMEQTESUBSYSTEM_GET_ENABLEUPDATEWHENGAMEPAUSE_OFFSET UNITYSDK_OFFSET(0x1A714D10)
#define MOLEMOLE_REALTIMEQTESUBSYSTEM_ISTASKWORKING_OFFSET UNITYSDK_OFFSET(0x1A714AA0)
#define MOLEMOLE_REALTIMEQTESUBSYSTEM_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x1A714D20)
#define MOLEMOLE_REALTIMEQTESUBSYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1A714D60)
#define MOLEMOLE_REALTIMEQTESUBSYSTEM_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1A714DB0)
#define MOLEMOLE_REALTIMEQTESUBSYSTEM_STARTREALTIMEQTE_OFFSET UNITYSDK_OFFSET(0x1A714EC0)
#define MOLEMOLE_REALTIMEQTESUBSYSTEM_TICKTASK_OFFSET UNITYSDK_OFFSET(0x1A714B00)
#define MOLEMOLE_REALTIMEQTESUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1A715060)
#define MOLEMOLE_REALTIMEQTESUBSYSTEM___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x1A715070)
#define MOLEMOLE_REALTIMEQTESUBSYSTEM___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1A715100)
#define MOLEMOLE_REALTIMEQTESUBSYSTEM___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1A715190)

namespace MoleMole
{
	inline static constexpr unsigned int RealtimeQTESubSystem_TypeDefinitionIndex = 45942;

	class RealtimeQTESubSystem
	{
	public:
		::BCMJNECADGK* _curTask; // 0x10
		::System::Boolean IsBtnWorkable; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_REALTIMEQTESUBSYSTEM__CTOR_OFFSET))(this);
		}

		::BCMJNECADGK* GetTaskByTag(::System::String* tag)
		{
			return ((::BCMJNECADGK*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_REALTIMEQTESUBSYSTEM_GETTASKBYTAG_OFFSET))(this, tag);
		}

		::System::Boolean IsTaskWorking()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_REALTIMEQTESUBSYSTEM_ISTASKWORKING_OFFSET))(this);
		}

		::System::Void TickTask()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_REALTIMEQTESUBSYSTEM_TICKTASK_OFFSET))(this);
		}

		::System::Void DestroyTask(::System::String* customTag)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_REALTIMEQTESUBSYSTEM_DESTROYTASK_OFFSET))(this, customTag);
		}

		::System::Boolean get_EnableUpdateWhenGamePause()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_REALTIMEQTESUBSYSTEM_GET_ENABLEUPDATEWHENGAMEPAUSE_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_REALTIMEQTESUBSYSTEM_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_REALTIMEQTESUBSYSTEM_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_REALTIMEQTESUBSYSTEM_ONUPDATE_OFFSET))(this);
		}

		::System::Void StartRealtimeQTE(::System::String* key, ::System::String* customTag, ::System::Action_1<::PCBJHAOEOEN>* OnQTEFinished, ::System::Int32 triggerEntityID)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action_1<::PCBJHAOEOEN>*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_REALTIMEQTESUBSYSTEM_STARTREALTIMEQTE_OFFSET))(this, key, customTag, OnQTEFinished, triggerEntityID);
		}

		::System::Void DestroyRealtimeQTE(::System::String* customTag)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_REALTIMEQTESUBSYSTEM_DESTROYREALTIMEQTE_OFFSET))(this, customTag);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_REALTIMEQTESUBSYSTEM___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_REALTIMEQTESUBSYSTEM___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_REALTIMEQTESUBSYSTEM___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
