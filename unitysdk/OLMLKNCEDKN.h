#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/RPG/GameCore/WaypathUsageType.h"
#include "unitysdk/UnityEngine/Vector3.h"
class GNOKFPIKEFH;
class JMDAIKOHCAE;
namespace RPG::Client { class Map; }
namespace RPG::GameCore { class AIPathwayInfo; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OLMLKNCEDKN_AMJFAILBPAN_OFFSET UNITYSDK_OFFSET(0xBF0BB50)
#define OLMLKNCEDKN_BEIILHHNHJM_OFFSET UNITYSDK_OFFSET(0xBF0B850)
#define OLMLKNCEDKN_CCCFJEOEMOK_OFFSET UNITYSDK_OFFSET(0xBF0A6A0)
#define OLMLKNCEDKN_CGHGMPEIKOJ_OFFSET UNITYSDK_OFFSET(0xBF0BB10)
#define OLMLKNCEDKN_CHGCDLJPOPJ_OFFSET UNITYSDK_OFFSET(0xBF0BA60)
#define OLMLKNCEDKN_CTOR_OFFSET UNITYSDK_OFFSET(0xBF0A220)
#define OLMLKNCEDKN_DDCBAFFEOCN_OFFSET UNITYSDK_OFFSET(0xBF0AEF0)
#define OLMLKNCEDKN_DILAOFAJGFI_OFFSET UNITYSDK_OFFSET(0xBF0BFD0)
#define OLMLKNCEDKN_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBF0A300)
#define OLMLKNCEDKN_EDDLGLFEOKH_OFFSET UNITYSDK_OFFSET(0xBF0B2E0)
#define OLMLKNCEDKN_HBLEAEAICKL_OFFSET UNITYSDK_OFFSET(0xBF0A7E0)
#define OLMLKNCEDKN_IDAHONJMMHG_OFFSET UNITYSDK_OFFSET(0xBF0A880)
#define OLMLKNCEDKN_IENJMJJDHBD_OFFSET UNITYSDK_OFFSET(0xBF0B140)
#define OLMLKNCEDKN_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0xBF0A8F0)
#define OLMLKNCEDKN_LHJKCFEHJJA_OFFSET UNITYSDK_OFFSET(0xBF0ADC0)
#define OLMLKNCEDKN_LHNNKLBHHHA_OFFSET UNITYSDK_OFFSET(0xBF0AAF0)
#define OLMLKNCEDKN_LMCEDCHJKFF_OFFSET UNITYSDK_OFFSET(0xBF0A3A0)
#define OLMLKNCEDKN_NOEHIGDJOFE_OFFSET UNITYSDK_OFFSET(0xBF0A480)
#define OLMLKNCEDKN_PBJIGBHPIHE_OFFSET UNITYSDK_OFFSET(0xBF0ABA0)
#define OLMLKNCEDKN_PFHNELKGICG_OFFSET UNITYSDK_OFFSET(0xBF0AC80)

inline static constexpr unsigned int OLMLKNCEDKN_TypeDefinitionIndex = 57560;

	class OLMLKNCEDKN : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::WaypathUsageType, ::System::Boolean>* PNFNPPJKDBI; // 0x18
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::WaypathUsageType, ::GNOKFPIKEFH*>* LKHEEBEEGCG; // 0x20
		::Il2CppArray<::RPG::GameCore::AIPathwayInfo*>* OJDNOEGCPPI; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLMLKNCEDKN_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLMLKNCEDKN_DISPOSE_OFFSET))(this);
		}

		::System::Void LMCEDCHJKFF(::Il2CppArray<::RPG::GameCore::AIPathwayInfo*>* a1, ::System::UInt32 a2, ::RPG::Client::Map* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::AIPathwayInfo*>*, ::System::UInt32, ::RPG::Client::Map*))((::PBYTE)hIl2Cpp + OLMLKNCEDKN_LMCEDCHJKFF_OFFSET))(this, a1, a2, a3);
		}

		::System::Void NOEHIGDJOFE(::RPG::GameCore::WaypathUsageType a1, ::RPG::GameCore::AIPathwayInfo* a2, ::RPG::Client::Map* a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::WaypathUsageType, ::RPG::GameCore::AIPathwayInfo*, ::RPG::Client::Map*, ::System::Boolean))((::PBYTE)hIl2Cpp + OLMLKNCEDKN_NOEHIGDJOFE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void CCCFJEOEMOK(::RPG::GameCore::WaypathUsageType a1, ::GNOKFPIKEFH* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::WaypathUsageType, ::GNOKFPIKEFH*, ::System::Boolean))((::PBYTE)hIl2Cpp + OLMLKNCEDKN_CCCFJEOEMOK_OFFSET))(this, a1, a2, a3);
		}

		::System::Void HBLEAEAICKL(::RPG::GameCore::WaypathUsageType a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::WaypathUsageType, ::System::Int32))((::PBYTE)hIl2Cpp + OLMLKNCEDKN_HBLEAEAICKL_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::AIPathwayInfo* IDAHONJMMHG(::System::Int32 a1)
		{
			return ((::RPG::GameCore::AIPathwayInfo*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OLMLKNCEDKN_IDAHONJMMHG_OFFSET))(this, a1);
		}

		::System::Void KHGIKBFDLFB(::RPG::GameCore::WaypathUsageType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::WaypathUsageType))((::PBYTE)hIl2Cpp + OLMLKNCEDKN_KHGIKBFDLFB_OFFSET))(this, a1);
		}

		::System::Boolean PBJIGBHPIHE(::RPG::GameCore::WaypathUsageType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::WaypathUsageType))((::PBYTE)hIl2Cpp + OLMLKNCEDKN_PBJIGBHPIHE_OFFSET))(this, a1);
		}

		::JMDAIKOHCAE* PFHNELKGICG(::RPG::GameCore::WaypathUsageType a1)
		{
			return ((::JMDAIKOHCAE*(*)(::PVOID, ::RPG::GameCore::WaypathUsageType))((::PBYTE)hIl2Cpp + OLMLKNCEDKN_PFHNELKGICG_OFFSET))(this, a1);
		}

		::System::Int32 LHJKCFEHJJA(::RPG::GameCore::WaypathUsageType a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::WaypathUsageType))((::PBYTE)hIl2Cpp + OLMLKNCEDKN_LHJKCFEHJJA_OFFSET))(this, a1);
		}

		::System::Void DDCBAFFEOCN(::RPG::GameCore::WaypathUsageType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::WaypathUsageType))((::PBYTE)hIl2Cpp + OLMLKNCEDKN_DDCBAFFEOCN_OFFSET))(this, a1);
		}

		::System::Boolean EDDLGLFEOKH(::RPG::GameCore::WaypathUsageType a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::WaypathUsageType, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + OLMLKNCEDKN_EDDLGLFEOKH_OFFSET))(this, a1, a2);
		}

		::System::Boolean IENJMJJDHBD(::RPG::GameCore::WaypathUsageType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::WaypathUsageType))((::PBYTE)hIl2Cpp + OLMLKNCEDKN_IENJMJJDHBD_OFFSET))(this, a1);
		}

		::System::Boolean BEIILHHNHJM(::RPG::GameCore::WaypathUsageType a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::WaypathUsageType, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + OLMLKNCEDKN_BEIILHHNHJM_OFFSET))(this, a1, a2);
		}

		::GNOKFPIKEFH* CHGCDLJPOPJ(::RPG::GameCore::WaypathUsageType a1)
		{
			return ((::GNOKFPIKEFH*(*)(::PVOID, ::RPG::GameCore::WaypathUsageType))((::PBYTE)hIl2Cpp + OLMLKNCEDKN_CHGCDLJPOPJ_OFFSET))(this, a1);
		}

		::GNOKFPIKEFH* LHNNKLBHHHA(::RPG::GameCore::WaypathUsageType a1)
		{
			return ((::GNOKFPIKEFH*(*)(::PVOID, ::RPG::GameCore::WaypathUsageType))((::PBYTE)hIl2Cpp + OLMLKNCEDKN_LHNNKLBHHHA_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::WaypathUsageType, ::GNOKFPIKEFH*>* CGHGMPEIKOJ()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::WaypathUsageType, ::GNOKFPIKEFH*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OLMLKNCEDKN_CGHGMPEIKOJ_OFFSET))(this);
		}

		::UnityEngine::Vector3 AMJFAILBPAN(::RPG::GameCore::WaypathUsageType a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::RPG::GameCore::WaypathUsageType))((::PBYTE)hIl2Cpp + OLMLKNCEDKN_AMJFAILBPAN_OFFSET))(this, a1);
		}

		::System::Void DILAOFAJGFI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OLMLKNCEDKN_DILAOFAJGFI_OFFSET))(this, a1);
		}

	};
