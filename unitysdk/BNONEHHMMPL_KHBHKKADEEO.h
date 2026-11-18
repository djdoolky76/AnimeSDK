#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define BNONEHHMMPL_KHBHKKADEEO_PNGOHNLELDJ_OFFSET UNITYSDK_OFFSET(0x150988B0)
#define BNONEHHMMPL_KHBHKKADEEO__CTOR_OFFSET UNITYSDK_OFFSET(0x150988A0)

inline static constexpr unsigned int BNONEHHMMPL_KHBHKKADEEO_TypeDefinitionIndex = 43616;

class BNONEHHMMPL_KHBHKKADEEO : public ::System::Object
{
public:
	::System::String* GDGGMIJHAJJ; // 0x10
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x18
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x20
	::System::Single HBFKHANEEND; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNONEHHMMPL_KHBHKKADEEO__CTOR_OFFSET))(this);
	}

	::System::Void PNGOHNLELDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNONEHHMMPL_KHBHKKADEEO_PNGOHNLELDJ_OFFSET))(this);
	}
};
