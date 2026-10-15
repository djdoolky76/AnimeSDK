#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/ViewModel/MechCraftTalentPointState.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace RPG::Client::MechCraft::View { class MechCraftTalentPointControlBinder; }
namespace RPG::Client::MechCraft::ViewModel { class MechCraftTalentPointViewModel; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::ComponentModel { class PropertyChangedEventArgs; }
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTPOINTCONTROL_AHHJOACILOK_OFFSET UNITYSDK_OFFSET(0xD66D030)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTPOINTCONTROL_BJAPGBDHHFM_OFFSET UNITYSDK_OFFSET(0xD66B2C0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTPOINTCONTROL_CCTOR_OFFSET UNITYSDK_OFFSET(0xD66D130)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTPOINTCONTROL_CTOR_OFFSET UNITYSDK_OFFSET(0xD66D0C0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTPOINTCONTROL_EHFDFKJGFBB_OFFSET UNITYSDK_OFFSET(0xD66C860)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTPOINTCONTROL_GET_ACTIVATEDURATION_OFFSET UNITYSDK_OFFSET(0xD66B070)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTPOINTCONTROL_GET_ANCHORAREA_OFFSET UNITYSDK_OFFSET(0xD66AEE0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTPOINTCONTROL_HEHMNGANAJO_OFFSET UNITYSDK_OFFSET(0xD66A320)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTPOINTCONTROL_JEJLPHKIHLB_OFFSET UNITYSDK_OFFSET(0xD66BE50)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTPOINTCONTROL_JFAKEMMEMHJ_OFFSET UNITYSDK_OFFSET(0xD66AD80)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTPOINTCONTROL_KCEDLPGDJLN_OFFSET UNITYSDK_OFFSET(0xD66A660)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTPOINTCONTROL_KPANOFMDLCI_OFFSET UNITYSDK_OFFSET(0xD66CD90)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTPOINTCONTROL_MOIOMPLMGPF_OFFSET UNITYSDK_OFFSET(0xD66AB50)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTPOINTCONTROL_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xD66B230)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftTalentPointControl_TypeDefinitionIndex = 80071;

	class MechCraftTalentPointControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointViewModel* LFGMLJCCPCH; // 0x18
		::RPG::Client::MechCraft::View::MechCraftTalentPointControlBinder* _Binder; // 0x20
		::System::String* _StateDefault; // 0x28
		::System::String* _StateActive; // 0x30
		::System::String* _StateFinish; // 0x38
		::System::String* _StateLocked; // 0x40
		::System::Single _SfxStartTime; // 0x48
		::System::Byte _padding0[0x4];
		::System::String* _SfxEventName; // 0x50
		::System::Nullable_1<::System::Boolean> HGMADJOAKFF; // 0x58
		static ::System::Int32* StaticGet_OGEHBDKMGFE()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.MechCraft.View", "MechCraftTalentPointControl")->GetStaticField(0x130E0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTPOINTCONTROL_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTPOINTCONTROL_CCTOR_OFFSET))();
		}

		::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointViewModel* KCEDLPGDJLN()
		{
			return ((::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTPOINTCONTROL_KCEDLPGDJLN_OFFSET))(this);
		}

		::System::Void HEHMNGANAJO(::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTPOINTCONTROL_HEHMNGANAJO_OFFSET))(this, a1);
		}

		::UnityEngine::RectTransform* get_AnchorArea()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTPOINTCONTROL_GET_ANCHORAREA_OFFSET))(this);
		}

		::System::Single get_ActivateDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTPOINTCONTROL_GET_ACTIVATEDURATION_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTPOINTCONTROL_ONDESTROY_OFFSET))(this);
		}

		::System::Void JFAKEMMEMHJ(::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTPOINTCONTROL_JFAKEMMEMHJ_OFFSET))(this, a1);
		}

		::System::Void MOIOMPLMGPF(::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTPOINTCONTROL_MOIOMPLMGPF_OFFSET))(this, a1);
		}

		::System::Void EHFDFKJGFBB(::System::Object* a1, ::System::ComponentModel::PropertyChangedEventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::PropertyChangedEventArgs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTPOINTCONTROL_EHFDFKJGFBB_OFFSET))(this, a1, a2);
		}

		::System::Void BJAPGBDHHFM(::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTPOINTCONTROL_BJAPGBDHHFM_OFFSET))(this, a1);
		}

		::System::Void JEJLPHKIHLB(::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointState))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTPOINTCONTROL_JEJLPHKIHLB_OFFSET))(this, a1);
		}

		::System::Void KPANOFMDLCI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTPOINTCONTROL_KPANOFMDLCI_OFFSET))(this);
		}

		::System::Collections::IEnumerator* AHHJOACILOK()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTPOINTCONTROL_AHHJOACILOK_OFFSET))(this);
		}

	};
}
