#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Unity/Profiling/ProfilerMarker.h"

class PNEFCEGFOMD;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_ENTITYPREWARMSUBSYSTEM_CLEANUPDISPOSEDRUNTIMES_OFFSET UNITYSDK_OFFSET(0x1A07C8E0)
#define MOLEMOLE_ENTITYPREWARMSUBSYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1A07CAF0)
#define MOLEMOLE_ENTITYPREWARMSUBSYSTEM_ONPOSTLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1A07C640)
#define MOLEMOLE_ENTITYPREWARMSUBSYSTEM__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A07CD30)
#define MOLEMOLE_ENTITYPREWARMSUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1A07CCB0)
#define MOLEMOLE_ENTITYPREWARMSUBSYSTEM___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1A07CD70)
#define MOLEMOLE_ENTITYPREWARMSUBSYSTEM___BASE_ONPOSTLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1A07CE00)

namespace MoleMole
{
	inline static constexpr unsigned int EntityPrewarmSubsystem_TypeDefinitionIndex = 43238;

	class EntityPrewarmSubsystem
	{
	public:
		static ::Unity::Profiling::ProfilerMarker* StaticGet_s_ScheduledPrewarmProfilerMarker()
		{
			return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(EntityPrewarmSubsystem_TypeDefinitionIndex)->GetStaticField(0x10580);
		}
		// static const ::System::Int32 DefaultDynamicExpansionCount = 0x4; // 0x0
		::System::Collections::Generic::List_1<::PNEFCEGFOMD*>* _runtimes; // 0x10
		::System::Int32 _prewarmCursor; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ENTITYPREWARMSUBSYSTEM__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_ENTITYPREWARMSUBSYSTEM__CCTOR_OFFSET))();
		}

		::System::Void OnPostLateUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_ENTITYPREWARMSUBSYSTEM_ONPOSTLATEUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ENTITYPREWARMSUBSYSTEM_ONDESTROY_OFFSET))(this);
		}

		::System::Void CleanupDisposedRuntimes()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ENTITYPREWARMSUBSYSTEM_CLEANUPDISPOSEDRUNTIMES_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ENTITYPREWARMSUBSYSTEM___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnPostLateUpdate(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_ENTITYPREWARMSUBSYSTEM___BASE_ONPOSTLATEUPDATE_OFFSET))(this, P0);
		}
	};
}
