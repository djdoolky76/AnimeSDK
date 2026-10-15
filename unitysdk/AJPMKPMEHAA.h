#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define AJPMKPMEHAA_CTOR_OFFSET UNITYSDK_OFFSET(0x1C861FA0)

inline static constexpr unsigned int AJPMKPMEHAA_TypeDefinitionIndex = 41955;

	class AJPMKPMEHAA : public ::System::Object
	{
	public:
		::System::UInt32 ANBEOEDCBCO; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJPMKPMEHAA_CTOR_OFFSET))(this);
		}

	};
