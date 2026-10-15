#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/RubikCubeGroup.h"
#include "unitysdk/RPG/Client/Prop/RubikCubePuzzleAxis.h"
#include "unitysdk/RPG/Client/Prop/RubikCubePuzzleCube.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client::Prop { class LightRubikCubePuzzleBlock; }
namespace RPG::Client::Prop { class LightRubikCubePuzzleConditionGroup; }
namespace RPG::Client::Prop { class LightRubikCubePuzzleCube; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }

#define RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLECUBE_ANIMROTATEANYANGLE_OFFSET UNITYSDK_OFFSET(0xDD265F0)
#define RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLECUBE_ANIMROTATE_OFFSET UNITYSDK_OFFSET(0xDD21460)
#define RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLECUBE_BEKGCBCIODA_OFFSET UNITYSDK_OFFSET(0xDD276D0)
#define RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLECUBE_CTOR_OFFSET UNITYSDK_OFFSET(0xDD27730)
#define RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLECUBE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDD23960)
#define RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLECUBE_GETCENTEROID_OFFSET UNITYSDK_OFFSET(0xDD26F30)
#define RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLECUBE_GETCOLORMATERIALS_OFFSET UNITYSDK_OFFSET(0xDD22C10)
#define RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLECUBE_GETGROUP_OFFSET UNITYSDK_OFFSET(0xDD25FF0)
#define RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLECUBE_GET_ISCOMPLETE_OFFSET UNITYSDK_OFFSET(0xDD20FB0)
#define RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLECUBE_INITCUBE_OFFSET UNITYSDK_OFFSET(0xDD20550)
#define RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLECUBE_INITSECONDORDER_OFFSET UNITYSDK_OFFSET(0xDD22DE0)
#define RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLECUBE_ONROTATEFINISH_OFFSET UNITYSDK_OFFSET(0xDD273A0)
#define RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLECUBE_ONROTATESTART_OFFSET UNITYSDK_OFFSET(0xDD27320)
#define RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLECUBE_OPCIKBLAHIG_OFFSET UNITYSDK_OFFSET(0xDD23920)
#define RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLECUBE_REGISTERFRAME_OFFSET UNITYSDK_OFFSET(0xDD22200)
#define RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLECUBE_REGISTERROTATEFINISHCALLBACK_OFFSET UNITYSDK_OFFSET(0xDD21C80)
#define RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLECUBE_ROTATEX_OFFSET UNITYSDK_OFFSET(0xDD239A0)
#define RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLECUBE_ROTATEY_OFFSET UNITYSDK_OFFSET(0xDD246E0)
#define RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLECUBE_ROTATEZ_OFFSET UNITYSDK_OFFSET(0xDD25330)
#define RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLECUBE_SELECTGROUPTEST_OFFSET UNITYSDK_OFFSET(0xDD26540)
#define RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLECUBE_SELECTGROUP_OFFSET UNITYSDK_OFFSET(0xDD218C0)
#define RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLECUBE_SETBLOCKMATERIAL_OFFSET UNITYSDK_OFFSET(0xDD265A0)
#define RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLECUBE_UNREGISTERROTATEFINISHCALLBACK_OFFSET UNITYSDK_OFFSET(0xDD21F10)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int LightRubikCubePuzzleCube_TypeDefinitionIndex = 78685;

	class LightRubikCubePuzzleCube : public ::RPG::Client::Prop::RubikCubePuzzleCube
	{
	public:
		::System::Object* CubeStatus; // 0x120
		::System::String* SelectRotateCustomString; // 0x128
		::RPG::GameCore::GameEntity* CFKHNPGEAJA; // 0x130
		::System::Collections::IEnumerator* BJOEOGDJKFF; // 0x138
		::System::Collections::Generic::List_1<::RPG::Client::Prop::LightRubikCubePuzzleConditionGroup*>* NNPKPPFJKDF; // 0x140
		::System::Action* CIFOILLJFNF; // 0x148
		::System::Action* JCGFOCCPHEH; // 0x150
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLECUBE_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Material*>* GetColorMaterials()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Material*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLECUBE_GETCOLORMATERIALS_OFFSET))(this);
		}

		::System::Void InitSecondOrder()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLECUBE_INITSECONDORDER_OFFSET))(this);
		}

		::System::Void OPCIKBLAHIG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLECUBE_OPCIKBLAHIG_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLECUBE_DISPOSE_OFFSET))(this);
		}

		::System::Void InitCube(::RPG::GameCore::GameEntity* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLECUBE_INITCUBE_OFFSET))(this, a1, a2);
		}

		::System::Void RegisterFrame(::RPG::Client::Prop::LightRubikCubePuzzleConditionGroup* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::LightRubikCubePuzzleConditionGroup*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLECUBE_REGISTERFRAME_OFFSET))(this, a1);
		}

		::System::Void RotateX(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLECUBE_ROTATEX_OFFSET))(this, a1, a2);
		}

		::System::Void RotateY(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLECUBE_ROTATEY_OFFSET))(this, a1, a2);
		}

		::System::Void RotateZ(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLECUBE_ROTATEZ_OFFSET))(this, a1, a2);
		}

		::System::Void SelectGroup(::RPG::Client::Prop::RubikCubeGroup a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::RubikCubeGroup, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLECUBE_SELECTGROUP_OFFSET))(this, a1, a2);
		}

		::System::Void SelectGroupTest(::RPG::Client::Prop::RubikCubeGroup a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::RubikCubeGroup, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLECUBE_SELECTGROUPTEST_OFFSET))(this, a1, a2);
		}

		::System::Void RegisterRotateFinishCallback(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLECUBE_REGISTERROTATEFINISHCALLBACK_OFFSET))(this, a1);
		}

		::System::Void UnRegisterRotateFinishCallback(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLECUBE_UNREGISTERROTATEFINISHCALLBACK_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::Prop::LightRubikCubePuzzleBlock*>* GetGroup(::RPG::Client::Prop::RubikCubeGroup a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::Prop::LightRubikCubePuzzleBlock*>*(*)(::PVOID, ::RPG::Client::Prop::RubikCubeGroup))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLECUBE_GETGROUP_OFFSET))(this, a1);
		}

		::System::Void SetBlockMaterial(::RPG::Client::Prop::LightRubikCubePuzzleBlock* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::LightRubikCubePuzzleBlock*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLECUBE_SETBLOCKMATERIAL_OFFSET))(this, a1, a2);
		}

		::System::Void AnimRotateAnyAngle(::System::Int32 a1, ::System::Boolean a2, ::RPG::Client::Prop::RubikCubePuzzleAxis a3, ::System::Single a4, ::UnityEngine::Vector3 a5, ::System::Boolean a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::RPG::Client::Prop::RubikCubePuzzleAxis, ::System::Single, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLECUBE_ANIMROTATEANYANGLE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::UnityEngine::Vector3 GetCenteroid(::System::Int32 a1, ::RPG::Client::Prop::RubikCubePuzzleAxis a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32, ::RPG::Client::Prop::RubikCubePuzzleAxis))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLECUBE_GETCENTEROID_OFFSET))(this, a1, a2);
		}

		::System::Void AnimRotate(::System::Int32 a1, ::System::Boolean a2, ::RPG::Client::Prop::RubikCubePuzzleAxis a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::RPG::Client::Prop::RubikCubePuzzleAxis))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLECUBE_ANIMROTATE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnRotateStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLECUBE_ONROTATESTART_OFFSET))(this);
		}

		::System::Void OnRotateFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLECUBE_ONROTATEFINISH_OFFSET))(this);
		}

		::System::Void BEKGCBCIODA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLECUBE_BEKGCBCIODA_OFFSET))(this);
		}

		::System::Boolean get_IsComplete()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLECUBE_GET_ISCOMPLETE_OFFSET))(this);
		}

	};
}
