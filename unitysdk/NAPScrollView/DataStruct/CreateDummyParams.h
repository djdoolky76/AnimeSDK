#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NAPScrollView/DataStruct/DummyEnd.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }

#define NAPSCROLLVIEW_DATASTRUCT_CREATEDUMMYPARAMS_TOSTRING_OFFSET UNITYSDK_OFFSET(0x6EEFD0)
#define NAPSCROLLVIEW_DATASTRUCT_CREATEDUMMYPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x6EEFB0)
#define NAPSCROLLVIEW_DATASTRUCT_CREATEDUMMYPARAMS___BASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x6EEFE0)

namespace NAPScrollView::DataStruct
{
	inline static constexpr unsigned int CreateDummyParams_TypeDefinitionIndex = 52296;

	struct alignas(8) CreateDummyParams
	{
		::System::Int32 dataIndex; // 0x10
		::UnityEngine::Vector2 itemSize; // 0x14
		::System::Nullable_1<::System::Int32> siblingIndex; // 0x1C
		::NAPScrollView::DataStruct::DummyEnd end; // 0x24

		::System::Void _ctor(::System::Int32 dataIndex, ::UnityEngine::Vector2 itemSize, ::System::Nullable_1<::System::Int32> siblingIndex, ::NAPScrollView::DataStruct::DummyEnd end)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector2, ::System::Nullable_1<::System::Int32>, ::NAPScrollView::DataStruct::DummyEnd))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_CREATEDUMMYPARAMS__CTOR_OFFSET))(this, dataIndex, itemSize, siblingIndex, end);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_CREATEDUMMYPARAMS_TOSTRING_OFFSET))(this);
		}

		::System::String* __base_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_CREATEDUMMYPARAMS___BASE_TOSTRING_OFFSET))(this);
		}
	};
}
