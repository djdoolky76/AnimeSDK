#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MEEMMPKAFKL_FIFLOCGIJKO_AKAAAFBDBBG_OFFSET UNITYSDK_OFFSET(0x13D1F490)
#define MEEMMPKAFKL_FIFLOCGIJKO__CTOR_OFFSET UNITYSDK_OFFSET(0x13D1F480)

inline static constexpr unsigned int MEEMMPKAFKL_FIFLOCGIJKO_TypeDefinitionIndex = 63983;

class MEEMMPKAFKL_FIFLOCGIJKO : public ::System::Object
{
public:
	::System::String* GDGGMIJHAJJ; // 0x10
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x18
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x20
	::System::Int32 HBINAGPODHA; // 0x28
	::System::Single HBFKHANEEND; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEEMMPKAFKL_FIFLOCGIJKO__CTOR_OFFSET))(this);
	}

	::System::Void AKAAAFBDBBG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEEMMPKAFKL_FIFLOCGIJKO_AKAAAFBDBBG_OFFSET))(this);
	}
};
