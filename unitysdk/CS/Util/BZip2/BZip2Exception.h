#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"
#include "unitysdk/B6564CAC678AC465.h"

class E519989062D53DE5;
namespace System { class String; }

#define CS_UTIL_BZIP2_BZIP2EXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x23AF0A0)
#define CS_UTIL_BZIP2_BZIP2EXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x23AF120)
#define CS_UTIL_BZIP2_BZIP2EXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x23AF040)

namespace CS::Util::BZip2
{
	inline static constexpr unsigned int BZip2Exception_TypeDefinitionIndex = 3716;

	class BZip2Exception : public ::System::Exception
	{
	public:
		::System::Void _ctor(::System::String* B083BE7841B347C4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CS_UTIL_BZIP2_BZIP2EXCEPTION__CTOR_OFFSET))(this, B083BE7841B347C4);
		}

		::System::Void _ctor_1(::E519989062D53DE5* B29880F033C1F232, ::B6564CAC678AC465 E6CE7391633EEC68)
		{
			return ((::System::Void(*)(::PVOID, ::E519989062D53DE5*, ::B6564CAC678AC465))((::PBYTE)hIl2Cpp + CS_UTIL_BZIP2_BZIP2EXCEPTION__CTOR_1_OFFSET))(this, B29880F033C1F232, E6CE7391633EEC68);
		}

		::System::Void _ctor_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CS_UTIL_BZIP2_BZIP2EXCEPTION__CTOR_2_OFFSET))(this);
		}
	};
}
