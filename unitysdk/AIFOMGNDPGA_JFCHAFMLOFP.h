#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define AIFOMGNDPGA_JFCHAFMLOFP_PNGOHNLELDJ_OFFSET UNITYSDK_OFFSET(0x135E8A50)
#define AIFOMGNDPGA_JFCHAFMLOFP__CTOR_OFFSET UNITYSDK_OFFSET(0x135E8A40)

inline static constexpr unsigned int AIFOMGNDPGA_JFCHAFMLOFP_TypeDefinitionIndex = 47265;

class AIFOMGNDPGA_JFCHAFMLOFP : public ::System::Object
{
public:
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x10
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x18
	::System::String* GDGGMIJHAJJ; // 0x20
	::System::Single HBFKHANEEND; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIFOMGNDPGA_JFCHAFMLOFP__CTOR_OFFSET))(this);
	}

	::System::Void PNGOHNLELDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIFOMGNDPGA_JFCHAFMLOFP_PNGOHNLELDJ_OFFSET))(this);
	}
};
