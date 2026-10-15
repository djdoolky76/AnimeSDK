#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BMEBMENDJGA;
class MOJFFDOILBN;
class PNMBJHMPELA;
namespace RPG::Client { class ChenLingFesGameInstance; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FPPNANNOMPF_BEMOEFMAMPO_OFFSET UNITYSDK_OFFSET(0x15918140)
#define FPPNANNOMPF_BFDKMDEPHNA_OFFSET UNITYSDK_OFFSET(0x15918710)
#define FPPNANNOMPF_CBOFFPEFEPP_OFFSET UNITYSDK_OFFSET(0x15918B80)
#define FPPNANNOMPF_CCTOR_OFFSET UNITYSDK_OFFSET(0x15918C10)
#define FPPNANNOMPF_CTOR_OFFSET UNITYSDK_OFFSET(0x15917E50)
#define FPPNANNOMPF_EBOMHIEEPMO_OFFSET UNITYSDK_OFFSET(0x15918440)
#define FPPNANNOMPF_EOAEDLCOGHH_OFFSET UNITYSDK_OFFSET(0x15918220)
#define FPPNANNOMPF_GET_CURRENTGAMEDAYINDEX_OFFSET UNITYSDK_OFFSET(0x15918BF0)
#define FPPNANNOMPF_GET_GAMEINSTANCE_OFFSET UNITYSDK_OFFSET(0x15918B40)
#define FPPNANNOMPF_GET_ISFINISHEDFROMSERVER_OFFSET UNITYSDK_OFFSET(0x15918AE0)
#define FPPNANNOMPF_GET_SERVERSCORE_OFFSET UNITYSDK_OFFSET(0x15918B00)
#define FPPNANNOMPF_GET_SERVERSTARNUM_OFFSET UNITYSDK_OFFSET(0x15918B20)
#define FPPNANNOMPF_GET_STARAWARDS_OFFSET UNITYSDK_OFFSET(0x15918BD0)
#define FPPNANNOMPF_HCICCNIOIJP_OFFSET UNITYSDK_OFFSET(0x159184B0)
#define FPPNANNOMPF_HCOFMFKFMDK_OFFSET UNITYSDK_OFFSET(0x15918850)
#define FPPNANNOMPF_HDPPGFBHDGN_OFFSET UNITYSDK_OFFSET(0x159188E0)
#define FPPNANNOMPF_ILKMDMAHPIL_OFFSET UNITYSDK_OFFSET(0x15918620)
#define FPPNANNOMPF_JKCPLEJCBML_OFFSET UNITYSDK_OFFSET(0x15918280)
#define FPPNANNOMPF_KHPIFPNNEGG_OFFSET UNITYSDK_OFFSET(0x15918500)
#define FPPNANNOMPF_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x15917ED0)
#define FPPNANNOMPF_LALOJGACPLL_OFFSET UNITYSDK_OFFSET(0x15918B70)
#define FPPNANNOMPF_MMKEDDICDHK_OFFSET UNITYSDK_OFFSET(0x15918790)
#define FPPNANNOMPF_MPLBEHHLFJI_OFFSET UNITYSDK_OFFSET(0x15918670)
#define FPPNANNOMPF_OCLEGENJMJK_OFFSET UNITYSDK_OFFSET(0x15918960)
#define FPPNANNOMPF_PPLHFGFMKBL_OFFSET UNITYSDK_OFFSET(0x15918B60)
#define FPPNANNOMPF_SET_CURRENTGAMEDAYINDEX_OFFSET UNITYSDK_OFFSET(0x15918C00)
#define FPPNANNOMPF_SET_GAMEINSTANCE_OFFSET UNITYSDK_OFFSET(0x15918B50)
#define FPPNANNOMPF_SET_ISFINISHEDFROMSERVER_OFFSET UNITYSDK_OFFSET(0x15918AF0)
#define FPPNANNOMPF_SET_SERVERSCORE_OFFSET UNITYSDK_OFFSET(0x15918B10)
#define FPPNANNOMPF_SET_SERVERSTARNUM_OFFSET UNITYSDK_OFFSET(0x15918B30)
#define FPPNANNOMPF_SET_STARAWARDS_OFFSET UNITYSDK_OFFSET(0x15918BE0)

inline static constexpr unsigned int FPPNANNOMPF_TypeDefinitionIndex = 77743;

	class FPPNANNOMPF : public ::System::Object
	{
	public:
		::RPG::Client::ChenLingFesGameInstance* _GameInstance_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::PNMBJHMPELA*>* FBPOPPENCOE; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* HNIBPGJIOKM; // 0x20
		::System::Collections::Generic::List_1<::BMEBMENDJGA*>* _StarAwards_k__BackingField; // 0x28
		::System::Int32 _CurrentGameDayIndex_k__BackingField; // 0x30
		::System::Boolean _IsFinishedFromServer_k__BackingField; // 0x34
		::System::Byte _padding0[0x3];
		::System::UInt32 BNEFKDMHPAO; // 0x38
		::System::UInt32 _ServerScore_k__BackingField; // 0x3C
		::System::UInt32 _ServerStarNum_k__BackingField; // 0x40
		static ::System::Int32* StaticGet_DBMGMFNPFPI()
		{
			return (::System::Int32*)UnitySDK::FromName("", "FPPNANNOMPF")->GetStaticField(0x12EA0);
		}

		::System::Void _ctor(::RPG::Client::ChenLingFesGameInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingFesGameInstance*))((::PBYTE)hIl2Cpp + FPPNANNOMPF_CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FPPNANNOMPF_CCTOR_OFFSET))();
		}

		::System::Void KPJGDHLENIP(::System::Collections::Generic::List_1<::System::UInt32>* a1, ::System::Int32 a2, ::System::Collections::Generic::List_1<::System::UInt32>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Int32, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + FPPNANNOMPF_KPJGDHLENIP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EOAEDLCOGHH(::MOJFFDOILBN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MOJFFDOILBN*))((::PBYTE)hIl2Cpp + FPPNANNOMPF_EOAEDLCOGHH_OFFSET))(this, a1);
		}

		::System::Void JKCPLEJCBML()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPPNANNOMPF_JKCPLEJCBML_OFFSET))(this);
		}

		::System::Void BEMOEFMAMPO(::PNMBJHMPELA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PNMBJHMPELA*))((::PBYTE)hIl2Cpp + FPPNANNOMPF_BEMOEFMAMPO_OFFSET))(this, a1);
		}

		::System::Boolean EBOMHIEEPMO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FPPNANNOMPF_EBOMHIEEPMO_OFFSET))(this);
		}

		::System::Void HCICCNIOIJP(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FPPNANNOMPF_HCICCNIOIJP_OFFSET))(this, a1);
		}

		::System::Void KHPIFPNNEGG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPPNANNOMPF_KHPIFPNNEGG_OFFSET))(this);
		}

		::System::Void ILKMDMAHPIL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FPPNANNOMPF_ILKMDMAHPIL_OFFSET))(this, a1);
		}

		::System::Int32 MPLBEHHLFJI()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FPPNANNOMPF_MPLBEHHLFJI_OFFSET))(this);
		}

		::System::Int32 BFDKMDEPHNA()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FPPNANNOMPF_BFDKMDEPHNA_OFFSET))(this);
		}

		::System::Boolean MMKEDDICDHK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FPPNANNOMPF_MMKEDDICDHK_OFFSET))(this);
		}

		::System::Boolean HCOFMFKFMDK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FPPNANNOMPF_HCOFMFKFMDK_OFFSET))(this);
		}

		::BMEBMENDJGA* OCLEGENJMJK()
		{
			return ((::BMEBMENDJGA*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPPNANNOMPF_OCLEGENJMJK_OFFSET))(this);
		}

		::System::Boolean get_IsFinishedFromServer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FPPNANNOMPF_GET_ISFINISHEDFROMSERVER_OFFSET))(this);
		}

		::System::Void set_IsFinishedFromServer(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FPPNANNOMPF_SET_ISFINISHEDFROMSERVER_OFFSET))(this, a1);
		}

		::System::UInt32 get_ServerScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FPPNANNOMPF_GET_SERVERSCORE_OFFSET))(this);
		}

		::System::Void set_ServerScore(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FPPNANNOMPF_SET_SERVERSCORE_OFFSET))(this, a1);
		}

		::System::UInt32 get_ServerStarNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FPPNANNOMPF_GET_SERVERSTARNUM_OFFSET))(this);
		}

		::System::Void set_ServerStarNum(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FPPNANNOMPF_SET_SERVERSTARNUM_OFFSET))(this, a1);
		}

		::RPG::Client::ChenLingFesGameInstance* get_GameInstance()
		{
			return ((::RPG::Client::ChenLingFesGameInstance*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPPNANNOMPF_GET_GAMEINSTANCE_OFFSET))(this);
		}

		::System::Void set_GameInstance(::RPG::Client::ChenLingFesGameInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingFesGameInstance*))((::PBYTE)hIl2Cpp + FPPNANNOMPF_SET_GAMEINSTANCE_OFFSET))(this, a1);
		}

		::PNMBJHMPELA* HDPPGFBHDGN()
		{
			return ((::PNMBJHMPELA*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPPNANNOMPF_HDPPGFBHDGN_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::PNMBJHMPELA*>* PPLHFGFMKBL()
		{
			return ((::System::Collections::Generic::List_1<::PNMBJHMPELA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPPNANNOMPF_PPLHFGFMKBL_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* LALOJGACPLL()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPPNANNOMPF_LALOJGACPLL_OFFSET))(this);
		}

		::System::UInt32 CBOFFPEFEPP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FPPNANNOMPF_CBOFFPEFEPP_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::BMEBMENDJGA*>* get_StarAwards()
		{
			return ((::System::Collections::Generic::List_1<::BMEBMENDJGA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPPNANNOMPF_GET_STARAWARDS_OFFSET))(this);
		}

		::System::Void set_StarAwards(::System::Collections::Generic::List_1<::BMEBMENDJGA*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::BMEBMENDJGA*>*))((::PBYTE)hIl2Cpp + FPPNANNOMPF_SET_STARAWARDS_OFFSET))(this, a1);
		}

		::System::Int32 get_CurrentGameDayIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FPPNANNOMPF_GET_CURRENTGAMEDAYINDEX_OFFSET))(this);
		}

		::System::Void set_CurrentGameDayIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FPPNANNOMPF_SET_CURRENTGAMEDAYINDEX_OFFSET))(this, a1);
		}

	};
