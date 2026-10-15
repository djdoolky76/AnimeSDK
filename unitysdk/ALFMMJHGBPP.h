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

#define ALFMMJHGBPP_AEGFBELAAIO_OFFSET UNITYSDK_OFFSET(0x1555B110)
#define ALFMMJHGBPP_BNFEBFALIOH_OFFSET UNITYSDK_OFFSET(0x1555B160)
#define ALFMMJHGBPP_CBLHCCPEGJP_OFFSET UNITYSDK_OFFSET(0x1555B3A0)
#define ALFMMJHGBPP_CJMKJCDDPMO_OFFSET UNITYSDK_OFFSET(0x1555B260)
#define ALFMMJHGBPP_CTOR_OFFSET UNITYSDK_OFFSET(0x1555B880)
#define ALFMMJHGBPP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1555B040)
#define ALFMMJHGBPP_GET_ISFARMELEMENTACTIVE_OFFSET UNITYSDK_OFFSET(0x1555B860)
#define ALFMMJHGBPP_GFLCEFGKILL_OFFSET UNITYSDK_OFFSET(0x1555B750)
#define ALFMMJHGBPP_KGKALOFGKMO_OFFSET UNITYSDK_OFFSET(0x1555B690)
#define ALFMMJHGBPP_KLIGDFDIDFC_OFFSET UNITYSDK_OFFSET(0x1555B4E0)
#define ALFMMJHGBPP_LGNMBLJJPKG_OFFSET UNITYSDK_OFFSET(0x1555B320)
#define ALFMMJHGBPP_PMCPJPKNAOI_OFFSET UNITYSDK_OFFSET(0x1555B090)
#define ALFMMJHGBPP_PMKMCKGNGJE_OFFSET UNITYSDK_OFFSET(0x1555B460)
#define ALFMMJHGBPP_SET_ISFARMELEMENTACTIVE_OFFSET UNITYSDK_OFFSET(0x1555B870)
#define ALFMMJHGBPP___DOACTIVE_B__7_0_OFFSET UNITYSDK_OFFSET(0x1555B8C0)

inline static constexpr unsigned int ALFMMJHGBPP_TypeDefinitionIndex = 57128;

	class ALFMMJHGBPP : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::System::String* PIFEELOCJMM; // 0x18
		::System::String* BNAINGMFJFH; // 0x20
		::System::String* GMLDDGKDJLL; // 0x28
		::System::Collections::Generic::List_1<::System::String*>* PMJBNAFPDKM; // 0x30
		::System::String* DEMDLBLNHBJ; // 0x38
		::UnityEngine::Coroutine* JKKKEHIFEOF; // 0x40
		::System::String* DKHAGHGEFPI; // 0x48
		::System::Collections::Generic::List_1<::System::String*>* BJALAOKPDEB; // 0x50
		::UnityEngine::Coroutine* PBEEOEKJGIN; // 0x58
		::System::String* FBJABBMJHNK; // 0x60
		::UnityEngine::Coroutine* KKJKKOOMFDO; // 0x68
		::RPG::Client::TextID EOOPEDLOJLJ; // 0x70
		::RPG::GameCore::FarmElementPropState MEDJGNOFDHP; // 0x80
		::System::Boolean FKEOJAPALCP; // 0x84
		::System::Boolean _IsFarmElementActive_k__BackingField; // 0x85
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
