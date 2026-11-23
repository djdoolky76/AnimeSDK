#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define F9874422644484EC_A5318B4B400316CA_B9F49FC58944F131_OFFSET UNITYSDK_OFFSET(0x2937CC0)
#define F9874422644484EC_A5318B4B400316CA__CCTOR_OFFSET UNITYSDK_OFFSET(0x2937DC0)
#define F9874422644484EC_A5318B4B400316CA__CTOR_OFFSET UNITYSDK_OFFSET(0x2937E00)

inline static constexpr unsigned int F9874422644484EC_A5318B4B400316CA_TypeDefinitionIndex = 15356;

class F9874422644484EC_A5318B4B400316CA : public ::System::Object
{
public:
	static ::System::UInt64* StaticGet_A151BC6DF95133EA()
	{
		return (::System::UInt64*)Il2CppClass::FromTypeDefinitionIndex(F9874422644484EC_A5318B4B400316CA_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	::System::UInt64 A0973CE93A72DED1; // 0x10
	::System::Object* B1A49DE15B86062F; // 0x18

	::System::UInt64 B9F49FC58944F131()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + F9874422644484EC_A5318B4B400316CA_B9F49FC58944F131_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F9874422644484EC_A5318B4B400316CA__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + F9874422644484EC_A5318B4B400316CA__CCTOR_OFFSET))();
	}
};
