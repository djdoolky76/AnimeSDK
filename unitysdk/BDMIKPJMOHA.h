#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MLKDDLHNNHH.h"
class BDMIKPJMOHA;
namespace RPG::Client { class MonoAnimationTrigger; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Coroutine; }

#define BDMIKPJMOHA_AGPEAOPALBI_OFFSET UNITYSDK_OFFSET(0x162F70F0)
#define BDMIKPJMOHA_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x162F6D20)
#define BDMIKPJMOHA_CTOR_OFFSET UNITYSDK_OFFSET(0x162F72A0)
#define BDMIKPJMOHA_EPJFIHHDMAK_OFFSET UNITYSDK_OFFSET(0x162F6F80)
#define BDMIKPJMOHA_JJLLFPHIHKL_OFFSET UNITYSDK_OFFSET(0x162F7240)
#define BDMIKPJMOHA_KHBPPHGMEBI_OFFSET UNITYSDK_OFFSET(0x162F6EB0)
#define BDMIKPJMOHA_KMNEJMOJEPC_OFFSET UNITYSDK_OFFSET(0x162F7180)
#define BDMIKPJMOHA_NBANFNGAPNP_OFFSET UNITYSDK_OFFSET(0x162F6FD0)
#define BDMIKPJMOHA_NNDOGJHGEJE_OFFSET UNITYSDK_OFFSET(0x162F71E0)
#define BDMIKPJMOHA_ONCLEAR_OFFSET UNITYSDK_OFFSET(0x162F7090)
#define BDMIKPJMOHA_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x162F6DC0)

inline static constexpr unsigned int BDMIKPJMOHA_TypeDefinitionIndex = 80855;

	class BDMIKPJMOHA : public ::MLKDDLHNNHH
	{
	public:
		::System::String* FGMKCOANOOK; // 0x20
		::RPG::Client::MonoAnimationTrigger* GALAHGAJODG; // 0x28
		::UnityEngine::Coroutine* NAEJCNNMAKA; // 0x30
		::System::Action_1<::System::String*>* MBOEDFCNCJF; // 0x38
		::System::Boolean BEMMCKLJICI; // 0x40
		::System::Byte _padding0[0x3];
		::System::Single FILPDDOEEPD; // 0x44
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
