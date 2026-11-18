#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DNJGCKKGBKH_HPLPHEKEMJJ.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define HNCKMJMEIHL_DOGFEALEOHF_OFFSET UNITYSDK_OFFSET(0x14D39560)
#define HNCKMJMEIHL_EALAOHJLMFK_OFFSET UNITYSDK_OFFSET(0x14D39510)
#define HNCKMJMEIHL_FMJHILBMIOB_OFFSET UNITYSDK_OFFSET(0x14D39480)
#define HNCKMJMEIHL_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x14D39370)
#define HNCKMJMEIHL__CTOR_OFFSET UNITYSDK_OFFSET(0x14D39320)

inline static constexpr unsigned int HNCKMJMEIHL_TypeDefinitionIndex = 91330;

class HNCKMJMEIHL : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::UInt32>* ILFGKMDHFGM; // 0x10
	::DNJGCKKGBKH_HPLPHEKEMJJ AOEEIBJHENI; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNCKMJMEIHL__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNCKMJMEIHL_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Boolean FMJHILBMIOB(::System::UInt32 ACHBBPJIBIE)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HNCKMJMEIHL_FMJHILBMIOB_OFFSET))(this, ACHBBPJIBIE);
	}

	::System::Int32 EALAOHJLMFK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HNCKMJMEIHL_EALAOHJLMFK_OFFSET))(this);
	}

	::System::UInt32 DOGFEALEOHF()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HNCKMJMEIHL_DOGFEALEOHF_OFFSET))(this);
	}
};
