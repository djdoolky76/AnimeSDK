#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GlobalShowBillboard; }
namespace RPG::GameCore { class TaskContext; }

#define MHBLBACLBKC_CTOR_OFFSET UNITYSDK_OFFSET(0xB92FB40)
#define MHBLBACLBKC_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0xB92FB70)
#define MHBLBACLBKC_KICDLJPCGAI_OFFSET UNITYSDK_OFFSET(0xB92FBD0)
#define MHBLBACLBKC_ONSKIP_OFFSET UNITYSDK_OFFSET(0xB92FB80)
#define MHBLBACLBKC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB92FD40)

inline static constexpr unsigned int MHBLBACLBKC_TypeDefinitionIndex = 58138;

	class MHBLBACLBKC
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::GlobalShowBillboard* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::GlobalShowBillboard*))((::PBYTE)hIl2Cpp + MHBLBACLBKC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_ForceSkip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MHBLBACLBKC_GET_FORCESKIP_OFFSET))(this);
		}

		::System::Void OnSkip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHBLBACLBKC_ONSKIP_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHBLBACLBKC_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void KICDLJPCGAI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHBLBACLBKC_KICDLJPCGAI_OFFSET))(this);
		}

	};
