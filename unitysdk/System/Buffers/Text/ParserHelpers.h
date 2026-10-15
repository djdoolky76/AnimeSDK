#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_BUFFERS_TEXT_PARSERHELPERS_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EE139B0)
#define SYSTEM_BUFFERS_TEXT_PARSERHELPERS_ISDIGIT_OFFSET UNITYSDK_OFFSET(0x1EE139A0)

namespace System::Buffers::Text
{
	inline static constexpr unsigned int ParserHelpers_TypeDefinitionIndex = 5005;

	class ParserHelpers : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Byte>** StaticGet_s_hexLookup()
		{
			return (::Il2CppArray<::System::Byte>**)UnitySDK::FromName("System.Buffers.Text", "ParserHelpers")->GetStaticField(0x160);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_TEXT_PARSERHELPERS_CCTOR_OFFSET))();
		}

		static ::System::Boolean IsDigit(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_TEXT_PARSERHELPERS_ISDIGIT_OFFSET))(a1);
		}

	};
}
