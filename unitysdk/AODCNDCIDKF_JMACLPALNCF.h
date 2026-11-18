#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define AODCNDCIDKF_JMACLPALNCF_DHOGECBIDAC_OFFSET UNITYSDK_OFFSET(0xF777C30)
#define AODCNDCIDKF_JMACLPALNCF__CTOR_OFFSET UNITYSDK_OFFSET(0xF777C20)

inline static constexpr unsigned int AODCNDCIDKF_JMACLPALNCF_TypeDefinitionIndex = 79612;

class AODCNDCIDKF_JMACLPALNCF : public ::System::Object
{
public:
	::System::Action_2<::System::Boolean, ::System::String*>* EJGDHCIBCJH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AODCNDCIDKF_JMACLPALNCF__CTOR_OFFSET))(this);
	}

	::System::Void DHOGECBIDAC(::System::String* DKPGLAFDLBC)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + AODCNDCIDKF_JMACLPALNCF_DHOGECBIDAC_OFFSET))(this, DKPGLAFDLBC);
	}
};
