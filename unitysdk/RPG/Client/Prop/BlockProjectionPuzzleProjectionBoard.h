#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/RubikCubeFrameFace.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace RPG::Client { class MonoEffectManager; }
namespace RPG::Client::Prop { class BlockProjectionPuzzleProjectionItem; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEPROJECTIONBOARD_CANCELPROJECTIONBOARDPREVIEW_OFFSET UNITYSDK_OFFSET(0xDC29470)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEPROJECTIONBOARD_CCTOR_OFFSET UNITYSDK_OFFSET(0xDC2B9C0)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEPROJECTIONBOARD_CIBMAHMKKBM_OFFSET UNITYSDK_OFFSET(0xDC2B4E0)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEPROJECTIONBOARD_CTOR_OFFSET UNITYSDK_OFFSET(0xDC2B940)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEPROJECTIONBOARD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDC21250)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEPROJECTIONBOARD_EOMBFKMFCMD_OFFSET UNITYSDK_OFFSET(0xDC2ADA0)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEPROJECTIONBOARD_FNEABIBPBFK_OFFSET UNITYSDK_OFFSET(0xDC2B6E0)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEPROJECTIONBOARD_ISFINISH_OFFSET UNITYSDK_OFFSET(0xDC28E00)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEPROJECTIONBOARD_JFMPIPAMCHF_OFFSET UNITYSDK_OFFSET(0xDC2AA40)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEPROJECTIONBOARD_PLAYSUCCESSPERFORM_OFFSET UNITYSDK_OFFSET(0xDC28BF0)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEPROJECTIONBOARD_RESET_OFFSET UNITYSDK_OFFSET(0xDC21DE0)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEPROJECTIONBOARD_SELECTPROJECTIONBOARDPREVIEW_OFFSET UNITYSDK_OFFSET(0xDC295E0)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEPROJECTIONBOARD_SETPROJECTIONPREVIEWSTATE_OFFSET UNITYSDK_OFFSET(0xDC2AC40)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEPROJECTIONBOARD_SETPROJECTIONSTATE_OFFSET UNITYSDK_OFFSET(0xDC28A00)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEPROJECTIONBOARD_UNFINISHEDCOUNT_OFFSET UNITYSDK_OFFSET(0xDC29C40)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEPROJECTIONBOARD_UPDATEPROJECTIONBOARD_OFFSET UNITYSDK_OFFSET(0xDC28A50)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int BlockProjectionPuzzleProjectionBoard_TypeDefinitionIndex = 78214;

	class BlockProjectionPuzzleProjectionBoard : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single ProjectionDistance; // 0x18
		::System::Single BlockSize; // 0x1C
		::System::Single BlockPadding; // 0x20
		::RPG::Client::Prop::RubikCubeFrameFace Face; // 0x24
		::UnityEngine::Transform* MatchEffect; // 0x28
		::UnityEngine::GameObject* ItemPrefab; // 0x30
		::System::Boolean PIPLLENMLIM; // 0x38
		::System::Byte _padding0[0x7];
		::System::Collections::Generic::List_1<::RPG::Client::Prop::BlockProjectionPuzzleProjectionItem*>* _AllItems; // 0x40
		::System::Object* _LookupItems; // 0x48
		::System::Object* JCFHCPMIPLC; // 0x50
		::System::Object* DOECBPGBKEL; // 0x58
		::System::Object* CJJBJOKNHIM; // 0x60
		::RPG::Client::MonoEffectManager* KENLJFPJNJO; // 0x68
		::System::UInt32 BDKNELJBENO; // 0x70
		static ::System::String** StaticGet_LNPIOBONPDM()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client.Prop", "BlockProjectionPuzzleProjectionBoard")->GetStaticField(0x48350);
		}

		static ::System::String** StaticGet_KFKGCOICHLD()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client.Prop", "BlockProjectionPuzzleProjectionBoard")->GetStaticField(0x48358);
		}

		static ::System::String** StaticGet_KHIAFOEMCEH()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client.Prop", "BlockProjectionPuzzleProjectionBoard")->GetStaticField(0x48360);
		}

		static ::System::String** StaticGet_HGINNPJAFGJ()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client.Prop", "BlockProjectionPuzzleProjectionBoard")->GetStaticField(0x48368);
		}

		static ::System::String** StaticGet_DHDHLMEJAPO()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client.Prop", "BlockProjectionPuzzleProjectionBoard")->GetStaticField(0x48370);
		}

		static ::System::String** StaticGet_HBKPGPHJAIK()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client.Prop", "BlockProjectionPuzzleProjectionBoard")->GetStaticField(0x48378);
		}

		static ::System::String** StaticGet_FDIDIIPBEHA()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client.Prop", "BlockProjectionPuzzleProjectionBoard")->GetStaticField(0x48380);
		}

		static ::System::String** StaticGet_AGHJJCMCAAJ()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client.Prop", "BlockProjectionPuzzleProjectionBoard")->GetStaticField(0x48388);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEPROJECTIONBOARD_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEPROJECTIONBOARD_CCTOR_OFFSET))();
		}

		::System::Void Reset(::RPG::Client::MonoEffectManager* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffectManager*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEPROJECTIONBOARD_RESET_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEPROJECTIONBOARD_DISPOSE_OFFSET))(this);
		}

		::System::Boolean IsFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEPROJECTIONBOARD_ISFINISH_OFFSET))(this);
		}

		::System::Int32 UnFinishedCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEPROJECTIONBOARD_UNFINISHEDCOUNT_OFFSET))(this);
		}

		::System::Void SetProjectionState(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEPROJECTIONBOARD_SETPROJECTIONSTATE_OFFSET))(this, a1);
		}

		::System::Void SetProjectionPreviewState(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEPROJECTIONBOARD_SETPROJECTIONPREVIEWSTATE_OFFSET))(this, a1);
		}

		::System::Void SelectProjectionBoardPreview(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEPROJECTIONBOARD_SELECTPROJECTIONBOARDPREVIEW_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CancelProjectionBoardPreview(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEPROJECTIONBOARD_CANCELPROJECTIONBOARDPREVIEW_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateProjectionBoard()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEPROJECTIONBOARD_UPDATEPROJECTIONBOARD_OFFSET))(this);
		}

		::System::Void PlaySuccessPerform()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEPROJECTIONBOARD_PLAYSUCCESSPERFORM_OFFSET))(this);
		}

		::System::Void JFMPIPAMCHF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEPROJECTIONBOARD_JFMPIPAMCHF_OFFSET))(this);
		}

		::System::Void EOMBFKMFCMD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEPROJECTIONBOARD_EOMBFKMFCMD_OFFSET))(this);
		}

		::System::Void CIBMAHMKKBM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEPROJECTIONBOARD_CIBMAHMKKBM_OFFSET))(this);
		}

		::System::Void FNEABIBPBFK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEPROJECTIONBOARD_FNEABIBPBFK_OFFSET))(this);
		}

	};
}
