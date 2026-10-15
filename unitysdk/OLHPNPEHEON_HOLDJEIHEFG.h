#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define OLHPNPEHEON_HOLDJEIHEFG_ADPDGGAFEHC_OFFSET UNITYSDK_OFFSET(0xBF0CC50)
#define OLHPNPEHEON_HOLDJEIHEFG_CTOR_OFFSET UNITYSDK_OFFSET(0xBF0CA40)
#define OLHPNPEHEON_HOLDJEIHEFG_MNGGAOFNGIP_OFFSET UNITYSDK_OFFSET(0xBF0CD00)

	class OLHPNPEHEON_HOLDJEIHEFG : public ::System::Object
	{
	public:
		::RPG::GameCore::FixPoint AIKAPJELHNK; // 0x10
		::System::Void _ctor(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + OLHPNPEHEON_HOLDJEIHEFG_CTOR_OFFSET))(this, a1);
		}

		::System::String* ADPDGGAFEHC()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OLHPNPEHEON_HOLDJEIHEFG_ADPDGGAFEHC_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint MNGGAOFNGIP()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + OLHPNPEHEON_HOLDJEIHEFG_MNGGAOFNGIP_OFFSET))(this);
		}

	};
