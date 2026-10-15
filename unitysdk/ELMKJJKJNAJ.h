#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define ELMKJJKJNAJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1551D170)

inline static constexpr unsigned int ELMKJJKJNAJ_TypeDefinitionIndex = 59033;

	class ELMKJJKJNAJ : public ::System::Object
	{
	public:
		::System::Int32 APHOHPFADAP; // 0x10
		::System::Int32 KBAPBCNJHDB; // 0x14
		::System::Boolean LDPJEFIPKHO; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELMKJJKJNAJ_CTOR_OFFSET))(this);
		}

	};
