#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseViewModel.h"
class GKOGPFKEOEI;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWCONTENTVIEWMODEL_ADDSUBCONTENTS_OFFSET UNITYSDK_OFFSET(0xD3A27D0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWCONTENTVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0xD3A26D0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWCONTENTVIEWMODEL_GET_CONTENTDATAS_OFFSET UNITYSDK_OFFSET(0xD3A28B0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWCONTENTVIEWMODEL_GET_MAINCONTENT_OFFSET UNITYSDK_OFFSET(0xD3A2620)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWCONTENTVIEWMODEL_SET_CONTENTDATAS_OFFSET UNITYSDK_OFFSET(0xD3A28C0)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsInterviewContentViewModel_TypeDefinitionIndex = 80454;

	class LimaoNewsInterviewContentViewModel : public ::Sofa::BaseViewModel
	{
	public:
		::System::Collections::Generic::List_1<::GKOGPFKEOEI*>* _ContentDatas_k__BackingField; // 0x20
		::System::Void _ctor(::GKOGPFKEOEI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GKOGPFKEOEI*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWCONTENTVIEWMODEL_CTOR_OFFSET))(this, a1);
		}

		::System::Void AddSubContents(::GKOGPFKEOEI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GKOGPFKEOEI*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWCONTENTVIEWMODEL_ADDSUBCONTENTS_OFFSET))(this, a1);
		}

		::GKOGPFKEOEI* get_MainContent()
		{
			return ((::GKOGPFKEOEI*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWCONTENTVIEWMODEL_GET_MAINCONTENT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::GKOGPFKEOEI*>* get_ContentDatas()
		{
			return ((::System::Collections::Generic::List_1<::GKOGPFKEOEI*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWCONTENTVIEWMODEL_GET_CONTENTDATAS_OFFSET))(this);
		}

		::System::Void set_ContentDatas(::System::Collections::Generic::List_1<::GKOGPFKEOEI*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::GKOGPFKEOEI*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWCONTENTVIEWMODEL_SET_CONTENTDATAS_OFFSET))(this, a1);
		}

	};
}
