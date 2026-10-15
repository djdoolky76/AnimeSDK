#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/ViewModel/MechCraftTalentDetailState.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
class AHDANEIIJML;
namespace RPG::Client { class StaticListView; }
namespace RPG::Client { class StaticListViewItem; }
namespace RPG::Client::MechCraft::View { class MechCraftTalentDetailControlBinder; }
namespace RPG::Client::MechCraft::View { class MechCraftTalentPointControl; }
namespace RPG::Client::MechCraft::ViewModel { class MechCraftTalentDetailViewModel; }
namespace RPG::Client::MechCraft::ViewModel { class MechCraftTalentPointViewModel; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::ComponentModel { class PropertyChangedEventArgs; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTDETAILCONTROL_BJAPGBDHHFM_OFFSET UNITYSDK_OFFSET(0xD667500)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTDETAILCONTROL_CCTOR_OFFSET UNITYSDK_OFFSET(0xD6699B0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTDETAILCONTROL_CTOR_OFFSET UNITYSDK_OFFSET(0xD669980)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTDETAILCONTROL_EHFDFKJGFBB_OFFSET UNITYSDK_OFFSET(0xD668E40)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTDETAILCONTROL_GET_CONTENT_OFFSET UNITYSDK_OFFSET(0xD6671C0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTDETAILCONTROL_GET_POINTGETTER_OFFSET UNITYSDK_OFFSET(0xD6671A0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTDETAILCONTROL_HNNNLNNOPKI_OFFSET UNITYSDK_OFFSET(0xD6697C0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTDETAILCONTROL_JEJLPHKIHLB_OFFSET UNITYSDK_OFFSET(0xD6688E0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTDETAILCONTROL_JFAKEMMEMHJ_OFFSET UNITYSDK_OFFSET(0xD6673A0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTDETAILCONTROL_MOIOMPLMGPF_OFFSET UNITYSDK_OFFSET(0xD667280)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTDETAILCONTROL_SET_CONTENT_OFFSET UNITYSDK_OFFSET(0xD667200)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTDETAILCONTROL_SET_POINTGETTER_OFFSET UNITYSDK_OFFSET(0xD6671B0)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftTalentDetailControl_TypeDefinitionIndex = 80064;

	class MechCraftTalentDetailControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* _StateDefault; // 0x18
		::System::String* _StateLocked; // 0x20
		::System::String* _StateFinished; // 0x28
		::System::String* _StateToFinished; // 0x30
		::RPG::Client::MechCraft::ViewModel::MechCraftTalentDetailViewModel* LFGMLJCCPCH; // 0x38
		::System::Boolean PHBCJPCHDHC; // 0x40
		::System::Byte _padding0[0x7];
		::System::Func_2<::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointViewModel*, ::RPG::Client::MechCraft::View::MechCraftTalentPointControl*>* _PointGetter_k__BackingField; // 0x48
		::RPG::Client::MechCraft::View::MechCraftTalentDetailControlBinder* _Binder; // 0x50
		::System::Boolean FIGOEIGHJGD; // 0x58
		static ::RPG::Client::TextID* StaticGet_FPADDIGANHH()
		{
			return (::RPG::Client::TextID*)UnitySDK::FromName("RPG.Client.MechCraft.View", "MechCraftTalentDetailControl")->GetStaticField(0x13050);
		}

		static ::RPG::Client::TextID* StaticGet_AJNBKGEMOAH()
		{
			return (::RPG::Client::TextID*)UnitySDK::FromName("RPG.Client.MechCraft.View", "MechCraftTalentDetailControl")->GetStaticField(0x13060);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTDETAILCONTROL_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTDETAILCONTROL_CCTOR_OFFSET))();
		}

		::System::Func_2<::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointViewModel*, ::RPG::Client::MechCraft::View::MechCraftTalentPointControl*>* get_PointGetter()
		{
			return ((::System::Func_2<::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointViewModel*, ::RPG::Client::MechCraft::View::MechCraftTalentPointControl*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTDETAILCONTROL_GET_POINTGETTER_OFFSET))(this);
		}

		::System::Void set_PointGetter(::System::Func_2<::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointViewModel*, ::RPG::Client::MechCraft::View::MechCraftTalentPointControl*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_2<::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointViewModel*, ::RPG::Client::MechCraft::View::MechCraftTalentPointControl*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTDETAILCONTROL_SET_POINTGETTER_OFFSET))(this, a1);
		}

		::RPG::Client::MechCraft::ViewModel::MechCraftTalentDetailViewModel* get_Content()
		{
			return ((::RPG::Client::MechCraft::ViewModel::MechCraftTalentDetailViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTDETAILCONTROL_GET_CONTENT_OFFSET))(this);
		}

		::System::Void set_Content(::RPG::Client::MechCraft::ViewModel::MechCraftTalentDetailViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftTalentDetailViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTDETAILCONTROL_SET_CONTENT_OFFSET))(this, a1);
		}

		::System::Void JFAKEMMEMHJ(::RPG::Client::MechCraft::ViewModel::MechCraftTalentDetailViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftTalentDetailViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTDETAILCONTROL_JFAKEMMEMHJ_OFFSET))(this, a1);
		}

		::System::Void MOIOMPLMGPF(::RPG::Client::MechCraft::ViewModel::MechCraftTalentDetailViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftTalentDetailViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTDETAILCONTROL_MOIOMPLMGPF_OFFSET))(this, a1);
		}

		::System::Void EHFDFKJGFBB(::System::Object* a1, ::System::ComponentModel::PropertyChangedEventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::PropertyChangedEventArgs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTDETAILCONTROL_EHFDFKJGFBB_OFFSET))(this, a1, a2);
		}

		::System::Void BJAPGBDHHFM(::RPG::Client::MechCraft::ViewModel::MechCraftTalentDetailViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftTalentDetailViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTDETAILCONTROL_BJAPGBDHHFM_OFFSET))(this, a1);
		}

		::System::Void JEJLPHKIHLB(::RPG::Client::MechCraft::ViewModel::MechCraftTalentDetailViewModel* a1, ::RPG::Client::MechCraft::ViewModel::MechCraftTalentDetailState a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftTalentDetailViewModel*, ::RPG::Client::MechCraft::ViewModel::MechCraftTalentDetailState))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTDETAILCONTROL_JEJLPHKIHLB_OFFSET))(this, a1, a2);
		}

		::RPG::Client::StaticListViewItem* HNNNLNNOPKI(::RPG::Client::StaticListView* a1, ::AHDANEIIJML* a2)
		{
			return ((::RPG::Client::StaticListViewItem*(*)(::PVOID, ::RPG::Client::StaticListView*, ::AHDANEIIJML*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTDETAILCONTROL_HNNNLNNOPKI_OFFSET))(this, a1, a2);
		}

	};
}
