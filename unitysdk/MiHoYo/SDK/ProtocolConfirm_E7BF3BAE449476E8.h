#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class ProtocolConfirm; }
namespace System { class String; }

#define MIHOYO_SDK_PROTOCOLCONFIRM_E7BF3BAE449476E8_BF3138F24160F012_OFFSET UNITYSDK_OFFSET(0x3A5B3F0)
#define MIHOYO_SDK_PROTOCOLCONFIRM_E7BF3BAE449476E8__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ProtocolConfirm_E7BF3BAE449476E8_TypeDefinitionIndex = 13017;

	class ProtocolConfirm_E7BF3BAE449476E8 : public ::System::Object
	{
	public:
		::System::String* AA56C98D566E6FA2; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLCONFIRM_E7BF3BAE449476E8__CTOR_OFFSET))(this);
		}

		::System::Void BF3138F24160F012(::MiHoYo::SDK::ProtocolConfirm* F9ADA718944F49ED)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::ProtocolConfirm*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLCONFIRM_E7BF3BAE449476E8_BF3138F24160F012_OFFSET))(this, F9ADA718944F49ED);
		}
	};
}
