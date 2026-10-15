#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KKGMHJNMOID;

#define PENKCBFIJOL_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xC1F39C0)
#define PENKCBFIJOL_CTOR_OFFSET UNITYSDK_OFFSET(0xC1F3A80)

inline static constexpr unsigned int PENKCBFIJOL_TypeDefinitionIndex = 80097;

	class PENKCBFIJOL : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PENKCBFIJOL_CTOR_OFFSET))(this);
		}

		::KKGMHJNMOID* BPLPBPMEODA(::System::UInt32 a1)
		{
			return ((::KKGMHJNMOID*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PENKCBFIJOL_BPLPBPMEODA_OFFSET))(this, a1);
		}

	};
