#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define DNIKPDKPKGD_LFBJNOOICCE_PNGOHNLELDJ_OFFSET UNITYSDK_OFFSET(0x12093580)
#define DNIKPDKPKGD_LFBJNOOICCE__CTOR_OFFSET UNITYSDK_OFFSET(0x12093570)

inline static constexpr unsigned int DNIKPDKPKGD_LFBJNOOICCE_TypeDefinitionIndex = 39907;

class DNIKPDKPKGD_LFBJNOOICCE : public ::System::Object
{
public:
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x10
	::System::String* GDGGMIJHAJJ; // 0x18
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x20
	::System::Single HBFKHANEEND; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNIKPDKPKGD_LFBJNOOICCE__CTOR_OFFSET))(this);
	}

	::System::Void PNGOHNLELDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNIKPDKPKGD_LFBJNOOICCE_PNGOHNLELDJ_OFFSET))(this);
	}
};
