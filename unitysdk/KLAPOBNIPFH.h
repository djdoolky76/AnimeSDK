#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FloorConnectivityData.h"
namespace RPG::Client { class FloorConnectivityData_EdgeConnectionInfo; }
namespace RPG::Client { class RogueSiteData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KLAPOBNIPFH_BKFOGIJHFIH_OFFSET UNITYSDK_OFFSET(0xB4D6290)
#define KLAPOBNIPFH_CTOR_OFFSET UNITYSDK_OFFSET(0xB4D69C0)
#define KLAPOBNIPFH_NEMHFAMJPEH_OFFSET UNITYSDK_OFFSET(0xB4D6900)
#define KLAPOBNIPFH_OPIEMPGICII_OFFSET UNITYSDK_OFFSET(0xB4D5DD0)
#define KLAPOBNIPFH_SETUPDATA_OFFSET UNITYSDK_OFFSET(0xB4D55B0)
#define KLAPOBNIPFH_TRYFINDNEXTPOINT_OFFSET UNITYSDK_OFFSET(0xB4D6540)

inline static constexpr unsigned int KLAPOBNIPFH_TypeDefinitionIndex = 64235;

	class KLAPOBNIPFH : public ::RPG::Client::FloorConnectivityData
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::RogueSiteData*>* DPNAHECJMBC; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>* EKACEGACALB; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLAPOBNIPFH_CTOR_OFFSET))(this);
		}

		::System::Void SetupData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLAPOBNIPFH_SETUPDATA_OFFSET))(this);
		}

		::System::Void OPIEMPGICII()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLAPOBNIPFH_OPIEMPGICII_OFFSET))(this);
		}

		::System::Void BKFOGIJHFIH(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + KLAPOBNIPFH_BKFOGIJHFIH_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::FloorConnectivityData_EdgeConnectionInfo* TryFindNextPoint(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::Client::FloorConnectivityData_EdgeConnectionInfo* a3)
		{
			return ((::RPG::Client::FloorConnectivityData_EdgeConnectionInfo*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::Client::FloorConnectivityData_EdgeConnectionInfo*))((::PBYTE)hIl2Cpp + KLAPOBNIPFH_TRYFINDNEXTPOINT_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 NEMHFAMJPEH(::RPG::Client::RogueSiteData* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::RogueSiteData*))((::PBYTE)hIl2Cpp + KLAPOBNIPFH_NEMHFAMJPEH_OFFSET))(this, a1);
		}

	};
