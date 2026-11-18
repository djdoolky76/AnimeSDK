#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define AODCNDCIDKF_EPGGOMKMGLI_MDKPJLJJEKM_OFFSET UNITYSDK_OFFSET(0xF777B50)
#define AODCNDCIDKF_EPGGOMKMGLI__CTOR_OFFSET UNITYSDK_OFFSET(0xF777B40)

inline static constexpr unsigned int AODCNDCIDKF_EPGGOMKMGLI_TypeDefinitionIndex = 79607;

class AODCNDCIDKF_EPGGOMKMGLI : public ::System::Object
{
public:
	::System::Action_1<::System::String*>* EJGDHCIBCJH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AODCNDCIDKF_EPGGOMKMGLI__CTOR_OFFSET))(this);
	}

	::System::Void MDKPJLJJEKM(::System::String* DKPGLAFDLBC)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + AODCNDCIDKF_EPGGOMKMGLI_MDKPJLJJEKM_OFFSET))(this, DKPGLAFDLBC);
	}
};
