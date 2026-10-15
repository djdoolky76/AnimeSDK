#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MAOPBKPKCEK.h"
class JEPJPHKEGED;
namespace System { class String; }

#define JEPJPHKEGED_COMPARETO_OFFSET UNITYSDK_OFFSET(0x1662F520)
#define JEPJPHKEGED_CTOR_OFFSET UNITYSDK_OFFSET(0x1662F4E0)
#define JEPJPHKEGED_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1662F580)

inline static constexpr unsigned int JEPJPHKEGED_TypeDefinitionIndex = 62025;

	class JEPJPHKEGED : public ::MAOPBKPKCEK
	{
	public:
		::System::UInt32 OGGCBJHJFCA; // 0x18
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JEPJPHKEGED_CTOR_OFFSET))(this, a1);
		}

		::System::Int32 CompareTo(::JEPJPHKEGED* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::JEPJPHKEGED*))((::PBYTE)hIl2Cpp + JEPJPHKEGED_COMPARETO_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEPJPHKEGED_TOSTRING_OFFSET))(this);
		}

	};
