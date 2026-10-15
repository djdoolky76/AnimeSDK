#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MLKDDLHNNHH.h"
class BDMIKPJMOHA;
namespace RPG::Client { class MonoAnimationTrigger; }
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class Coroutine; }

#define BDMIKPJMOHA_AGPEAOPALBI_OFFSET UNITYSDK_OFFSET(0x16303A40)
#define BDMIKPJMOHA_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x16303670)
#define BDMIKPJMOHA_CTOR_OFFSET UNITYSDK_OFFSET(0x16303BF0)
#define BDMIKPJMOHA_EPJFIHHDMAK_OFFSET UNITYSDK_OFFSET(0x163038D0)
#define BDMIKPJMOHA_JJLLFPHIHKL_OFFSET UNITYSDK_OFFSET(0x16303B90)
#define BDMIKPJMOHA_KHBPPHGMEBI_OFFSET UNITYSDK_OFFSET(0x16303800)
#define BDMIKPJMOHA_KMNEJMOJEPC_OFFSET UNITYSDK_OFFSET(0x16303AD0)
#define BDMIKPJMOHA_NBANFNGAPNP_OFFSET UNITYSDK_OFFSET(0x16303920)
#define BDMIKPJMOHA_NNDOGJHGEJE_OFFSET UNITYSDK_OFFSET(0x16303B30)
#define BDMIKPJMOHA_ONCLEAR_OFFSET UNITYSDK_OFFSET(0x163039E0)
#define BDMIKPJMOHA_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x16303710)

inline static constexpr unsigned int BDMIKPJMOHA_TypeDefinitionIndex = 80856;

	class BDMIKPJMOHA : public ::MLKDDLHNNHH
	{
	public:
		::System::String* FGMKCOANOOK; // 0x20
		::UnityEngine::Coroutine* NAEJCNNMAKA; // 0x28
		::System::Action* MBOEDFCNCJF; // 0x30
		::RPG::Client::MonoAnimationTrigger* GALAHGAJODG; // 0x38
		::System::Single FILPDDOEEPD; // 0x40
		::System::Boolean BEMMCKLJICI; // 0x44
		// static const ::System::Object GAANFPLAEEC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDMIKPJMOHA_CTOR_OFFSET))(this);
		}

		static ::BDMIKPJMOHA* BPLPBPMEODA(::RPG::Client::MonoAnimationTrigger* a1, ::System::String* a2, ::System::Single a3)
		{
			return ((::BDMIKPJMOHA*(*)(::RPG::Client::MonoAnimationTrigger*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + BDMIKPJMOHA_BPLPBPMEODA_OFFSET))(a1, a2, a3);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDMIKPJMOHA_ONEXECUTE_OFFSET))(this);
		}

		::System::Void EPJFIHHDMAK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDMIKPJMOHA_EPJFIHHDMAK_OFFSET))(this);
		}

		::System::Void OnClear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDMIKPJMOHA_ONCLEAR_OFFSET))(this);
		}

		::System::Void AGPEAOPALBI(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BDMIKPJMOHA_AGPEAOPALBI_OFFSET))(this, a1);
		}

		::System::Void KMNEJMOJEPC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDMIKPJMOHA_KMNEJMOJEPC_OFFSET))(this);
		}

		::System::Void KHBPPHGMEBI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDMIKPJMOHA_KHBPPHGMEBI_OFFSET))(this);
		}

		::System::Void NBANFNGAPNP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDMIKPJMOHA_NBANFNGAPNP_OFFSET))(this);
		}

		::System::Void JJLLFPHIHKL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDMIKPJMOHA_JJLLFPHIHKL_OFFSET))(this);
		}

		::System::Void NNDOGJHGEJE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDMIKPJMOHA_NNDOGJHGEJE_OFFSET))(this);
		}

	};
