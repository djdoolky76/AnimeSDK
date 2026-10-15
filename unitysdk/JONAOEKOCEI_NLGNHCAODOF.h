#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JONAOEKOCEI_IPDHLMJJDND.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define JONAOEKOCEI_NLGNHCAODOF_CCTOR_OFFSET UNITYSDK_OFFSET(0xB2A6340)
#define JONAOEKOCEI_NLGNHCAODOF_CTOR_OFFSET UNITYSDK_OFFSET(0xB2A4B30)
#define JONAOEKOCEI_NLGNHCAODOF_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB2A6130)
#define JONAOEKOCEI_NLGNHCAODOF_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xB2A61E0)

inline static constexpr unsigned int JONAOEKOCEI_NLGNHCAODOF_TypeDefinitionIndex = 60185;

	class JONAOEKOCEI_NLGNHCAODOF : public ::JONAOEKOCEI_IPDHLMJJDND
	{
	public:
		::UnityEngine::GameObject* PGKENBMKDKA; // 0x38
		::System::String* IJMGEMMNNPI; // 0x40
		::System::Single GLOIDCBECOG; // 0x48
		::System::Single GHABAAOGBNO; // 0x4C
		::UnityEngine::Vector3 PDJBFBPEHFE; // 0x50
		::System::Single HBDJCFFDGDD; // 0x5C
		::System::Single PGMIOKKLHIE; // 0x60
		static ::System::String** StaticGet_LOJFHLOCBPG()
		{
			return (::System::String**)UnitySDK::FromName("", "NLGNHCAODOF")->GetStaticField(0x25270);
		}

		static ::System::Single* StaticGet_BEIBJFCCNMN()
		{
			return (::System::Single*)UnitySDK::FromName("", "NLGNHCAODOF")->GetStaticField(0x8010);
		}

		::System::Void _ctor(::UnityEngine::GameObject* a1, ::System::Int32 a2, ::UnityEngine::Transform* a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3 a5, ::System::Single a6, ::System::String* a7, ::System::Boolean a8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Int32, ::UnityEngine::Transform*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + JONAOEKOCEI_NLGNHCAODOF_CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JONAOEKOCEI_NLGNHCAODOF_CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JONAOEKOCEI_NLGNHCAODOF_DISPOSE_OFFSET))(this);
		}

		::System::Void PAGKOAEOLKA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JONAOEKOCEI_NLGNHCAODOF_PAGKOAEOLKA_OFFSET))(this, a1);
		}

	};
