#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define IMEFDCMLFEM_GKDJDGMAHHB_PNGOHNLELDJ_OFFSET UNITYSDK_OFFSET(0x14A31CA0)
#define IMEFDCMLFEM_GKDJDGMAHHB__CTOR_OFFSET UNITYSDK_OFFSET(0x14A31C90)

inline static constexpr unsigned int IMEFDCMLFEM_GKDJDGMAHHB_TypeDefinitionIndex = 47311;

class IMEFDCMLFEM_GKDJDGMAHHB : public ::System::Object
{
public:
	::System::String* GDGGMIJHAJJ; // 0x10
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x18
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x20
	::System::Single HBFKHANEEND; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMEFDCMLFEM_GKDJDGMAHHB__CTOR_OFFSET))(this);
	}

	::System::Void PNGOHNLELDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMEFDCMLFEM_GKDJDGMAHHB_PNGOHNLELDJ_OFFSET))(this);
	}
};
