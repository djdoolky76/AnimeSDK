#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AAEKKFIJFDL;

#define CNNGAKJDMPN_CLEAR_OFFSET UNITYSDK_OFFSET(0x1CA13420)
#define CNNGAKJDMPN_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA13480)

inline static constexpr unsigned int CNNGAKJDMPN_TypeDefinitionIndex = 43336;

	class CNNGAKJDMPN : public ::System::Object
	{
	public:
		::AAEKKFIJFDL* CIKPBGDIABO; // 0x10
		::System::Boolean PMCCPHLDMEE; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNNGAKJDMPN_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNNGAKJDMPN_CLEAR_OFFSET))(this);
		}

	};
