#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define ELMKJJKJNAJ_CTOR_OFFSET UNITYSDK_OFFSET(0x15528E20)

inline static constexpr unsigned int ELMKJJKJNAJ_TypeDefinitionIndex = 59033;

	class ELMKJJKJNAJ : public ::System::Object
	{
	public:
		::System::Int32 KBAPBCNJHDB; // 0x10
		::System::Boolean LDPJEFIPKHO; // 0x14
		::System::Byte _padding0[0x3];
		::System::Int32 APHOHPFADAP; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELMKJJKJNAJ_CTOR_OFFSET))(this);
		}

	};
