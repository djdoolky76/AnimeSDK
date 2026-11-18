#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AKRESULT.h"
#include "unitysdk/AkPlaylistArray.h"

class AkExternalSourceInfoArray;

#define AKPLAYLIST_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1FE40F80)
#define AKPLAYLIST_ENQUEUE_1_OFFSET UNITYSDK_OFFSET(0x1FE41220)
#define AKPLAYLIST_ENQUEUE_2_OFFSET UNITYSDK_OFFSET(0x1FE412C0)
#define AKPLAYLIST_ENQUEUE_3_OFFSET UNITYSDK_OFFSET(0x1FE41350)
#define AKPLAYLIST_ENQUEUE_4_OFFSET UNITYSDK_OFFSET(0x1FE413E0)
#define AKPLAYLIST_ENQUEUE_OFFSET UNITYSDK_OFFSET(0x1FE41150)
#define AKPLAYLIST_GETCPTR_OFFSET UNITYSDK_OFFSET(0x1FE40EE0)
#define AKPLAYLIST_SETCPTR_OFFSET UNITYSDK_OFFSET(0x1FE40EF0)
#define AKPLAYLIST__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FE41460)
#define AKPLAYLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x1FE40E50)

inline static constexpr unsigned int AkPlaylist_TypeDefinitionIndex = 33182;

class AkPlaylist : public ::AkPlaylistArray
{
public:
	::System::IntPtr swigCPtr; // 0x20

	::System::Void _ctor(::System::IntPtr cPtr, ::System::Boolean cMemoryOwn)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + AKPLAYLIST__CTOR_OFFSET))(this, cPtr, cMemoryOwn);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKPLAYLIST__CTOR_1_OFFSET))(this);
	}

	static ::System::IntPtr getCPtr(::AkPlaylist* obj)
	{
		return ((::System::IntPtr(*)(::AkPlaylist*))((::PBYTE)hIl2Cpp + AKPLAYLIST_GETCPTR_OFFSET))(obj);
	}

	::System::Void setCPtr(::System::IntPtr cPtr)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKPLAYLIST_SETCPTR_OFFSET))(this, cPtr);
	}

	::System::Void Dispose(::System::Boolean disposing)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKPLAYLIST_DISPOSE_OFFSET))(this, disposing);
	}

	::AKRESULT Enqueue(::System::UInt32 in_audioNodeID, ::System::Int32 in_msDelay, ::System::IntPtr in_pCustomInfo, ::System::UInt32 in_cExternals, ::AkExternalSourceInfoArray* in_pExternalSources)
	{
		return ((::AKRESULT(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::IntPtr, ::System::UInt32, ::AkExternalSourceInfoArray*))((::PBYTE)hIl2Cpp + AKPLAYLIST_ENQUEUE_OFFSET))(this, in_audioNodeID, in_msDelay, in_pCustomInfo, in_cExternals, in_pExternalSources);
	}

	::AKRESULT Enqueue_1(::System::UInt32 in_audioNodeID, ::System::Int32 in_msDelay, ::System::IntPtr in_pCustomInfo, ::System::UInt32 in_cExternals)
	{
		return ((::AKRESULT(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::IntPtr, ::System::UInt32))((::PBYTE)hIl2Cpp + AKPLAYLIST_ENQUEUE_1_OFFSET))(this, in_audioNodeID, in_msDelay, in_pCustomInfo, in_cExternals);
	}

	::AKRESULT Enqueue_2(::System::UInt32 in_audioNodeID, ::System::Int32 in_msDelay, ::System::IntPtr in_pCustomInfo)
	{
		return ((::AKRESULT(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKPLAYLIST_ENQUEUE_2_OFFSET))(this, in_audioNodeID, in_msDelay, in_pCustomInfo);
	}

	::AKRESULT Enqueue_3(::System::UInt32 in_audioNodeID, ::System::Int32 in_msDelay)
	{
		return ((::AKRESULT(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + AKPLAYLIST_ENQUEUE_3_OFFSET))(this, in_audioNodeID, in_msDelay);
	}

	::AKRESULT Enqueue_4(::System::UInt32 in_audioNodeID)
	{
		return ((::AKRESULT(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKPLAYLIST_ENQUEUE_4_OFFSET))(this, in_audioNodeID);
	}
};
