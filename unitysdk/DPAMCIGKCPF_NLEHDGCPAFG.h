#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define DPAMCIGKCPF_NLEHDGCPAFG_PNGOHNLELDJ_OFFSET UNITYSDK_OFFSET(0x148BE4D0)
#define DPAMCIGKCPF_NLEHDGCPAFG__CTOR_OFFSET UNITYSDK_OFFSET(0x148BE4C0)

inline static constexpr unsigned int DPAMCIGKCPF_NLEHDGCPAFG_TypeDefinitionIndex = 55586;

class DPAMCIGKCPF_NLEHDGCPAFG : public ::System::Object
{
public:
	::System::String* GDGGMIJHAJJ; // 0x10
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x18
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x20
	::System::Single HBFKHANEEND; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPAMCIGKCPF_NLEHDGCPAFG__CTOR_OFFSET))(this);
	}

	::System::Void PNGOHNLELDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPAMCIGKCPF_NLEHDGCPAFG_PNGOHNLELDJ_OFFSET))(this);
	}
};
