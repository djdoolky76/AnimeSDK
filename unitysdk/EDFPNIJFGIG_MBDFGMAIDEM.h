#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define EDFPNIJFGIG_MBDFGMAIDEM_PNGOHNLELDJ_OFFSET UNITYSDK_OFFSET(0xFDD62D0)
#define EDFPNIJFGIG_MBDFGMAIDEM__CTOR_OFFSET UNITYSDK_OFFSET(0xFDD62C0)

inline static constexpr unsigned int EDFPNIJFGIG_MBDFGMAIDEM_TypeDefinitionIndex = 88792;

class EDFPNIJFGIG_MBDFGMAIDEM : public ::System::Object
{
public:
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x10
	::System::String* GDGGMIJHAJJ; // 0x18
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x20
	::System::Single HBFKHANEEND; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDFPNIJFGIG_MBDFGMAIDEM__CTOR_OFFSET))(this);
	}

	::System::Void PNGOHNLELDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDFPNIJFGIG_MBDFGMAIDEM_PNGOHNLELDJ_OFFSET))(this);
	}
};
