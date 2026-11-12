#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"

#define OJBNCFANGJD_CTOR_OFFSET UNITYSDK_OFFSET(0xC7A16E0)

inline static constexpr unsigned int OJBNCFANGJD_TypeDefinitionIndex = 62547;

	class OJBNCFANGJD : public ::System::Exception
	{
	public:
		::System::Boolean BABAIMNGFHA; // 0x88
		::System::Void _ctor(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OJBNCFANGJD_CTOR_OFFSET))(this, a1);
		}

	};
