#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CCGFCHPPIDH_CTOR_OFFSET UNITYSDK_OFFSET(0xC73ABD0)

	class CCGFCHPPIDH : public ::System::Object
	{
	public:
		::System::Int32 LikeCount; // 0x10
		::System::Boolean IsNew; // 0x14
		::System::Boolean IsFavour; // 0x15
		::System::Boolean IsLike; // 0x16
		::System::Byte _padding0[0x1];
		::System::Int64 FavourCount; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCGFCHPPIDH_CTOR_OFFSET))(this);
		}

	};
