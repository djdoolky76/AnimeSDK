#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define AOKFPNKJOON_BIIINGKDJKA_JNNFOPGBDOG_OKLLFEIJKHN_OFFSET UNITYSDK_OFFSET(0x143BD0B0)
#define AOKFPNKJOON_BIIINGKDJKA_JNNFOPGBDOG__CTOR_OFFSET UNITYSDK_OFFSET(0x143BD0A0)

inline static constexpr unsigned int AOKFPNKJOON_BIIINGKDJKA_JNNFOPGBDOG_TypeDefinitionIndex = 51454;

class AOKFPNKJOON_BIIINGKDJKA_JNNFOPGBDOG : public ::System::Object
{
public:
	::System::Action_1<::System::Object*>* PDJOLGFCKCA; // 0x10
	::System::Action* MGAKJHJAGJI; // 0x18

	::System::Void _ctor(::System::Action_1<::System::Object*>* GJBHEJGENMI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + AOKFPNKJOON_BIIINGKDJKA_JNNFOPGBDOG__CTOR_OFFSET))(this, GJBHEJGENMI);
	}

	::System::Void OKLLFEIJKHN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOKFPNKJOON_BIIINGKDJKA_JNNFOPGBDOG_OKLLFEIJKHN_OFFSET))(this);
	}
};
