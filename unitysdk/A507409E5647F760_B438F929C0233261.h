#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BED79290917896D4/A1BD91685A90EEA6.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define A507409E5647F760_B438F929C0233261_B98125B024B558A3_OFFSET UNITYSDK_OFFSET(0x3AB0BD0)
#define A507409E5647F760_B438F929C0233261__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A507409E5647F760_B438F929C0233261_TypeDefinitionIndex = 12066;

class A507409E5647F760_B438F929C0233261 : public ::System::Object
{
public:
	::System::String* A659FB88768169A1; // 0x10
	::BED79290917896D4::A1BD91685A90EEA6 A288CB28FC2A6DA3; // 0x18
	::System::Byte _padding0[0x4];
	::System::String* B960AC235824C6C8; // 0x20
	::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* E04D2BE64FCE9814; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A507409E5647F760_B438F929C0233261__CTOR_OFFSET))(this);
	}

	::System::Void B98125B024B558A3(::System::Int32 B714679C324FF96E, ::System::String* B4B6D6374ADCCE26)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + A507409E5647F760_B438F929C0233261_B98125B024B558A3_OFFSET))(this, B714679C324FF96E, B4B6D6374ADCCE26);
	}
};
