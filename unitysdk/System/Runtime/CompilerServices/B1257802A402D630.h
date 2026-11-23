#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Type; }

#define SYSTEM_RUNTIME_COMPILERSERVICES_B1257802A402D630__CTOR_OFFSET UNITYSDK_OFFSET(0x3CEAEA0)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int B1257802A402D630_TypeDefinitionIndex = 10725;

	class B1257802A402D630 : public ::System::Attribute
	{
	public:
		::System::Type* EFE960B43DC25D86; // 0x10
		::System::Int32 A71ABEBCCBDCC2DD; // 0x18

		::System::Void _ctor(::System::Type* FED784FF9530A296, ::System::Int32 A96B867D8BBB8B00)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_B1257802A402D630__CTOR_OFFSET))(this, FED784FF9530A296, A96B867D8BBB8B00);
		}
	};
}
