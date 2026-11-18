#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/NAPScrollView/DataStruct/Data.h"

#define NAPSCROLLVIEW_DATASTRUCT_DATACOMPARER_EQUALS_OFFSET UNITYSDK_OFFSET(0x13C221E0)
#define NAPSCROLLVIEW_DATASTRUCT_DATACOMPARER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x13C22270)
#define NAPSCROLLVIEW_DATASTRUCT_DATACOMPARER__CCTOR_OFFSET UNITYSDK_OFFSET(0x13C22300)
#define NAPSCROLLVIEW_DATASTRUCT_DATACOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0x13C222F0)

namespace NAPScrollView::DataStruct
{
	inline static constexpr unsigned int DataComparer_TypeDefinitionIndex = 69538;

	class DataComparer : public ::System::Object
	{
	public:
		static ::NAPScrollView::DataStruct::DataComparer** StaticGet_Instance()
		{
			return (::NAPScrollView::DataStruct::DataComparer**)Il2CppClass::FromTypeDefinitionIndex(DataComparer_TypeDefinitionIndex)->GetStaticField(0x35990);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_DATACOMPARER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_DATACOMPARER__CCTOR_OFFSET))();
		}

		::System::Boolean Equals(::NAPScrollView::DataStruct::Data x, ::NAPScrollView::DataStruct::Data y)
		{
			return ((::System::Boolean(*)(::PVOID, ::NAPScrollView::DataStruct::Data, ::NAPScrollView::DataStruct::Data))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_DATACOMPARER_EQUALS_OFFSET))(this, x, y);
		}

		::System::Int32 GetHashCode(::NAPScrollView::DataStruct::Data obj)
		{
			return ((::System::Int32(*)(::PVOID, ::NAPScrollView::DataStruct::Data))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_DATACOMPARER_GETHASHCODE_OFFSET))(this, obj);
		}
	};
}
