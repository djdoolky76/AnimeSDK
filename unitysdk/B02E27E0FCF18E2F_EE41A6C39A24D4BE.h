#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class B02E27E0FCF18E2F;
namespace MiHoYo::SDK { class NetworkResponseModelEx; }
namespace System { class String; }

#define B02E27E0FCF18E2F_EE41A6C39A24D4BE_B2DEC8A96D92754D_OFFSET UNITYSDK_OFFSET(0x39A0750)
#define B02E27E0FCF18E2F_EE41A6C39A24D4BE_BA8E6AF560FE534D_OFFSET UNITYSDK_OFFSET(0x39A1AE0)
#define B02E27E0FCF18E2F_EE41A6C39A24D4BE__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B02E27E0FCF18E2F_EE41A6C39A24D4BE_TypeDefinitionIndex = 12518;

class B02E27E0FCF18E2F_EE41A6C39A24D4BE : public ::System::Object
{
public:
	::B02E27E0FCF18E2F* A544919C800E2923; // 0x10
	::System::Boolean FB997161A04771CA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B02E27E0FCF18E2F_EE41A6C39A24D4BE__CTOR_OFFSET))(this);
	}

	::System::Void B2DEC8A96D92754D(::MiHoYo::SDK::NetworkResponseModelEx* A6CAE7339066B0FB)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModelEx*))((::PBYTE)hIl2Cpp + B02E27E0FCF18E2F_EE41A6C39A24D4BE_B2DEC8A96D92754D_OFFSET))(this, A6CAE7339066B0FB);
	}

	::System::Void BA8E6AF560FE534D(::System::String* B083BE7841B347C4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + B02E27E0FCF18E2F_EE41A6C39A24D4BE_BA8E6AF560FE534D_OFFSET))(this, B083BE7841B347C4);
	}
};
