#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AkIterator;
class AkPlaylistItem;

#define AKITERATOR_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EF1D330)
#define AKITERATOR_CTOR_OFFSET UNITYSDK_OFFSET(0x1EF1C750)
#define AKITERATOR_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1EF1C9F0)
#define AKITERATOR_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1EF1C810)
#define AKITERATOR_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1EF1C920)
#define AKITERATOR_GETCPTR_OFFSET UNITYSDK_OFFSET(0x1EF1C760)
#define AKITERATOR_GETITEM_OFFSET UNITYSDK_OFFSET(0x1EF1CFF0)
#define AKITERATOR_GET_PITEM_OFFSET UNITYSDK_OFFSET(0x1EF1CCE0)
#define AKITERATOR_ISDIFFERENTFROM_OFFSET UNITYSDK_OFFSET(0x1EF1D210)
#define AKITERATOR_ISEQUALTO_OFFSET UNITYSDK_OFFSET(0x1EF1D0F0)
#define AKITERATOR_NEXTITER_OFFSET UNITYSDK_OFFSET(0x1EF1CDF0)
#define AKITERATOR_PREVITER_OFFSET UNITYSDK_OFFSET(0x1EF1CEF0)
#define AKITERATOR_SETCPTR_OFFSET UNITYSDK_OFFSET(0x1EF1C7B0)
#define AKITERATOR_SET_PITEM_OFFSET UNITYSDK_OFFSET(0x1EF1CBC0)

inline static constexpr unsigned int AkIterator_TypeDefinitionIndex = 45823;

	class AkIterator : public ::System::Object
	{
	public:
		::System::Boolean swigCMemOwn; // 0x10
		::System::Byte _padding0[0x7];
		::System::IntPtr swigCPtr; // 0x18
		::System::Void _ctor(::System::IntPtr a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + AKITERATOR_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKITERATOR_CTOR_1_OFFSET))(this);
		}

		static ::System::IntPtr getCPtr(::AkIterator* a1)
		{
			return ((::System::IntPtr(*)(::AkIterator*))((::PBYTE)hIl2Cpp + AKITERATOR_GETCPTR_OFFSET))(a1);
		}

		::System::Void setCPtr(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKITERATOR_SETCPTR_OFFSET))(this, a1);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKITERATOR_FINALIZE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKITERATOR_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKITERATOR_DISPOSE_1_OFFSET))(this, a1);
		}

		::System::Void set_pItem(::AkPlaylistItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AkPlaylistItem*))((::PBYTE)hIl2Cpp + AKITERATOR_SET_PITEM_OFFSET))(this, a1);
		}

		::AkPlaylistItem* get_pItem()
		{
			return ((::AkPlaylistItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKITERATOR_GET_PITEM_OFFSET))(this);
		}

		::AkIterator* NextIter()
		{
			return ((::AkIterator*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKITERATOR_NEXTITER_OFFSET))(this);
		}

		::AkIterator* PrevIter()
		{
			return ((::AkIterator*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKITERATOR_PREVITER_OFFSET))(this);
		}

		::AkPlaylistItem* GetItem()
		{
			return ((::AkPlaylistItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKITERATOR_GETITEM_OFFSET))(this);
		}

		::System::Boolean IsEqualTo(::AkIterator* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AkIterator*))((::PBYTE)hIl2Cpp + AKITERATOR_ISEQUALTO_OFFSET))(this, a1);
		}

		::System::Boolean IsDifferentFrom(::AkIterator* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AkIterator*))((::PBYTE)hIl2Cpp + AKITERATOR_ISDIFFERENTFROM_OFFSET))(this, a1);
		}

	};
