#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
class CNIPJLLHIJA;
class MBLEHDIHIBG;
namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class StaticListView; }
namespace Sofa { class ShortCutHintControl; }
namespace System { class IDisposable; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace UnityEngine::UI { class Image; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTREPORTCONTROL_CTOR_OFFSET UNITYSDK_OFFSET(0xD651590)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTREPORTCONTROL_GET_CONTENT_OFFSET UNITYSDK_OFFSET(0xD650CC0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTREPORTCONTROL_GET_SHORTCUTHINT_OFFSET UNITYSDK_OFFSET(0xD651260)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTREPORTCONTROL_JFAKEMMEMHJ_OFFSET UNITYSDK_OFFSET(0xD650EF0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTREPORTCONTROL_MOIOMPLMGPF_OFFSET UNITYSDK_OFFSET(0xD650D80)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTREPORTCONTROL_NGFOFBKDCGD_OFFSET UNITYSDK_OFFSET(0xD6512B0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTREPORTCONTROL_NINHECHEHCN_OFFSET UNITYSDK_OFFSET(0xD651530)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTREPORTCONTROL_SET_CONTENT_OFFSET UNITYSDK_OFFSET(0xD650D00)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftReportControl_TypeDefinitionIndex = 80023;

	class MechCraftReportControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::MBLEHDIHIBG* CLNCDHNFJOC; // 0x18
		::RPG::Client::StaticListView* _CmtList; // 0x20
		::UnityEngine::UI::Image* _Image; // 0x28
		::RPG::Client::LocalizedText* _Content; // 0x30
		::RPG::Client::LocalizedText* _LikeCount; // 0x38
		::RPG::Client::LocalizedText* _CmtCount; // 0x40
		::RPG::Client::AnimatorButton* _BtnLike; // 0x48
		::RPG::Client::AnimatorButton* _BtnClose; // 0x50
		::Sofa::ShortCutHintControl* _ShortCutHintControl; // 0x58
		::System::IDisposable* GLJKCIFADHM; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTREPORTCONTROL_CTOR_OFFSET))(this);
		}

		::MBLEHDIHIBG* get_Content()
		{
			return ((::MBLEHDIHIBG*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTREPORTCONTROL_GET_CONTENT_OFFSET))(this);
		}

		::System::Void set_Content(::MBLEHDIHIBG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MBLEHDIHIBG*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTREPORTCONTROL_SET_CONTENT_OFFSET))(this, a1);
		}

		::Sofa::ShortCutHintControl* get_ShortCutHint()
		{
			return ((::Sofa::ShortCutHintControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTREPORTCONTROL_GET_SHORTCUTHINT_OFFSET))(this);
		}

		::System::Void JFAKEMMEMHJ(::MBLEHDIHIBG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MBLEHDIHIBG*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTREPORTCONTROL_JFAKEMMEMHJ_OFFSET))(this, a1);
		}

		::System::Void MOIOMPLMGPF(::MBLEHDIHIBG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MBLEHDIHIBG*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTREPORTCONTROL_MOIOMPLMGPF_OFFSET))(this, a1);
		}

		::System::Void NGFOFBKDCGD(::System::Collections::Generic::IReadOnlyList_1<::CNIPJLLHIJA*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::CNIPJLLHIJA*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTREPORTCONTROL_NGFOFBKDCGD_OFFSET))(this, a1);
		}

		::System::Void NINHECHEHCN(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTREPORTCONTROL_NINHECHEHCN_OFFSET))(this, a1);
		}

	};
}
