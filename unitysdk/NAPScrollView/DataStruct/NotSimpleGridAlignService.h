#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NAPScrollView/DataStruct/ScrollFloat.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Nullable_1.h"

namespace NAPScrollView::DataStruct { class NotSimpleScrollViewAdapterServices; }

#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEGRIDALIGNSERVICE_APPLYPREDICTIONOFFSET_OFFSET UNITYSDK_OFFSET(0xE563790)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEGRIDALIGNSERVICE_CALGRIDALIGNTARGETPOSITIONCENTER_OFFSET UNITYSDK_OFFSET(0xE562310)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEGRIDALIGNSERVICE_CALGRIDALIGNTARGETPOSITIONSTART_OFFSET UNITYSDK_OFFSET(0xE562ED0)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEGRIDALIGNSERVICE_CALGRIDALIGNTARGETPOSITION_1_OFFSET UNITYSDK_OFFSET(0xE561F70)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEGRIDALIGNSERVICE_CALGRIDALIGNTARGETPOSITION_OFFSET UNITYSDK_OFFSET(0xE560FD0)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEGRIDALIGNSERVICE_CHOOSESNAPPOSITION_OFFSET UNITYSDK_OFFSET(0xE563A20)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEGRIDALIGNSERVICE_DOGRIDALIGN_OFFSET UNITYSDK_OFFSET(0xE561410)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEGRIDALIGNSERVICE_GETFIXDELTA_OFFSET UNITYSDK_OFFSET(0xE5635D0)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEGRIDALIGNSERVICE_GETPREDICTIONITEMSIZE_OFFSET UNITYSDK_OFFSET(0xE563C70)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEGRIDALIGNSERVICE_POSTPROCESSROLLINGTARGET_OFFSET UNITYSDK_OFFSET(0xE561E20)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEGRIDALIGNSERVICE_SIMULATEGRIDALIGNIMMEDIATELY_OFFSET UNITYSDK_OFFSET(0xE561A10)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEGRIDALIGNSERVICE_STARTGRIDALIGN_OFFSET UNITYSDK_OFFSET(0xE561390)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEGRIDALIGNSERVICE_TRYSTARTGRIDALIGN_OFFSET UNITYSDK_OFFSET(0xE560EC0)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEGRIDALIGNSERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0xE560EB0)

namespace NAPScrollView::DataStruct
{
	inline static constexpr unsigned int NotSimpleGridAlignService_TypeDefinitionIndex = 74761;

	class NotSimpleGridAlignService : public ::System::Object
	{
	public:
		::NAPScrollView::DataStruct::NotSimpleScrollViewAdapterServices* _services; // 0x10
		::System::Boolean _hasGridAlignTarget; // 0x18
		::System::Byte _padding0[0x3];
		::NAPScrollView::DataStruct::ScrollFloat _gridAlignStartPosition; // 0x1C
		::NAPScrollView::DataStruct::ScrollFloat _gridAlignTargetPosition; // 0x24

		::System::Void _ctor(::NAPScrollView::DataStruct::NotSimpleScrollViewAdapterServices* services)
		{
			return ((::System::Void(*)(::PVOID, ::NAPScrollView::DataStruct::NotSimpleScrollViewAdapterServices*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEGRIDALIGNSERVICE__CTOR_OFFSET))(this, services);
		}

		::System::Boolean TryStartGridAlign()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEGRIDALIGNSERVICE_TRYSTARTGRIDALIGN_OFFSET))(this);
		}

		::System::Void StartGridAlign(::NAPScrollView::DataStruct::ScrollFloat target)
		{
			return ((::System::Void(*)(::PVOID, ::NAPScrollView::DataStruct::ScrollFloat))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEGRIDALIGNSERVICE_STARTGRIDALIGN_OFFSET))(this, target);
		}

		::System::Boolean DoGridAlign()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEGRIDALIGNSERVICE_DOGRIDALIGN_OFFSET))(this);
		}

		::System::Void SimulateGridAlignImmediately()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEGRIDALIGNSERVICE_SIMULATEGRIDALIGNIMMEDIATELY_OFFSET))(this);
		}

		::NAPScrollView::DataStruct::ScrollFloat PostProcessRollingTarget(::NAPScrollView::DataStruct::ScrollFloat target)
		{
			return ((::NAPScrollView::DataStruct::ScrollFloat(*)(::PVOID, ::NAPScrollView::DataStruct::ScrollFloat))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEGRIDALIGNSERVICE_POSTPROCESSROLLINGTARGET_OFFSET))(this, target);
		}

		::System::Nullable_1<::NAPScrollView::DataStruct::ScrollFloat> CalGridAlignTargetPosition()
		{
			return ((::System::Nullable_1<::NAPScrollView::DataStruct::ScrollFloat>(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEGRIDALIGNSERVICE_CALGRIDALIGNTARGETPOSITION_OFFSET))(this);
		}

		::System::Nullable_1<::NAPScrollView::DataStruct::ScrollFloat> CalGridAlignTargetPosition_1(::NAPScrollView::DataStruct::ScrollFloat predicatePosition)
		{
			return ((::System::Nullable_1<::NAPScrollView::DataStruct::ScrollFloat>(*)(::PVOID, ::NAPScrollView::DataStruct::ScrollFloat))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEGRIDALIGNSERVICE_CALGRIDALIGNTARGETPOSITION_1_OFFSET))(this, predicatePosition);
		}

		::System::Nullable_1<::NAPScrollView::DataStruct::ScrollFloat> CalGridAlignTargetPositionCenter(::NAPScrollView::DataStruct::ScrollFloat predicatePosition)
		{
			return ((::System::Nullable_1<::NAPScrollView::DataStruct::ScrollFloat>(*)(::PVOID, ::NAPScrollView::DataStruct::ScrollFloat))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEGRIDALIGNSERVICE_CALGRIDALIGNTARGETPOSITIONCENTER_OFFSET))(this, predicatePosition);
		}

		::System::Nullable_1<::NAPScrollView::DataStruct::ScrollFloat> CalGridAlignTargetPositionStart(::NAPScrollView::DataStruct::ScrollFloat predicatePosition)
		{
			return ((::System::Nullable_1<::NAPScrollView::DataStruct::ScrollFloat>(*)(::PVOID, ::NAPScrollView::DataStruct::ScrollFloat))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEGRIDALIGNSERVICE_CALGRIDALIGNTARGETPOSITIONSTART_OFFSET))(this, predicatePosition);
		}

		::NAPScrollView::DataStruct::ScrollFloat ChooseSnapPosition(::NAPScrollView::DataStruct::ScrollFloat snapCurrent, ::NAPScrollView::DataStruct::ScrollFloat snapNext, ::NAPScrollView::DataStruct::ScrollFloat current, ::System::Single lastDelta)
		{
			return ((::NAPScrollView::DataStruct::ScrollFloat(*)(::PVOID, ::NAPScrollView::DataStruct::ScrollFloat, ::NAPScrollView::DataStruct::ScrollFloat, ::NAPScrollView::DataStruct::ScrollFloat, ::System::Single))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEGRIDALIGNSERVICE_CHOOSESNAPPOSITION_OFFSET))(this, snapCurrent, snapNext, current, lastDelta);
		}

		::NAPScrollView::DataStruct::ScrollFloat ApplyPredictionOffset(::NAPScrollView::DataStruct::ScrollFloat alignAtCurrent, ::NAPScrollView::DataStruct::ScrollFloat predicatePosition, ::NAPScrollView::DataStruct::ScrollFloat current)
		{
			return ((::NAPScrollView::DataStruct::ScrollFloat(*)(::PVOID, ::NAPScrollView::DataStruct::ScrollFloat, ::NAPScrollView::DataStruct::ScrollFloat, ::NAPScrollView::DataStruct::ScrollFloat))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEGRIDALIGNSERVICE_APPLYPREDICTIONOFFSET_OFFSET))(this, alignAtCurrent, predicatePosition, current);
		}

		::System::Single GetFixDelta()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEGRIDALIGNSERVICE_GETFIXDELTA_OFFSET))(this);
		}

		::System::Single GetPredictionItemSize()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEGRIDALIGNSERVICE_GETPREDICTIONITEMSIZE_OFFSET))(this);
		}
	};
}
