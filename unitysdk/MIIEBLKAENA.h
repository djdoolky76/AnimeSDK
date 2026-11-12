#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MLKDDLHNNHH.h"
class MIIEBLKAENA;
namespace RPG::Client { class MonoAnimationTrigger; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Coroutine; }

#define MIIEBLKAENA_AGPEAOPALBI_OFFSET UNITYSDK_OFFSET(0xC20F1D0)
#define MIIEBLKAENA_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xC20EE00)
#define MIIEBLKAENA_CTOR_OFFSET UNITYSDK_OFFSET(0xC20F380)
#define MIIEBLKAENA_EPJFIHHDMAK_OFFSET UNITYSDK_OFFSET(0xC20F060)
#define MIIEBLKAENA_JJLLFPHIHKL_OFFSET UNITYSDK_OFFSET(0xC20F320)
#define MIIEBLKAENA_KHBPPHGMEBI_OFFSET UNITYSDK_OFFSET(0xC20EF90)
#define MIIEBLKAENA_KMNEJMOJEPC_OFFSET UNITYSDK_OFFSET(0xC20F260)
#define MIIEBLKAENA_NBANFNGAPNP_OFFSET UNITYSDK_OFFSET(0xC20F0B0)
#define MIIEBLKAENA_NNDOGJHGEJE_OFFSET UNITYSDK_OFFSET(0xC20F2C0)
#define MIIEBLKAENA_ONCLEAR_OFFSET UNITYSDK_OFFSET(0xC20F170)
#define MIIEBLKAENA_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xC20EEA0)

inline static constexpr unsigned int MIIEBLKAENA_TypeDefinitionIndex = 80105;

	class MIIEBLKAENA : public ::MLKDDLHNNHH
	{
	public:
		::System::Action_1<::System::String*>* MBOEDFCNCJF; // 0x20
		::UnityEngine::Coroutine* NAEJCNNMAKA; // 0x28
		::System::String* FGMKCOANOOK; // 0x30
		::RPG::Client::MonoAnimationTrigger* GALAHGAJODG; // 0x38
		::System::Boolean BEMMCKLJICI; // 0x40
		::System::Byte _padding0[0x3];
		::System::Single FILPDDOEEPD; // 0x44
		// static const ::System::Object GAANFPLAEEC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIIEBLKAENA_CTOR_OFFSET))(this);
		}

		static ::MIIEBLKAENA* BPLPBPMEODA(::RPG::Client::MonoAnimationTrigger* a1, ::System::String* a2, ::System::Single a3)
		{
			return ((::MIIEBLKAENA*(*)(::RPG::Client::MonoAnimationTrigger*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MIIEBLKAENA_BPLPBPMEODA_OFFSET))(a1, a2, a3);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIIEBLKAENA_ONEXECUTE_OFFSET))(this);
		}

		::System::Void EPJFIHHDMAK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIIEBLKAENA_EPJFIHHDMAK_OFFSET))(this);
		}

		::System::Void OnClear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIIEBLKAENA_ONCLEAR_OFFSET))(this);
		}

		::System::Void AGPEAOPALBI(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIIEBLKAENA_AGPEAOPALBI_OFFSET))(this, a1);
		}

		::System::Void KMNEJMOJEPC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIIEBLKAENA_KMNEJMOJEPC_OFFSET))(this);
		}

		::System::Void KHBPPHGMEBI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIIEBLKAENA_KHBPPHGMEBI_OFFSET))(this);
		}

		::System::Void NBANFNGAPNP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIIEBLKAENA_NBANFNGAPNP_OFFSET))(this);
		}

		::System::Void JJLLFPHIHKL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIIEBLKAENA_JJLLFPHIHKL_OFFSET))(this);
		}

		::System::Void NNDOGJHGEJE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIIEBLKAENA_NNDOGJHGEJE_OFFSET))(this);
		}

	};
