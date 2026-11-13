#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NBICPOLGBJP_CTOR_OFFSET UNITYSDK_OFFSET(0x1C27AAE0)

inline static constexpr unsigned int NBICPOLGBJP_TypeDefinitionIndex = 43923;

	class NBICPOLGBJP : public ::System::Object
	{
	public:
		::System::Int32 NGMOIBKCJGD; // 0x10
		::System::Int32 JLLGOBPAGLD; // 0x14
		::System::Boolean CNLFELMLNNI; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBICPOLGBJP_CTOR_OFFSET))(this);
		}

	};
