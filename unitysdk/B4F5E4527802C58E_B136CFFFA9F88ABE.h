#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B4F5E4527802C58E_F52938EFAECC6FCA.h"

namespace System { class Action; }
namespace System { class String; }

#define B4F5E4527802C58E_B136CFFFA9F88ABE_A765A1D14770A303_OFFSET UNITYSDK_OFFSET(0x22897C0)
#define B4F5E4527802C58E_B136CFFFA9F88ABE__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B4F5E4527802C58E_B136CFFFA9F88ABE_TypeDefinitionIndex = 7005;

class B4F5E4527802C58E_B136CFFFA9F88ABE : public ::B4F5E4527802C58E_F52938EFAECC6FCA
{
public:
	::System::String* BC24C5C1A8EB99B3; // 0x10
	::System::Action* A0C3D11673F2EE62; // 0x18
	::System::Action* AADF00824E643C59; // 0x20
	::System::Action* B781C31F6BE8612E; // 0x28
	::System::Boolean AFB517FE6A48921A; // 0x30

	::System::Void A765A1D14770A303()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B4F5E4527802C58E_B136CFFFA9F88ABE_A765A1D14770A303_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B4F5E4527802C58E_B136CFFFA9F88ABE__CTOR_OFFSET))(this);
	}
};
