#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABC/Entity/MonoBaseEffectCharaPlugin.h"

class B6AE86B8D9446EE4;
namespace ABC::Entity { class MonoVFXModifyEntityEffectBaseSubPlugin; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine::Animations { class ListMaterialData; }

#define ABC_ENTITY_MONOEFFECTPLUGINCHARALISTMATERIALDATA_A26BD9230D153DF2_OFFSET UNITYSDK_OFFSET(0x205D230)
#define ABC_ENTITY_MONOEFFECTPLUGINCHARALISTMATERIALDATA_AB2190D147A48997_OFFSET UNITYSDK_OFFSET(0x1EEEA60)
#define ABC_ENTITY_MONOEFFECTPLUGINCHARALISTMATERIALDATA_AFACE09F7D6CFE29_OFFSET UNITYSDK_OFFSET(0x205D550)
#define ABC_ENTITY_MONOEFFECTPLUGINCHARALISTMATERIALDATA_B52D186799C83A96_OFFSET UNITYSDK_OFFSET(0x205D2A0)
#define ABC_ENTITY_MONOEFFECTPLUGINCHARALISTMATERIALDATA_EC74FE1125DBFDD1_OFFSET UNITYSDK_OFFSET(0x205CFF0)
#define ABC_ENTITY_MONOEFFECTPLUGINCHARALISTMATERIALDATA_EEA5D6E8F4B2655A_OFFSET UNITYSDK_OFFSET(0x205D050)
#define ABC_ENTITY_MONOEFFECTPLUGINCHARALISTMATERIALDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1708400)

namespace ABC::Entity
{
	inline static constexpr unsigned int MonoEffectPluginCharaListMaterialData_TypeDefinitionIndex = 8376;

	class MonoEffectPluginCharaListMaterialData : public ::ABC::Entity::MonoBaseEffectCharaPlugin
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* PropertyNames; // 0x28
		::UnityEngine::Animations::ListMaterialData* Data; // 0x30
		::System::Collections::Generic::List_1<::System::Int32>* ED69D717E1BA52C8; // 0x38
		::System::Collections::Generic::List_1<::System::Boolean>* _useHDRColor; // 0x40
		::System::Boolean IsInit; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_ENTITY_MONOEFFECTPLUGINCHARALISTMATERIALDATA__CTOR_OFFSET))(this);
		}

		::System::Void B52D186799C83A96(::B6AE86B8D9446EE4* E691DCD42BD72E19, ::UnityEngine::Renderer* E68CF045A899F028)
		{
			return ((::System::Void(*)(::PVOID, ::B6AE86B8D9446EE4*, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + ABC_ENTITY_MONOEFFECTPLUGINCHARALISTMATERIALDATA_B52D186799C83A96_OFFSET))(this, E691DCD42BD72E19, E68CF045A899F028);
		}

		::System::Void EC74FE1125DBFDD1(::UnityEngine::Material* A54EF53C742D300D)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + ABC_ENTITY_MONOEFFECTPLUGINCHARALISTMATERIALDATA_EC74FE1125DBFDD1_OFFSET))(this, A54EF53C742D300D);
		}

		::System::Void A26BD9230D153DF2(::B6AE86B8D9446EE4* E691DCD42BD72E19, ::UnityEngine::Renderer* E68CF045A899F028)
		{
			return ((::System::Void(*)(::PVOID, ::B6AE86B8D9446EE4*, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + ABC_ENTITY_MONOEFFECTPLUGINCHARALISTMATERIALDATA_A26BD9230D153DF2_OFFSET))(this, E691DCD42BD72E19, E68CF045A899F028);
		}

		::System::Void EEA5D6E8F4B2655A(::ABC::Entity::MonoVFXModifyEntityEffectBaseSubPlugin* FBF49BDBD304202B)
		{
			return ((::System::Void(*)(::PVOID, ::ABC::Entity::MonoVFXModifyEntityEffectBaseSubPlugin*))((::PBYTE)hIl2Cpp + ABC_ENTITY_MONOEFFECTPLUGINCHARALISTMATERIALDATA_EEA5D6E8F4B2655A_OFFSET))(this, FBF49BDBD304202B);
		}

		::System::Void AB2190D147A48997(::ABC::Entity::MonoVFXModifyEntityEffectBaseSubPlugin* EF750947C30CE985)
		{
			return ((::System::Void(*)(::PVOID, ::ABC::Entity::MonoVFXModifyEntityEffectBaseSubPlugin*))((::PBYTE)hIl2Cpp + ABC_ENTITY_MONOEFFECTPLUGINCHARALISTMATERIALDATA_AB2190D147A48997_OFFSET))(this, EF750947C30CE985);
		}

		::System::Void AFACE09F7D6CFE29(::UnityEngine::Material* A54EF53C742D300D)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + ABC_ENTITY_MONOEFFECTPLUGINCHARALISTMATERIALDATA_AFACE09F7D6CFE29_OFFSET))(this, A54EF53C742D300D);
		}
	};
}
