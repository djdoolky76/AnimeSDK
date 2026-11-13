#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define PDEBGMMGENG_CTOR_OFFSET UNITYSDK_OFFSET(0x17679330)

inline static constexpr unsigned int PDEBGMMGENG_TypeDefinitionIndex = 43963;

	class PDEBGMMGENG : public ::System::Object
	{
	public:
		::System::UInt32 MGIHCDNKOLJ; // 0x10
		::System::Single EJGPHOGPEPC; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDEBGMMGENG_CTOR_OFFSET))(this);
		}

	};
