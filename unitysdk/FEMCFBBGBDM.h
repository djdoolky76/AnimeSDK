#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define FEMCFBBGBDM_CTOR_OFFSET UNITYSDK_OFFSET(0x1663FA10)

inline static constexpr unsigned int FEMCFBBGBDM_TypeDefinitionIndex = 58593;

	class FEMCFBBGBDM : public ::System::Object
	{
	public:
		::System::String* AOFHKOFDKDP; // 0x10
		::System::Single CCAOGMEFNLB; // 0x18
		::System::Single JFAGECNFHJL; // 0x1C
		::System::Boolean MOIMPGCEDFJ; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEMCFBBGBDM_CTOR_OFFSET))(this);
		}

	};
