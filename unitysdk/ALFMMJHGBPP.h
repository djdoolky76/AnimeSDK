#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FarmElementPropState.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
namespace RPG::Client { class MonoEffectManager; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Coroutine; }

#define ALFMMJHGBPP_AEGFBELAAIO_OFFSET UNITYSDK_OFFSET(0x15566850)
#define ALFMMJHGBPP_BNFEBFALIOH_OFFSET UNITYSDK_OFFSET(0x155668A0)
#define ALFMMJHGBPP_CBLHCCPEGJP_OFFSET UNITYSDK_OFFSET(0x15566AE0)
#define ALFMMJHGBPP_CJMKJCDDPMO_OFFSET UNITYSDK_OFFSET(0x155669A0)
#define ALFMMJHGBPP_CTOR_OFFSET UNITYSDK_OFFSET(0x15566FB0)
#define ALFMMJHGBPP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15566780)
#define ALFMMJHGBPP_GET_ISFARMELEMENTACTIVE_OFFSET UNITYSDK_OFFSET(0x15566F90)
#define ALFMMJHGBPP_GFLCEFGKILL_OFFSET UNITYSDK_OFFSET(0x15566E80)
#define ALFMMJHGBPP_KGKALOFGKMO_OFFSET UNITYSDK_OFFSET(0x15566DD0)
#define ALFMMJHGBPP_KLIGDFDIDFC_OFFSET UNITYSDK_OFFSET(0x15566C20)
#define ALFMMJHGBPP_LGNMBLJJPKG_OFFSET UNITYSDK_OFFSET(0x15566A60)
#define ALFMMJHGBPP_PMCPJPKNAOI_OFFSET UNITYSDK_OFFSET(0x155667D0)
#define ALFMMJHGBPP_PMKMCKGNGJE_OFFSET UNITYSDK_OFFSET(0x15566BA0)
#define ALFMMJHGBPP_SET_ISFARMELEMENTACTIVE_OFFSET UNITYSDK_OFFSET(0x15566FA0)
#define ALFMMJHGBPP___DOACTIVE_B__7_0_OFFSET UNITYSDK_OFFSET(0x15566FF0)

	class ALFMMJHGBPP : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::UnityEngine::Coroutine* PBEEOEKJGIN; // 0x18
		::System::Collections::Generic::List_1<::System::String*>* BJALAOKPDEB; // 0x20
		::System::String* DKHAGHGEFPI; // 0x28
		::System::String* BNAINGMFJFH; // 0x30
		::UnityEngine::Coroutine* KKJKKOOMFDO; // 0x38
		::System::String* PIFEELOCJMM; // 0x40
		::System::String* FBJABBMJHNK; // 0x48
		::System::String* GMLDDGKDJLL; // 0x50
		::System::Collections::Generic::List_1<::System::String*>* PMJBNAFPDKM; // 0x58
		::System::String* DEMDLBLNHBJ; // 0x60
		::UnityEngine::Coroutine* JKKKEHIFEOF; // 0x68
		::RPG::GameCore::FarmElementPropState MEDJGNOFDHP; // 0x70
		::System::Boolean _IsFarmElementActive_k__BackingField; // 0x74
		::System::Boolean FKEOJAPALCP; // 0x75
		::System::Byte _padding0[0x2];
		::RPG::Client::TextID EOOPEDLOJLJ; // 0x78
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALFMMJHGBPP_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALFMMJHGBPP_DISPOSE_OFFSET))(this);
		}

		::System::Void AEGFBELAAIO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALFMMJHGBPP_AEGFBELAAIO_OFFSET))(this);
		}

		::System::Void CJMKJCDDPMO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALFMMJHGBPP_CJMKJCDDPMO_OFFSET))(this);
		}

		::System::Void CBLHCCPEGJP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALFMMJHGBPP_CBLHCCPEGJP_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* KLIGDFDIDFC()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALFMMJHGBPP_KLIGDFDIDFC_OFFSET))(this);
		}

		::RPG::Client::MonoEffectManager* KGKALOFGKMO()
		{
			return ((::RPG::Client::MonoEffectManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALFMMJHGBPP_KGKALOFGKMO_OFFSET))(this);
		}

		::System::Void PMCPJPKNAOI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALFMMJHGBPP_PMCPJPKNAOI_OFFSET))(this);
		}

		::System::Collections::IEnumerator* LGNMBLJJPKG()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALFMMJHGBPP_LGNMBLJJPKG_OFFSET))(this);
		}

		::System::Collections::IEnumerator* PMKMCKGNGJE()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALFMMJHGBPP_PMKMCKGNGJE_OFFSET))(this);
		}

		::System::Void GFLCEFGKILL(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ALFMMJHGBPP_GFLCEFGKILL_OFFSET))(this, a1);
		}

		::System::Void BNFEBFALIOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALFMMJHGBPP_BNFEBFALIOH_OFFSET))(this);
		}

		::System::Boolean get_IsFarmElementActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ALFMMJHGBPP_GET_ISFARMELEMENTACTIVE_OFFSET))(this);
		}

		::System::Void set_IsFarmElementActive(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ALFMMJHGBPP_SET_ISFARMELEMENTACTIVE_OFFSET))(this, a1);
		}

		::System::Void __DoActive_b__7_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALFMMJHGBPP___DOACTIVE_B__7_0_OFFSET))(this);
		}

	};
