#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CCNCBBEBODC_BLCFMOIKION_OMELBKOLAMM_OFFSET UNITYSDK_OFFSET(0x16940C80)
#define CCNCBBEBODC_BLCFMOIKION__CTOR_OFFSET UNITYSDK_OFFSET(0x16940C70)

inline static constexpr unsigned int CCNCBBEBODC_BLCFMOIKION_TypeDefinitionIndex = 87608;

class CCNCBBEBODC_BLCFMOIKION : public ::System::Object
{
public:
	::System::String* HIAIKHDFCLN; // 0x10
	::System::Action_1<::System::String*>* NPFIONPDFED; // 0x18
	::System::Action_1<::System::Single>* HAAJELGELCC; // 0x20
	::System::Single OGKEBCPEPED; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCNCBBEBODC_BLCFMOIKION__CTOR_OFFSET))(this);
	}

	::System::Void OMELBKOLAMM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCNCBBEBODC_BLCFMOIKION_OMELBKOLAMM_OFFSET))(this);
	}
};
