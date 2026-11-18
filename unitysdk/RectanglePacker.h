#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IntegerRectangle.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RectanglePacker_SortableSize.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define RECTANGLEPACKER_ALLOCATERECTANGLE_OFFSET UNITYSDK_OFFSET(0x1C978FF0)
#define RECTANGLEPACKER_ALLOCATESIZE_OFFSET UNITYSDK_OFFSET(0x1C9793B0)
#define RECTANGLEPACKER_FILTERSELFSUBAREAS_OFFSET UNITYSDK_OFFSET(0x1C97A2C0)
#define RECTANGLEPACKER_FREERECTANGLE_OFFSET UNITYSDK_OFFSET(0x1C978F60)
#define RECTANGLEPACKER_FREESIZE_OFFSET UNITYSDK_OFFSET(0x1C979110)
#define RECTANGLEPACKER_GENERATEDIVIDEDAREAS_OFFSET UNITYSDK_OFFSET(0x1C97A580)
#define RECTANGLEPACKER_GENERATENEWFREEAREAS_OFFSET UNITYSDK_OFFSET(0x1C979C30)
#define RECTANGLEPACKER_GETFREEAREAINDEX_OFFSET UNITYSDK_OFFSET(0x1C979A80)
#define RECTANGLEPACKER_GETRECTANGLEID_OFFSET UNITYSDK_OFFSET(0x1C979240)
#define RECTANGLEPACKER_GETRECTANGLE_OFFSET UNITYSDK_OFFSET(0x1C979190)
#define RECTANGLEPACKER_GET_FAILEDRECTINDICES_OFFSET UNITYSDK_OFFSET(0x1C978940)
#define RECTANGLEPACKER_GET_PACKEDHEIGHT_OFFSET UNITYSDK_OFFSET(0x1C978920)
#define RECTANGLEPACKER_GET_PACKEDWIDTH_OFFSET UNITYSDK_OFFSET(0x1C978910)
#define RECTANGLEPACKER_GET_PADDING_OFFSET UNITYSDK_OFFSET(0x1C978930)
#define RECTANGLEPACKER_GET_RECTANGLECOUNT_OFFSET UNITYSDK_OFFSET(0x1C9788F0)
#define RECTANGLEPACKER_INSERTRECTANGLE_OFFSET UNITYSDK_OFFSET(0x1C9792B0)
#define RECTANGLEPACKER_PACKRECTANGLES_OFFSET UNITYSDK_OFFSET(0x1C979450)
#define RECTANGLEPACKER_RESET_OFFSET UNITYSDK_OFFSET(0x1C978B00)
#define RECTANGLEPACKER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C978950)

inline static constexpr unsigned int RectanglePacker_TypeDefinitionIndex = 26190;

class RectanglePacker : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::IntegerRectangle>* mFreeAreas; // 0x10
	::System::Collections::Generic::List_1<::IntegerRectangle>* mRectangleStack; // 0x18
	::System::Collections::Generic::List_1<::System::Int32>* mFailedRectIndices; // 0x20
	::System::Collections::Generic::List_1<::System::Object*>* mSortableSizeStack; // 0x28
	::System::Collections::Generic::List_1<::IntegerRectangle>* mInsertedRectangles; // 0x30
	::System::Collections::Generic::List_1<::IntegerRectangle>* mNewFreeAreas; // 0x38
	::System::Collections::Generic::Queue_1<::System::Object*>* mInsertList; // 0x40
	::System::Int32 mWidth; // 0x48
	::System::Int32 mPadding; // 0x4C
	::System::Int32 mHeight; // 0x50
	::System::Int32 mPackedHeight; // 0x54
	::System::Int32 mPackedWidth; // 0x58
	::IntegerRectangle mOutsideRectangle; // 0x5C

	::System::Void _ctor(::System::Int32 width, ::System::Int32 height, ::System::Int32 padding)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RECTANGLEPACKER__CTOR_OFFSET))(this, width, height, padding);
	}

	::System::Int32 get_rectangleCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RECTANGLEPACKER_GET_RECTANGLECOUNT_OFFSET))(this);
	}

	::System::Int32 get_packedWidth()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RECTANGLEPACKER_GET_PACKEDWIDTH_OFFSET))(this);
	}

	::System::Int32 get_packedHeight()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RECTANGLEPACKER_GET_PACKEDHEIGHT_OFFSET))(this);
	}

	::System::Int32 get_padding()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RECTANGLEPACKER_GET_PADDING_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* get_failedRectIndices()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RECTANGLEPACKER_GET_FAILEDRECTINDICES_OFFSET))(this);
	}

	::System::Void reset(::System::Int32 width, ::System::Int32 height, ::System::Int32 padding)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RECTANGLEPACKER_RESET_OFFSET))(this, width, height, padding);
	}

	::IntegerRectangle getRectangle(::System::Int32 index, ::IntegerRectangle rectangle)
	{
		return ((::IntegerRectangle(*)(::PVOID, ::System::Int32, ::IntegerRectangle))((::PBYTE)hIl2Cpp + RECTANGLEPACKER_GETRECTANGLE_OFFSET))(this, index, rectangle);
	}

	::System::Int32 getRectangleId(::System::Int32 index)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RECTANGLEPACKER_GETRECTANGLEID_OFFSET))(this, index);
	}

	::System::Void insertRectangle(::System::Int32 width, ::System::Int32 height, ::System::Int32 id)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RECTANGLEPACKER_INSERTRECTANGLE_OFFSET))(this, width, height, id);
	}

	::System::Int32 packRectangles()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RECTANGLEPACKER_PACKRECTANGLES_OFFSET))(this);
	}

	::System::Void filterSelfSubAreas(::System::Collections::Generic::List_1<::IntegerRectangle>* areas)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::IntegerRectangle>*))((::PBYTE)hIl2Cpp + RECTANGLEPACKER_FILTERSELFSUBAREAS_OFFSET))(this, areas);
	}

	::System::Void generateNewFreeAreas(::IntegerRectangle target, ::System::Collections::Generic::List_1<::IntegerRectangle>* areas, ::System::Collections::Generic::List_1<::IntegerRectangle>* results)
	{
		return ((::System::Void(*)(::PVOID, ::IntegerRectangle, ::System::Collections::Generic::List_1<::IntegerRectangle>*, ::System::Collections::Generic::List_1<::IntegerRectangle>*))((::PBYTE)hIl2Cpp + RECTANGLEPACKER_GENERATENEWFREEAREAS_OFFSET))(this, target, areas, results);
	}

	::System::Void generateDividedAreas(::IntegerRectangle divider, ::IntegerRectangle area, ::System::Collections::Generic::List_1<::IntegerRectangle>* results)
	{
		return ((::System::Void(*)(::PVOID, ::IntegerRectangle, ::IntegerRectangle, ::System::Collections::Generic::List_1<::IntegerRectangle>*))((::PBYTE)hIl2Cpp + RECTANGLEPACKER_GENERATEDIVIDEDAREAS_OFFSET))(this, divider, area, results);
	}

	::System::Int32 getFreeAreaIndex(::System::Int32 width, ::System::Int32 height)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RECTANGLEPACKER_GETFREEAREAINDEX_OFFSET))(this, width, height);
	}

	::IntegerRectangle allocateRectangle(::System::Int32 x, ::System::Int32 y, ::System::Int32 width, ::System::Int32 height)
	{
		return ((::IntegerRectangle(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RECTANGLEPACKER_ALLOCATERECTANGLE_OFFSET))(this, x, y, width, height);
	}

	::System::Void freeRectangle(::IntegerRectangle rectangle)
	{
		return ((::System::Void(*)(::PVOID, ::IntegerRectangle))((::PBYTE)hIl2Cpp + RECTANGLEPACKER_FREERECTANGLE_OFFSET))(this, rectangle);
	}

	::RectanglePacker_SortableSize allocateSize(::System::Int32 width, ::System::Int32 height, ::System::Int32 id)
	{
		return ((::RectanglePacker_SortableSize(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RECTANGLEPACKER_ALLOCATESIZE_OFFSET))(this, width, height, id);
	}

	::System::Void freeSize(::RectanglePacker_SortableSize size)
	{
		return ((::System::Void(*)(::PVOID, ::RectanglePacker_SortableSize))((::PBYTE)hIl2Cpp + RECTANGLEPACKER_FREESIZE_OFFSET))(this, size);
	}
};
