#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ArgumentException.h"
#include "unitysdk/B6564CAC678AC465.h"

class E519989062D53DE5;
namespace System { class String; }
namespace System { class Type; }

#define SYSTEM_COMPONENTMODEL_INVALIDENUMARGUMENTEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3DF6B50)
#define SYSTEM_COMPONENTMODEL_INVALIDENUMARGUMENTEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x3DF6B60)
#define SYSTEM_COMPONENTMODEL_INVALIDENUMARGUMENTEXCEPTION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x3DF6B70)
#define SYSTEM_COMPONENTMODEL_INVALIDENUMARGUMENTEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x3B765A0)

namespace System::ComponentModel
{
	inline static constexpr unsigned int InvalidEnumArgumentException_TypeDefinitionIndex = 14671;

	class InvalidEnumArgumentException : public ::System::ArgumentException
	{
	public:
		::System::Void _ctor(::E519989062D53DE5* B29880F033C1F232, ::B6564CAC678AC465 E6CE7391633EEC68)
		{
			return ((::System::Void(*)(::PVOID, ::E519989062D53DE5*, ::B6564CAC678AC465))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_INVALIDENUMARGUMENTEXCEPTION__CTOR_OFFSET))(this, B29880F033C1F232, E6CE7391633EEC68);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_INVALIDENUMARGUMENTEXCEPTION__CTOR_1_OFFSET))(this);
		}

		::System::Void _ctor_2(::System::String* B083BE7841B347C4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_INVALIDENUMARGUMENTEXCEPTION__CTOR_2_OFFSET))(this, B083BE7841B347C4);
		}

		::System::Void _ctor_3(::System::String* F8FA38BCFFB2F956, ::System::Int32 A2E1A290AD5F604F, ::System::Type* E5B613345724232C)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_INVALIDENUMARGUMENTEXCEPTION__CTOR_3_OFFSET))(this, F8FA38BCFFB2F956, A2E1A290AD5F604F, E5B613345724232C);
		}
	};
}
