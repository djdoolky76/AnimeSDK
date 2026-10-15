#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NFFLLHFECCP;
namespace RPG::Client { class AlleyRouteBird; }
namespace RPG::Client { class UIPrefabLoader; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define NFFLLHFECCP_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xBB7E140)
#define NFFLLHFECCP_CTOR_OFFSET UNITYSDK_OFFSET(0xBB7E280)
#define NFFLLHFECCP_FMPLJNILOPP_OFFSET UNITYSDK_OFFSET(0xBB7E6D0)
#define NFFLLHFECCP_GET_OFFSET UNITYSDK_OFFSET(0xBB7E470)
#define NFFLLHFECCP_NNMDMKOKDPE_OFFSET UNITYSDK_OFFSET(0xBB7E540)
#define NFFLLHFECCP_OINBDMGFFJL_OFFSET UNITYSDK_OFFSET(0xBB7E330)
#define NFFLLHFECCP_PRELOAD_OFFSET UNITYSDK_OFFSET(0xBB7E390)
#define NFFLLHFECCP_RETURN_OFFSET UNITYSDK_OFFSET(0xBB7E600)

inline static constexpr unsigned int NFFLLHFECCP_TypeDefinitionIndex = 62296;

	class NFFLLHFECCP : public ::System::Object
	{
	public:
		::System::Collections::Generic::Stack_1<::RPG::Client::AlleyRouteBird*>* GCIKKMGIPIO; // 0x10
		::UnityEngine::Transform* LJIELCLFKIK; // 0x18
		::RPG::Client::UIPrefabLoader* HMELCEOFACP; // 0x20
		// static const ::System::String* BBOCHKNNMCC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFFLLHFECCP_CTOR_OFFSET))(this);
		}

		static ::NFFLLHFECCP* BPLPBPMEODA()
		{
			return ((::NFFLLHFECCP*(*)())((::PBYTE)hIl2Cpp + NFFLLHFECCP_BPLPBPMEODA_OFFSET))();
		}

		::System::Void OINBDMGFFJL(::RPG::Client::UIPrefabLoader* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIPrefabLoader*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + NFFLLHFECCP_OINBDMGFFJL_OFFSET))(this, a1, a2);
		}

		::System::Void PreLoad(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NFFLLHFECCP_PRELOAD_OFFSET))(this, a1);
		}

		::RPG::Client::AlleyRouteBird* Get()
		{
			return ((::RPG::Client::AlleyRouteBird*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFFLLHFECCP_GET_OFFSET))(this);
		}

		::System::Void Return(::RPG::Client::AlleyRouteBird* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AlleyRouteBird*))((::PBYTE)hIl2Cpp + NFFLLHFECCP_RETURN_OFFSET))(this, a1);
		}

		::RPG::Client::AlleyRouteBird* NNMDMKOKDPE()
		{
			return ((::RPG::Client::AlleyRouteBird*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFFLLHFECCP_NNMDMKOKDPE_OFFSET))(this);
		}

		::System::Void FMPLJNILOPP(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + NFFLLHFECCP_FMPLJNILOPP_OFFSET))(this, a1);
		}

	};
