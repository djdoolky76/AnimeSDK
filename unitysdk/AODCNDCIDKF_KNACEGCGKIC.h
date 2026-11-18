#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define AODCNDCIDKF_KNACEGCGKIC_GIDLLEKFOJF_OFFSET UNITYSDK_OFFSET(0xF777D50)
#define AODCNDCIDKF_KNACEGCGKIC__CTOR_OFFSET UNITYSDK_OFFSET(0xF777D40)

inline static constexpr unsigned int AODCNDCIDKF_KNACEGCGKIC_TypeDefinitionIndex = 79613;

class AODCNDCIDKF_KNACEGCGKIC : public ::System::Object
{
public:
	::System::Action_2<::System::Boolean, ::System::String*>* EJGDHCIBCJH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AODCNDCIDKF_KNACEGCGKIC__CTOR_OFFSET))(this);
	}

	::System::Void GIDLLEKFOJF(::System::String* DKPGLAFDLBC)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + AODCNDCIDKF_KNACEGCGKIC_GIDLLEKFOJF_OFFSET))(this, DKPGLAFDLBC);
	}
};
