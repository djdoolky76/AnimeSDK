#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define EF824C5F35E1F618_A5CF8FE10716A4C8_A71B18F8C3257A15_OFFSET UNITYSDK_OFFSET(0x3A2B370)
#define EF824C5F35E1F618_A5CF8FE10716A4C8__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int EF824C5F35E1F618_A5CF8FE10716A4C8_TypeDefinitionIndex = 12901;

class EF824C5F35E1F618_A5CF8FE10716A4C8 : public ::System::Object
{
public:
	::System::Boolean EAC88E523D6C0094; // 0x10
	::System::Byte _padding0[0x7];
	::System::String* EF11C18C8216A86E; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EF824C5F35E1F618_A5CF8FE10716A4C8__CTOR_OFFSET))(this);
	}

	::System::Void A71B18F8C3257A15(::System::String* E41EB813C7FB644A, ::System::Action_1<::System::String*>* E04D2BE64FCE9814)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + EF824C5F35E1F618_A5CF8FE10716A4C8_A71B18F8C3257A15_OFFSET))(this, E41EB813C7FB644A, E04D2BE64FCE9814);
	}
};
