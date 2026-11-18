#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CDEKGDOGOPN_EHNGEEPIIBN_PNGOHNLELDJ_OFFSET UNITYSDK_OFFSET(0x14542C30)
#define CDEKGDOGOPN_EHNGEEPIIBN__CTOR_OFFSET UNITYSDK_OFFSET(0x14542C20)

inline static constexpr unsigned int CDEKGDOGOPN_EHNGEEPIIBN_TypeDefinitionIndex = 77468;

class CDEKGDOGOPN_EHNGEEPIIBN : public ::System::Object
{
public:
	::System::String* GDGGMIJHAJJ; // 0x10
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x18
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x20
	::System::Single HBFKHANEEND; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDEKGDOGOPN_EHNGEEPIIBN__CTOR_OFFSET))(this);
	}

	::System::Void PNGOHNLELDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDEKGDOGOPN_EHNGEEPIIBN_PNGOHNLELDJ_OFFSET))(this);
	}
};
