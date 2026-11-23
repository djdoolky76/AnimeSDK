#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABC/Entity/MonoVFXModifyEntityEffectBaseSubPlugin.h"

namespace ABC::Entity { class EntityEffectBlockRender; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ABC_ENTITY_MONOVFXEFFECTENTITYMATSUBPLUGIN_A7BFCE83ADC5B85D_OFFSET UNITYSDK_OFFSET(0x204E350)
#define ABC_ENTITY_MONOVFXEFFECTENTITYMATSUBPLUGIN_AD9B4001F4295FBC_OFFSET UNITYSDK_OFFSET(0x204DCB0)
#define ABC_ENTITY_MONOVFXEFFECTENTITYMATSUBPLUGIN_B705818AB327B4C7_OFFSET UNITYSDK_OFFSET(0x204E2C0)
#define ABC_ENTITY_MONOVFXEFFECTENTITYMATSUBPLUGIN_F059973342671D4F_OFFSET UNITYSDK_OFFSET(0x204E580)
#define ABC_ENTITY_MONOVFXEFFECTENTITYMATSUBPLUGIN_F0CB174DB0EADDFC_OFFSET UNITYSDK_OFFSET(0x204E570)
#define ABC_ENTITY_MONOVFXEFFECTENTITYMATSUBPLUGIN_F5BE5D6F21E0CC1C_OFFSET UNITYSDK_OFFSET(0x204DFE0)
#define ABC_ENTITY_MONOVFXEFFECTENTITYMATSUBPLUGIN_F83CE50CA30BA719_OFFSET UNITYSDK_OFFSET(0x204E590)
#define ABC_ENTITY_MONOVFXEFFECTENTITYMATSUBPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0x1708400)

namespace ABC::Entity
{
	inline static constexpr unsigned int MonoVFXEffectEntityMatSubPlugin_TypeDefinitionIndex = 8312;

	class MonoVFXEffectEntityMatSubPlugin : public ::ABC::Entity::MonoVFXModifyEntityEffectBaseSubPlugin
	{
	public:
		::System::Boolean HideMatBlockRender; // 0x90
		::System::Byte _padding0[0x7];
		::System::Collections::Generic::List_1<::System::Boolean>* EA64D65A25F4A97B; // 0x98
		::System::Boolean E83CD8A8038C2612; // 0xA0

		::System::Void F059973342671D4F(::System::Collections::Generic::List_1<::ABC::Entity::EntityEffectBlockRender*>* EF750947C30CE985)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::ABC::Entity::EntityEffectBlockRender*>*))((::PBYTE)hIl2Cpp + ABC_ENTITY_MONOVFXEFFECTENTITYMATSUBPLUGIN_F059973342671D4F_OFFSET))(this, EF750947C30CE985);
		}

		::System::Void F0CB174DB0EADDFC(::System::Collections::Generic::List_1<::ABC::Entity::EntityEffectBlockRender*>* EF750947C30CE985)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::ABC::Entity::EntityEffectBlockRender*>*))((::PBYTE)hIl2Cpp + ABC_ENTITY_MONOVFXEFFECTENTITYMATSUBPLUGIN_F0CB174DB0EADDFC_OFFSET))(this, EF750947C30CE985);
		}

		::System::Void F83CE50CA30BA719()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_ENTITY_MONOVFXEFFECTENTITYMATSUBPLUGIN_F83CE50CA30BA719_OFFSET))(this);
		}

		::System::Void A7BFCE83ADC5B85D(::System::Boolean FFA00246E8ABA57B)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ABC_ENTITY_MONOVFXEFFECTENTITYMATSUBPLUGIN_A7BFCE83ADC5B85D_OFFSET))(this, FFA00246E8ABA57B);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_ENTITY_MONOVFXEFFECTENTITYMATSUBPLUGIN__CTOR_OFFSET))(this);
		}

		::System::Void B705818AB327B4C7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_ENTITY_MONOVFXEFFECTENTITYMATSUBPLUGIN_B705818AB327B4C7_OFFSET))(this);
		}

		::System::Void AD9B4001F4295FBC(::System::Collections::Generic::List_1<::ABC::Entity::EntityEffectBlockRender*>* E47F0C0F40DBA020)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::ABC::Entity::EntityEffectBlockRender*>*))((::PBYTE)hIl2Cpp + ABC_ENTITY_MONOVFXEFFECTENTITYMATSUBPLUGIN_AD9B4001F4295FBC_OFFSET))(this, E47F0C0F40DBA020);
		}

		::System::Void F5BE5D6F21E0CC1C(::System::Collections::Generic::List_1<::ABC::Entity::EntityEffectBlockRender*>* E47F0C0F40DBA020)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::ABC::Entity::EntityEffectBlockRender*>*))((::PBYTE)hIl2Cpp + ABC_ENTITY_MONOVFXEFFECTENTITYMATSUBPLUGIN_F5BE5D6F21E0CC1C_OFFSET))(this, E47F0C0F40DBA020);
		}
	};
}
