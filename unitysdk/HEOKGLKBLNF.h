#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define HEOKGLKBLNF_CTOR_OFFSET UNITYSDK_OFFSET(0x1AA74290)

inline static constexpr unsigned int HEOKGLKBLNF_TypeDefinitionIndex = 37362;

	class HEOKGLKBLNF : public ::System::Object
	{
	public:
		::System::UInt32 ADFAKNJIAPJ; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEOKGLKBLNF_CTOR_OFFSET))(this);
		}

	};
