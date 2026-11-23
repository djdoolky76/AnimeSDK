#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/F1B6E53C152C2519.h"

namespace PampelGames::Shared::Tools { class SerializableTreeInstance; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define PAMPELGAMES_SHARED_TOOLS_SERIALIZABLETERRAIN_F5628F8349D4A8A6_F032167726AF8C98_OFFSET UNITYSDK_OFFSET(0x3DBF900)
#define PAMPELGAMES_SHARED_TOOLS_SERIALIZABLETERRAIN_F5628F8349D4A8A6_F67976F754F175F8_OFFSET UNITYSDK_OFFSET(0x3DBF840)
#define PAMPELGAMES_SHARED_TOOLS_SERIALIZABLETERRAIN_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x3DBF9A0)
#define PAMPELGAMES_SHARED_TOOLS_SERIALIZABLETERRAIN_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace PampelGames::Shared::Tools
{
	inline static constexpr unsigned int SerializableTerrain_F5628F8349D4A8A6_TypeDefinitionIndex = 21150;

	class SerializableTerrain_F5628F8349D4A8A6 : public ::System::Object
	{
	public:
		static ::PampelGames::Shared::Tools::SerializableTerrain_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
		{
			return (::PampelGames::Shared::Tools::SerializableTerrain_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(SerializableTerrain_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Func_2<::UnityEngine::F1B6E53C152C2519, ::PampelGames::Shared::Tools::SerializableTreeInstance*>** StaticGet_A11D69BF37F0CD6C()
		{
			return (::System::Func_2<::UnityEngine::F1B6E53C152C2519, ::PampelGames::Shared::Tools::SerializableTreeInstance*>**)Il2CppClass::FromTypeDefinitionIndex(SerializableTerrain_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
		}
		static ::System::Func_2<::PampelGames::Shared::Tools::SerializableTreeInstance*, ::UnityEngine::F1B6E53C152C2519>** StaticGet_B2B462D767EFBA79()
		{
			return (::System::Func_2<::PampelGames::Shared::Tools::SerializableTreeInstance*, ::UnityEngine::F1B6E53C152C2519>**)Il2CppClass::FromTypeDefinitionIndex(SerializableTerrain_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PAMPELGAMES_SHARED_TOOLS_SERIALIZABLETERRAIN_F5628F8349D4A8A6__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAMPELGAMES_SHARED_TOOLS_SERIALIZABLETERRAIN_F5628F8349D4A8A6__CTOR_OFFSET))(this);
		}

		::PampelGames::Shared::Tools::SerializableTreeInstance* F67976F754F175F8(::UnityEngine::F1B6E53C152C2519 A471348B712130F4)
		{
			return ((::PampelGames::Shared::Tools::SerializableTreeInstance*(*)(::PVOID, ::UnityEngine::F1B6E53C152C2519))((::PBYTE)hIl2Cpp + PAMPELGAMES_SHARED_TOOLS_SERIALIZABLETERRAIN_F5628F8349D4A8A6_F67976F754F175F8_OFFSET))(this, A471348B712130F4);
		}

		::UnityEngine::F1B6E53C152C2519 F032167726AF8C98(::PampelGames::Shared::Tools::SerializableTreeInstance* BF2E27D8880BDFF2)
		{
			return ((::UnityEngine::F1B6E53C152C2519(*)(::PVOID, ::PampelGames::Shared::Tools::SerializableTreeInstance*))((::PBYTE)hIl2Cpp + PAMPELGAMES_SHARED_TOOLS_SERIALIZABLETERRAIN_F5628F8349D4A8A6_F032167726AF8C98_OFFSET))(this, BF2E27D8880BDFF2);
		}
	};
}
