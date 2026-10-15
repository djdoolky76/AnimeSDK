#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityClassifyType.h"
namespace RPG::Client { class RuntimeGroupManager; }
namespace RPG::GameCore { class CreateProp; }
namespace RPG::GameCore { class TaskContext; }

#define AOFPKKAHFIM_CBMEGBLGKOP_OFFSET UNITYSDK_OFFSET(0x158AA5F0)
#define AOFPKKAHFIM_COHLNKLMFAB_OFFSET UNITYSDK_OFFSET(0x158AA440)
#define AOFPKKAHFIM_CTOR_OFFSET UNITYSDK_OFFSET(0x158AA0C0)
#define AOFPKKAHFIM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x158AA0F0)
#define AOFPKKAHFIM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x158AA140)

	class AOFPKKAHFIM
	{
	public:
		::RPG::Client::RuntimeGroupManager* KDCJFIMPKLP; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CreateProp* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CreateProp*))((::PBYTE)hIl2Cpp + AOFPKKAHFIM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOFPKKAHFIM_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOFPKKAHFIM_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Boolean COHLNKLMFAB(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + AOFPKKAHFIM_COHLNKLMFAB_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::EntityClassifyType CBMEGBLGKOP()
		{
			return ((::RPG::GameCore::EntityClassifyType(*)(::PVOID))((::PBYTE)hIl2Cpp + AOFPKKAHFIM_CBMEGBLGKOP_OFFSET))(this);
		}

	};
