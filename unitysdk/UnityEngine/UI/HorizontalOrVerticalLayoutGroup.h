#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/LayoutGroup.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { template <typename T> class ObjectPool_1; }

#define UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_CALCALONGAXIS_OFFSET UNITYSDK_OFFSET(0x207AFD50)
#define UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_CCTOR_OFFSET UNITYSDK_OFFSET(0x207B16E0)
#define UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_CLEARDICT_OFFSET UNITYSDK_OFFSET(0x207B1260)
#define UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_CLEAR_1_OFFSET UNITYSDK_OFFSET(0x207B1680)
#define UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_CLEAR_OFFSET UNITYSDK_OFFSET(0x207B1620)
#define UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_CTOR_OFFSET UNITYSDK_OFFSET(0x207AFC90)
#define UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_GETCHILDSIZES_OFFSET UNITYSDK_OFFSET(0x207B1060)
#define UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_GET_CHILDCONTROLHEIGHT_OFFSET UNITYSDK_OFFSET(0x207B0F10)
#define UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_GET_CHILDCONTROLWIDTH_OFFSET UNITYSDK_OFFSET(0x207B0EA0)
#define UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_GET_CHILDFORCEEXPANDHEIGHT_OFFSET UNITYSDK_OFFSET(0x207B0E30)
#define UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_GET_CHILDFORCEEXPANDWIDTH_OFFSET UNITYSDK_OFFSET(0x207B0DC0)
#define UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_GET_CHILDSCALEHEIGHT_OFFSET UNITYSDK_OFFSET(0x207B0FF0)
#define UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_GET_CHILDSCALEWIDTH_OFFSET UNITYSDK_OFFSET(0x207B0F80)
#define UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_GET_RECORDINDEX_OFFSET UNITYSDK_OFFSET(0x207B1430)
#define UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_GET_ROWCOLUMNINDEX_OFFSET UNITYSDK_OFFSET(0x207B1520)
#define UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_GET_ROWCOLUMNREVERSEINDEX_OFFSET UNITYSDK_OFFSET(0x207B1530)
#define UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_GET_SPACING_OFFSET UNITYSDK_OFFSET(0x207B0D20)
#define UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_INITDICT_OFFSET UNITYSDK_OFFSET(0x207B1450)
#define UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x207B1540)
#define UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_ONSETITEM_OFFSET UNITYSDK_OFFSET(0x207B1320)
#define UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_SETCHILDRENALONGAXIS_OFFSET UNITYSDK_OFFSET(0x207B01E0)
#define UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_SET_CHILDCONTROLHEIGHT_OFFSET UNITYSDK_OFFSET(0x207B0F20)
#define UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_SET_CHILDCONTROLWIDTH_OFFSET UNITYSDK_OFFSET(0x207B0EB0)
#define UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_SET_CHILDFORCEEXPANDHEIGHT_OFFSET UNITYSDK_OFFSET(0x207B0E40)
#define UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_SET_CHILDFORCEEXPANDWIDTH_OFFSET UNITYSDK_OFFSET(0x207B0DD0)
#define UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_SET_CHILDSCALEHEIGHT_OFFSET UNITYSDK_OFFSET(0x207B1000)
#define UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_SET_CHILDSCALEWIDTH_OFFSET UNITYSDK_OFFSET(0x207B0F90)
#define UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_SET_RECORDINDEX_OFFSET UNITYSDK_OFFSET(0x207B1440)
#define UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_SET_SPACING_OFFSET UNITYSDK_OFFSET(0x207B0D30)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int HorizontalOrVerticalLayoutGroup_TypeDefinitionIndex = 6786;

	class HorizontalOrVerticalLayoutGroup : public ::UnityEngine::UI::LayoutGroup
	{
	public:
		::System::Single m_Spacing; // 0x60
		::System::Boolean m_ChildForceExpandWidth; // 0x64
		::System::Boolean m_ChildForceExpandHeight; // 0x65
		::System::Boolean m_ChildControlWidth; // 0x66
		::System::Boolean m_ChildControlHeight; // 0x67
		::System::Boolean m_ChildScaleWidth; // 0x68
		::System::Boolean m_ChildScaleHeight; // 0x69
		::System::Boolean mRecordIndex; // 0x6A
		::System::Byte _padding0[0x5];
		::System::Collections::Generic::Dictionary_2<::System::Object*, ::UnityEngine::RectTransform*>* rowColumnDict; // 0x70
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>* rowColumnReverseDict; // 0x78
		static ::UnityEngine::UI::ObjectPool_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>*>** StaticGet_reversePool()
		{
			return (::UnityEngine::UI::ObjectPool_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>*>**)UnitySDK::FromName("UnityEngine.UI", "HorizontalOrVerticalLayoutGroup")->GetStaticField(0x3A530);
		}

		static ::UnityEngine::UI::ObjectPool_1<::System::Collections::Generic::Dictionary_2<::System::Object*, ::UnityEngine::RectTransform*>*>** StaticGet_dictPool()
		{
			return (::UnityEngine::UI::ObjectPool_1<::System::Collections::Generic::Dictionary_2<::System::Object*, ::UnityEngine::RectTransform*>*>**)UnitySDK::FromName("UnityEngine.UI", "HorizontalOrVerticalLayoutGroup")->GetStaticField(0x3A538);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_CCTOR_OFFSET))();
		}

		::System::Single get_spacing()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_GET_SPACING_OFFSET))(this);
		}

		::System::Void set_spacing(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_SET_SPACING_OFFSET))(this, a1);
		}

		::System::Boolean get_childForceExpandWidth()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_GET_CHILDFORCEEXPANDWIDTH_OFFSET))(this);
		}

		::System::Void set_childForceExpandWidth(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_SET_CHILDFORCEEXPANDWIDTH_OFFSET))(this, a1);
		}

		::System::Boolean get_childForceExpandHeight()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_GET_CHILDFORCEEXPANDHEIGHT_OFFSET))(this);
		}

		::System::Void set_childForceExpandHeight(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_SET_CHILDFORCEEXPANDHEIGHT_OFFSET))(this, a1);
		}

		::System::Boolean get_childControlWidth()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_GET_CHILDCONTROLWIDTH_OFFSET))(this);
		}

		::System::Void set_childControlWidth(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_SET_CHILDCONTROLWIDTH_OFFSET))(this, a1);
		}

		::System::Boolean get_childControlHeight()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_GET_CHILDCONTROLHEIGHT_OFFSET))(this);
		}

		::System::Void set_childControlHeight(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_SET_CHILDCONTROLHEIGHT_OFFSET))(this, a1);
		}

		::System::Boolean get_childScaleWidth()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_GET_CHILDSCALEWIDTH_OFFSET))(this);
		}

		::System::Void set_childScaleWidth(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_SET_CHILDSCALEWIDTH_OFFSET))(this, a1);
		}

		::System::Boolean get_childScaleHeight()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_GET_CHILDSCALEHEIGHT_OFFSET))(this);
		}

		::System::Void set_childScaleHeight(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_SET_CHILDSCALEHEIGHT_OFFSET))(this, a1);
		}

		::System::Void CalcAlongAxis(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_CALCALONGAXIS_OFFSET))(this, a1, a2);
		}

		::System::Void SetChildrenAlongAxis(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_SETCHILDRENALONGAXIS_OFFSET))(this, a1, a2);
		}

		::System::Void GetChildSizes(::UnityEngine::RectTransform* a1, ::System::Int32 a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Single a5, ::System::Single a6, ::System::Single a7)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_GETCHILDSIZES_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Boolean get_RecordIndex()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_GET_RECORDINDEX_OFFSET))(this);
		}

		::System::Void set_RecordIndex(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_SET_RECORDINDEX_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::Object*, ::UnityEngine::RectTransform*>* get_RowColumnIndex()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Object*, ::UnityEngine::RectTransform*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_GET_ROWCOLUMNINDEX_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>* get_RowColumnReverseIndex()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_GET_ROWCOLUMNREVERSEINDEX_OFFSET))(this);
		}

		::System::Void ClearDict()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_CLEARDICT_OFFSET))(this);
		}

		::System::Void InitDict()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_INITDICT_OFFSET))(this);
		}

		::System::Void OnSetItem(::UnityEngine::RectTransform* a1, ::System::Boolean a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_ONSETITEM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_ONDESTROY_OFFSET))(this);
		}

		static ::System::Void Clear(::System::Collections::Generic::Dictionary_2<::System::Object*, ::UnityEngine::RectTransform*>* a1)
		{
			return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::Object*, ::UnityEngine::RectTransform*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_CLEAR_OFFSET))(a1);
		}

		static ::System::Void Clear_1(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>* a1)
		{
			return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_HORIZONTALORVERTICALLAYOUTGROUP_CLEAR_1_OFFSET))(a1);
		}

	};
}
