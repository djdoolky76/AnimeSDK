#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftRotationType.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
#include "unitysdk/System/Nullable_1.h"
namespace System { class String; }

#define PLHLAIJKMOD_BDLMPEDPDCH_OFFSET UNITYSDK_OFFSET(0x3C28FB0)
#define PLHLAIJKMOD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x3C28F10)
#define PLHLAIJKMOD_CTOR_OFFSET UNITYSDK_OFFSET(0x14160)
#define PLHLAIJKMOD_EQUALS_OFFSET UNITYSDK_OFFSET(0x3C28F30)
#define PLHLAIJKMOD_IBFNDNLLDLF_OFFSET UNITYSDK_OFFSET(0x3C29020)
#define PLHLAIJKMOD_OBAFLPMJEBE_OFFSET UNITYSDK_OFFSET(0x3C29090)
#define PLHLAIJKMOD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3C28FA0)

inline static constexpr unsigned int PLHLAIJKMOD_TypeDefinitionIndex = 41831;

	struct alignas(4) PLHLAIJKMOD
	{
		::UnityEngine::Vector2Int BBFOLEOPPPL; // 0x10
		::RPG::Client::MechCraft::MechCraftRotationType NMELCPIOKNO; // 0x18
		::System::Void _ctor(::UnityEngine::Vector2Int a1, ::RPG::Client::MechCraft::MechCraftRotationType a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int, ::RPG::Client::MechCraft::MechCraftRotationType))((::PBYTE)hIl2Cpp + PLHLAIJKMOD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::System::Int32 a1, ::System::Int32 a2, ::RPG::Client::MechCraft::MechCraftRotationType a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::RPG::Client::MechCraft::MechCraftRotationType))((::PBYTE)hIl2Cpp + PLHLAIJKMOD_CTOR_1_OFFSET))(this, a1, a2, a3);
		}

		/*
		::System::Boolean Equals(::PLHLAIJKMOD a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PLHLAIJKMOD))((::PBYTE)hIl2Cpp + PLHLAIJKMOD_EQUALS_OFFSET))(this, a1);
		}
		*/

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLHLAIJKMOD_TOSTRING_OFFSET))(this);
		}

		/*
		::PLHLAIJKMOD BDLMPEDPDCH(::UnityEngine::Vector2Int a1)
		{
			return ((::PLHLAIJKMOD(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + PLHLAIJKMOD_BDLMPEDPDCH_OFFSET))(this, a1);
		}
		*/

		/*
		::PLHLAIJKMOD IBFNDNLLDLF(::RPG::Client::MechCraft::MechCraftRotationType a1)
		{
			return ((::PLHLAIJKMOD(*)(::PVOID, ::RPG::Client::MechCraft::MechCraftRotationType))((::PBYTE)hIl2Cpp + PLHLAIJKMOD_IBFNDNLLDLF_OFFSET))(this, a1);
		}
		*/

		/*
		::PLHLAIJKMOD OBAFLPMJEBE(::System::Nullable_1<::UnityEngine::Vector2Int> a1, ::System::Nullable_1<::RPG::Client::MechCraft::MechCraftRotationType> a2)
		{
			return ((::PLHLAIJKMOD(*)(::PVOID, ::System::Nullable_1<::UnityEngine::Vector2Int>, ::System::Nullable_1<::RPG::Client::MechCraft::MechCraftRotationType>))((::PBYTE)hIl2Cpp + PLHLAIJKMOD_OBAFLPMJEBE_OFFSET))(this, a1, a2);
		}
		*/

	};
