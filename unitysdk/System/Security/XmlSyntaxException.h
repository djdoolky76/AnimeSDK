#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/SystemException.h"
#include "unitysdk/B6564CAC678AC465.h"

class E519989062D53DE5;
namespace System { class String; }

#define SYSTEM_SECURITY_XMLSYNTAXEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3D54300)
#define SYSTEM_SECURITY_XMLSYNTAXEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x3B5EFC0)
#define SYSTEM_SECURITY_XMLSYNTAXEXCEPTION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x3D54300)
#define SYSTEM_SECURITY_XMLSYNTAXEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x3D54300)

namespace System::Security
{
	inline static constexpr unsigned int XmlSyntaxException_TypeDefinitionIndex = 10965;

	class XmlSyntaxException : public ::System::SystemException
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_XMLSYNTAXEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Int32 B3FF39E4BBB05078, ::System::String* B083BE7841B347C4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_XMLSYNTAXEXCEPTION__CTOR_1_OFFSET))(this, B3FF39E4BBB05078, B083BE7841B347C4);
		}

		::System::Void _ctor_2(::E519989062D53DE5* B29880F033C1F232, ::B6564CAC678AC465 E6CE7391633EEC68)
		{
			return ((::System::Void(*)(::PVOID, ::E519989062D53DE5*, ::B6564CAC678AC465))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_XMLSYNTAXEXCEPTION__CTOR_2_OFFSET))(this, B29880F033C1F232, E6CE7391633EEC68);
		}

		::System::Void _ctor_3(::System::Int32 B3FF39E4BBB05078)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_XMLSYNTAXEXCEPTION__CTOR_3_OFFSET))(this, B3FF39E4BBB05078);
		}
	};
}
