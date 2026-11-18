#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MDIPILFGOAC_IOEJHDLOBPG_OMELBKOLAMM_OFFSET UNITYSDK_OFFSET(0x1A637E40)
#define MDIPILFGOAC_IOEJHDLOBPG__CTOR_OFFSET UNITYSDK_OFFSET(0x1A637E30)

inline static constexpr unsigned int MDIPILFGOAC_IOEJHDLOBPG_TypeDefinitionIndex = 75727;

class MDIPILFGOAC_IOEJHDLOBPG : public ::System::Object
{
public:
	::System::Action_1<::System::String*>* NPFIONPDFED; // 0x10
	::System::Action_1<::System::Single>* HAAJELGELCC; // 0x18
	::System::String* HIAIKHDFCLN; // 0x20
	::System::Single OGKEBCPEPED; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDIPILFGOAC_IOEJHDLOBPG__CTOR_OFFSET))(this);
	}

	::System::Void OMELBKOLAMM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDIPILFGOAC_IOEJHDLOBPG_OMELBKOLAMM_OFFSET))(this);
	}
};
