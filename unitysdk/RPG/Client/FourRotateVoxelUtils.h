#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector3.h"
class INMMPMDELKE;
class OEAKPLCANOI;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelLittleGameInfo; }
namespace RPG::GameCore { class LittleGameEntityConfig; }
namespace RPG::GameCore { class LittleGameLevelConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_FOURROTATEVOXELUTILS_EVALUATEID_OFFSET UNITYSDK_OFFSET(0xD9D3D70)
#define RPG_CLIENT_FOURROTATEVOXELUTILS_GETFOURROTATEENTITYBYENTITYID_OFFSET UNITYSDK_OFFSET(0xD9D4170)
#define RPG_CLIENT_FOURROTATEVOXELUTILS_GETFOURROTATEVOXELLEVELCONFIG_OFFSET UNITYSDK_OFFSET(0xD9D4390)
#define RPG_CLIENT_FOURROTATEVOXELUTILS_GETFOURROTATEVOXELLEVELUNITLENGTH_OFFSET UNITYSDK_OFFSET(0xD9D4720)
#define RPG_CLIENT_FOURROTATEVOXELUTILS_GETINSTANCE_1_OFFSET UNITYSDK_OFFSET(0xD9D3E40)
#define RPG_CLIENT_FOURROTATEVOXELUTILS_GETPLAYERGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0xD9D47B0)
#define RPG_CLIENT_FOURROTATEVOXELUTILS_ISFOURROTATEVOXELCONTAINER_OFFSET UNITYSDK_OFFSET(0xD9D4680)
#define RPG_CLIENT_FOURROTATEVOXELUTILS_TRYGETCONTAINERENTITY_OFFSET UNITYSDK_OFFSET(0xD9D42C0)
#define RPG_CLIENT_FOURROTATEVOXELUTILS_TRYGETENTITYWORLDPOSITION_OFFSET UNITYSDK_OFFSET(0xD9D44B0)
#define RPG_CLIENT_FOURROTATEVOXELUTILS_TRYRESOLVEPORTALTARGETLOCALPOSITION_OFFSET UNITYSDK_OFFSET(0xD9D4890)
#define RPG_CLIENT_FOURROTATEVOXELUTILS__FORMATENTITYIDPATH_OFFSET UNITYSDK_OFFSET(0xD9D53C0)
#define RPG_CLIENT_FOURROTATEVOXELUTILS__TRYCOMPOSEENTITYTOLEVELROOT_OFFSET UNITYSDK_OFFSET(0xD9D4DB0)

namespace RPG::Client
{
	inline static constexpr unsigned int FourRotateVoxelUtils_TypeDefinitionIndex = 61695;

	class FourRotateVoxelUtils : public ::System::Object
	{
	public:
		static ::System::UInt32 EvaluateID(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::DynamicString* a2)
		{
			return ((::System::UInt32(*)(::RPG::GameCore::TaskContext*, ::RPG::GameCore::DynamicString*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FOURROTATEVOXELUTILS_EVALUATEID_OFFSET))(a1, a2);
		}

		static ::System::Boolean GetInstance_1(::OEAKPLCANOI* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::Boolean a4)
		{
			return ((::System::Boolean(*)(::OEAKPLCANOI*, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FOURROTATEVOXELUTILS_GETINSTANCE_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::INMMPMDELKE* GetFourRotateEntityByEntityID(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::Boolean a4)
		{
			return ((::INMMPMDELKE*(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FOURROTATEVOXELUTILS_GETFOURROTATEENTITYBYENTITYID_OFFSET))(a1, a2, a3, a4);
		}

		static ::RPG::GameCore::GameEntity* TryGetContainerEntity(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FOURROTATEVOXELUTILS_TRYGETCONTAINERENTITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean GetFourRotateVoxelLevelConfig(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::GameCore::LevelLittleGameInfo* a3)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::UInt32, ::RPG::GameCore::LevelLittleGameInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FOURROTATEVOXELUTILS_GETFOURROTATEVOXELLEVELCONFIG_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean TryGetEntityWorldPosition(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::UnityEngine::Vector3 a4)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_FOURROTATEVOXELUTILS_TRYGETENTITYWORLDPOSITION_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean IsFourRotateVoxelContainer(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FOURROTATEVOXELUTILS_ISFOURROTATEVOXELCONTAINER_OFFSET))(a1, a2);
		}

		static ::System::Single GetFourRotateVoxelLevelUnitLength(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Single(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FOURROTATEVOXELUTILS_GETFOURROTATEVOXELLEVELUNITLENGTH_OFFSET))(a1, a2);
		}

		static ::UnityEngine::GameObject* GetPlayerGameObject()
		{
			return ((::UnityEngine::GameObject*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FOURROTATEVOXELUTILS_GETPLAYERGAMEOBJECT_OFFSET))();
		}

		static ::System::Boolean TryResolvePortalTargetLocalPosition(::RPG::GameCore::LittleGameLevelConfig* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::UnityEngine::Vector3 a4, ::System::String* a5)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::LittleGameLevelConfig*, ::System::UInt32, ::System::UInt32, ::UnityEngine::Vector3, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FOURROTATEVOXELUTILS_TRYRESOLVEPORTALTARGETLOCALPOSITION_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Boolean _TryComposeEntityToLevelRoot(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::LittleGameEntityConfig*>* a1, ::System::UInt32 a2, ::UnityEngine::Matrix4x4 a3, ::System::String* a4)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::LittleGameEntityConfig*>*, ::System::UInt32, ::UnityEngine::Matrix4x4, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FOURROTATEVOXELUTILS__TRYCOMPOSEENTITYTOLEVELROOT_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::String* _FormatEntityIDPath(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::String*(*)(::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FOURROTATEVOXELUTILS__FORMATENTITYIDPATH_OFFSET))(a1);
		}

	};
}
