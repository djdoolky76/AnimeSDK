#pragma once
#include "unitysdk/unitysdk.h"
class CDCHPEIGKAI;
class DNDKPGHHPNA;
class EBJBACDPFOF;
class EEJFCAJBLFK;
class FDPALAEIHPB;
class GNAOKMNCODN;
class JEBBCFENCCH;
class NAOPMDAAGHL;
class PAOJOIGMFAO;
namespace RPG::Client { class ElfRestaurantModule; }
namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }
namespace RPG::Client::LittleGame { template <typename T> class GraphNavigationService_1; }
namespace RPG::Client::LittleGame::ElfRestaurant { class ElfRestaurantAIService; }

#define BNLHGENFEHG_AGKPOFAJAEO_OFFSET UNITYSDK_OFFSET(0xBDBF390)
#define BNLHGENFEHG_CTOR_OFFSET UNITYSDK_OFFSET(0xBDDA550)
#define BNLHGENFEHG_HDNBBGFPNCA_OFFSET UNITYSDK_OFFSET(0xBDBE510)
#define BNLHGENFEHG_KMANBNKPLJJ_OFFSET UNITYSDK_OFFSET(0xBDDA5B0)
#define BNLHGENFEHG_NKCCIPKOJDJ_OFFSET UNITYSDK_OFFSET(0xBDDA7C0)
#define BNLHGENFEHG_OEDBBOKNADE_OFFSET UNITYSDK_OFFSET(0xBDDA830)
#define BNLHGENFEHG_OINBDMGFFJL_OFFSET UNITYSDK_OFFSET(0xBDDA570)

inline static constexpr unsigned int BNLHGENFEHG_TypeDefinitionIndex = 76536;

	class BNLHGENFEHG
	{
	public:
		::FDPALAEIHPB* FKINCGODJEP; // 0x90
		::JEBBCFENCCH* DJLBAGILFBI; // 0x98
		::NAOPMDAAGHL* MKFMHILGAGI; // 0xA0
		::DNDKPGHHPNA* EJNNCAPKAOO; // 0xA8
		::RPG::Client::LittleGame::ElfRestaurant::ElfRestaurantAIService* JLMEJDNFAOD; // 0xB0
		::EEJFCAJBLFK* CHPOLDKNEPK; // 0xB8
		::CDCHPEIGKAI* GOIHPOMCENF; // 0xC0
		::EBJBACDPFOF* GJMEEGNFDBL; // 0xC8
		::GNAOKMNCODN* DNLFJKEHLPG; // 0xD0
		::PAOJOIGMFAO* MIPNNFMKIEC; // 0xD8
		::RPG::Client::ElfRestaurantModule* AEJIGLOEOFI; // 0xE0
		::System::Int32 CCNBLGIHHBP; // 0xE8
		::System::Single ADIKIODKIBN; // 0xEC
		::System::Boolean FCKPEHPGGCK; // 0xF0
		::System::Void _ctor(::FDPALAEIHPB* a1, ::RPG::Client::ElfRestaurantModule* a2)
		{
			return ((::System::Void(*)(::PVOID, ::FDPALAEIHPB*, ::RPG::Client::ElfRestaurantModule*))((::PBYTE)hIl2Cpp + BNLHGENFEHG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OINBDMGFFJL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNLHGENFEHG_OINBDMGFFJL_OFFSET))(this);
		}

		::System::Void KMANBNKPLJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNLHGENFEHG_KMANBNKPLJJ_OFFSET))(this);
		}

		::RPG::Client::LittleGame::GraphNavigationService_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>* AGKPOFAJAEO()
		{
			return ((::RPG::Client::LittleGame::GraphNavigationService_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BNLHGENFEHG_AGKPOFAJAEO_OFFSET))(this);
		}

		::System::Void NKCCIPKOJDJ(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BNLHGENFEHG_NKCCIPKOJDJ_OFFSET))(this, a1);
		}

		::System::Single HDNBBGFPNCA()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BNLHGENFEHG_HDNBBGFPNCA_OFFSET))(this);
		}

		::System::Void OEDBBOKNADE(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BNLHGENFEHG_OEDBBOKNADE_OFFSET))(this, a1);
		}

	};
