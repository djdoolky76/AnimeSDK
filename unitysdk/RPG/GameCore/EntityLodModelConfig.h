#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class EntityLodModelConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ENTITYLODMODELCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D64B2A0)
#define RPG_GAMECORE_ENTITYLODMODELCONFIG_FAKJGCAPKLM_OFFSET UNITYSDK_OFFSET(0x1D64B2D0)
#define RPG_GAMECORE_ENTITYLODMODELCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D64AE00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EntityLodModelConfig_TypeDefinitionIndex = 19213;

	class EntityLodModelConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* RuntimeName; // 0x10
		::RPG::MVector3 LocalPosition; // 0x18
		::RPG::MVector3 LocalScale; // 0x24
		::RPG::MVector3 LocalRotation; // 0x30
		::System::Byte _padding0[0x4];
		::Il2CppArray<::System::String*>* LodPath; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* MeshLodPath; // 0x48
		::Il2CppArray<::System::Int32>* MeshLodRedirect; // 0x50
		::System::String* ArtNodeLodQuality; // 0x58
		::System::String* _RuntimeNameCache; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYLODMODELCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::EntityLodModelConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EntityLodModelConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYLODMODELCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		::System::String* FAKJGCAPKLM()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYLODMODELCONFIG_FAKJGCAPKLM_OFFSET))(this);
		}

	};
}
