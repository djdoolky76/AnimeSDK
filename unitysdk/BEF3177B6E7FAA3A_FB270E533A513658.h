#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BEF3177B6E7FAA3A_A8C2EBD54AEC214F;
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define BEF3177B6E7FAA3A_FB270E533A513658_E2C3D32687344045_OFFSET UNITYSDK_OFFSET(0x29B43C0)
#define BEF3177B6E7FAA3A_FB270E533A513658__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int BEF3177B6E7FAA3A_FB270E533A513658_TypeDefinitionIndex = 15597;

class BEF3177B6E7FAA3A_FB270E533A513658 : public ::System::Object
{
public:
	::System::Action* E5753F48089F9529; // 0x10
	::System::Action_1<::System::String*>* F2BACFE551F275E7; // 0x18
	::BEF3177B6E7FAA3A_A8C2EBD54AEC214F* A8791C2B0F6F977B; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEF3177B6E7FAA3A_FB270E533A513658__CTOR_OFFSET))(this);
	}

	::System::Void E2C3D32687344045(::System::Object* BAF8A3E3C5E8EAEF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BEF3177B6E7FAA3A_FB270E533A513658_E2C3D32687344045_OFFSET))(this, BAF8A3E3C5E8EAEF);
	}
};
