#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/LayoutGroup.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_FLEXIBLELAYOUTGROUP_CALCULATELAYOUTINPUTHORIZONTAL_OFFSET UNITYSDK_OFFSET(0xD041610)
#define RPG_CLIENT_FLEXIBLELAYOUTGROUP_CALCULATELAYOUTINPUTVERTICAL_OFFSET UNITYSDK_OFFSET(0xD042440)
#define RPG_CLIENT_FLEXIBLELAYOUTGROUP_CTOR_OFFSET UNITYSDK_OFFSET(0xD0430D0)
#define RPG_CLIENT_FLEXIBLELAYOUTGROUP_DIMCBLMBAAK_OFFSET UNITYSDK_OFFSET(0xD0414B0)
#define RPG_CLIENT_FLEXIBLELAYOUTGROUP_DNPHABMKIGK_OFFSET UNITYSDK_OFFSET(0xD041570)
#define RPG_CLIENT_FLEXIBLELAYOUTGROUP_GETGREATESTMINIMUMCHILDWIDTH_OFFSET UNITYSDK_OFFSET(0xD0416D0)
#define RPG_CLIENT_FLEXIBLELAYOUTGROUP_GET_RECORDMINCOUNTHORIZONAL_OFFSET UNITYSDK_OFFSET(0xD041390)
#define RPG_CLIENT_FLEXIBLELAYOUTGROUP_GET_RECORDMINCOUNTVERTICAL_OFFSET UNITYSDK_OFFSET(0xD0413D0)
#define RPG_CLIENT_FLEXIBLELAYOUTGROUP_GET_ROWCOLUMNINDEX_OFFSET UNITYSDK_OFFSET(0xD041410)
#define RPG_CLIENT_FLEXIBLELAYOUTGROUP_GET_ROWCOLUMNREVERSEINDEX_OFFSET UNITYSDK_OFFSET(0xD041460)
#define RPG_CLIENT_FLEXIBLELAYOUTGROUP_HADMHHMGJEO_OFFSET UNITYSDK_OFFSET(0xD0415C0)
#define RPG_CLIENT_FLEXIBLELAYOUTGROUP_LJIDACPMHBO_OFFSET UNITYSDK_OFFSET(0xD042660)
#define RPG_CLIENT_FLEXIBLELAYOUTGROUP_NKAMCNNDHGD_OFFSET UNITYSDK_OFFSET(0xD041510)
#define RPG_CLIENT_FLEXIBLELAYOUTGROUP_PJBLEGIOGCM_OFFSET UNITYSDK_OFFSET(0xD042540)
#define RPG_CLIENT_FLEXIBLELAYOUTGROUP_SETLAYOUTHORIZONTAL_OFFSET UNITYSDK_OFFSET(0xD0417B0)
#define RPG_CLIENT_FLEXIBLELAYOUTGROUP_SETLAYOUTVERTICAL_OFFSET UNITYSDK_OFFSET(0xD042340)
#define RPG_CLIENT_FLEXIBLELAYOUTGROUP_SETLAYOUT_OFFSET UNITYSDK_OFFSET(0xD0418A0)

namespace RPG::Client
{
	class FlexibleLayoutGroup : public ::UnityEngine::UI::LayoutGroup
	{
	public:
		::System::Collections::Generic::IList_1<::UnityEngine::RectTransform*>* MGLLEGALAOB; // 0x60
		::System::Single MJNOHLADEJJ; // 0x68
		::System::Boolean ChildForceExpandHeight; // 0x6C
		::System::Boolean ChildForceExpandWidth; // 0x6D
		::System::Byte _padding0[0x2];
		::System::Single Spacing; // 0x70
		::System::Boolean recordIndex; // 0x74
		::System::Byte _padding1[0x3];
		::System::Int32 LFJHNMMIAFG; // 0x78
		::System::Int32 CHGPHJDOJNH; // 0x7C
		::System::Collections::Generic::Dictionary_2<::System::Object*, ::UnityEngine::RectTransform*>* MIBIEJHHCBH; // 0x80
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>* FGFPBCJLMMI; // 0x88
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLEXIBLELAYOUTGROUP_CTOR_OFFSET))(this);
		}

		::System::Int32 get_RecordMinCountHorizonal()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLEXIBLELAYOUTGROUP_GET_RECORDMINCOUNTHORIZONAL_OFFSET))(this);
		}

		::System::Int32 get_RecordMinCountVertical()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLEXIBLELAYOUTGROUP_GET_RECORDMINCOUNTVERTICAL_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::Object*, ::UnityEngine::RectTransform*>* get_RowColumnIndex()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Object*, ::UnityEngine::RectTransform*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLEXIBLELAYOUTGROUP_GET_ROWCOLUMNINDEX_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>* get_RowColumnReverseIndex()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLEXIBLELAYOUTGROUP_GET_ROWCOLUMNREVERSEINDEX_OFFSET))(this);
		}

		::System::Boolean DIMCBLMBAAK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLEXIBLELAYOUTGROUP_DIMCBLMBAAK_OFFSET))(this);
		}

		::System::Boolean NKAMCNNDHGD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLEXIBLELAYOUTGROUP_NKAMCNNDHGD_OFFSET))(this);
		}

		::System::Boolean DNPHABMKIGK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLEXIBLELAYOUTGROUP_DNPHABMKIGK_OFFSET))(this);
		}

		::System::Boolean HADMHHMGJEO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLEXIBLELAYOUTGROUP_HADMHHMGJEO_OFFSET))(this);
		}

		::System::Void CalculateLayoutInputHorizontal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLEXIBLELAYOUTGROUP_CALCULATELAYOUTINPUTHORIZONTAL_OFFSET))(this);
		}

		::System::Void SetLayoutHorizontal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLEXIBLELAYOUTGROUP_SETLAYOUTHORIZONTAL_OFFSET))(this);
		}

		::System::Void SetLayoutVertical()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLEXIBLELAYOUTGROUP_SETLAYOUTVERTICAL_OFFSET))(this);
		}

		::System::Void CalculateLayoutInputVertical()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLEXIBLELAYOUTGROUP_CALCULATELAYOUTINPUTVERTICAL_OFFSET))(this);
		}

		::System::Single SetLayout(::System::Single a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLEXIBLELAYOUTGROUP_SETLAYOUT_OFFSET))(this, a1, a2, a3);
		}

		::System::Single PJBLEGIOGCM(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLEXIBLELAYOUTGROUP_PJBLEGIOGCM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void LJIDACPMHBO(::System::Collections::Generic::IList_1<::UnityEngine::RectTransform*>* a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6, ::System::Int32 a7)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::UnityEngine::RectTransform*>*, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLEXIBLELAYOUTGROUP_LJIDACPMHBO_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Single GetGreatestMinimumChildWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLEXIBLELAYOUTGROUP_GETGREATESTMINIMUMCHILDWIDTH_OFFSET))(this);
		}

	};
}
