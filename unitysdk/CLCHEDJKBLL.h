#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJBAAGFMEKM.h"
#include "unitysdk/System/Object.h"
class DJPBNHAADAF;
namespace RPG::Client { class AirlineCarWay; }
namespace RPG::Client { class AirshipCarEmitter; }
namespace System { class Nullable; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define CLCHEDJKBLL_AJCOJCPJEMA_OFFSET UNITYSDK_OFFSET(0xD778CC0)
#define CLCHEDJKBLL_BLILDBCEGFH_OFFSET UNITYSDK_OFFSET(0xD777C40)
#define CLCHEDJKBLL_CGPMNINOGCG_OFFSET UNITYSDK_OFFSET(0xD778380)
#define CLCHEDJKBLL_CNMOKKPLEKA_OFFSET UNITYSDK_OFFSET(0xD778E40)
#define CLCHEDJKBLL_CTOR_OFFSET UNITYSDK_OFFSET(0xD777290)
#define CLCHEDJKBLL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD7775F0)
#define CLCHEDJKBLL_ENOFKLOBOLC_OFFSET UNITYSDK_OFFSET(0xD778740)
#define CLCHEDJKBLL_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0xD778D70)
#define CLCHEDJKBLL_GET_PREFABPATH_OFFSET UNITYSDK_OFFSET(0xD778D80)
#define CLCHEDJKBLL_GET_TIMESCALE_OFFSET UNITYSDK_OFFSET(0xD778D90)
#define CLCHEDJKBLL_GMCOJDGEMGC_OFFSET UNITYSDK_OFFSET(0xD777840)
#define CLCHEDJKBLL_HMHGIHJEJEK_OFFSET UNITYSDK_OFFSET(0xD777440)
#define CLCHEDJKBLL_JICFGJEKIEO_OFFSET UNITYSDK_OFFSET(0xD779470)
#define CLCHEDJKBLL_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xD777CB0)
#define CLCHEDJKBLL_KNPNGDEBFEJ_OFFSET UNITYSDK_OFFSET(0xD778F00)
#define CLCHEDJKBLL_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xD777780)
#define CLCHEDJKBLL_LMEKGOIDNOK_OFFSET UNITYSDK_OFFSET(0xD779220)
#define CLCHEDJKBLL_MOOLOIBBHOL_OFFSET UNITYSDK_OFFSET(0xD777B80)
#define CLCHEDJKBLL_NNEPILFBFGD_OFFSET UNITYSDK_OFFSET(0xD779110)
#define CLCHEDJKBLL_PBKMHGAGIMB_OFFSET UNITYSDK_OFFSET(0xD778920)
#define CLCHEDJKBLL_SET_TIMESCALE_OFFSET UNITYSDK_OFFSET(0xD778DA0)

	class CLCHEDJKBLL : public ::System::Object
	{
	public:
		::RPG::Client::AirshipCarEmitter* DHOEAAPGHFK; // 0x10
		::RPG::Client::AirlineCarWay* PLOCJFAHLPK; // 0x18
		::System::String* JLKFFKGABBC; // 0x20
		::DJPBNHAADAF* LIGEPMNFLCO; // 0x28
		::System::Collections::Generic::List_1<::DJPBNHAADAF*>* IFCAPLOMACM; // 0x30
		::System::Collections::Generic::List_1<::JJBAAGFMEKM>* JLCLNDAEMML; // 0x38
		::System::UInt32 MJPPOIHKCCB; // 0x40
		::System::Nullable* ENDAGGFGENB; // 0x44
		::System::Byte _padding0[0x4];
		::System::Single KIKIMCMLLKN; // 0x50
		::System::Void _ctor(::System::UInt32 a1, ::System::String* a2, ::UnityEngine::GameObject* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLCHEDJKBLL_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLCHEDJKBLL_DISPOSE_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLCHEDJKBLL_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void BLILDBCEGFH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLCHEDJKBLL_BLILDBCEGFH_OFFSET))(this, a1);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLCHEDJKBLL_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::UInt32 get_GroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLCHEDJKBLL_GET_GROUPID_OFFSET))(this);
		}

		::System::String* get_PrefabPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLCHEDJKBLL_GET_PREFABPATH_OFFSET))(this);
		}

		::System::Single get_TimeScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLCHEDJKBLL_GET_TIMESCALE_OFFSET))(this);
		}

		::System::Void set_TimeScale(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLCHEDJKBLL_SET_TIMESCALE_OFFSET))(this, a1);
		}

		::System::Void CNMOKKPLEKA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLCHEDJKBLL_CNMOKKPLEKA_OFFSET))(this);
		}

		::System::Void CGPMNINOGCG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLCHEDJKBLL_CGPMNINOGCG_OFFSET))(this);
		}

		::System::Boolean ENOFKLOBOLC(::DJPBNHAADAF* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::DJPBNHAADAF*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLCHEDJKBLL_ENOFKLOBOLC_OFFSET))(this, a1, a2);
		}

		::System::Boolean AJCOJCPJEMA(::DJPBNHAADAF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DJPBNHAADAF*))((::PBYTE)hIl2Cpp + CLCHEDJKBLL_AJCOJCPJEMA_OFFSET))(this, a1);
		}

		::System::Void PBKMHGAGIMB(::System::Int32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLCHEDJKBLL_PBKMHGAGIMB_OFFSET))(this, a1, a2);
		}

		::System::Void NNEPILFBFGD(::DJPBNHAADAF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DJPBNHAADAF*))((::PBYTE)hIl2Cpp + CLCHEDJKBLL_NNEPILFBFGD_OFFSET))(this, a1);
		}

		::System::Void LMEKGOIDNOK(::DJPBNHAADAF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DJPBNHAADAF*))((::PBYTE)hIl2Cpp + CLCHEDJKBLL_LMEKGOIDNOK_OFFSET))(this, a1);
		}

		::System::Void GMCOJDGEMGC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLCHEDJKBLL_GMCOJDGEMGC_OFFSET))(this);
		}

		::System::Single KNPNGDEBFEJ(::System::Single a1, ::System::Int32 a2)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLCHEDJKBLL_KNPNGDEBFEJ_OFFSET))(this, a1, a2);
		}

		::System::Void MOOLOIBBHOL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLCHEDJKBLL_MOOLOIBBHOL_OFFSET))(this);
		}

		::System::Void JICFGJEKIEO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLCHEDJKBLL_JICFGJEKIEO_OFFSET))(this, a1);
		}

		::System::Void HMHGIHJEJEK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLCHEDJKBLL_HMHGIHJEJEK_OFFSET))(this);
		}

	};
