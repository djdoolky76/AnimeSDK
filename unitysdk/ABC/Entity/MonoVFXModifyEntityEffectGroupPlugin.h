#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABC/Entity/BaseMonoVFXModifyEntityEffectGroupPlugin.h"

namespace ABC::Entity { class MonoVFXModifyEntityEffectBaseSubPlugin; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ABC_ENTITY_MONOVFXMODIFYENTITYEFFECTGROUPPLUGIN_A3FBF350F8180351_OFFSET UNITYSDK_OFFSET(0x1ECD8F0)
#define ABC_ENTITY_MONOVFXMODIFYENTITYEFFECTGROUPPLUGIN_A597529752AEE50F_OFFSET UNITYSDK_OFFSET(0x1EBC770)
#define ABC_ENTITY_MONOVFXMODIFYENTITYEFFECTGROUPPLUGIN_AFA01587FF6762DA_OFFSET UNITYSDK_OFFSET(0x1ECD850)
#define ABC_ENTITY_MONOVFXMODIFYENTITYEFFECTGROUPPLUGIN_B930EF66CE3CF132_OFFSET UNITYSDK_OFFSET(0x1ECD8A0)
#define ABC_ENTITY_MONOVFXMODIFYENTITYEFFECTGROUPPLUGIN_F8610C0A992B7F8B_OFFSET UNITYSDK_OFFSET(0x1EBC780)
#define ABC_ENTITY_MONOVFXMODIFYENTITYEFFECTGROUPPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0x1ECD940)

namespace ABC::Entity
{
	inline static constexpr unsigned int MonoVFXModifyEntityEffectGroupPlugin_TypeDefinitionIndex = 7327;

	class MonoVFXModifyEntityEffectGroupPlugin : public ::ABC::Entity::BaseMonoVFXModifyEntityEffectGroupPlugin
	{
	public:
		::System::Int32 Priority; // 0x60
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::List_1<::ABC::Entity::MonoVFXModifyEntityEffectBaseSubPlugin*>* SubPlugins; // 0x68

		::System::Int32 B930EF66CE3CF132()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_ENTITY_MONOVFXMODIFYENTITYEFFECTGROUPPLUGIN_B930EF66CE3CF132_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_ENTITY_MONOVFXMODIFYENTITYEFFECTGROUPPLUGIN__CTOR_OFFSET))(this);
		}

		::System::Int32 A597529752AEE50F()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_ENTITY_MONOVFXMODIFYENTITYEFFECTGROUPPLUGIN_A597529752AEE50F_OFFSET))(this);
		}

		::System::Boolean A3FBF350F8180351()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_ENTITY_MONOVFXMODIFYENTITYEFFECTGROUPPLUGIN_A3FBF350F8180351_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::ABC::Entity::MonoVFXModifyEntityEffectBaseSubPlugin*>* AFA01587FF6762DA()
		{
			return ((::System::Collections::Generic::List_1<::ABC::Entity::MonoVFXModifyEntityEffectBaseSubPlugin*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_ENTITY_MONOVFXMODIFYENTITYEFFECTGROUPPLUGIN_AFA01587FF6762DA_OFFSET))(this);
		}

		::System::Boolean F8610C0A992B7F8B()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_ENTITY_MONOVFXMODIFYENTITYEFFECTGROUPPLUGIN_F8610C0A992B7F8B_OFFSET))(this);
		}
	};
}
