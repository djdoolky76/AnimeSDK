#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MCDMPLPDIEK;
namespace RPG::Client::Compliance::Ftc::DirectPurchase { class FtcDirectPurchase; }
namespace RPG::Client::Compliance::Ftc::DirectPurchase { class IFtcDirectPurchase; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_COMPLIANCE_FTC_DIRECTPURCHASE_FTCDIRECTPURCHASEREPOSITORY_CTOR_OFFSET UNITYSDK_OFFSET(0xCBA4960)
#define RPG_CLIENT_COMPLIANCE_FTC_DIRECTPURCHASE_FTCDIRECTPURCHASEREPOSITORY_GET_OFFSET UNITYSDK_OFFSET(0xCBA40D0)

namespace RPG::Client::Compliance::Ftc::DirectPurchase
{
	inline static constexpr unsigned int FtcDirectPurchaseRepository_TypeDefinitionIndex = 74833;

	class FtcDirectPurchaseRepository : public ::System::Object
	{
	public:
		::MCDMPLPDIEK* _Factory; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::Compliance::Ftc::DirectPurchase::FtcDirectPurchase*>* _Cached; // 0x18
		::System::Void _ctor(::MCDMPLPDIEK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MCDMPLPDIEK*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPLIANCE_FTC_DIRECTPURCHASE_FTCDIRECTPURCHASEREPOSITORY_CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::Compliance::Ftc::DirectPurchase::IFtcDirectPurchase* Get(::System::UInt32 a1)
		{
			return ((::RPG::Client::Compliance::Ftc::DirectPurchase::IFtcDirectPurchase*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPLIANCE_FTC_DIRECTPURCHASE_FTCDIRECTPURCHASEREPOSITORY_GET_OFFSET))(this, a1);
		}

	};
}
