#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NPBILDKPBAN_CTOR_OFFSET UNITYSDK_OFFSET(0x1C948E70)

inline static constexpr unsigned int NPBILDKPBAN_TypeDefinitionIndex = 42220;

	class NPBILDKPBAN : public ::System::Object
	{
	public:
		::System::UInt32 GACEMBBAGMP; // 0x10
		::System::UInt32 JCAEANLAGMB; // 0x14
		::System::UInt32 CMNNGJKFIOM; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPBILDKPBAN_CTOR_OFFSET))(this);
		}

	};
