#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
class FBNAAINOJNB;
class HCLPKMIIANI;
namespace Entitas { class IContext; }
namespace RPG::GameCore { class LittleGameProxyEntityConfig; }

#define HJIHMMFIDEN_CTOR_OFFSET UNITYSDK_OFFSET(0x15D24CF0)
#define HJIHMMFIDEN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15D24C00)
#define HJIHMMFIDEN_GET_CONTEXT_OFFSET UNITYSDK_OFFSET(0x15D24CD0)
#define HJIHMMFIDEN_GET_ENTITYCONFIG_OFFSET UNITYSDK_OFFSET(0x15D24C90)
#define HJIHMMFIDEN_GET_ENTITYID_OFFSET UNITYSDK_OFFSET(0x15D24C70)
#define HJIHMMFIDEN_GET_LITTLEGAMEENTITY_OFFSET UNITYSDK_OFFSET(0x15D24CB0)
#define HJIHMMFIDEN_GET_LITTLEGAMEINSTANCE_OFFSET UNITYSDK_OFFSET(0x15D24C50)
#define HJIHMMFIDEN_LMCEDCHJKFF_OFFSET UNITYSDK_OFFSET(0x15D24AB0)
#define HJIHMMFIDEN_ONWILLBEDESTROY_OFFSET UNITYSDK_OFFSET(0x15D24B60)
#define HJIHMMFIDEN_SET_CONTEXT_OFFSET UNITYSDK_OFFSET(0x15D24CE0)
#define HJIHMMFIDEN_SET_ENTITYCONFIG_OFFSET UNITYSDK_OFFSET(0x15D24CA0)
#define HJIHMMFIDEN_SET_ENTITYID_OFFSET UNITYSDK_OFFSET(0x15D24C80)
#define HJIHMMFIDEN_SET_LITTLEGAMEENTITY_OFFSET UNITYSDK_OFFSET(0x15D24CC0)
#define HJIHMMFIDEN_SET_LITTLEGAMEINSTANCE_OFFSET UNITYSDK_OFFSET(0x15D24C60)

inline static constexpr unsigned int HJIHMMFIDEN_TypeDefinitionIndex = 57303;

	class HJIHMMFIDEN : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::RPG::GameCore::LittleGameProxyEntityConfig* _EntityConfig_k__BackingField; // 0x18
		::Entitas::IContext* _Context_k__BackingField; // 0x20
		::HCLPKMIIANI* _LittleGameInstance_k__BackingField; // 0x28
		::FBNAAINOJNB* _LittleGameEntity_k__BackingField; // 0x30
		::System::UInt32 _EntityID_k__BackingField; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJIHMMFIDEN_CTOR_OFFSET))(this);
		}

		::System::Void LMCEDCHJKFF(::HCLPKMIIANI* a1, ::System::UInt32 a2, ::RPG::GameCore::LittleGameProxyEntityConfig* a3, ::FBNAAINOJNB* a4, ::Entitas::IContext* a5)
		{
			return ((::System::Void(*)(::PVOID, ::HCLPKMIIANI*, ::System::UInt32, ::RPG::GameCore::LittleGameProxyEntityConfig*, ::FBNAAINOJNB*, ::Entitas::IContext*))((::PBYTE)hIl2Cpp + HJIHMMFIDEN_LMCEDCHJKFF_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void OnWillBeDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJIHMMFIDEN_ONWILLBEDESTROY_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJIHMMFIDEN_DISPOSE_OFFSET))(this);
		}

		::HCLPKMIIANI* get_LittleGameInstance()
		{
			return ((::HCLPKMIIANI*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJIHMMFIDEN_GET_LITTLEGAMEINSTANCE_OFFSET))(this);
		}

		::System::Void set_LittleGameInstance(::HCLPKMIIANI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HCLPKMIIANI*))((::PBYTE)hIl2Cpp + HJIHMMFIDEN_SET_LITTLEGAMEINSTANCE_OFFSET))(this, a1);
		}

		::System::UInt32 get_EntityID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HJIHMMFIDEN_GET_ENTITYID_OFFSET))(this);
		}

		::System::Void set_EntityID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HJIHMMFIDEN_SET_ENTITYID_OFFSET))(this, a1);
		}

		::RPG::GameCore::LittleGameProxyEntityConfig* get_EntityConfig()
		{
			return ((::RPG::GameCore::LittleGameProxyEntityConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJIHMMFIDEN_GET_ENTITYCONFIG_OFFSET))(this);
		}

		::System::Void set_EntityConfig(::RPG::GameCore::LittleGameProxyEntityConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LittleGameProxyEntityConfig*))((::PBYTE)hIl2Cpp + HJIHMMFIDEN_SET_ENTITYCONFIG_OFFSET))(this, a1);
		}

		::FBNAAINOJNB* get_LittleGameEntity()
		{
			return ((::FBNAAINOJNB*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJIHMMFIDEN_GET_LITTLEGAMEENTITY_OFFSET))(this);
		}

		::System::Void set_LittleGameEntity(::FBNAAINOJNB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FBNAAINOJNB*))((::PBYTE)hIl2Cpp + HJIHMMFIDEN_SET_LITTLEGAMEENTITY_OFFSET))(this, a1);
		}

		::Entitas::IContext* get_Context()
		{
			return ((::Entitas::IContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJIHMMFIDEN_GET_CONTEXT_OFFSET))(this);
		}

		::System::Void set_Context(::Entitas::IContext* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IContext*))((::PBYTE)hIl2Cpp + HJIHMMFIDEN_SET_CONTEXT_OFFSET))(this, a1);
		}

	};
