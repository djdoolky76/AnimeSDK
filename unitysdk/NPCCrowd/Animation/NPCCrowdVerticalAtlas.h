#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueTuple_3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Texture2D; }

#define NPCCROWD_ANIMATION_NPCCROWDVERTICALATLAS_ALLOCATE_OFFSET UNITYSDK_OFFSET(0x10DC7AA0)
#define NPCCROWD_ANIMATION_NPCCROWDVERTICALATLAS_COPYALLOCATEDCOLUMNS_OFFSET UNITYSDK_OFFSET(0x10DC99C0)
#define NPCCROWD_ANIMATION_NPCCROWDVERTICALATLAS_COPYTOATLAS_OFFSET UNITYSDK_OFFSET(0x10DC8820)
#define NPCCROWD_ANIMATION_NPCCROWDVERTICALATLAS_CREATEATLASTEXTURE_OFFSET UNITYSDK_OFFSET(0x10DC75C0)
#define NPCCROWD_ANIMATION_NPCCROWDVERTICALATLAS_FREE_OFFSET UNITYSDK_OFFSET(0x10DC8250)
#define NPCCROWD_ANIMATION_NPCCROWDVERTICALATLAS_GETTOTALALLOCATEDROWS_OFFSET UNITYSDK_OFFSET(0x10DC9840)
#define NPCCROWD_ANIMATION_NPCCROWDVERTICALATLAS_GETUSEDHEIGHT_OFFSET UNITYSDK_OFFSET(0x10DC9900)
#define NPCCROWD_ANIMATION_NPCCROWDVERTICALATLAS_GETWASTERATIO_OFFSET UNITYSDK_OFFSET(0x10DC9950)
#define NPCCROWD_ANIMATION_NPCCROWDVERTICALATLAS_GET_ALLOCATEDHEIGHT_OFFSET UNITYSDK_OFFSET(0x10DC71F0)
#define NPCCROWD_ANIMATION_NPCCROWDVERTICALATLAS_GET_ATLASTEXTURE_OFFSET UNITYSDK_OFFSET(0x10DC7130)
#define NPCCROWD_ANIMATION_NPCCROWDVERTICALATLAS_GET_BISVALID_OFFSET UNITYSDK_OFFSET(0x10DC7310)
#define NPCCROWD_ANIMATION_NPCCROWDVERTICALATLAS_GET_COLUMNCOUNT_OFFSET UNITYSDK_OFFSET(0x10DC7170)
#define NPCCROWD_ANIMATION_NPCCROWDVERTICALATLAS_GET_COLWIDTH_OFFSET UNITYSDK_OFFSET(0x10DC7150)
#define NPCCROWD_ANIMATION_NPCCROWDVERTICALATLAS_GET_CURRENTTEXTUREHEIGHT_OFFSET UNITYSDK_OFFSET(0x10DC72F0)
#define NPCCROWD_ANIMATION_NPCCROWDVERTICALATLAS_GET_WIDTH_OFFSET UNITYSDK_OFFSET(0x10DC7190)
#define NPCCROWD_ANIMATION_NPCCROWDVERTICALATLAS_REBUILDCOMPACT_OFFSET UNITYSDK_OFFSET(0x10DC8B60)
#define NPCCROWD_ANIMATION_NPCCROWDVERTICALATLAS_RELEASE_OFFSET UNITYSDK_OFFSET(0x10DC7870)
#define NPCCROWD_ANIMATION_NPCCROWDVERTICALATLAS_SET_ATLASTEXTURE_OFFSET UNITYSDK_OFFSET(0x10DC7140)
#define NPCCROWD_ANIMATION_NPCCROWDVERTICALATLAS_SET_COLWIDTH_OFFSET UNITYSDK_OFFSET(0x10DC7160)
#define NPCCROWD_ANIMATION_NPCCROWDVERTICALATLAS_SET_CURRENTTEXTUREHEIGHT_OFFSET UNITYSDK_OFFSET(0x10DC7300)
#define NPCCROWD_ANIMATION_NPCCROWDVERTICALATLAS_TRYADDCOLUMN_OFFSET UNITYSDK_OFFSET(0x10DC7F10)
#define NPCCROWD_ANIMATION_NPCCROWDVERTICALATLAS_TRYALLOCATEFROMFREELIST_OFFSET UNITYSDK_OFFSET(0x10DC7C20)
#define NPCCROWD_ANIMATION_NPCCROWDVERTICALATLAS_TRYALLOCATEFROMTAIL_OFFSET UNITYSDK_OFFSET(0x10DC7E30)
#define NPCCROWD_ANIMATION_NPCCROWDVERTICALATLAS_TRYCOMPACTTAIL_OFFSET UNITYSDK_OFFSET(0x10DC8710)
#define NPCCROWD_ANIMATION_NPCCROWDVERTICALATLAS_TRYGROWATLAS_OFFSET UNITYSDK_OFFSET(0x10DC9DB0)
#define NPCCROWD_ANIMATION_NPCCROWDVERTICALATLAS_TRYMERGEWITHNEXT_OFFSET UNITYSDK_OFFSET(0x10DC8490)
#define NPCCROWD_ANIMATION_NPCCROWDVERTICALATLAS_TRYMERGEWITHPREV_OFFSET UNITYSDK_OFFSET(0x10DC85D0)
#define NPCCROWD_ANIMATION_NPCCROWDVERTICALATLAS__CCTOR_OFFSET UNITYSDK_OFFSET(0x10DCA0A0)
#define NPCCROWD_ANIMATION_NPCCROWDVERTICALATLAS__CTOR_OFFSET UNITYSDK_OFFSET(0x10DC7490)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int NPCCrowdVerticalAtlas_TypeDefinitionIndex = 76812;

	class NPCCrowdVerticalAtlas : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_MAX_TEXTURE_SIZE()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdVerticalAtlas_TypeDefinitionIndex)->GetStaticField(0x11B80);
		}
		// static const ::System::Int32 INITIAL_HEIGHT = 0x200; // 0x0
		// static const ::System::Int32 HEIGHT_GROW_STEP = 0x100; // 0x0
		::UnityEngine::RenderTexture* _atlasTexture_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::System::Object*>* _columns; // 0x18
		::System::Int32 _colWidth_k__BackingField; // 0x20
		::System::Int32 _currentTextureHeight_k__BackingField; // 0x24

		::System::Void _ctor(::System::Int32 singleColumnWidth)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDVERTICALATLAS__CTOR_OFFSET))(this, singleColumnWidth);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDVERTICALATLAS__CCTOR_OFFSET))();
		}

		::UnityEngine::RenderTexture* get_atlasTexture()
		{
			return ((::UnityEngine::RenderTexture*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDVERTICALATLAS_GET_ATLASTEXTURE_OFFSET))(this);
		}

		::System::Void set_atlasTexture(::UnityEngine::RenderTexture* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDVERTICALATLAS_SET_ATLASTEXTURE_OFFSET))(this, value);
		}

		::System::Int32 get_colWidth()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDVERTICALATLAS_GET_COLWIDTH_OFFSET))(this);
		}

		::System::Void set_colWidth(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDVERTICALATLAS_SET_COLWIDTH_OFFSET))(this, value);
		}

		::System::Int32 get_columnCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDVERTICALATLAS_GET_COLUMNCOUNT_OFFSET))(this);
		}

		::System::Int32 get_width()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDVERTICALATLAS_GET_WIDTH_OFFSET))(this);
		}

		::System::Int32 get_allocatedHeight()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDVERTICALATLAS_GET_ALLOCATEDHEIGHT_OFFSET))(this);
		}

		::System::Int32 get_currentTextureHeight()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDVERTICALATLAS_GET_CURRENTTEXTUREHEIGHT_OFFSET))(this);
		}

		::System::Void set_currentTextureHeight(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDVERTICALATLAS_SET_CURRENTTEXTUREHEIGHT_OFFSET))(this, value);
		}

		::System::Boolean get_bIsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDVERTICALATLAS_GET_BISVALID_OFFSET))(this);
		}

		::System::Void Release()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDVERTICALATLAS_RELEASE_OFFSET))(this);
		}

		::System::ValueTuple_2<::System::Int32, ::System::Int32> Allocate(::System::Int32 clipHeight)
		{
			return ((::System::ValueTuple_2<::System::Int32, ::System::Int32>(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDVERTICALATLAS_ALLOCATE_OFFSET))(this, clipHeight);
		}

		::System::Void Free(::System::Int32 columnIndex, ::System::Int32 offsetY, ::System::Int32 height)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDVERTICALATLAS_FREE_OFFSET))(this, columnIndex, offsetY, height);
		}

		::System::Void CopyToAtlas(::UnityEngine::Texture2D* source, ::System::Int32 columnIndex, ::System::Int32 offsetY)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture2D*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDVERTICALATLAS_COPYTOATLAS_OFFSET))(this, source, columnIndex, offsetY);
		}

		::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* RebuildCompact(::System::Collections::Generic::List_1<::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Int32>>* activeClips)
		{
			return ((::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::System::Int32>>*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Int32>>*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDVERTICALATLAS_REBUILDCOMPACT_OFFSET))(this, activeClips);
		}

		::System::Int32 GetTotalAllocatedRows()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDVERTICALATLAS_GETTOTALALLOCATEDROWS_OFFSET))(this);
		}

		::System::Int32 GetUsedHeight(::System::Int32 totalActiveClipHeight)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDVERTICALATLAS_GETUSEDHEIGHT_OFFSET))(this, totalActiveClipHeight);
		}

		::System::Single GetWasteRatio(::System::Int32 usedRows)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDVERTICALATLAS_GETWASTERATIO_OFFSET))(this, usedRows);
		}

		::System::Void CreateAtlasTexture(::System::Int32 textureWidth, ::System::Int32 textureHeight)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDVERTICALATLAS_CREATEATLASTEXTURE_OFFSET))(this, textureWidth, textureHeight);
		}

		::System::Void CopyAllocatedColumns(::UnityEngine::RenderTexture* source, ::UnityEngine::RenderTexture* destination)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTexture*, ::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDVERTICALATLAS_COPYALLOCATEDCOLUMNS_OFFSET))(this, source, destination);
		}

		::System::Int32 TryAllocateFromFreeList(::System::Int32 colIndex, ::System::Int32 clipHeight)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDVERTICALATLAS_TRYALLOCATEFROMFREELIST_OFFSET))(this, colIndex, clipHeight);
		}

		::System::Int32 TryAllocateFromTail(::System::Int32 colIndex, ::System::Int32 clipHeight, ::System::Boolean allowGrow)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDVERTICALATLAS_TRYALLOCATEFROMTAIL_OFFSET))(this, colIndex, clipHeight, allowGrow);
		}

		::System::Boolean TryGrowAtlas(::System::Int32 requiredHeight)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDVERTICALATLAS_TRYGROWATLAS_OFFSET))(this, requiredHeight);
		}

		::System::Boolean TryAddColumn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDVERTICALATLAS_TRYADDCOLUMN_OFFSET))(this);
		}

		static ::System::Void TryMergeWithNext(::System::Collections::Generic::List_1<::System::Object*>* freeRegions, ::System::Int32 index)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::Object*>*, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDVERTICALATLAS_TRYMERGEWITHNEXT_OFFSET))(freeRegions, index);
		}

		static ::System::Void TryMergeWithPrev(::System::Collections::Generic::List_1<::System::Object*>* freeRegions, ::System::Int32 index)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::Object*>*, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDVERTICALATLAS_TRYMERGEWITHPREV_OFFSET))(freeRegions, index);
		}

		::System::Void TryCompactTail(::System::Int32 colIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDVERTICALATLAS_TRYCOMPACTTAIL_OFFSET))(this, colIndex);
		}
	};
}
