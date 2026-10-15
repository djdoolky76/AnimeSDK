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

#define BNLHGENFEHG_AGKPOFAJAEO_OFFSET UNITYSDK_OFFSET(0xBDC31E0)
#define BNLHGENFEHG_CTOR_OFFSET UNITYSDK_OFFSET(0xBDDE3D0)
#define BNLHGENFEHG_HDNBBGFPNCA_OFFSET UNITYSDK_OFFSET(0xBDC2360)
#define BNLHGENFEHG_KMANBNKPLJJ_OFFSET UNITYSDK_OFFSET(0xBDDE430)
#define BNLHGENFEHG_NKCCIPKOJDJ_OFFSET UNITYSDK_OFFSET(0xBDDE640)
#define BNLHGENFEHG_OEDBBOKNADE_OFFSET UNITYSDK_OFFSET(0xBDDE6B0)
#define BNLHGENFEHG_OINBDMGFFJL_OFFSET UNITYSDK_OFFSET(0xBDDE3F0)

	class BNLHGENFEHG
	{
	public:
		::EBJBACDPFOF* GJMEEGNFDBL; // 0x90
		::RPG::Client::ElfRestaurantModule* AEJIGLOEOFI; // 0x98
		::EEJFCAJBLFK* CHPOLDKNEPK; // 0xA0
		::DNDKPGHHPNA* EJNNCAPKAOO; // 0xA8
		::RPG::Client::LittleGame::ElfRestaurant::ElfRestaurantAIService* JLMEJDNFAOD; // 0xB0
		::PAOJOIGMFAO* MIPNNFMKIEC; // 0xB8
		::FDPALAEIHPB* FKINCGODJEP; // 0xC0
		::JEBBCFENCCH* DJLBAGILFBI; // 0xC8
		::NAOPMDAAGHL* MKFMHILGAGI; // 0xD0
		::GNAOKMNCODN* DNLFJKEHLPG; // 0xD8
		::CDCHPEIGKAI* GOIHPOMCENF; // 0xE0
		::System::Boolean FCKPEHPGGCK; // 0xE8
		::System::Byte _padding0[0x3];
		::System::Single ADIKIODKIBN; // 0xEC
		::System::Int32 CCNBLGIHHBP; // 0xF0
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
