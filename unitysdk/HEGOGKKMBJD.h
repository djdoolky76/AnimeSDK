#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define HEGOGKKMBJD_FDBCMPEOHCP_OFFSET UNITYSDK_OFFSET(0x1A1FBE10)
#define HEGOGKKMBJD_JEIODLBICII_OFFSET UNITYSDK_OFFSET(0x1A1FBD80)
#define HEGOGKKMBJD_JLHDBGDFFKI_OFFSET UNITYSDK_OFFSET(0x1A1FBCC0)
#define HEGOGKKMBJD_KIOAMEEJOPG_OFFSET UNITYSDK_OFFSET(0x1A1FBD00)
#define HEGOGKKMBJD_KKHOFLGAOBN_OFFSET UNITYSDK_OFFSET(0x1A1FBDC0)
#define HEGOGKKMBJD_NOKHDPMPJCH_OFFSET UNITYSDK_OFFSET(0x1A1FBD40)

inline static constexpr unsigned int HEGOGKKMBJD_TypeDefinitionIndex = 60918;

	class HEGOGKKMBJD : public ::System::Object
	{
	public:
		static ::System::Boolean JLHDBGDFFKI(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + HEGOGKKMBJD_JLHDBGDFFKI_OFFSET))(a1);
		}

		static ::System::Boolean KIOAMEEJOPG(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + HEGOGKKMBJD_KIOAMEEJOPG_OFFSET))(a1);
		}

		static ::System::Boolean NOKHDPMPJCH(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + HEGOGKKMBJD_NOKHDPMPJCH_OFFSET))(a1);
		}

		static ::System::Boolean JEIODLBICII(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + HEGOGKKMBJD_JEIODLBICII_OFFSET))(a1);
		}

		static ::System::Boolean KKHOFLGAOBN(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + HEGOGKKMBJD_KKHOFLGAOBN_OFFSET))(a1);
		}

		static ::System::Boolean FDBCMPEOHCP(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + HEGOGKKMBJD_FDBCMPEOHCP_OFFSET))(a1);
		}

	};
