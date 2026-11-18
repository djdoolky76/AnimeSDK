#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NAPScrollView/DataStruct/ScrollBounds.h"
#include "unitysdk/NAPScrollView/DataStruct/ScrollFloat.h"
#include "unitysdk/UnityEngine/Vector2.h"

class MonoUITableScrollV2_BaseScrollLogic;
namespace NAPScrollView::DataStruct { class SimpleScrollViewAdapterServices; }
namespace UnityEngine { class RectTransform; }

#define NAPSCROLLVIEW_DATASTRUCT_SIMPLELOGICSERVICE_CONVERTVECTOR2TOSCROLLFLOAT_OFFSET UNITYSDK_OFFSET(0xE1777C0)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLELOGICSERVICE_GETEFFECTIVECHILDBOUNDS_OFFSET UNITYSDK_OFFSET(0xE177710)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLELOGICSERVICE_GET_LOGIC_OFFSET UNITYSDK_OFFSET(0xE1776D0)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLELOGICSERVICE_SHIFTCURRENTPOSITIONTOENDTHROUGHPARENTORSELFIFPARENTDELTANEGATIVE_OFFSET UNITYSDK_OFFSET(0xE1778C0)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLELOGICSERVICE_SHIFTCURRENTPOSITIONTOENDTHROUGHPARENTORSELF_OFFSET UNITYSDK_OFFSET(0xE177860)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLELOGICSERVICE_SHIFTCURRENTPOSITIONTOSTARTTHROUGHPARENTORSELF_OFFSET UNITYSDK_OFFSET(0xE177920)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLELOGICSERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0xE1776F0)

namespace NAPScrollView::DataStruct
{
	inline static constexpr unsigned int SimpleLogicService_TypeDefinitionIndex = 89048;

	class SimpleLogicService
	{
	public:
		::NAPScrollView::DataStruct::SimpleScrollViewAdapterServices* _services; // 0x18

		::System::Void _ctor(::NAPScrollView::DataStruct::SimpleScrollViewAdapterServices* services)
		{
			return ((::System::Void(*)(::PVOID, ::NAPScrollView::DataStruct::SimpleScrollViewAdapterServices*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLELOGICSERVICE__CTOR_OFFSET))(this, services);
		}

		::MonoUITableScrollV2_BaseScrollLogic* get_Logic()
		{
			return ((::MonoUITableScrollV2_BaseScrollLogic*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLELOGICSERVICE_GET_LOGIC_OFFSET))(this);
		}

		::NAPScrollView::DataStruct::ScrollBounds GetEffectiveChildBounds(::UnityEngine::RectTransform* childRectTransform)
		{
			return ((::NAPScrollView::DataStruct::ScrollBounds(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLELOGICSERVICE_GETEFFECTIVECHILDBOUNDS_OFFSET))(this, childRectTransform);
		}

		::NAPScrollView::DataStruct::ScrollFloat ConvertVector2ToScrollFloat(::UnityEngine::Vector2 value)
		{
			return ((::NAPScrollView::DataStruct::ScrollFloat(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLELOGICSERVICE_CONVERTVECTOR2TOSCROLLFLOAT_OFFSET))(this, value);
		}

		::System::Void ShiftCurrentPositionToEndThroughParentOrSelf(::System::Single delta)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLELOGICSERVICE_SHIFTCURRENTPOSITIONTOENDTHROUGHPARENTORSELF_OFFSET))(this, delta);
		}

		::System::Void ShiftCurrentPositionToEndThroughParentOrSelfIfParentDeltaNegative(::System::Single delta)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLELOGICSERVICE_SHIFTCURRENTPOSITIONTOENDTHROUGHPARENTORSELFIFPARENTDELTANEGATIVE_OFFSET))(this, delta);
		}

		::System::Void ShiftCurrentPositionToStartThroughParentOrSelf(::System::Single delta)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLELOGICSERVICE_SHIFTCURRENTPOSITIONTOSTARTTHROUGHPARENTORSELF_OFFSET))(this, delta);
		}
	};
}
