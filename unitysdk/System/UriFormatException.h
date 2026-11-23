#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/FormatException.h"
#include "unitysdk/B6564CAC678AC465.h"

class E519989062D53DE5;
namespace System { class String; }

#define SYSTEM_URIFORMATEXCEPTION_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x3E7C1E0)
#define SYSTEM_URIFORMATEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3EAD3A0)
#define SYSTEM_URIFORMATEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x3EAD390)
#define SYSTEM_URIFORMATEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x3B71B60)

namespace System
{
	inline static constexpr unsigned int UriFormatException_TypeDefinitionIndex = 15046;

	class UriFormatException : public ::System::FormatException
	{
	public:
		::System::Void System_Runtime_Serialization_ISerializable_GetObjectData(::E519989062D53DE5* EE8EA789BF8D394F, ::B6564CAC678AC465 B2E673F362AA060E)
		{
			return ((::System::Void(*)(::PVOID, ::E519989062D53DE5*, ::B6564CAC678AC465))((::PBYTE)hIl2Cpp + SYSTEM_URIFORMATEXCEPTION_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET))(this, EE8EA789BF8D394F, B2E673F362AA060E);
		}

		::System::Void _ctor(::E519989062D53DE5* EE8EA789BF8D394F, ::B6564CAC678AC465 B2E673F362AA060E)
		{
			return ((::System::Void(*)(::PVOID, ::E519989062D53DE5*, ::B6564CAC678AC465))((::PBYTE)hIl2Cpp + SYSTEM_URIFORMATEXCEPTION__CTOR_OFFSET))(this, EE8EA789BF8D394F, B2E673F362AA060E);
		}

		::System::Void _ctor_1(::System::String* E683BEA4331B4677)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_URIFORMATEXCEPTION__CTOR_1_OFFSET))(this, E683BEA4331B4677);
		}

		::System::Void _ctor_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URIFORMATEXCEPTION__CTOR_2_OFFSET))(this);
		}
	};
}
