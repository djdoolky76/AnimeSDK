#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
namespace System { class Object; }
namespace System { class String; }

#define MMHKHFAEOAD_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x1C8FF3D0)
#define MMHKHFAEOAD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3C30720)
#define MMHKHFAEOAD_EQUALS_OFFSET UNITYSDK_OFFSET(0x3C30640)
#define MMHKHFAEOAD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3C30710)
#define MMHKHFAEOAD_GNNPFBBMFLA_OFFSET UNITYSDK_OFFSET(0x3C305D0)
#define MMHKHFAEOAD_KGHIJFFDHMD_OFFSET UNITYSDK_OFFSET(0x1C8FF450)

inline static constexpr unsigned int MMHKHFAEOAD_TypeDefinitionIndex = 43282;

	struct alignas(8) MMHKHFAEOAD
	{
		::System::String* AHCPFFKPOMG; // 0x10
		::System::Boolean PNBBENOEEIC; // 0x18
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector2Int HOFDLLGGMLE; // 0x1C
		/*
		static ::MMHKHFAEOAD BPLPBPMEODA(::System::String* a1)
		{
			return ((::MMHKHFAEOAD(*)(::System::String*))((::PBYTE)hIl2Cpp + MMHKHFAEOAD_BPLPBPMEODA_OFFSET))(a1);
		}
		*/

		/*
		static ::MMHKHFAEOAD KGHIJFFDHMD(::System::String* a1, ::UnityEngine::Vector2Int a2)
		{
			return ((::MMHKHFAEOAD(*)(::System::String*, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + MMHKHFAEOAD_KGHIJFFDHMD_OFFSET))(a1, a2);
		}
		*/

		::System::Boolean GNNPFBBMFLA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MMHKHFAEOAD_GNNPFBBMFLA_OFFSET))(this);
		}

		/*
		::System::Boolean Equals(::MMHKHFAEOAD a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MMHKHFAEOAD))((::PBYTE)hIl2Cpp + MMHKHFAEOAD_EQUALS_OFFSET))(this, a1);
		}
		*/

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MMHKHFAEOAD_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MMHKHFAEOAD_EQUALS_1_OFFSET))(this, a1);
		}

	};
