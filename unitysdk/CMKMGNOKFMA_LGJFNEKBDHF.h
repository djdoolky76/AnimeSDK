#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CMKMGNOKFMA_LGJFNEKBDHF_PNGOHNLELDJ_OFFSET UNITYSDK_OFFSET(0x15A0FE90)
#define CMKMGNOKFMA_LGJFNEKBDHF__CTOR_OFFSET UNITYSDK_OFFSET(0x15A0FE80)

inline static constexpr unsigned int CMKMGNOKFMA_LGJFNEKBDHF_TypeDefinitionIndex = 78717;

class CMKMGNOKFMA_LGJFNEKBDHF : public ::System::Object
{
public:
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x10
	::System::String* GDGGMIJHAJJ; // 0x18
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x20
	::System::Single HBFKHANEEND; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMKMGNOKFMA_LGJFNEKBDHF__CTOR_OFFSET))(this);
	}

	::System::Void PNGOHNLELDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMKMGNOKFMA_LGJFNEKBDHF_PNGOHNLELDJ_OFFSET))(this);
	}
};
