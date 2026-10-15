#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::Client { class RuntimeGroupManager; }
namespace RPG::GameCore { class AdvDestroyGroupEntity; }
namespace RPG::GameCore { class TaskContext; }

#define NKMOFKPAFAJ_CTOR_OFFSET UNITYSDK_OFFSET(0xBC38320)
#define NKMOFKPAFAJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBC38350)
#define NKMOFKPAFAJ_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0xBC383A0)
#define NKMOFKPAFAJ_IJOLENBNDDC_OFFSET UNITYSDK_OFFSET(0xBC38770)
#define NKMOFKPAFAJ_ONSKIP_OFFSET UNITYSDK_OFFSET(0xBC383B0)
#define NKMOFKPAFAJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBC38410)

inline static constexpr unsigned int NKMOFKPAFAJ_TypeDefinitionIndex = 57874;

	class NKMOFKPAFAJ
	{
	public:
		::RPG::Client::RuntimeGroupManager* KDCJFIMPKLP; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvDestroyGroupEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvDestroyGroupEntity*))((::PBYTE)hIl2Cpp + NKMOFKPAFAJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKMOFKPAFAJ_DISPOSE_OFFSET))(this);
		}

		::System::Boolean get_ForceSkip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NKMOFKPAFAJ_GET_FORCESKIP_OFFSET))(this);
		}

		::System::Void OnSkip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKMOFKPAFAJ_ONSKIP_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKMOFKPAFAJ_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void IJOLENBNDDC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + NKMOFKPAFAJ_IJOLENBNDDC_OFFSET))(this, a1, a2);
		}

	};
