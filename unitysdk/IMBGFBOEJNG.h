#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ThreadTaskType.h"
#include "unitysdk/KKIGPBMNMMB.h"
class KMEOMKNPNCC;
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class ThreadTaskConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IMBGFBOEJNG_COLLECT_OFFSET UNITYSDK_OFFSET(0x164C07C0)
#define IMBGFBOEJNG_CTOR_OFFSET UNITYSDK_OFFSET(0x164C05A0)
#define IMBGFBOEJNG_DISPOSE_OFFSET UNITYSDK_OFFSET(0x164C0700)
#define IMBGFBOEJNG_FLUSH_OFFSET UNITYSDK_OFFSET(0x164C0820)
#define IMBGFBOEJNG_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x164C0960)
#define IMBGFBOEJNG_HFEBDNEPEKC_OFFSET UNITYSDK_OFFSET(0x164C0900)
#define IMBGFBOEJNG_IIFINBAGBDG_OFFSET UNITYSDK_OFFSET(0x164C06A0)
#define IMBGFBOEJNG_KEFGLLPDHLK_OFFSET UNITYSDK_OFFSET(0x164C0650)
#define IMBGFBOEJNG_LHOGKMNEGGP_OFFSET UNITYSDK_OFFSET(0x164C0750)
#define IMBGFBOEJNG_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x164C08C0)
#define IMBGFBOEJNG_ONENABLE_OFFSET UNITYSDK_OFFSET(0x164C0880)
#define IMBGFBOEJNG_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0x164C0970)

inline static constexpr unsigned int IMBGFBOEJNG_TypeDefinitionIndex = 71072;

	class IMBGFBOEJNG
	{
	public:
		::RPG::GameCore::ThreadTaskConfig* _Config_k__BackingField; // 0x30
		::RPG::GameCore::ThreadTaskType ADBKFDIGBOO; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMBGFBOEJNG_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMBGFBOEJNG_DISPOSE_OFFSET))(this);
		}

		::System::Void LHOGKMNEGGP(::RPG::GameCore::AdventureCharacterController* a1, ::KKIGPBMNMMB a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureCharacterController*, ::KKIGPBMNMMB))((::PBYTE)hIl2Cpp + IMBGFBOEJNG_LHOGKMNEGGP_OFFSET))(this, a1, a2);
		}

		::System::Void Collect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMBGFBOEJNG_COLLECT_OFFSET))(this);
		}

		::System::Void Flush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMBGFBOEJNG_FLUSH_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMBGFBOEJNG_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMBGFBOEJNG_ONDISABLE_OFFSET))(this);
		}

		::System::Void HFEBDNEPEKC(::System::Collections::Generic::List_1<::KMEOMKNPNCC*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::KMEOMKNPNCC*>*))((::PBYTE)hIl2Cpp + IMBGFBOEJNG_HFEBDNEPEKC_OFFSET))(this, a1);
		}

		::System::Void KEFGLLPDHLK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMBGFBOEJNG_KEFGLLPDHLK_OFFSET))(this);
		}

		::System::Void IIFINBAGBDG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMBGFBOEJNG_IIFINBAGBDG_OFFSET))(this);
		}

		::RPG::GameCore::ThreadTaskConfig* get_Config()
		{
			return ((::RPG::GameCore::ThreadTaskConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + IMBGFBOEJNG_GET_CONFIG_OFFSET))(this);
		}

		::System::Void set_Config(::RPG::GameCore::ThreadTaskConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ThreadTaskConfig*))((::PBYTE)hIl2Cpp + IMBGFBOEJNG_SET_CONFIG_OFFSET))(this, a1);
		}

	};
