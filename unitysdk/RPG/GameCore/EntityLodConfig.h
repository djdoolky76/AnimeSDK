#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class EntityLodConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ENTITYLODCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D646290)
#define RPG_GAMECORE_ENTITYLODCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D646140)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EntityLodConfig_TypeDefinitionIndex = 19211;

	class EntityLodConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* PrefabPath; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* SubObjAsset; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYLODCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::EntityLodConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EntityLodConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYLODCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
