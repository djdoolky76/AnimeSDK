#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinCardCasterSource.h"
#include "unitysdk/RPG/GameCore/FateRinHouguOwnerType.h"
#include "unitysdk/System/Object.h"

#define IIJLNDOOGOE_ADAMOADIAPO_OFFSET UNITYSDK_OFFSET(0x173FAC70)
#define IIJLNDOOGOE_AEHPMMBAEBO_OFFSET UNITYSDK_OFFSET(0x173FAA90)
#define IIJLNDOOGOE_BBAKKLJHPHO_OFFSET UNITYSDK_OFFSET(0x173FACB0)
#define IIJLNDOOGOE_BFKJNIJOBIH_OFFSET UNITYSDK_OFFSET(0x173FA990)
#define IIJLNDOOGOE_DANABKNLDPI_OFFSET UNITYSDK_OFFSET(0x173FA950)
#define IIJLNDOOGOE_DCJLBCPAKJF_OFFSET UNITYSDK_OFFSET(0x173FAB50)
#define IIJLNDOOGOE_GOPAKGJNACG_OFFSET UNITYSDK_OFFSET(0x173FAC30)
#define IIJLNDOOGOE_HBMPCKLJJEG_OFFSET UNITYSDK_OFFSET(0x173FAA50)
#define IIJLNDOOGOE_INBLNAEKEPE_OFFSET UNITYSDK_OFFSET(0x173FAA10)
#define IIJLNDOOGOE_JOCDDCADEBP_OFFSET UNITYSDK_OFFSET(0x173FA9D0)
#define IIJLNDOOGOE_LJNFLLLICCN_OFFSET UNITYSDK_OFFSET(0x173FAAD0)
#define IIJLNDOOGOE_MHONCNHPLBO_OFFSET UNITYSDK_OFFSET(0x173FAB10)

inline static constexpr unsigned int IIJLNDOOGOE_TypeDefinitionIndex = 83972;

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
