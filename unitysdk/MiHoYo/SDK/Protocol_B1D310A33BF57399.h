#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class Protocol; }

#define MIHOYO_SDK_PROTOCOL_B1D310A33BF57399_BF3138F24160F012_OFFSET UNITYSDK_OFFSET(0x3A68AB0)
#define MIHOYO_SDK_PROTOCOL_B1D310A33BF57399__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int Protocol_B1D310A33BF57399_TypeDefinitionIndex = 13052;

	class Protocol_B1D310A33BF57399 : public ::System::Object
	{
	public:
		::System::Boolean A426B35D5CC78F1D; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOL_B1D310A33BF57399__CTOR_OFFSET))(this);
		}

		::System::Void BF3138F24160F012(::MiHoYo::SDK::Protocol* F9ADA718944F49ED)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protocol*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOL_B1D310A33BF57399_BF3138F24160F012_OFFSET))(this, F9ADA718944F49ED);
		}
	};
}
