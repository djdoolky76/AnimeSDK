#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define NHNONMCLLPK_PMNDHENOBCF_PNGOHNLELDJ_OFFSET UNITYSDK_OFFSET(0x12C60420)
#define NHNONMCLLPK_PMNDHENOBCF__CTOR_OFFSET UNITYSDK_OFFSET(0x12C60410)

inline static constexpr unsigned int NHNONMCLLPK_PMNDHENOBCF_TypeDefinitionIndex = 92581;

class NHNONMCLLPK_PMNDHENOBCF : public ::System::Object
{
public:
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x10
	::System::String* GDGGMIJHAJJ; // 0x18
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x20
	::System::Single HBFKHANEEND; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHNONMCLLPK_PMNDHENOBCF__CTOR_OFFSET))(this);
	}

	::System::Void PNGOHNLELDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHNONMCLLPK_PMNDHENOBCF_PNGOHNLELDJ_OFFSET))(this);
	}
};
