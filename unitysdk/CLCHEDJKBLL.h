#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJBAAGFMEKM.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
class DJPBNHAADAF;
namespace RPG::Client { class AirlineCarWay; }
namespace RPG::Client { class AirshipCarEmitter; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define CLCHEDJKBLL_AJCOJCPJEMA_OFFSET UNITYSDK_OFFSET(0xE0B3500)
#define CLCHEDJKBLL_BLILDBCEGFH_OFFSET UNITYSDK_OFFSET(0xE0B2480)
#define CLCHEDJKBLL_CGPMNINOGCG_OFFSET UNITYSDK_OFFSET(0xE0B2BC0)
#define CLCHEDJKBLL_CNMOKKPLEKA_OFFSET UNITYSDK_OFFSET(0xE0B3680)
#define CLCHEDJKBLL_CTOR_OFFSET UNITYSDK_OFFSET(0xE0B1AD0)
#define CLCHEDJKBLL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE0B1E30)
#define CLCHEDJKBLL_ENOFKLOBOLC_OFFSET UNITYSDK_OFFSET(0xE0B2F80)
#define CLCHEDJKBLL_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0xE0B35B0)
#define CLCHEDJKBLL_GET_PREFABPATH_OFFSET UNITYSDK_OFFSET(0xE0B35C0)
#define CLCHEDJKBLL_GET_TIMESCALE_OFFSET UNITYSDK_OFFSET(0xE0B35D0)
#define CLCHEDJKBLL_GMCOJDGEMGC_OFFSET UNITYSDK_OFFSET(0xE0B2080)
#define CLCHEDJKBLL_HMHGIHJEJEK_OFFSET UNITYSDK_OFFSET(0xE0B1C80)
#define CLCHEDJKBLL_JICFGJEKIEO_OFFSET UNITYSDK_OFFSET(0xE0B3CB0)
#define CLCHEDJKBLL_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xE0B24F0)
#define CLCHEDJKBLL_KNPNGDEBFEJ_OFFSET UNITYSDK_OFFSET(0xE0B3740)
#define CLCHEDJKBLL_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xE0B1FC0)
#define CLCHEDJKBLL_LMEKGOIDNOK_OFFSET UNITYSDK_OFFSET(0xE0B3A60)
#define CLCHEDJKBLL_MOOLOIBBHOL_OFFSET UNITYSDK_OFFSET(0xE0B23C0)
#define CLCHEDJKBLL_NNEPILFBFGD_OFFSET UNITYSDK_OFFSET(0xE0B3950)
#define CLCHEDJKBLL_PBKMHGAGIMB_OFFSET UNITYSDK_OFFSET(0xE0B3160)
#define CLCHEDJKBLL_SET_TIMESCALE_OFFSET UNITYSDK_OFFSET(0xE0B35E0)

inline static constexpr unsigned int CLCHEDJKBLL_TypeDefinitionIndex = 61098;

	class CLCHEDJKBLL : public ::System::Object
	{
	public:
		::RPG::Client::AirlineCarWay* PLOCJFAHLPK; // 0x10
		::DJPBNHAADAF* LIGEPMNFLCO; // 0x18
		::RPG::Client::AirshipCarEmitter* DHOEAAPGHFK; // 0x20
		::System::Collections::Generic::List_1<::DJPBNHAADAF*>* IFCAPLOMACM; // 0x28
		::System::Collections::Generic::List_1<::JJBAAGFMEKM>* JLCLNDAEMML; // 0x30
		::System::String* JLKFFKGABBC; // 0x38
		::System::Single KIKIMCMLLKN; // 0x40
		::System::UInt32 MJPPOIHKCCB; // 0x44
		::System::Nullable_1<::System::Object*> ENDAGGFGENB; // 0x48
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
