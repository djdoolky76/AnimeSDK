#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NAPScrollView/DataStruct/ScrollBounds.h"
#include "unitysdk/NAPScrollView/DataStruct/ScrollFloat.h"
#include "unitysdk/UnityEngine/Vector2.h"

class MonoUITableScrollV2_BaseScrollLogic;
namespace NAPScrollView::DataStruct { class NotSimpleScrollViewAdapterServices; }
namespace UnityEngine { class RectTransform; }

#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLELOGICSERVICE_CONVERTVECTOR2TOSCROLLFLOAT_OFFSET UNITYSDK_OFFSET(0x120EFB40)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLELOGICSERVICE_GETEFFECTIVECHILDBOUNDS_OFFSET UNITYSDK_OFFSET(0x120EFC40)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLELOGICSERVICE_GET_LOGIC_OFFSET UNITYSDK_OFFSET(0x120EFBE0)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLELOGICSERVICE_GET__LOGIC_OFFSET UNITYSDK_OFFSET(0x120EFC00)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLELOGICSERVICE_SHIFTCURRENTPOSITIONTOENDTHROUGHPARENTORSELFIFPARENTDELTANEGATIVE_OFFSET UNITYSDK_OFFSET(0x120EFE30)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLELOGICSERVICE_SHIFTCURRENTPOSITIONTOENDTHROUGHPARENTORSELF_OFFSET UNITYSDK_OFFSET(0x120EFCE0)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLELOGICSERVICE_SHIFTCURRENTPOSITIONTOSTARTTHROUGHPARENTORSELF_OFFSET UNITYSDK_OFFSET(0x120EFF90)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLELOGICSERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0x120EFC20)

namespace NAPScrollView::DataStruct
{
	inline static constexpr unsigned int NotSimpleLogicService_TypeDefinitionIndex = 60646;

	class NotSimpleLogicService
	{
	public:
		::NAPScrollView::DataStruct::NotSimpleScrollViewAdapterServices* _services; // 0x18

		::System::Void _ctor(::NAPScrollView::DataStruct::NotSimpleScrollViewAdapterServices* services)
		{
			return ((::System::Void(*)(::PVOID, ::NAPScrollView::DataStruct::NotSimpleScrollViewAdapterServices*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLELOGICSERVICE__CTOR_OFFSET))(this, services);
		}

		::MonoUITableScrollV2_BaseScrollLogic* get_Logic()
		{
			return ((::MonoUITableScrollV2_BaseScrollLogic*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLELOGICSERVICE_GET_LOGIC_OFFSET))(this);
		}

		::MonoUITableScrollV2_BaseScrollLogic* get__logic()
		{
			return ((::MonoUITableScrollV2_BaseScrollLogic*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLELOGICSERVICE_GET__LOGIC_OFFSET))(this);
		}

		::NAPScrollView::DataStruct::ScrollBounds GetEffectiveChildBounds(::UnityEngine::RectTransform* childRectTransform)
		{
			return ((::NAPScrollView::DataStruct::ScrollBounds(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLELOGICSERVICE_GETEFFECTIVECHILDBOUNDS_OFFSET))(this, childRectTransform);
		}

		::NAPScrollView::DataStruct::ScrollFloat ConvertVector2ToScrollFloat(::UnityEngine::Vector2 value)
		{
			return ((::NAPScrollView::DataStruct::ScrollFloat(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLELOGICSERVICE_CONVERTVECTOR2TOSCROLLFLOAT_OFFSET))(this, value);
		}

		::System::Void ShiftCurrentPositionToEndThroughParentOrSelf(::System::Single delta)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLELOGICSERVICE_SHIFTCURRENTPOSITIONTOENDTHROUGHPARENTORSELF_OFFSET))(this, delta);
		}

		::System::Void ShiftCurrentPositionToEndThroughParentOrSelfIfParentDeltaNegative(::System::Single delta)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLELOGICSERVICE_SHIFTCURRENTPOSITIONTOENDTHROUGHPARENTORSELFIFPARENTDELTANEGATIVE_OFFSET))(this, delta);
		}

		::System::Void ShiftCurrentPositionToStartThroughParentOrSelf(::System::Single delta)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLELOGICSERVICE_SHIFTCURRENTPOSITIONTOSTARTTHROUGHPARENTORSELF_OFFSET))(this, delta);
		}
	};
}
