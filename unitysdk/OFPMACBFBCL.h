#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define OFPMACBFBCL_CTOR_OFFSET UNITYSDK_OFFSET(0xBE46410)
#define OFPMACBFBCL_GAOBNIHOCLL_OFFSET UNITYSDK_OFFSET(0xBE46360)

inline static constexpr unsigned int OFPMACBFBCL_TypeDefinitionIndex = 67324;

	class OFPMACBFBCL : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFPMACBFBCL_CTOR_OFFSET))(this);
		}

		::System::Void GAOBNIHOCLL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OFPMACBFBCL_GAOBNIHOCLL_OFFSET))(this, a1);
		}

	};
