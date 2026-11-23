#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BF04D155DF3B4B9A;

#define FA963EFAD552D16E_F87D13E9F7F3496E_OFFSET UNITYSDK_OFFSET(0x38BEDC0)
#define FA963EFAD552D16E__CCTOR_OFFSET UNITYSDK_OFFSET(0x38BECC0)
#define FA963EFAD552D16E__CTOR_OFFSET UNITYSDK_OFFSET(0x38BED10)

inline static constexpr unsigned int FA963EFAD552D16E_TypeDefinitionIndex = 20318;

class FA963EFAD552D16E : public ::System::Object
{
public:
	static ::BF04D155DF3B4B9A** StaticGet_AFE3D0BBF9F9B030()
	{
		return (::BF04D155DF3B4B9A**)Il2CppClass::FromTypeDefinitionIndex(FA963EFAD552D16E_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	::PVOID E311BED8C9F3A3BC; // 0x10
	::Il2CppArray<::System::Object*>* AEC89EF60E36B1B1; // 0x18
	::System::IntPtr E807C1E978276F9E; // 0x20
	::System::IntPtr FA2BB1C3B1912831; // 0x28

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FA963EFAD552D16E__CCTOR_OFFSET))();
	}

	static ::FA963EFAD552D16E* F87D13E9F7F3496E()
	{
		return ((::FA963EFAD552D16E*(*)())((::PBYTE)hIl2Cpp + FA963EFAD552D16E_F87D13E9F7F3496E_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FA963EFAD552D16E__CTOR_OFFSET))(this);
	}
};
