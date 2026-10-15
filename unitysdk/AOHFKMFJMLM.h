#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityClassifyType.h"
namespace RPG::Client { class RuntimeGroupManager; }
namespace RPG::GameCore { class CreatePropV2; }
namespace RPG::GameCore { class TaskContext; }

#define AOHFKMFJMLM_CBMEGBLGKOP_OFFSET UNITYSDK_OFFSET(0x158AD0C0)
#define AOHFKMFJMLM_COHLNKLMFAB_OFFSET UNITYSDK_OFFSET(0x158ACFF0)
#define AOHFKMFJMLM_CTOR_OFFSET UNITYSDK_OFFSET(0x158ACBD0)
#define AOHFKMFJMLM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x158ACC00)
#define AOHFKMFJMLM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x158ACC50)
#define AOHFKMFJMLM__ONTASKBEGIN_B__2_0_OFFSET UNITYSDK_OFFSET(0x158AD100)

	class AOHFKMFJMLM
	{
	public:
		::RPG::Client::RuntimeGroupManager* KDCJFIMPKLP; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CreatePropV2* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CreatePropV2*))((::PBYTE)hIl2Cpp + AOHFKMFJMLM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOHFKMFJMLM_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOHFKMFJMLM_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Boolean COHLNKLMFAB(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + AOHFKMFJMLM_COHLNKLMFAB_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::EntityClassifyType CBMEGBLGKOP()
		{
			return ((::RPG::GameCore::EntityClassifyType(*)(::PVOID))((::PBYTE)hIl2Cpp + AOHFKMFJMLM_CBMEGBLGKOP_OFFSET))(this);
		}

		::System::Void _OnTaskBegin_b__2_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOHFKMFJMLM__ONTASKBEGIN_B__2_0_OFFSET))(this);
		}

	};
