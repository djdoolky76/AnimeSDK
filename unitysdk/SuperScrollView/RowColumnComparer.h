#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/SuperScrollView/RowColumnPair.h"
namespace SuperScrollView { class RowColumnComparer; }

#define SUPERSCROLLVIEW_ROWCOLUMNCOMPARER_CCTOR_OFFSET UNITYSDK_OFFSET(0x17138E00)
#define SUPERSCROLLVIEW_ROWCOLUMNCOMPARER_CTOR_OFFSET UNITYSDK_OFFSET(0x17138DF0)
#define SUPERSCROLLVIEW_ROWCOLUMNCOMPARER_EQUALS_OFFSET UNITYSDK_OFFSET(0x17138D30)
#define SUPERSCROLLVIEW_ROWCOLUMNCOMPARER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17138D90)

namespace SuperScrollView
{
	inline static constexpr unsigned int RowColumnComparer_TypeDefinitionIndex = 48664;

	class RowColumnComparer : public ::System::Object
	{
	public:
		static ::SuperScrollView::RowColumnComparer** StaticGet_comparer()
		{
			return (::SuperScrollView::RowColumnComparer**)UnitySDK::FromName("SuperScrollView", "RowColumnComparer")->GetStaticField(0x17E20);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_ROWCOLUMNCOMPARER_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_ROWCOLUMNCOMPARER_CCTOR_OFFSET))();
		}

		::System::Boolean Equals(::SuperScrollView::RowColumnPair a1, ::SuperScrollView::RowColumnPair a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::SuperScrollView::RowColumnPair, ::SuperScrollView::RowColumnPair))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_ROWCOLUMNCOMPARER_EQUALS_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetHashCode(::SuperScrollView::RowColumnPair a1)
		{
			return ((::System::Int32(*)(::PVOID, ::SuperScrollView::RowColumnPair))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_ROWCOLUMNCOMPARER_GETHASHCODE_OFFSET))(this, a1);
		}

	};
}
