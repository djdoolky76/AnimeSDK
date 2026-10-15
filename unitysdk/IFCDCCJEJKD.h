#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IFCDCCJEJKD_CTOR_OFFSET UNITYSDK_OFFSET(0x15EFD7D0)
#define IFCDCCJEJKD_GET_AVATARIDS_OFFSET UNITYSDK_OFFSET(0x15EFD790)
#define IFCDCCJEJKD_GET_EXPIRETIME_OFFSET UNITYSDK_OFFSET(0x15EFD7B0)
#define IFCDCCJEJKD_SET_AVATARIDS_OFFSET UNITYSDK_OFFSET(0x15EFD7A0)
#define IFCDCCJEJKD_SET_EXPIRETIME_OFFSET UNITYSDK_OFFSET(0x15EFD7C0)

inline static constexpr unsigned int IFCDCCJEJKD_TypeDefinitionIndex = 68250;

	class IFCDCCJEJKD : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _AvatarIDs_k__BackingField; // 0x10
		::System::Int64 _ExpireTime_k__BackingField; // 0x18
		::System::Void _ctor(::System::Collections::Generic::List_1<::System::UInt32>* a1, ::System::Int64 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Int64))((::PBYTE)hIl2Cpp + IFCDCCJEJKD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_AvatarIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFCDCCJEJKD_GET_AVATARIDS_OFFSET))(this);
		}

		::System::Void set_AvatarIDs(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + IFCDCCJEJKD_SET_AVATARIDS_OFFSET))(this, a1);
		}

		::System::Int64 get_ExpireTime()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + IFCDCCJEJKD_GET_EXPIRETIME_OFFSET))(this);
		}

		::System::Void set_ExpireTime(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + IFCDCCJEJKD_SET_EXPIRETIME_OFFSET))(this, a1);
		}

	};
