#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/JOGBIBJLPJB.h"
class AOAPEDBJPKE;

#define AOAPEDBJPKE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1671D350)
#define AOAPEDBJPKE_CTOR_OFFSET UNITYSDK_OFFSET(0x1671D340)
#define AOAPEDBJPKE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1671D250)
#define AOAPEDBJPKE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1671D2B0)

inline static constexpr unsigned int AOAPEDBJPKE_TypeDefinitionIndex = 71256;

	class AOAPEDBJPKE : public ::System::Object
	{
	public:
		static ::AOAPEDBJPKE** StaticGet_JCLEAFEOFAL()
		{
			return (::AOAPEDBJPKE**)UnitySDK::FromName("", "AOAPEDBJPKE")->GetStaticField(0x28220);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOAPEDBJPKE_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AOAPEDBJPKE_CCTOR_OFFSET))();
		}

		::System::Boolean Equals(::JOGBIBJLPJB a1, ::JOGBIBJLPJB a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::JOGBIBJLPJB, ::JOGBIBJLPJB))((::PBYTE)hIl2Cpp + AOAPEDBJPKE_EQUALS_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetHashCode(::JOGBIBJLPJB a1)
		{
			return ((::System::Int32(*)(::PVOID, ::JOGBIBJLPJB))((::PBYTE)hIl2Cpp + AOAPEDBJPKE_GETHASHCODE_OFFSET))(this, a1);
		}

	};
