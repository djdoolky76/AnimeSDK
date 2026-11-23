#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class F9B10AC3ED7C868B;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define MIHOYO_SDK_MIHOYOSDKEOSINTERFACE_BFF9CBFA238D5DD1_B90F2B94BE144545_OFFSET UNITYSDK_OFFSET(0x29B2F10)
#define MIHOYO_SDK_MIHOYOSDKEOSINTERFACE_BFF9CBFA238D5DD1__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKEOSInterface_BFF9CBFA238D5DD1_TypeDefinitionIndex = 15610;

	class MiHoYoSDKEOSInterface_BFF9CBFA238D5DD1 : public ::System::Object
	{
	public:
		::System::String* BA8110283601036D; // 0x10
		::System::Action_2<::System::Int32, ::System::String*>* E04D2BE64FCE9814; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKEOSINTERFACE_BFF9CBFA238D5DD1__CTOR_OFFSET))(this);
		}

		::System::Void B90F2B94BE144545(::F9B10AC3ED7C868B* A9B0B78EBABE025A)
		{
			return ((::System::Void(*)(::PVOID, ::F9B10AC3ED7C868B*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKEOSINTERFACE_BFF9CBFA238D5DD1_B90F2B94BE144545_OFFSET))(this, A9B0B78EBABE025A);
		}
	};
}
