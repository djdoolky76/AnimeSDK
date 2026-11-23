#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_EC00AF6EBD418F0F_F348FD2BD1FFC322__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace System
{
	inline static constexpr unsigned int EC00AF6EBD418F0F_F348FD2BD1FFC322_TypeDefinitionIndex = 14850;

	class EC00AF6EBD418F0F_F348FD2BD1FFC322 : public ::System::Object
	{
	public:
		::System::String* B4545B6509D8B53B; // 0x10
		::System::String* ABD1FB5C50876BE4; // 0x18
		::System::String* F8FA9CCD1015C819; // 0x20
		::System::String* BAA01253A74259D0; // 0x28
		::System::Int32 A42B9A08B09FDC5D; // 0x30
		::System::Byte _padding0[0x4];
		::System::String* FA276395486E5E72; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_EC00AF6EBD418F0F_F348FD2BD1FFC322__CTOR_OFFSET))(this);
		}
	};
}
