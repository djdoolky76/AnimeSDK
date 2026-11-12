#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EGBIFFCBKEH;

#define OLPNCGKAGNK_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xC815600)
#define OLPNCGKAGNK_CTOR_OFFSET UNITYSDK_OFFSET(0xC8156A0)

inline static constexpr unsigned int OLPNCGKAGNK_TypeDefinitionIndex = 82937;

	class OLPNCGKAGNK : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLPNCGKAGNK_CTOR_OFFSET))(this);
		}

		::EGBIFFCBKEH* BPLPBPMEODA(::System::UInt32 a1)
		{
			return ((::EGBIFFCBKEH*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OLPNCGKAGNK_BPLPBPMEODA_OFFSET))(this, a1);
		}

	};
