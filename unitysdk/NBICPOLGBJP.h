#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NBICPOLGBJP_CTOR_OFFSET UNITYSDK_OFFSET(0x1C915460)

inline static constexpr unsigned int NBICPOLGBJP_TypeDefinitionIndex = 42942;

	class NBICPOLGBJP : public ::System::Object
	{
	public:
		::System::Int32 JLLGOBPAGLD; // 0x10
		::System::Boolean CNLFELMLNNI; // 0x14
		::System::Byte _padding0[0x3];
		::System::Int32 NGMOIBKCJGD; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBICPOLGBJP_CTOR_OFFSET))(this);
		}

	};
