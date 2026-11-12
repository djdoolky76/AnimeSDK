#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CCGFCHPPIDH_CTOR_OFFSET UNITYSDK_OFFSET(0xCE2D130)

inline static constexpr unsigned int CCGFCHPPIDH_TypeDefinitionIndex = 66330;

	class CCGFCHPPIDH : public ::System::Object
	{
	public:
		::System::Boolean IsFavour; // 0x10
		::System::Boolean IsNew; // 0x11
		::System::Boolean IsLike; // 0x12
		::System::Byte _padding0[0x1];
		::System::Int32 LikeCount; // 0x14
		::System::Int64 FavourCount; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCGFCHPPIDH_CTOR_OFFSET))(this);
		}

	};
