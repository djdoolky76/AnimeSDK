#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinCardCasterSource.h"
#include "unitysdk/RPG/GameCore/FateRinHouguOwnerType.h"
#include "unitysdk/System/Object.h"

#define IIJLNDOOGOE_ADAMOADIAPO_OFFSET UNITYSDK_OFFSET(0x16432020)
#define IIJLNDOOGOE_AEHPMMBAEBO_OFFSET UNITYSDK_OFFSET(0x16431E40)
#define IIJLNDOOGOE_BBAKKLJHPHO_OFFSET UNITYSDK_OFFSET(0x16432060)
#define IIJLNDOOGOE_BFKJNIJOBIH_OFFSET UNITYSDK_OFFSET(0x16431D40)
#define IIJLNDOOGOE_DANABKNLDPI_OFFSET UNITYSDK_OFFSET(0x16431D00)
#define IIJLNDOOGOE_DCJLBCPAKJF_OFFSET UNITYSDK_OFFSET(0x16431F00)
#define IIJLNDOOGOE_GOPAKGJNACG_OFFSET UNITYSDK_OFFSET(0x16431FE0)
#define IIJLNDOOGOE_HBMPCKLJJEG_OFFSET UNITYSDK_OFFSET(0x16431E00)
#define IIJLNDOOGOE_INBLNAEKEPE_OFFSET UNITYSDK_OFFSET(0x16431DC0)
#define IIJLNDOOGOE_JOCDDCADEBP_OFFSET UNITYSDK_OFFSET(0x16431D80)
#define IIJLNDOOGOE_LJNFLLLICCN_OFFSET UNITYSDK_OFFSET(0x16431E80)
#define IIJLNDOOGOE_MHONCNHPLBO_OFFSET UNITYSDK_OFFSET(0x16431EC0)

inline static constexpr unsigned int IIJLNDOOGOE_TypeDefinitionIndex = 81191;

	class IIJLNDOOGOE : public ::System::Object
	{
	public:
		// static const ::System::Object MGAHHKELMMO; // 0x0
		static ::System::Boolean DANABKNLDPI(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + IIJLNDOOGOE_DANABKNLDPI_OFFSET))(a1);
		}

		static ::System::Boolean BFKJNIJOBIH(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + IIJLNDOOGOE_BFKJNIJOBIH_OFFSET))(a1);
		}

		static ::System::Boolean JOCDDCADEBP(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + IIJLNDOOGOE_JOCDDCADEBP_OFFSET))(a1);
		}

		static ::System::Boolean INBLNAEKEPE(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + IIJLNDOOGOE_INBLNAEKEPE_OFFSET))(a1);
		}

		static ::System::Boolean HBMPCKLJJEG(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + IIJLNDOOGOE_HBMPCKLJJEG_OFFSET))(a1);
		}

		static ::System::Boolean AEHPMMBAEBO(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + IIJLNDOOGOE_AEHPMMBAEBO_OFFSET))(a1);
		}

		static ::System::Boolean LJNFLLLICCN(::RPG::GameCore::FateRinHouguOwnerType a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::FateRinHouguOwnerType))((::PBYTE)hIl2Cpp + IIJLNDOOGOE_LJNFLLLICCN_OFFSET))(a1);
		}

		static ::System::Boolean MHONCNHPLBO(::RPG::GameCore::FateRinHouguOwnerType a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::FateRinHouguOwnerType))((::PBYTE)hIl2Cpp + IIJLNDOOGOE_MHONCNHPLBO_OFFSET))(a1);
		}

		static ::System::Boolean DCJLBCPAKJF(::RPG::GameCore::FateRinHouguOwnerType a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::FateRinHouguOwnerType))((::PBYTE)hIl2Cpp + IIJLNDOOGOE_DCJLBCPAKJF_OFFSET))(a1);
		}

		static ::System::Boolean GOPAKGJNACG(::RPG::GameCore::FateRinHouguOwnerType a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::FateRinHouguOwnerType))((::PBYTE)hIl2Cpp + IIJLNDOOGOE_GOPAKGJNACG_OFFSET))(a1);
		}

		static ::System::Boolean ADAMOADIAPO(::RPG::GameCore::FateRinHouguOwnerType a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::FateRinHouguOwnerType))((::PBYTE)hIl2Cpp + IIJLNDOOGOE_ADAMOADIAPO_OFFSET))(a1);
		}

		static ::RPG::GameCore::FateRinCardCasterSource BBAKKLJHPHO(::RPG::GameCore::FateRinHouguOwnerType a1)
		{
			return ((::RPG::GameCore::FateRinCardCasterSource(*)(::RPG::GameCore::FateRinHouguOwnerType))((::PBYTE)hIl2Cpp + IIJLNDOOGOE_BBAKKLJHPHO_OFFSET))(a1);
		}

	};
