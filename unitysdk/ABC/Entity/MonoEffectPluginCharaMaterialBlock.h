#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABC/Entity/MonoBaseEffectCharaPlugin.h"
#include "unitysdk/F52D7D0423C392F6/FA313DE0FF4B7395.h"
#include "unitysdk/UnityEngine/E46B881AA2636190.h"
#include "unitysdk/UnityEngine/E8984F4E44AE20E5.h"

class B6AE86B8D9446EE4;
namespace ABC::Entity { class MonoEffectPluginCompoundMaterialBlock; }
namespace ABC::Entity { class MonoVFXModifyEntityEffectBaseSubPlugin; }
namespace System { class String; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }

#define ABC_ENTITY_MONOEFFECTPLUGINCHARAMATERIALBLOCK_A26BD9230D153DF2_OFFSET UNITYSDK_OFFSET(0x22075B0)
#define ABC_ENTITY_MONOEFFECTPLUGINCHARAMATERIALBLOCK_AB2190D147A48997_OFFSET UNITYSDK_OFFSET(0x1EEEA60)
#define ABC_ENTITY_MONOEFFECTPLUGINCHARAMATERIALBLOCK_AFACE09F7D6CFE29_OFFSET UNITYSDK_OFFSET(0x22077D0)
#define ABC_ENTITY_MONOEFFECTPLUGINCHARAMATERIALBLOCK_B52D186799C83A96_OFFSET UNITYSDK_OFFSET(0x2207620)
#define ABC_ENTITY_MONOEFFECTPLUGINCHARAMATERIALBLOCK_EC74FE1125DBFDD1_OFFSET UNITYSDK_OFFSET(0x22074D0)
#define ABC_ENTITY_MONOEFFECTPLUGINCHARAMATERIALBLOCK_EEA5D6E8F4B2655A_OFFSET UNITYSDK_OFFSET(0x2207530)
#define ABC_ENTITY_MONOEFFECTPLUGINCHARAMATERIALBLOCK__CTOR_OFFSET UNITYSDK_OFFSET(0x1708400)

namespace ABC::Entity
{
	inline static constexpr unsigned int MonoEffectPluginCharaMaterialBlock_TypeDefinitionIndex = 9037;

	class MonoEffectPluginCharaMaterialBlock : public ::ABC::Entity::MonoBaseEffectCharaPlugin
	{
	public:
		::System::String* PropertyName; // 0x28
		::F52D7D0423C392F6::FA313DE0FF4B7395 DataType; // 0x30
		::System::Single FloatData; // 0x34
		::UnityEngine::E46B881AA2636190 ColorData; // 0x38
		::UnityEngine::E8984F4E44AE20E5 VectorData; // 0x48
		::ABC::Entity::MonoEffectPluginCompoundMaterialBlock* CompoundData; // 0x58
		::System::Int32 F04D1D34C207635A; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_ENTITY_MONOEFFECTPLUGINCHARAMATERIALBLOCK__CTOR_OFFSET))(this);
		}

		::System::Void B52D186799C83A96(::B6AE86B8D9446EE4* E691DCD42BD72E19, ::UnityEngine::Renderer* E68CF045A899F028)
		{
			return ((::System::Void(*)(::PVOID, ::B6AE86B8D9446EE4*, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + ABC_ENTITY_MONOEFFECTPLUGINCHARAMATERIALBLOCK_B52D186799C83A96_OFFSET))(this, E691DCD42BD72E19, E68CF045A899F028);
		}

		::System::Void A26BD9230D153DF2(::B6AE86B8D9446EE4* E691DCD42BD72E19, ::UnityEngine::Renderer* E68CF045A899F028)
		{
			return ((::System::Void(*)(::PVOID, ::B6AE86B8D9446EE4*, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + ABC_ENTITY_MONOEFFECTPLUGINCHARAMATERIALBLOCK_A26BD9230D153DF2_OFFSET))(this, E691DCD42BD72E19, E68CF045A899F028);
		}

		::System::Void AB2190D147A48997(::ABC::Entity::MonoVFXModifyEntityEffectBaseSubPlugin* EF750947C30CE985)
		{
			return ((::System::Void(*)(::PVOID, ::ABC::Entity::MonoVFXModifyEntityEffectBaseSubPlugin*))((::PBYTE)hIl2Cpp + ABC_ENTITY_MONOEFFECTPLUGINCHARAMATERIALBLOCK_AB2190D147A48997_OFFSET))(this, EF750947C30CE985);
		}

		::System::Void AFACE09F7D6CFE29(::UnityEngine::Material* A54EF53C742D300D)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + ABC_ENTITY_MONOEFFECTPLUGINCHARAMATERIALBLOCK_AFACE09F7D6CFE29_OFFSET))(this, A54EF53C742D300D);
		}

		::System::Void EC74FE1125DBFDD1(::UnityEngine::Material* A54EF53C742D300D)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + ABC_ENTITY_MONOEFFECTPLUGINCHARAMATERIALBLOCK_EC74FE1125DBFDD1_OFFSET))(this, A54EF53C742D300D);
		}

		::System::Void EEA5D6E8F4B2655A(::ABC::Entity::MonoVFXModifyEntityEffectBaseSubPlugin* FBF49BDBD304202B)
		{
			return ((::System::Void(*)(::PVOID, ::ABC::Entity::MonoVFXModifyEntityEffectBaseSubPlugin*))((::PBYTE)hIl2Cpp + ABC_ENTITY_MONOEFFECTPLUGINCHARAMATERIALBLOCK_EEA5D6E8F4B2655A_OFFSET))(this, FBF49BDBD304202B);
		}
	};
}
