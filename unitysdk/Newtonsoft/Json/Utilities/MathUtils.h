#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Nullable_1.h"

#define NEWTONSOFT_JSON_UTILITIES_MATHUTILS_APPROXEQUALS_OFFSET UNITYSDK_OFFSET(0x1F2904B0)
#define NEWTONSOFT_JSON_UTILITIES_MATHUTILS_INTLENGTH_OFFSET UNITYSDK_OFFSET(0x1F290200)
#define NEWTONSOFT_JSON_UTILITIES_MATHUTILS_INTTOHEX_OFFSET UNITYSDK_OFFSET(0x1F290370)
#define NEWTONSOFT_JSON_UTILITIES_MATHUTILS_MAX_1_OFFSET UNITYSDK_OFFSET(0x1F290440)
#define NEWTONSOFT_JSON_UTILITIES_MATHUTILS_MAX_OFFSET UNITYSDK_OFFSET(0x1F2903E0)
#define NEWTONSOFT_JSON_UTILITIES_MATHUTILS_MIN_OFFSET UNITYSDK_OFFSET(0x1F290380)

namespace Newtonsoft::Json::Utilities
{
	inline static constexpr unsigned int MathUtils_TypeDefinitionIndex = 7078;

	class MathUtils : public ::System::Object
	{
	public:
		static ::System::Int32 IntLength(::System::UInt64 i)
		{
			return ((::System::Int32(*)(::System::UInt64))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_MATHUTILS_INTLENGTH_OFFSET))(i);
		}

		static ::System::Char IntToHex(::System::Int32 n)
		{
			return ((::System::Char(*)(::System::Int32))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_MATHUTILS_INTTOHEX_OFFSET))(n);
		}

		static ::System::Nullable_1<::System::Int32> Min(::System::Nullable_1<::System::Int32> val1, ::System::Nullable_1<::System::Int32> val2)
		{
			return ((::System::Nullable_1<::System::Int32>(*)(::System::Nullable_1<::System::Int32>, ::System::Nullable_1<::System::Int32>))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_MATHUTILS_MIN_OFFSET))(val1, val2);
		}

		static ::System::Nullable_1<::System::Int32> Max(::System::Nullable_1<::System::Int32> val1, ::System::Nullable_1<::System::Int32> val2)
		{
			return ((::System::Nullable_1<::System::Int32>(*)(::System::Nullable_1<::System::Int32>, ::System::Nullable_1<::System::Int32>))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_MATHUTILS_MAX_OFFSET))(val1, val2);
		}

		static ::System::Nullable_1<::System::Double> Max_1(::System::Nullable_1<::System::Double> val1, ::System::Nullable_1<::System::Double> val2)
		{
			return ((::System::Nullable_1<::System::Double>(*)(::System::Nullable_1<::System::Double>, ::System::Nullable_1<::System::Double>))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_MATHUTILS_MAX_1_OFFSET))(val1, val2);
		}

		static ::System::Boolean ApproxEquals(::System::Double d1, ::System::Double d2)
		{
			return ((::System::Boolean(*)(::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_MATHUTILS_APPROXEQUALS_OFFSET))(d1, d2);
		}
	};
}
