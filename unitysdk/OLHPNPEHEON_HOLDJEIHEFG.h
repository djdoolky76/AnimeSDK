#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define OLHPNPEHEON_HOLDJEIHEFG_ADPDGGAFEHC_OFFSET UNITYSDK_OFFSET(0xBF056A0)
#define OLHPNPEHEON_HOLDJEIHEFG_CTOR_OFFSET UNITYSDK_OFFSET(0xBF05490)
#define OLHPNPEHEON_HOLDJEIHEFG_MNGGAOFNGIP_OFFSET UNITYSDK_OFFSET(0xBF05750)

inline static constexpr unsigned int OLHPNPEHEON_HOLDJEIHEFG_TypeDefinitionIndex = 65276;

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
