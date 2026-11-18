#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedMonoBehaviour.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector2.h"

class BFEPEMCINFH;
class DLDCAJBJMPE;
namespace MoleMole::MiniGame::BangbooPartyGame { class MonoPartyDemoBlock; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_MINIGAME_BANGBOOPARTYGAME_MONOBANGBOOPARTYDEMOPARA_AWAKE_OFFSET UNITYSDK_OFFSET(0x146730A0)
#define MOLEMOLE_MINIGAME_BANGBOOPARTYGAME_MONOBANGBOOPARTYDEMOPARA_DOONTRIGGER_OFFSET UNITYSDK_OFFSET(0x14672FF0)
#define MOLEMOLE_MINIGAME_BANGBOOPARTYGAME_MONOBANGBOOPARTYDEMOPARA_GENERATEMAP_OFFSET UNITYSDK_OFFSET(0x14672960)
#define MOLEMOLE_MINIGAME_BANGBOOPARTYGAME_MONOBANGBOOPARTYDEMOPARA_GENERATEPREFABAT_OFFSET UNITYSDK_OFFSET(0x14673220)
#define MOLEMOLE_MINIGAME_BANGBOOPARTYGAME_MONOBANGBOOPARTYDEMOPARA_GENMAP_OFFSET UNITYSDK_OFFSET(0x146729B0)
#define MOLEMOLE_MINIGAME_BANGBOOPARTYGAME_MONOBANGBOOPARTYDEMOPARA_GETLIGHTCOLOR_OFFSET UNITYSDK_OFFSET(0x14672750)
#define MOLEMOLE_MINIGAME_BANGBOOPARTYGAME_MONOBANGBOOPARTYDEMOPARA_GETTOPPOSITION_OFFSET UNITYSDK_OFFSET(0x146727B0)
#define MOLEMOLE_MINIGAME_BANGBOOPARTYGAME_MONOBANGBOOPARTYDEMOPARA_GETTOPPOS_OFFSET UNITYSDK_OFFSET(0x146728B0)
#define MOLEMOLE_MINIGAME_BANGBOOPARTYGAME_MONOBANGBOOPARTYDEMOPARA_GET_LAYERCOUNT_OFFSET UNITYSDK_OFFSET(0x14672730)
#define MOLEMOLE_MINIGAME_BANGBOOPARTYGAME_MONOBANGBOOPARTYDEMOPARA_ONTRIGGER_OFFSET UNITYSDK_OFFSET(0x14672FA0)
#define MOLEMOLE_MINIGAME_BANGBOOPARTYGAME_MONOBANGBOOPARTYDEMOPARA_RESETMAP_OFFSET UNITYSDK_OFFSET(0x14673810)
#define MOLEMOLE_MINIGAME_BANGBOOPARTYGAME_MONOBANGBOOPARTYDEMOPARA_SETACTIVETOPLAYER_OFFSET UNITYSDK_OFFSET(0x14673770)
#define MOLEMOLE_MINIGAME_BANGBOOPARTYGAME_MONOBANGBOOPARTYDEMOPARA_UPDATE_OFFSET UNITYSDK_OFFSET(0x146731E0)
#define MOLEMOLE_MINIGAME_BANGBOOPARTYGAME_MONOBANGBOOPARTYDEMOPARA__CCTOR_OFFSET UNITYSDK_OFFSET(0x14673AC0)
#define MOLEMOLE_MINIGAME_BANGBOOPARTYGAME_MONOBANGBOOPARTYDEMOPARA__CTOR_OFFSET UNITYSDK_OFFSET(0x14673A20)

namespace MoleMole::MiniGame::BangbooPartyGame
{
	inline static constexpr unsigned int MonoBangbooPartyDemoPara_TypeDefinitionIndex = 79047;

	class MonoBangbooPartyDemoPara : public ::Sirenix::OdinInspector::SerializedMonoBehaviour
	{
	public:
		static ::BFEPEMCINFH** StaticGet_Ins()
		{
			return (::BFEPEMCINFH**)Il2CppClass::FromTypeDefinitionIndex(MonoBangbooPartyDemoPara_TypeDefinitionIndex)->GetStaticField(0x3BED0);
		}
		static ::System::Single* StaticGet_BlockHalfHeight()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(MonoBangbooPartyDemoPara_TypeDefinitionIndex)->GetStaticField(0xDB90);
		}
		static ::System::Boolean* StaticGet_UseStdGenerateLayers()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MonoBangbooPartyDemoPara_TypeDefinitionIndex)->GetStaticField(0xDB94);
		}
		::System::Single scaleForJoint; // 0x58
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::List_1<::System::Object*>* layerData; // 0x60
		::System::Collections::Generic::List_1<::UnityEngine::Color>* layerColors; // 0x68
		::UnityEngine::Color lightColor; // 0x70
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::MiniGame::BangbooPartyGame::MonoPartyDemoBlock*>* layerBlockDict; // 0x80
		::System::Int32 layerHeight; // 0x88
		::System::Byte _padding1[0x4];
		::System::String* blockPath; // 0x90
		::UnityEngine::Transform* blockParent; // 0x98
		::UnityEngine::GameObject* block; // 0xA0
		::UnityEngine::Vector3 parentOffset; // 0xA8
		::System::Byte _padding2[0x4];
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Transform*>* layerParents; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_BANGBOOPARTYGAME_MONOBANGBOOPARTYDEMOPARA__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_BANGBOOPARTYGAME_MONOBANGBOOPARTYDEMOPARA__CCTOR_OFFSET))();
		}

		::System::Int32 get_layerCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_BANGBOOPARTYGAME_MONOBANGBOOPARTYDEMOPARA_GET_LAYERCOUNT_OFFSET))(this);
		}

		::UnityEngine::Color GetLightColor()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_BANGBOOPARTYGAME_MONOBANGBOOPARTYDEMOPARA_GETLIGHTCOLOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetTopPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_BANGBOOPARTYGAME_MONOBANGBOOPARTYDEMOPARA_GETTOPPOSITION_OFFSET))(this);
		}

		::System::Void GenerateMap()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_BANGBOOPARTYGAME_MONOBANGBOOPARTYDEMOPARA_GENERATEMAP_OFFSET))(this);
		}

		::System::Void OnTrigger(::DLDCAJBJMPE* info)
		{
			return ((::System::Void(*)(::PVOID, ::DLDCAJBJMPE*))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_BANGBOOPARTYGAME_MONOBANGBOOPARTYDEMOPARA_ONTRIGGER_OFFSET))(this, info);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_BANGBOOPARTYGAME_MONOBANGBOOPARTYDEMOPARA_AWAKE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_BANGBOOPARTYGAME_MONOBANGBOOPARTYDEMOPARA_UPDATE_OFFSET))(this);
		}

		::System::Void GenMap()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_BANGBOOPARTYGAME_MONOBANGBOOPARTYDEMOPARA_GENMAP_OFFSET))(this);
		}

		::System::Void GeneratePrefabAt(::System::Int32 layer, ::UnityEngine::Vector2 xzPos, ::System::UInt32 uid)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector2, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_BANGBOOPARTYGAME_MONOBANGBOOPARTYDEMOPARA_GENERATEPREFABAT_OFFSET))(this, layer, xzPos, uid);
		}

		::UnityEngine::Vector3 GetTopPos()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_BANGBOOPARTYGAME_MONOBANGBOOPARTYDEMOPARA_GETTOPPOS_OFFSET))(this);
		}

		::System::Void SetActiveTopLayer(::System::Boolean show)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_BANGBOOPARTYGAME_MONOBANGBOOPARTYDEMOPARA_SETACTIVETOPLAYER_OFFSET))(this, show);
		}

		::System::Void ResetMap()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_BANGBOOPARTYGAME_MONOBANGBOOPARTYDEMOPARA_RESETMAP_OFFSET))(this);
		}

		::System::Void DoOnTrigger(::DLDCAJBJMPE* info)
		{
			return ((::System::Void(*)(::PVOID, ::DLDCAJBJMPE*))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_BANGBOOPARTYGAME_MONOBANGBOOPARTYDEMOPARA_DOONTRIGGER_OFFSET))(this, info);
		}
	};
}
