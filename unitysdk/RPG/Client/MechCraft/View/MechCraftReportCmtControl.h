#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
class CNIPJLLHIJA;
namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class StaticListView; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Image; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTREPORTCMTCONTROL_ANDEMFLBDFH_OFFSET UNITYSDK_OFFSET(0xD6507D0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTREPORTCMTCONTROL_CTOR_OFFSET UNITYSDK_OFFSET(0xD650A50)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTREPORTCMTCONTROL_GET_CONTENT_OFFSET UNITYSDK_OFFSET(0xD650670)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTREPORTCMTCONTROL_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0xD650710)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTREPORTCMTCONTROL_SET_CONTENT_OFFSET UNITYSDK_OFFSET(0xD6506B0)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftReportCmtControl_TypeDefinitionIndex = 80021;

	class MechCraftReportCmtControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::CNIPJLLHIJA* LFGMLJCCPCH; // 0x18
		::RPG::Client::StaticListView* _ReplyList; // 0x20
		::UnityEngine::UI::Image* _HeadIcon; // 0x28
		::RPG::Client::LocalizedText* _Name; // 0x30
		::RPG::Client::LocalizedText* _CmtContent; // 0x38
		::UnityEngine::RectTransform* _PosterRoot; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTREPORTCMTCONTROL_CTOR_OFFSET))(this);
		}

		::CNIPJLLHIJA* get_Content()
		{
			return ((::CNIPJLLHIJA*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTREPORTCMTCONTROL_GET_CONTENT_OFFSET))(this);
		}

		::System::Void set_Content(::CNIPJLLHIJA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CNIPJLLHIJA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTREPORTCMTCONTROL_SET_CONTENT_OFFSET))(this, a1);
		}

		::System::Void KANMCJHEFJJ(::CNIPJLLHIJA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CNIPJLLHIJA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTREPORTCMTCONTROL_KANMCJHEFJJ_OFFSET))(this, a1);
		}

		::System::Void ANDEMFLBDFH(::System::Collections::Generic::IReadOnlyList_1<::CNIPJLLHIJA*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::CNIPJLLHIJA*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTREPORTCMTCONTROL_ANDEMFLBDFH_OFFSET))(this, a1);
		}

	};
}
