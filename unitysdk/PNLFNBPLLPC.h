#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RelicType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
class DHLPMJFEECF;
class HFJEDABANAD;
class PNLFNBPLLPC;
namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitCalculationResultData; }
namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitComparePinOperator; }
namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitCompareViewModel; }
namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitResultRelicInfo; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PNLFNBPLLPC_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xC34C6E0)
#define PNLFNBPLLPC_CHKALMPGMGD_OFFSET UNITYSDK_OFFSET(0xC34CA00)
#define PNLFNBPLLPC_CMDOMNMGLNI_OFFSET UNITYSDK_OFFSET(0xC34CF10)
#define PNLFNBPLLPC_CTOR_OFFSET UNITYSDK_OFFSET(0xC34C7F0)
#define PNLFNBPLLPC_FODEMABAADL_OFFSET UNITYSDK_OFFSET(0xC34D2B0)
#define PNLFNBPLLPC_IFNCGMDKJJL_OFFSET UNITYSDK_OFFSET(0xC34D380)
#define PNLFNBPLLPC_KFIBDOGGFGK_OFFSET UNITYSDK_OFFSET(0xC34C5F0)
#define PNLFNBPLLPC_MOPAMIJAFDG_OFFSET UNITYSDK_OFFSET(0xC34D230)
#define PNLFNBPLLPC_MPJDBLJIEAA_OFFSET UNITYSDK_OFFSET(0xC34C690)
#define PNLFNBPLLPC_NIPLGDLHOLH_OFFSET UNITYSDK_OFFSET(0xC34C640)
#define PNLFNBPLLPC_OFIGFJBBEPH_OFFSET UNITYSDK_OFFSET(0xC34CA70)
#define PNLFNBPLLPC_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0xC34C890)
#define PNLFNBPLLPC_PLFKLLFHDHA_OFFSET UNITYSDK_OFFSET(0xC34CD60)

inline static constexpr unsigned int PNLFNBPLLPC_TypeDefinitionIndex = 74394;

	class PNLFNBPLLPC : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RelicType, ::HFJEDABANAD*>* BCNGFLBEDGK; // 0x10
		::RPG::Client::RelicSmartSuit::RelicSmartSuitCompareViewModel* DNPOJOFIAHM; // 0x18
		::System::Void _ctor(::RPG::Client::RelicSmartSuit::RelicSmartSuitCompareViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicSmartSuit::RelicSmartSuitCompareViewModel*))((::PBYTE)hIl2Cpp + PNLFNBPLLPC_CTOR_OFFSET))(this, a1);
		}

		::DHLPMJFEECF* KFIBDOGGFGK()
		{
			return ((::DHLPMJFEECF*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNLFNBPLLPC_KFIBDOGGFGK_OFFSET))(this);
		}

		::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData* NIPLGDLHOLH()
		{
			return ((::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNLFNBPLLPC_NIPLGDLHOLH_OFFSET))(this);
		}

		::RPG::Client::RelicSmartSuit::RelicSmartSuitComparePinOperator* MPJDBLJIEAA()
		{
			return ((::RPG::Client::RelicSmartSuit::RelicSmartSuitComparePinOperator*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNLFNBPLLPC_MPJDBLJIEAA_OFFSET))(this);
		}

		static ::PNLFNBPLLPC* BPLPBPMEODA(::RPG::Client::RelicSmartSuit::RelicSmartSuitCompareViewModel* a1)
		{
			return ((::PNLFNBPLLPC*(*)(::RPG::Client::RelicSmartSuit::RelicSmartSuitCompareViewModel*))((::PBYTE)hIl2Cpp + PNLFNBPLLPC_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNLFNBPLLPC_PJPFIHFAHGO_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo*>* CHKALMPGMGD()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNLFNBPLLPC_CHKALMPGMGD_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo*>* OFIGFJBBEPH(::RPG::GameCore::RelicType a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo*>*(*)(::PVOID, ::RPG::GameCore::RelicType))((::PBYTE)hIl2Cpp + PNLFNBPLLPC_OFIGFJBBEPH_OFFSET))(this, a1);
		}

		::HFJEDABANAD* PLFKLLFHDHA(::RPG::GameCore::RelicType a1)
		{
			return ((::HFJEDABANAD*(*)(::PVOID, ::RPG::GameCore::RelicType))((::PBYTE)hIl2Cpp + PNLFNBPLLPC_PLFKLLFHDHA_OFFSET))(this, a1);
		}

		::System::Void CMDOMNMGLNI(::HFJEDABANAD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HFJEDABANAD*))((::PBYTE)hIl2Cpp + PNLFNBPLLPC_CMDOMNMGLNI_OFFSET))(this, a1);
		}

		::System::Boolean MOPAMIJAFDG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PNLFNBPLLPC_MOPAMIJAFDG_OFFSET))(this);
		}

		::RPG::Client::TextID FODEMABAADL()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + PNLFNBPLLPC_FODEMABAADL_OFFSET))(this);
		}

		::System::Void IFNCGMDKJJL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNLFNBPLLPC_IFNCGMDKJJL_OFFSET))(this);
		}

	};
