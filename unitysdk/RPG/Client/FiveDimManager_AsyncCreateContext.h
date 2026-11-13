#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CKOLIMBFFBD;
class PEEDLCHFAFL;
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::Client { class FiveDimGameInstance; }
namespace System { class Action; }

#define RPG_CLIENT_FIVEDIMMANAGER_ASYNCCREATECONTEXT_CLEAR_OFFSET UNITYSDK_OFFSET(0x1B333510)
#define RPG_CLIENT_FIVEDIMMANAGER_ASYNCCREATECONTEXT_CTOR_OFFSET UNITYSDK_OFFSET(0x1B333600)
#define RPG_CLIENT_FIVEDIMMANAGER_ASYNCCREATECONTEXT_INIT_OFFSET UNITYSDK_OFFSET(0x1B32CAA0)
#define RPG_CLIENT_FIVEDIMMANAGER_ASYNCCREATECONTEXT_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1B333570)
#define RPG_CLIENT_FIVEDIMMANAGER_ASYNCCREATECONTEXT_ONCREATEFINISH_OFFSET UNITYSDK_OFFSET(0x1B32CE20)
#define RPG_CLIENT_FIVEDIMMANAGER_ASYNCCREATECONTEXT_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1B3335C0)
#define RPG_CLIENT_FIVEDIMMANAGER_ASYNCCREATECONTEXT__BUILDCREATELIST_OFFSET UNITYSDK_OFFSET(0x1B333330)

namespace RPG::Client
{
	inline static constexpr unsigned int FiveDimManager_AsyncCreateContext_TypeDefinitionIndex = 61828;

	class FiveDimManager_AsyncCreateContext : public ::System::Object
	{
	public:
		::RPG::PoolList_1<::CKOLIMBFFBD*>* PendingCreateNodes; // 0x10
		::System::Action* OnCreateFinishAction; // 0x18
		::RPG::Client::FiveDimGameInstance* GameInstance; // 0x20
		::PEEDLCHFAFL* Services; // 0x28
		::System::Int32 CreateIndex; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_ASYNCCREATECONTEXT_CTOR_OFFSET))(this);
		}

		::System::Void Init(::RPG::Client::FiveDimGameInstance* a1, ::PEEDLCHFAFL* a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FiveDimGameInstance*, ::PEEDLCHFAFL*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_ASYNCCREATECONTEXT_INIT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnCreateFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_ASYNCCREATECONTEXT_ONCREATEFINISH_OFFSET))(this);
		}

		::System::Void _BuildCreateList(::System::UInt32 a1, ::PEEDLCHFAFL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::PEEDLCHFAFL*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_ASYNCCREATECONTEXT__BUILDCREATELIST_OFFSET))(this, a1, a2);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_ASYNCCREATECONTEXT_CLEAR_OFFSET))(this);
		}

		::System::Void OnAlloc()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_ASYNCCREATECONTEXT_ONALLOC_OFFSET))(this);
		}

		::System::Void OnRecycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_ASYNCCREATECONTEXT_ONRECYCLE_OFFSET))(this);
		}

	};
}
