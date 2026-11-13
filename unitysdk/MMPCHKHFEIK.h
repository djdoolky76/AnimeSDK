#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MMPCHKHFEIK_CTOR_OFFSET UNITYSDK_OFFSET(0x16062250)

inline static constexpr unsigned int MMPCHKHFEIK_TypeDefinitionIndex = 38024;

	class MMPCHKHFEIK : public ::System::Object
	{
	public:
		::System::UInt32 FBINCMPIKHG; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMPCHKHFEIK_CTOR_OFFSET))(this);
		}

	};
