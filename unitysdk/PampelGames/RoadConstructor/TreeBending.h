#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }

#define PAMPELGAMES_ROADCONSTRUCTOR_TREEBENDING_AA1AB3FC680FD272_OFFSET UNITYSDK_OFFSET(0x28CE060)
#define PAMPELGAMES_ROADCONSTRUCTOR_TREEBENDING_B17090A1DCAA9BCB_OFFSET UNITYSDK_OFFSET(0x28CDEA0)
#define PAMPELGAMES_ROADCONSTRUCTOR_TREEBENDING_BC5FC01AE53FF41F_OFFSET UNITYSDK_OFFSET(0x28CDD40)
#define PAMPELGAMES_ROADCONSTRUCTOR_TREEBENDING_E0E1FED62B01B373_OFFSET UNITYSDK_OFFSET(0x28CE1C0)
#define PAMPELGAMES_ROADCONSTRUCTOR_TREEBENDING_F328E4D8818B1E12_OFFSET UNITYSDK_OFFSET(0x28CE210)
#define PAMPELGAMES_ROADCONSTRUCTOR_TREEBENDING_FE0C4BACA9717677_OFFSET UNITYSDK_OFFSET(0x28CDCB0)
#define PAMPELGAMES_ROADCONSTRUCTOR_TREEBENDING__CTOR_OFFSET UNITYSDK_OFFSET(0x28CE260)

namespace PampelGames::RoadConstructor
{
	inline static constexpr unsigned int TreeBending_TypeDefinitionIndex = 16352;

	class TreeBending : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Material*>* materials; // 0x20
		::System::Single bendStrength; // 0x28
		::UnityEngine::Vector2 bendDirection; // 0x2C

		::System::Void E0E1FED62B01B373()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAMPELGAMES_ROADCONSTRUCTOR_TREEBENDING_E0E1FED62B01B373_OFFSET))(this);
		}

		::System::Void AA1AB3FC680FD272(::System::Single E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PAMPELGAMES_ROADCONSTRUCTOR_TREEBENDING_AA1AB3FC680FD272_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void F328E4D8818B1E12()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAMPELGAMES_ROADCONSTRUCTOR_TREEBENDING_F328E4D8818B1E12_OFFSET))(this);
		}

		::System::Void BC5FC01AE53FF41F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAMPELGAMES_ROADCONSTRUCTOR_TREEBENDING_BC5FC01AE53FF41F_OFFSET))(this);
		}

		::System::Void FE0C4BACA9717677()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAMPELGAMES_ROADCONSTRUCTOR_TREEBENDING_FE0C4BACA9717677_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAMPELGAMES_ROADCONSTRUCTOR_TREEBENDING__CTOR_OFFSET))(this);
		}

		::System::Void B17090A1DCAA9BCB(::UnityEngine::Vector2 E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + PAMPELGAMES_ROADCONSTRUCTOR_TREEBENDING_B17090A1DCAA9BCB_OFFSET))(this, E937D4885DAA1AE8);
		}
	};
}
