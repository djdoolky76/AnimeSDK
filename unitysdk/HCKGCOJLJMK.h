#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/MiniGameCollectCoinState.h"
#include "unitysdk/System/Object.h"
class GGGOOHNIBNN;
class NDDFLGNNMDK;
class PEEDLCHFAFL;
namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }

#define HCKGCOJLJMK_CLEAR_OFFSET UNITYSDK_OFFSET(0x15C13D00)
#define HCKGCOJLJMK_CTOR_OFFSET UNITYSDK_OFFSET(0x15C13DB0)
#define HCKGCOJLJMK_GET_CONTEXTS_OFFSET UNITYSDK_OFFSET(0x15C13D90)
#define HCKGCOJLJMK_GET_CURRENTSTATE_OFFSET UNITYSDK_OFFSET(0x15C13D50)
#define HCKGCOJLJMK_GET_SERVICES_OFFSET UNITYSDK_OFFSET(0x15C13D70)
#define HCKGCOJLJMK_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x15C134E0)
#define HCKGCOJLJMK_MNMDFHNLAFP_OFFSET UNITYSDK_OFFSET(0x15C137E0)
#define HCKGCOJLJMK_ONALLOC_OFFSET UNITYSDK_OFFSET(0x15C13AA0)
#define HCKGCOJLJMK_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x15C13B40)
#define HCKGCOJLJMK_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x15C13540)
#define HCKGCOJLJMK_SET_CONTEXTS_OFFSET UNITYSDK_OFFSET(0x15C13DA0)
#define HCKGCOJLJMK_SET_CURRENTSTATE_OFFSET UNITYSDK_OFFSET(0x15C13D60)
#define HCKGCOJLJMK_SET_SERVICES_OFFSET UNITYSDK_OFFSET(0x15C13D80)

inline static constexpr unsigned int HCKGCOJLJMK_TypeDefinitionIndex = 76932;

	class HCKGCOJLJMK : public ::System::Object
	{
	public:
		::NDDFLGNNMDK* _Contexts_k__BackingField; // 0x10
		::RPG::PoolDictionary_2<::RPG::Client::LittleGame::FiveDim::MiniGameCollectCoinState, ::GGGOOHNIBNN*>* GDEEJGLLLHA; // 0x18
		::GGGOOHNIBNN* OCJIOHEOJKA; // 0x20
		::PEEDLCHFAFL* _Services_k__BackingField; // 0x28
		::RPG::Client::LittleGame::FiveDim::MiniGameCollectCoinState _CurrentState_k__BackingField; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCKGCOJLJMK_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::PEEDLCHFAFL* a1, ::NDDFLGNNMDK* a2)
		{
			return ((::System::Void(*)(::PVOID, ::PEEDLCHFAFL*, ::NDDFLGNNMDK*))((::PBYTE)hIl2Cpp + HCKGCOJLJMK_KPJGDHLENIP_OFFSET))(this, a1, a2);
		}

		::System::Void PAGKOAEOLKA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCKGCOJLJMK_PAGKOAEOLKA_OFFSET))(this);
		}

		::System::Void MNMDFHNLAFP(::RPG::Client::LittleGame::FiveDim::MiniGameCollectCoinState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::MiniGameCollectCoinState))((::PBYTE)hIl2Cpp + HCKGCOJLJMK_MNMDFHNLAFP_OFFSET))(this, a1);
		}

		::System::Void OnAlloc()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCKGCOJLJMK_ONALLOC_OFFSET))(this);
		}

		::System::Void OnRecycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCKGCOJLJMK_ONRECYCLE_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCKGCOJLJMK_CLEAR_OFFSET))(this);
		}

		::RPG::Client::LittleGame::FiveDim::MiniGameCollectCoinState get_CurrentState()
		{
			return ((::RPG::Client::LittleGame::FiveDim::MiniGameCollectCoinState(*)(::PVOID))((::PBYTE)hIl2Cpp + HCKGCOJLJMK_GET_CURRENTSTATE_OFFSET))(this);
		}

		::System::Void set_CurrentState(::RPG::Client::LittleGame::FiveDim::MiniGameCollectCoinState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::MiniGameCollectCoinState))((::PBYTE)hIl2Cpp + HCKGCOJLJMK_SET_CURRENTSTATE_OFFSET))(this, a1);
		}

		::PEEDLCHFAFL* get_Services()
		{
			return ((::PEEDLCHFAFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCKGCOJLJMK_GET_SERVICES_OFFSET))(this);
		}

		::System::Void set_Services(::PEEDLCHFAFL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PEEDLCHFAFL*))((::PBYTE)hIl2Cpp + HCKGCOJLJMK_SET_SERVICES_OFFSET))(this, a1);
		}

		::NDDFLGNNMDK* get_Contexts()
		{
			return ((::NDDFLGNNMDK*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCKGCOJLJMK_GET_CONTEXTS_OFFSET))(this);
		}

		::System::Void set_Contexts(::NDDFLGNNMDK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NDDFLGNNMDK*))((::PBYTE)hIl2Cpp + HCKGCOJLJMK_SET_CONTEXTS_OFFSET))(this, a1);
		}

	};
