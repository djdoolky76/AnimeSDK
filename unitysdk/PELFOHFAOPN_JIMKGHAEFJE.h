#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define PELFOHFAOPN_JIMKGHAEFJE_PNGOHNLELDJ_OFFSET UNITYSDK_OFFSET(0x178C1180)
#define PELFOHFAOPN_JIMKGHAEFJE__CTOR_OFFSET UNITYSDK_OFFSET(0x178C1170)

inline static constexpr unsigned int PELFOHFAOPN_JIMKGHAEFJE_TypeDefinitionIndex = 91637;

class PELFOHFAOPN_JIMKGHAEFJE : public ::System::Object
{
public:
	::System::String* GDGGMIJHAJJ; // 0x10
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x18
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x20
	::System::Single HBFKHANEEND; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PELFOHFAOPN_JIMKGHAEFJE__CTOR_OFFSET))(this);
	}

	::System::Void PNGOHNLELDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PELFOHFAOPN_JIMKGHAEFJE_PNGOHNLELDJ_OFFSET))(this);
	}
};
