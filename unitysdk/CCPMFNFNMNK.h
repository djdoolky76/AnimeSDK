#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RelicType.h"
#include "unitysdk/System/Object.h"
class CCPMFNFNMNK;
class CENEJCKEFHJ;
namespace RPG::Client { class RelicItemData; }
namespace RPG::Client::RelicSmartSuit { class PinData; }
namespace RPG::Client::RelicSmartSuit { class PinDataKey; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CCPMFNFNMNK_APHAPGNCBMN_OFFSET UNITYSDK_OFFSET(0xD0C6020)
#define CCPMFNFNMNK_BIBNNGLPJKA_OFFSET UNITYSDK_OFFSET(0xD0C5B10)
#define CCPMFNFNMNK_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xD0C5CA0)
#define CCPMFNFNMNK_CHGALACKNHJ_OFFSET UNITYSDK_OFFSET(0xD0C6630)
#define CCPMFNFNMNK_CTOR_OFFSET UNITYSDK_OFFSET(0xD0C5D10)
#define CCPMFNFNMNK_EAIDICLNDLH_OFFSET UNITYSDK_OFFSET(0xD0C5A50)
#define CCPMFNFNMNK_JBIJKBMHCLD_OFFSET UNITYSDK_OFFSET(0xD0C5AC0)
#define CCPMFNFNMNK_JLEHJHFBCPC_OFFSET UNITYSDK_OFFSET(0xD0C58F0)
#define CCPMFNFNMNK_MCGBNEFMODI_OFFSET UNITYSDK_OFFSET(0xD0C5D20)
#define CCPMFNFNMNK_MGLJMPGCDDD_OFFSET UNITYSDK_OFFSET(0xD0C5E20)
#define CCPMFNFNMNK_OAMLGEEMPOK_OFFSET UNITYSDK_OFFSET(0xD0C67A0)
#define CCPMFNFNMNK_OJAJPDAEOBB_OFFSET UNITYSDK_OFFSET(0xD0C5E90)

inline static constexpr unsigned int CCPMFNFNMNK_TypeDefinitionIndex = 76557;

	class CCPMFNFNMNK : public ::System::Object
	{
	public:
		::CENEJCKEFHJ* GANLOCFFMEF; // 0x10
		::RPG::Client::RelicSmartSuit::PinDataKey* BHLPAKHDBPE; // 0x18
		::System::UInt32 FDKKMKCHMEE; // 0x20
		::System::Void _ctor(::CENEJCKEFHJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CENEJCKEFHJ*))((::PBYTE)hIl2Cpp + CCPMFNFNMNK_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 JLEHJHFBCPC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CCPMFNFNMNK_JLEHJHFBCPC_OFFSET))(this);
		}

		::RPG::Client::RelicSmartSuit::PinDataKey* EAIDICLNDLH()
		{
			return ((::RPG::Client::RelicSmartSuit::PinDataKey*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCPMFNFNMNK_EAIDICLNDLH_OFFSET))(this);
		}

		::RPG::Client::RelicSmartSuit::PinData* BIBNNGLPJKA()
		{
			return ((::RPG::Client::RelicSmartSuit::PinData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCPMFNFNMNK_BIBNNGLPJKA_OFFSET))(this);
		}

		static ::CCPMFNFNMNK* BPLPBPMEODA(::CENEJCKEFHJ* a1)
		{
			return ((::CCPMFNFNMNK*(*)(::CENEJCKEFHJ*))((::PBYTE)hIl2Cpp + CCPMFNFNMNK_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Boolean MCGBNEFMODI(::RPG::Client::RelicItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + CCPMFNFNMNK_MCGBNEFMODI_OFFSET))(this, a1);
		}

		::System::UInt32 MGLJMPGCDDD(::RPG::GameCore::RelicType a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::RelicType))((::PBYTE)hIl2Cpp + CCPMFNFNMNK_MGLJMPGCDDD_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RelicType, ::System::UInt32>* APHAPGNCBMN()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RelicType, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCPMFNFNMNK_APHAPGNCBMN_OFFSET))(this);
		}

		::System::Boolean OJAJPDAEOBB(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CCPMFNFNMNK_OJAJPDAEOBB_OFFSET))(this, a1);
		}

		::System::Void CHGALACKNHJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCPMFNFNMNK_CHGALACKNHJ_OFFSET))(this);
		}

		::System::Void OAMLGEEMPOK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCPMFNFNMNK_OAMLGEEMPOK_OFFSET))(this);
		}

		::RPG::Client::RelicSmartSuit::PinDataKey* JBIJKBMHCLD()
		{
			return ((::RPG::Client::RelicSmartSuit::PinDataKey*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCPMFNFNMNK_JBIJKBMHCLD_OFFSET))(this);
		}

	};
