#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define IKCBDMLDENO_CTOR_OFFSET UNITYSDK_OFFSET(0x1CB49BD0)

inline static constexpr unsigned int IKCBDMLDENO_TypeDefinitionIndex = 41990;

	class IKCBDMLDENO : public ::System::Object
	{
	public:
		::System::Int32 NAKHDOBGIMJ; // 0x10
		::System::Int32 JBDIMNMEAKK; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKCBDMLDENO_CTOR_OFFSET))(this);
		}

	};
