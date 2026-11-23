#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define EC181F36C706DC69__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB7DC0)

inline static constexpr unsigned int EC181F36C706DC69_TypeDefinitionIndex = 11674;

class EC181F36C706DC69 : public ::System::Attribute
{
public:
	::System::String* F56BB581AFE3E301; // 0x10
	::System::Boolean AB669B552D53D31D; // 0x18

	::System::Void _ctor(::System::String* B84A4D8260C22648)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EC181F36C706DC69__CTOR_OFFSET))(this, B84A4D8260C22648);
	}
};
