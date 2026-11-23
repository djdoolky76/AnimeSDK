#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AD61077CFCBEFAEA.h"
#include "unitysdk/E865F6F8B8B44C1E.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define E6D3F9FD901013B4_BDEDD1A175A91E65__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int E6D3F9FD901013B4_BDEDD1A175A91E65_TypeDefinitionIndex = 1646;

class E6D3F9FD901013B4_BDEDD1A175A91E65 : public ::System::Object
{
public:
	::System::Nullable_1<::AD61077CFCBEFAEA> BB20B12F70564FEC; // 0x10
	::System::Byte _padding0[0x8];
	::System::Nullable_1<::System::UInt32> F5B4397813D1EE72; // 0x20
	::E865F6F8B8B44C1E A44CF21B55FEFA89; // 0x28
	::System::String* AEDF565CE654EE81; // 0x30
	::System::Single B17B9B9C54637FC1; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E6D3F9FD901013B4_BDEDD1A175A91E65__CTOR_OFFSET))(this);
	}
};
