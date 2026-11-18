#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define AHEPGOKLJAD_PPMEBPIPMMF_PNGOHNLELDJ_OFFSET UNITYSDK_OFFSET(0x154F89A0)
#define AHEPGOKLJAD_PPMEBPIPMMF__CTOR_OFFSET UNITYSDK_OFFSET(0x154F8990)

inline static constexpr unsigned int AHEPGOKLJAD_PPMEBPIPMMF_TypeDefinitionIndex = 78477;

class AHEPGOKLJAD_PPMEBPIPMMF : public ::System::Object
{
public:
	::System::String* GDGGMIJHAJJ; // 0x10
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x18
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x20
	::System::Single HBFKHANEEND; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHEPGOKLJAD_PPMEBPIPMMF__CTOR_OFFSET))(this);
	}

	::System::Void PNGOHNLELDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHEPGOKLJAD_PPMEBPIPMMF_PNGOHNLELDJ_OFFSET))(this);
	}
};
