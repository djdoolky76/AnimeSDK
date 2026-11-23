#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FB3F404A630B047C;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define B4F12F4802ECF11A_BDAD20470D6217E8_BE71F9CBD0D311B2_OFFSET UNITYSDK_OFFSET(0x2023B50)
#define B4F12F4802ECF11A_BDAD20470D6217E8__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B4F12F4802ECF11A_BDAD20470D6217E8_TypeDefinitionIndex = 8187;

class B4F12F4802ECF11A_BDAD20470D6217E8 : public ::System::Object
{
public:
	::System::String* E97E8D008427A296; // 0x10
	::System::UInt32 BD2599D1271A620A; // 0x18
	::System::Byte _padding0[0x4];
	::System::Action_1<::FB3F404A630B047C*>* F422651CC4956382; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B4F12F4802ECF11A_BDAD20470D6217E8__CTOR_OFFSET))(this);
	}

	::System::Void BE71F9CBD0D311B2(::FB3F404A630B047C* BAF8A3E3C5E8EAEF)
	{
		return ((::System::Void(*)(::PVOID, ::FB3F404A630B047C*))((::PBYTE)hIl2Cpp + B4F12F4802ECF11A_BDAD20470D6217E8_BE71F9CBD0D311B2_OFFSET))(this, BAF8A3E3C5E8EAEF);
	}
};
