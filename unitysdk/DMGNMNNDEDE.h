#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DMGNMNNDEDE;
namespace System { class String; }

#define DMGNMNNDEDE_CTOR_OFFSET UNITYSDK_OFFSET(0xFEB9DB0)
#define DMGNMNNDEDE_EQUALS_OFFSET UNITYSDK_OFFSET(0xFEB9D20)

inline static constexpr unsigned int DMGNMNNDEDE_TypeDefinitionIndex = 66129;

	class DMGNMNNDEDE : public ::System::Object
	{
	public:
		::System::String* AKAGOGENLOP; // 0x10
		::System::Boolean LNBJCJODBML; // 0x18
		::System::Byte _padding0[0x3];
		::System::UInt32 LLDCHLHNADA; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMGNMNNDEDE_CTOR_OFFSET))(this);
		}

		::System::Boolean Equals(::DMGNMNNDEDE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DMGNMNNDEDE*))((::PBYTE)hIl2Cpp + DMGNMNNDEDE_EQUALS_OFFSET))(this, a1);
		}

	};
