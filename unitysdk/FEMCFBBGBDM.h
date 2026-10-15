#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define FEMCFBBGBDM_CTOR_OFFSET UNITYSDK_OFFSET(0x15725890)

inline static constexpr unsigned int FEMCFBBGBDM_TypeDefinitionIndex = 57365;

	class FEMCFBBGBDM : public ::System::Object
	{
	public:
		::System::String* AOFHKOFDKDP; // 0x10
		::System::Single JFAGECNFHJL; // 0x18
		::System::Boolean MOIMPGCEDFJ; // 0x1C
		::System::Byte _padding0[0x3];
		::System::Single CCAOGMEFNLB; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEMCFBBGBDM_CTOR_OFFSET))(this);
		}

	};
