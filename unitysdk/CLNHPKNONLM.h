#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class APGBLBKCHAB;
class CLNHPKNONLM;
class OBOJAKCHDBN;
namespace RPG::Client { class UIPrefabLoader; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLNHPKNONLM_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xE35AD80)
#define CLNHPKNONLM_CTOR_OFFSET UNITYSDK_OFFSET(0xE35AEC0)
#define CLNHPKNONLM_EGCEBCLDALM_OFFSET UNITYSDK_OFFSET(0xE35B190)
#define CLNHPKNONLM_FMPLJNILOPP_OFFSET UNITYSDK_OFFSET(0xE35B340)
#define CLNHPKNONLM_GET_OFFSET UNITYSDK_OFFSET(0xE35B0C0)
#define CLNHPKNONLM_OINBDMGFFJL_OFFSET UNITYSDK_OFFSET(0xE35AF70)
#define CLNHPKNONLM_PRELOAD_OFFSET UNITYSDK_OFFSET(0xE35AFE0)
#define CLNHPKNONLM_RETURN_OFFSET UNITYSDK_OFFSET(0xE35B2A0)

inline static constexpr unsigned int CLNHPKNONLM_TypeDefinitionIndex = 63733;

	class CLNHPKNONLM : public ::System::Object
	{
	public:
		::System::Collections::Generic::Stack_1<::OBOJAKCHDBN*>* GCIKKMGIPIO; // 0x10
		::UnityEngine::Transform* GICBFAEGNJG; // 0x18
		::APGBLBKCHAB* IPBJJAJCCKD; // 0x20
		::RPG::Client::UIPrefabLoader* HMELCEOFACP; // 0x28
		::System::Int32 NJFKHPIHDEF; // 0x30
		// static const ::System::String* DJCBDJMACFH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLNHPKNONLM_CTOR_OFFSET))(this);
		}

		static ::CLNHPKNONLM* BPLPBPMEODA()
		{
			return ((::CLNHPKNONLM*(*)())((::PBYTE)hIl2Cpp + CLNHPKNONLM_BPLPBPMEODA_OFFSET))();
		}

		::System::Void OINBDMGFFJL(::APGBLBKCHAB* a1, ::RPG::Client::UIPrefabLoader* a2, ::UnityEngine::Transform* a3)
		{
			return ((::System::Void(*)(::PVOID, ::APGBLBKCHAB*, ::RPG::Client::UIPrefabLoader*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLNHPKNONLM_OINBDMGFFJL_OFFSET))(this, a1, a2, a3);
		}

		::System::Void PreLoad(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLNHPKNONLM_PRELOAD_OFFSET))(this, a1);
		}

		::OBOJAKCHDBN* Get()
		{
			return ((::OBOJAKCHDBN*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLNHPKNONLM_GET_OFFSET))(this);
		}

		::System::Void Return(::OBOJAKCHDBN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OBOJAKCHDBN*))((::PBYTE)hIl2Cpp + CLNHPKNONLM_RETURN_OFFSET))(this, a1);
		}

		::OBOJAKCHDBN* EGCEBCLDALM()
		{
			return ((::OBOJAKCHDBN*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLNHPKNONLM_EGCEBCLDALM_OFFSET))(this);
		}

		::System::Void FMPLJNILOPP(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLNHPKNONLM_FMPLJNILOPP_OFFSET))(this, a1);
		}

	};
