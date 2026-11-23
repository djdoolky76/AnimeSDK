#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ArgumentException.h"
#include "unitysdk/B6564CAC678AC465.h"

class E519989062D53DE5;
namespace System { class String; }

#define SYSTEM_ARGUMENTNULLEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3B764C0)
#define SYSTEM_ARGUMENTNULLEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x3B76570)
#define SYSTEM_ARGUMENTNULLEXCEPTION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x3B76520)
#define SYSTEM_ARGUMENTNULLEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x3B765A0)

namespace System
{
	inline static constexpr unsigned int ArgumentNullException_TypeDefinitionIndex = 11070;

	class ArgumentNullException : public ::System::ArgumentException
	{
	public:
		::System::Void _ctor(::E519989062D53DE5* B29880F033C1F232, ::B6564CAC678AC465 E6CE7391633EEC68)
		{
			return ((::System::Void(*)(::PVOID, ::E519989062D53DE5*, ::B6564CAC678AC465))((::PBYTE)hIl2Cpp + SYSTEM_ARGUMENTNULLEXCEPTION__CTOR_OFFSET))(this, B29880F033C1F232, E6CE7391633EEC68);
		}

		::System::Void _ctor_1(::System::String* F1A536645E6067F3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_ARGUMENTNULLEXCEPTION__CTOR_1_OFFSET))(this, F1A536645E6067F3);
		}

		::System::Void _ctor_2(::System::String* F1A536645E6067F3, ::System::String* B083BE7841B347C4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_ARGUMENTNULLEXCEPTION__CTOR_2_OFFSET))(this, F1A536645E6067F3, B083BE7841B347C4);
		}

		::System::Void _ctor_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ARGUMENTNULLEXCEPTION__CTOR_3_OFFSET))(this);
		}
	};
}
