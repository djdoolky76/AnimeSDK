#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class E556ADE460671672;
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define E556ADE460671672_ED14A3E1AED6FAD0_E05FCAE0F335998F_OFFSET UNITYSDK_OFFSET(0x3A10F80)
#define E556ADE460671672_ED14A3E1AED6FAD0_E26DEAA9F1F87BCF_OFFSET UNITYSDK_OFFSET(0x3A10C90)
#define E556ADE460671672_ED14A3E1AED6FAD0__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int E556ADE460671672_ED14A3E1AED6FAD0_TypeDefinitionIndex = 12731;

class E556ADE460671672_ED14A3E1AED6FAD0 : public ::System::Object
{
public:
	::E556ADE460671672* A544919C800E2923; // 0x10
	::System::Action_1<::System::String*>* E04D2BE64FCE9814; // 0x18
	::System::Action* BDCB87964C751DB1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E556ADE460671672_ED14A3E1AED6FAD0__CTOR_OFFSET))(this);
	}

	::System::Void E26DEAA9F1F87BCF(::System::Int32 E82293C0814051A5, ::System::String* AE62BB2B694A9D83)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + E556ADE460671672_ED14A3E1AED6FAD0_E26DEAA9F1F87BCF_OFFSET))(this, E82293C0814051A5, AE62BB2B694A9D83);
	}

	::System::Void E05FCAE0F335998F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E556ADE460671672_ED14A3E1AED6FAD0_E05FCAE0F335998F_OFFSET))(this);
	}
};
