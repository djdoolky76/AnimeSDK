#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HPDIGIKALDD;
class IFDFFNOKNFE;
class KOBGLFENCOL;
class ODCOIGDOFGH;
class PHKFMKDHNBO;
namespace RPG::GameCore { class EntityManager; }
namespace RPG::GameCore { class EventManager; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameEntityList; }
namespace RPG::GameCore { class JsonEnum; }
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ODCOIGDOFGH_BILLPAPNKBJ_OFFSET UNITYSDK_OFFSET(0xBD86EA0)
#define ODCOIGDOFGH_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xBD857E0)
#define ODCOIGDOFGH_CBKNMAAFMML_OFFSET UNITYSDK_OFFSET(0xBD877B0)
#define ODCOIGDOFGH_CTOR_OFFSET UNITYSDK_OFFSET(0xBD85920)
#define ODCOIGDOFGH_DBOPEPOAEHP_OFFSET UNITYSDK_OFFSET(0xBD86A80)
#define ODCOIGDOFGH_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBD859C0)
#define ODCOIGDOFGH_EGKLIBFLKHG_OFFSET UNITYSDK_OFFSET(0xBD86980)
#define ODCOIGDOFGH_EHJLKGBFPOK_OFFSET UNITYSDK_OFFSET(0xBD87CA0)
#define ODCOIGDOFGH_EMCJNJLCLKM_OFFSET UNITYSDK_OFFSET(0xBD87660)
#define ODCOIGDOFGH_GDDLBLHHHHJ_OFFSET UNITYSDK_OFFSET(0xBD87A10)
#define ODCOIGDOFGH_HHOGOBKAKPF_OFFSET UNITYSDK_OFFSET(0xBD870D0)
#define ODCOIGDOFGH_HIGFHLCNBCM_OFFSET UNITYSDK_OFFSET(0xBD86730)
#define ODCOIGDOFGH_HJKBCGDIPIM_OFFSET UNITYSDK_OFFSET(0xBD86A20)
#define ODCOIGDOFGH_HNMNEILIDKO_OFFSET UNITYSDK_OFFSET(0xBD87350)
#define ODCOIGDOFGH_ICANBKNMCEH_OFFSET UNITYSDK_OFFSET(0xBD87420)
#define ODCOIGDOFGH_IHNJCMGMNKG_OFFSET UNITYSDK_OFFSET(0xBD87480)
#define ODCOIGDOFGH_IPBDAAJBNCB_OFFSET UNITYSDK_OFFSET(0xBD86C70)
#define ODCOIGDOFGH_JKLOAFLNDCN_OFFSET UNITYSDK_OFFSET(0xBD86B20)
#define ODCOIGDOFGH_KMFHGFCNMHJ_OFFSET UNITYSDK_OFFSET(0xBD86250)
#define ODCOIGDOFGH_KOFOEEEFBOK_OFFSET UNITYSDK_OFFSET(0xBD868C0)
#define ODCOIGDOFGH_LOHJJEIHHPD_OFFSET UNITYSDK_OFFSET(0xBD87230)
#define ODCOIGDOFGH_MHDMPPIAFNI_OFFSET UNITYSDK_OFFSET(0xBD85D80)
#define ODCOIGDOFGH_OAIHNNICMGA_OFFSET UNITYSDK_OFFSET(0xBD863F0)
#define ODCOIGDOFGH_OBAKIMAJDKE_OFFSET UNITYSDK_OFFSET(0xBD866A0)
#define ODCOIGDOFGH_OFDMCHMCGME_OFFSET UNITYSDK_OFFSET(0xBD85AD0)
#define ODCOIGDOFGH_ONHGACEMGBE_OFFSET UNITYSDK_OFFSET(0xBD861F0)
#define ODCOIGDOFGH__GETELATIONSKILLDATALIST_B__2_0_OFFSET UNITYSDK_OFFSET(0xBD87D30)

inline static constexpr unsigned int ODCOIGDOFGH_TypeDefinitionIndex = 72150;

	class ODCOIGDOFGH : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::IFDFFNOKNFE*>* KKLBBEDKNFN; // 0x10
		::RPG::GameCore::EntityManager* LPILDKDAGDP; // 0x18
		::RPG::GameCore::EventManager* DOBLIBIFBBK; // 0x20
		::RPG::GameCore::JsonEnum* AALGBNBLDFG; // 0x28
		::System::Comparison_1<::PHKFMKDHNBO*>* AHFBNFMCJLI; // 0x30
		::System::Collections::Generic::HashSet_1<::IFDFFNOKNFE*>* IEHKMMAEDMH; // 0x38
		::System::Boolean GNPEBFHAHMK; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODCOIGDOFGH_CTOR_OFFSET))(this);
		}

		static ::ODCOIGDOFGH* BPLPBPMEODA(::RPG::GameCore::EntityManager* a1, ::RPG::GameCore::EventManager* a2, ::System::Comparison_1<::PHKFMKDHNBO*>* a3)
		{
			return ((::ODCOIGDOFGH*(*)(::RPG::GameCore::EntityManager*, ::RPG::GameCore::EventManager*, ::System::Comparison_1<::PHKFMKDHNBO*>*))((::PBYTE)hIl2Cpp + ODCOIGDOFGH_BPLPBPMEODA_OFFSET))(a1, a2, a3);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODCOIGDOFGH_DISPOSE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::KOBGLFENCOL*>* MHDMPPIAFNI()
		{
			return ((::System::Collections::Generic::List_1<::KOBGLFENCOL*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ODCOIGDOFGH_MHDMPPIAFNI_OFFSET))(this);
		}

		::System::Boolean KMFHGFCNMHJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ODCOIGDOFGH_KMFHGFCNMHJ_OFFSET))(this);
		}

		::System::Void OAIHNNICMGA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODCOIGDOFGH_OAIHNNICMGA_OFFSET))(this);
		}

		::System::Void OFDMCHMCGME()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODCOIGDOFGH_OFDMCHMCGME_OFFSET))(this);
		}

		::System::Void OBAKIMAJDKE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ODCOIGDOFGH_OBAKIMAJDKE_OFFSET))(this, a1);
		}

		::System::Void KOFOEEEFBOK(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ODCOIGDOFGH_KOFOEEEFBOK_OFFSET))(this, a1);
		}

		::System::Void HIGFHLCNBCM(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + ODCOIGDOFGH_HIGFHLCNBCM_OFFSET))(this, a1);
		}

		::System::Void JKLOAFLNDCN(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ODCOIGDOFGH_JKLOAFLNDCN_OFFSET))(this, a1);
		}

		::System::Void IPBDAAJBNCB(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ODCOIGDOFGH_IPBDAAJBNCB_OFFSET))(this, a1);
		}

		::System::Void BILLPAPNKBJ(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ODCOIGDOFGH_BILLPAPNKBJ_OFFSET))(this, a1);
		}

		::System::Void HHOGOBKAKPF(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ODCOIGDOFGH_HHOGOBKAKPF_OFFSET))(this, a1);
		}

		::System::Void LOHJJEIHHPD(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ODCOIGDOFGH_LOHJJEIHHPD_OFFSET))(this, a1);
		}

		::System::Void HNMNEILIDKO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ODCOIGDOFGH_HNMNEILIDKO_OFFSET))(this, a1);
		}

		::System::Void ICANBKNMCEH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ODCOIGDOFGH_ICANBKNMCEH_OFFSET))(this, a1);
		}

		::System::Collections::Generic::HashSet_1<::IFDFFNOKNFE*>* ONHGACEMGBE()
		{
			return ((::System::Collections::Generic::HashSet_1<::IFDFFNOKNFE*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ODCOIGDOFGH_ONHGACEMGBE_OFFSET))(this);
		}

		::System::Void DBOPEPOAEHP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODCOIGDOFGH_DBOPEPOAEHP_OFFSET))(this);
		}

		::System::Void IHNJCMGMNKG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODCOIGDOFGH_IHNJCMGMNKG_OFFSET))(this);
		}

		::System::Void EMCJNJLCLKM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODCOIGDOFGH_EMCJNJLCLKM_OFFSET))(this);
		}

		::System::Collections::Generic::HashSet_1<::IFDFFNOKNFE*>* CBKNMAAFMML()
		{
			return ((::System::Collections::Generic::HashSet_1<::IFDFFNOKNFE*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ODCOIGDOFGH_CBKNMAAFMML_OFFSET))(this);
		}

		::RPG::GameCore::GameEntityList* GDDLBLHHHHJ()
		{
			return ((::RPG::GameCore::GameEntityList*(*)(::PVOID))((::PBYTE)hIl2Cpp + ODCOIGDOFGH_GDDLBLHHHHJ_OFFSET))(this);
		}

		::IFDFFNOKNFE* HJKBCGDIPIM(::RPG::GameCore::GameEntity* a1)
		{
			return ((::IFDFFNOKNFE*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + ODCOIGDOFGH_HJKBCGDIPIM_OFFSET))(this, a1);
		}

		::HPDIGIKALDD* EHJLKGBFPOK(::RPG::GameCore::GameEntity* a1)
		{
			return ((::HPDIGIKALDD*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + ODCOIGDOFGH_EHJLKGBFPOK_OFFSET))(this, a1);
		}

		::System::Boolean EGKLIBFLKHG(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + ODCOIGDOFGH_EGKLIBFLKHG_OFFSET))(this, a1);
		}

		::System::Int32 _GetElationSkillDataList_b__2_0(::KOBGLFENCOL* a1, ::KOBGLFENCOL* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::KOBGLFENCOL*, ::KOBGLFENCOL*))((::PBYTE)hIl2Cpp + ODCOIGDOFGH__GETELATIONSKILLDATALIST_B__2_0_OFFSET))(this, a1, a2);
		}

	};
