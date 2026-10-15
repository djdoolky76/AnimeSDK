#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define OLHPNPEHEON_DBNFBHMKGCA_ADPDGGAFEHC_OFFSET UNITYSDK_OFFSET(0xBF0CB60)
#define OLHPNPEHEON_DBNFBHMKGCA_CTOR_OFFSET UNITYSDK_OFFSET(0xBF0CA60)
#define OLHPNPEHEON_DBNFBHMKGCA_MNGGAOFNGIP_OFFSET UNITYSDK_OFFSET(0xBF0CC10)

inline static constexpr unsigned int OLHPNPEHEON_DBNFBHMKGCA_TypeDefinitionIndex = 65275;

	class OLHPNPEHEON_DBNFBHMKGCA : public ::System::Object
	{
	public:
		::RPG::GameCore::FixPoint AIKAPJELHNK; // 0x10
		::System::Void _ctor(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + OLHPNPEHEON_DBNFBHMKGCA_CTOR_OFFSET))(this, a1);
		}

		::System::String* ADPDGGAFEHC()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OLHPNPEHEON_DBNFBHMKGCA_ADPDGGAFEHC_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint MNGGAOFNGIP()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + OLHPNPEHEON_DBNFBHMKGCA_MNGGAOFNGIP_OFFSET))(this);
		}

	};
