#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AKRESULT.h"
#include "unitysdk/System/Object.h"
class AkExternalSourceInfoArray;
class AkPlaylistItem;

#define AKPLAYLISTITEM_ASSIGN_OFFSET UNITYSDK_OFFSET(0x20860C90)
#define AKPLAYLISTITEM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x20860B30)
#define AKPLAYLISTITEM_CTOR_2_OFFSET UNITYSDK_OFFSET(0x20860BB0)
#define AKPLAYLISTITEM_CTOR_OFFSET UNITYSDK_OFFSET(0x2085F750)
#define AKPLAYLISTITEM_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x20860960)
#define AKPLAYLISTITEM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x20860780)
#define AKPLAYLISTITEM_FINALIZE_OFFSET UNITYSDK_OFFSET(0x20860890)
#define AKPLAYLISTITEM_GETCPTR_OFFSET UNITYSDK_OFFSET(0x2085EEF0)
#define AKPLAYLISTITEM_GET_AUDIONODEID_OFFSET UNITYSDK_OFFSET(0x208610B0)
#define AKPLAYLISTITEM_GET_MSDELAY_OFFSET UNITYSDK_OFFSET(0x20861220)
#define AKPLAYLISTITEM_GET_PCUSTOMINFO_OFFSET UNITYSDK_OFFSET(0x20861390)
#define AKPLAYLISTITEM_ISEQUALTO_OFFSET UNITYSDK_OFFSET(0x20860DF0)
#define AKPLAYLISTITEM_SETCPTR_OFFSET UNITYSDK_OFFSET(0x20860720)
#define AKPLAYLISTITEM_SETEXTERNALSOURCES_OFFSET UNITYSDK_OFFSET(0x20860F10)
#define AKPLAYLISTITEM_SET_AUDIONODEID_OFFSET UNITYSDK_OFFSET(0x20860FF0)
#define AKPLAYLISTITEM_SET_MSDELAY_OFFSET UNITYSDK_OFFSET(0x20861160)
#define AKPLAYLISTITEM_SET_PCUSTOMINFO_OFFSET UNITYSDK_OFFSET(0x208612D0)

inline static constexpr unsigned int AkPlaylistItem_TypeDefinitionIndex = 45851;

	class AkPlaylistItem : public ::System::Object
	{
	public:
		::System::IntPtr swigCPtr; // 0x10
		::System::Boolean swigCMemOwn; // 0x18
		::System::Void _ctor(::System::IntPtr a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + AKPLAYLISTITEM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKPLAYLISTITEM_CTOR_1_OFFSET))(this);
		}

		::System::Void _ctor_2(::AkPlaylistItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AkPlaylistItem*))((::PBYTE)hIl2Cpp + AKPLAYLISTITEM_CTOR_2_OFFSET))(this, a1);
		}

		static ::System::IntPtr getCPtr(::AkPlaylistItem* a1)
		{
			return ((::System::IntPtr(*)(::AkPlaylistItem*))((::PBYTE)hIl2Cpp + AKPLAYLISTITEM_GETCPTR_OFFSET))(a1);
		}

		::System::Void setCPtr(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKPLAYLISTITEM_SETCPTR_OFFSET))(this, a1);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKPLAYLISTITEM_FINALIZE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKPLAYLISTITEM_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKPLAYLISTITEM_DISPOSE_1_OFFSET))(this, a1);
		}

		::AkPlaylistItem* Assign(::AkPlaylistItem* a1)
		{
			return ((::AkPlaylistItem*(*)(::PVOID, ::AkPlaylistItem*))((::PBYTE)hIl2Cpp + AKPLAYLISTITEM_ASSIGN_OFFSET))(this, a1);
		}

		::System::Boolean IsEqualTo(::AkPlaylistItem* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AkPlaylistItem*))((::PBYTE)hIl2Cpp + AKPLAYLISTITEM_ISEQUALTO_OFFSET))(this, a1);
		}

		::AKRESULT SetExternalSources(::System::UInt32 a1, ::AkExternalSourceInfoArray* a2)
		{
			return ((::AKRESULT(*)(::PVOID, ::System::UInt32, ::AkExternalSourceInfoArray*))((::PBYTE)hIl2Cpp + AKPLAYLISTITEM_SETEXTERNALSOURCES_OFFSET))(this, a1, a2);
		}

		::System::Void set_audioNodeID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKPLAYLISTITEM_SET_AUDIONODEID_OFFSET))(this, a1);
		}

		::System::UInt32 get_audioNodeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKPLAYLISTITEM_GET_AUDIONODEID_OFFSET))(this);
		}

		::System::Void set_msDelay(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AKPLAYLISTITEM_SET_MSDELAY_OFFSET))(this, a1);
		}

		::System::Int32 get_msDelay()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKPLAYLISTITEM_GET_MSDELAY_OFFSET))(this);
		}

		::System::Void set_pCustomInfo(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKPLAYLISTITEM_SET_PCUSTOMINFO_OFFSET))(this, a1);
		}

		::System::IntPtr get_pCustomInfo()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + AKPLAYLISTITEM_GET_PCUSTOMINFO_OFFSET))(this);
		}

	};
