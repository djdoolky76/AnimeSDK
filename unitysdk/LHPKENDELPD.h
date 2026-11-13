#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BlindBox/Pool/PoolClosedReason.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

#define LHPKENDELPD_AKPIFPBGDPG_OFFSET UNITYSDK_OFFSET(0x1BCD3B30)
#define LHPKENDELPD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BCD3C30)
#define LHPKENDELPD_PELJACANAFH_OFFSET UNITYSDK_OFFSET(0x1BCD3AF0)

inline static constexpr unsigned int LHPKENDELPD_TypeDefinitionIndex = 77250;

	class LHPKENDELPD : public ::System::Object
	{
	public:
		static ::RPG::Client::TextID* StaticGet_GBHONFAPABN()
		{
			return (::RPG::Client::TextID*)UnitySDK::FromName("", "LHPKENDELPD")->GetStaticField(0x14620);
		}

		static ::RPG::Client::TextID* StaticGet_BFEKILADGJA()
		{
			return (::RPG::Client::TextID*)UnitySDK::FromName("", "LHPKENDELPD")->GetStaticField(0x14630);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LHPKENDELPD_CCTOR_OFFSET))();
		}

		static ::System::Boolean PELJACANAFH(::RPG::Client::BlindBox::Pool::PoolClosedReason a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::BlindBox::Pool::PoolClosedReason))((::PBYTE)hIl2Cpp + LHPKENDELPD_PELJACANAFH_OFFSET))(a1);
		}

		static ::RPG::Client::TextID AKPIFPBGDPG(::RPG::Client::BlindBox::Pool::PoolClosedReason a1)
		{
			return ((::RPG::Client::TextID(*)(::RPG::Client::BlindBox::Pool::PoolClosedReason))((::PBYTE)hIl2Cpp + LHPKENDELPD_AKPIFPBGDPG_OFFSET))(a1);
		}

	};
