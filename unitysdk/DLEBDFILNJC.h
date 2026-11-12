#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LimaoNewsOfficeEventPriorityType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
class DLEBDFILNJC;
class FJNKOJFHFKA;
namespace System { class String; }

#define DLEBDFILNJC_AFAMLLFEEHD_OFFSET UNITYSDK_OFFSET(0x10609320)
#define DLEBDFILNJC_AMINKHDEMCG_OFFSET UNITYSDK_OFFSET(0x10609890)
#define DLEBDFILNJC_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x10609110)
#define DLEBDFILNJC_CTOR_OFFSET UNITYSDK_OFFSET(0x10609170)
#define DLEBDFILNJC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10609180)
#define DLEBDFILNJC_DMJIKAOLCCB_OFFSET UNITYSDK_OFFSET(0x10609680)
#define DLEBDFILNJC_FICJNJKCONA_OFFSET UNITYSDK_OFFSET(0x106099E0)
#define DLEBDFILNJC_GET_CHOOSEPARAM_OFFSET UNITYSDK_OFFSET(0x10609B60)
#define DLEBDFILNJC_GET_ISFINISH_OFFSET UNITYSDK_OFFSET(0x10609B40)
#define DLEBDFILNJC_GET_OFFICEEVENTID_OFFSET UNITYSDK_OFFSET(0x10609B20)
#define DLEBDFILNJC_HAEIEODOICF_OFFSET UNITYSDK_OFFSET(0x106097E0)
#define DLEBDFILNJC_HANGCCMDBMB_OFFSET UNITYSDK_OFFSET(0x106095A0)
#define DLEBDFILNJC_IHGGMNLMIFL_OFFSET UNITYSDK_OFFSET(0x10609730)
#define DLEBDFILNJC_JINAHHBMBCI_OFFSET UNITYSDK_OFFSET(0x10609220)
#define DLEBDFILNJC_LDEMPKOFKNE_OFFSET UNITYSDK_OFFSET(0x106094C0)
#define DLEBDFILNJC_LJBCDJNNBJH_OFFSET UNITYSDK_OFFSET(0x106091C0)
#define DLEBDFILNJC_MICMDFFDOND_OFFSET UNITYSDK_OFFSET(0x106093C0)
#define DLEBDFILNJC_OICFNMHEDJP_OFFSET UNITYSDK_OFFSET(0x10609420)
#define DLEBDFILNJC_OJAFAHCJJDC_OFFSET UNITYSDK_OFFSET(0x10609930)
#define DLEBDFILNJC_OMEHAHOELFP_OFFSET UNITYSDK_OFFSET(0x10609A80)
#define DLEBDFILNJC_PBEKLBLLCCD_OFFSET UNITYSDK_OFFSET(0x10609280)
#define DLEBDFILNJC_SET_CHOOSEPARAM_OFFSET UNITYSDK_OFFSET(0x10609B70)
#define DLEBDFILNJC_SET_ISFINISH_OFFSET UNITYSDK_OFFSET(0x10609B50)
#define DLEBDFILNJC_SET_OFFICEEVENTID_OFFSET UNITYSDK_OFFSET(0x10609B30)

inline static constexpr unsigned int DLEBDFILNJC_TypeDefinitionIndex = 83069;

	class DLEBDFILNJC : public ::System::Object
	{
	public:
		::System::UInt32 _ChooseParam_k__BackingField; // 0x10
		::System::Boolean _IsFinish_k__BackingField; // 0x14
		::System::Byte _padding0[0x3];
		::System::UInt32 _OfficeEventID_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLEBDFILNJC_CTOR_OFFSET))(this);
		}

		static ::DLEBDFILNJC* BPLPBPMEODA(::System::UInt32 a1)
		{
			return ((::DLEBDFILNJC*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + DLEBDFILNJC_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLEBDFILNJC_DISPOSE_OFFSET))(this);
		}

		::System::Void LJBCDJNNBJH(::System::Boolean a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + DLEBDFILNJC_LJBCDJNNBJH_OFFSET))(this, a1, a2);
		}

		::System::UInt32 JINAHHBMBCI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DLEBDFILNJC_JINAHHBMBCI_OFFSET))(this);
		}

		::RPG::GameCore::LimaoNewsOfficeEventPriorityType AFAMLLFEEHD()
		{
			return ((::RPG::GameCore::LimaoNewsOfficeEventPriorityType(*)(::PVOID))((::PBYTE)hIl2Cpp + DLEBDFILNJC_AFAMLLFEEHD_OFFSET))(this);
		}

		::System::UInt32 OICFNMHEDJP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DLEBDFILNJC_OICFNMHEDJP_OFFSET))(this);
		}

		::System::UInt32 PBEKLBLLCCD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DLEBDFILNJC_PBEKLBLLCCD_OFFSET))(this);
		}

		::RPG::Client::TextID LDEMPKOFKNE()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + DLEBDFILNJC_LDEMPKOFKNE_OFFSET))(this);
		}

		::RPG::Client::TextID HANGCCMDBMB()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + DLEBDFILNJC_HANGCCMDBMB_OFFSET))(this);
		}

		::System::String* DMJIKAOLCCB()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DLEBDFILNJC_DMJIKAOLCCB_OFFSET))(this);
		}

		::System::Boolean IHGGMNLMIFL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DLEBDFILNJC_IHGGMNLMIFL_OFFSET))(this);
		}

		::System::Boolean HAEIEODOICF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DLEBDFILNJC_HAEIEODOICF_OFFSET))(this);
		}

		::System::UInt32 AMINKHDEMCG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DLEBDFILNJC_AMINKHDEMCG_OFFSET))(this);
		}

		::System::String* OJAFAHCJJDC()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DLEBDFILNJC_OJAFAHCJJDC_OFFSET))(this);
		}

		::System::UInt32 FICJNJKCONA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DLEBDFILNJC_FICJNJKCONA_OFFSET))(this);
		}

		::System::UInt32 OMEHAHOELFP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DLEBDFILNJC_OMEHAHOELFP_OFFSET))(this);
		}

		::FJNKOJFHFKA* MICMDFFDOND()
		{
			return ((::FJNKOJFHFKA*(*)(::PVOID))((::PBYTE)hIl2Cpp + DLEBDFILNJC_MICMDFFDOND_OFFSET))(this);
		}

		::System::UInt32 get_OfficeEventID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DLEBDFILNJC_GET_OFFICEEVENTID_OFFSET))(this);
		}

		::System::Void set_OfficeEventID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DLEBDFILNJC_SET_OFFICEEVENTID_OFFSET))(this, a1);
		}

		::System::Boolean get_IsFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DLEBDFILNJC_GET_ISFINISH_OFFSET))(this);
		}

		::System::Void set_IsFinish(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DLEBDFILNJC_SET_ISFINISH_OFFSET))(this, a1);
		}

		::System::UInt32 get_ChooseParam()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DLEBDFILNJC_GET_CHOOSEPARAM_OFFSET))(this);
		}

		::System::Void set_ChooseParam(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DLEBDFILNJC_SET_CHOOSEPARAM_OFFSET))(this, a1);
		}

	};
