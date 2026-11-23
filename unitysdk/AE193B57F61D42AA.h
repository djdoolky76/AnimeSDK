#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E12F55A5FCCCF1EC.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

namespace System { class String; }

#define AE193B57F61D42AA_EB64F8033F85B1E7_OFFSET UNITYSDK_OFFSET(0x2349B50)
#define AE193B57F61D42AA_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x2349BC0)
#define AE193B57F61D42AA__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int AE193B57F61D42AA_TypeDefinitionIndex = 3238;

class AE193B57F61D42AA : public ::System::Object
{
public:
	::System::UInt32 FFA1778C5451D00E; // 0x10
	::System::Byte _padding0[0x4];
	::E12F55A5FCCCF1EC AF01F0CFF363EC40; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AE193B57F61D42AA__CTOR_OFFSET))(this);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::AE193B57F61D42AA*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::AE193B57F61D42AA*&))((::PBYTE)hIl2Cpp + AE193B57F61D42AA_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	static ::System::UInt32 EB64F8033F85B1E7(::System::String* F79B4D487F303AB2)
	{
		return ((::System::UInt32(*)(::System::String*))((::PBYTE)hIl2Cpp + AE193B57F61D42AA_EB64F8033F85B1E7_OFFSET))(F79B4D487F303AB2);
	}
};
