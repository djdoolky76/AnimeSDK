#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABC/Entity/ColorMaterialBlock.h"
#include "unitysdk/ABC/Entity/FloatMaterialBlock.h"
#include "unitysdk/ABC/Entity/MonoEffectPluginCompoundMaterialBlock.h"

class B6AE86B8D9446EE4;
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }

#define ABC_ENTITY_MONOEFFECTPLUGINCHARADISSMATERIALBLOCK_B3EC5C68390CFB04_OFFSET UNITYSDK_OFFSET(0x22490F0)
#define ABC_ENTITY_MONOEFFECTPLUGINCHARADISSMATERIALBLOCK_F58A8A3B246E542B_OFFSET UNITYSDK_OFFSET(0x2249570)
#define ABC_ENTITY_MONOEFFECTPLUGINCHARADISSMATERIALBLOCK__CTOR_OFFSET UNITYSDK_OFFSET(0x1708400)

namespace ABC::Entity
{
	inline static constexpr unsigned int MonoEffectPluginCharaDissMaterialBlock_TypeDefinitionIndex = 6911;

	class MonoEffectPluginCharaDissMaterialBlock : public ::ABC::Entity::MonoEffectPluginCompoundMaterialBlock
	{
	public:
		::System::Boolean EnableFragmentClip; // 0x20
		::System::Boolean EnableDitherAlpha; // 0x21
		::System::Boolean EnableDissolve; // 0x22
		::System::Boolean EnableOverrideColor; // 0x23
		::ABC::Entity::FloatMaterialBlock OutlineWidth; // 0x24
		::ABC::Entity::FloatMaterialBlock DissolveRange; // 0x2C
		::ABC::Entity::FloatMaterialBlock DissolveNoiseIntensity; // 0x34
		::ABC::Entity::FloatMaterialBlock DissolveEdgeRange; // 0x3C
		::ABC::Entity::FloatMaterialBlock DissolveEdgeSmooth; // 0x44
		::ABC::Entity::FloatMaterialBlock DitherAlpha; // 0x4C
		::ABC::Entity::FloatMaterialBlock ShadowDitherAlpha; // 0x54
		::ABC::Entity::ColorMaterialBlock DissolveColor; // 0x5C
		::ABC::Entity::ColorMaterialBlock MainColor; // 0x70
		::ABC::Entity::ColorMaterialBlock OverrideOutlineColor; // 0x84

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_ENTITY_MONOEFFECTPLUGINCHARADISSMATERIALBLOCK__CTOR_OFFSET))(this);
		}

		::System::Void F58A8A3B246E542B(::B6AE86B8D9446EE4* EA0D07F4EF21A5B5, ::UnityEngine::Renderer* E7A817CCB63CA4F5)
		{
			return ((::System::Void(*)(::PVOID, ::B6AE86B8D9446EE4*, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + ABC_ENTITY_MONOEFFECTPLUGINCHARADISSMATERIALBLOCK_F58A8A3B246E542B_OFFSET))(this, EA0D07F4EF21A5B5, E7A817CCB63CA4F5);
		}

		::System::Void B3EC5C68390CFB04(::UnityEngine::Material* A54EF53C742D300D)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + ABC_ENTITY_MONOEFFECTPLUGINCHARADISSMATERIALBLOCK_B3EC5C68390CFB04_OFFSET))(this, A54EF53C742D300D);
		}
	};
}
