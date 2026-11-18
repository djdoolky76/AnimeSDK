#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_MATHUTIL_INTEXTENSION_PACKTOUINT64_OFFSET UNITYSDK_OFFSET(0x10D270A0)
#define MOLEMOLE_MATHUTIL_INTEXTENSION_UNPACKUINT64_OFFSET UNITYSDK_OFFSET(0x10D270F0)

namespace MoleMole::MathUtil
{
	inline static constexpr unsigned int IntExtension_TypeDefinitionIndex = 89092;

	class IntExtension : public ::System::Object
	{
	public:
		static ::System::UInt64 PackToUint64(::System::UInt32 a, ::System::UInt32 b)
		{
			return ((::System::UInt64(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_MATHUTIL_INTEXTENSION_PACKTOUINT64_OFFSET))(a, b);
		}

		static ::System::Void UnpackUint64(::System::UInt64 v, ::System::UInt32& a, ::System::UInt32& b)
		{
			return ((::System::Void(*)(::System::UInt64, ::System::UInt32&, ::System::UInt32&))((::PBYTE)hIl2Cpp + MOLEMOLE_MATHUTIL_INTEXTENSION_UNPACKUINT64_OFFSET))(v, a, b);
		}
	};
}
