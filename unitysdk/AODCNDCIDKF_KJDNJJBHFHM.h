#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define AODCNDCIDKF_KJDNJJBHFHM_FFPANOCPKFH_OFFSET UNITYSDK_OFFSET(0x135FDBD0)
#define AODCNDCIDKF_KJDNJJBHFHM__CTOR_OFFSET UNITYSDK_OFFSET(0x135FDBC0)

inline static constexpr unsigned int AODCNDCIDKF_KJDNJJBHFHM_TypeDefinitionIndex = 79603;

class AODCNDCIDKF_KJDNJJBHFHM : public ::System::Object
{
public:
	::System::Action_1<::System::String*>* LLIOGJLKLMO; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AODCNDCIDKF_KJDNJJBHFHM__CTOR_OFFSET))(this);
	}

	::System::Void FFPANOCPKFH(::System::String* KGIALJBBDGF)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + AODCNDCIDKF_KJDNJJBHFHM_FFPANOCPKFH_OFFSET))(this, KGIALJBBDGF);
	}
};
