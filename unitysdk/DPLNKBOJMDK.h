#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define DPLNKBOJMDK_CTOR_OFFSET UNITYSDK_OFFSET(0x126556F0)

inline static constexpr unsigned int DPLNKBOJMDK_TypeDefinitionIndex = 61870;

	class DPLNKBOJMDK : public ::System::Object
	{
	public:
		::System::String* InviteCode; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPLNKBOJMDK_CTOR_OFFSET))(this);
		}

	};
