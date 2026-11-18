#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CEDFIOLFMKI;
namespace System { class String; }

#define CEDFIOLFMKI_CJBHFIAAPPH_MJGEFMEOECJ_OFFSET UNITYSDK_OFFSET(0x153288A0)
#define CEDFIOLFMKI_CJBHFIAAPPH__CTOR_OFFSET UNITYSDK_OFFSET(0x15328890)

inline static constexpr unsigned int CEDFIOLFMKI_CJBHFIAAPPH_TypeDefinitionIndex = 87524;

class CEDFIOLFMKI_CJBHFIAAPPH : public ::System::Object
{
public:
	::CEDFIOLFMKI* KLHPEBKNIFB; // 0x10
	::System::Int32 OOEOHNBJMGD; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEDFIOLFMKI_CJBHFIAAPPH__CTOR_OFFSET))(this);
	}

	::System::String* MJGEFMEOECJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEDFIOLFMKI_CJBHFIAAPPH_MJGEFMEOECJ_OFFSET))(this);
	}
};
