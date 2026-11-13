#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
class BLEKOPCKPJP;
class FKIGFFMPCML;
class GAFBEGIONFF;
class KGDADKNPPOL;
class KLAPOBNIPFH;
class PEFMDFGFDLN;
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }

#define FKIGFFMPCML_AHEIBMIACKH_OFFSET UNITYSDK_OFFSET(0x1AAA99F0)
#define FKIGFFMPCML_AKAMIKMOPMD_OFFSET UNITYSDK_OFFSET(0x1AAAA3F0)
#define FKIGFFMPCML_AKKIMLIDIND_OFFSET UNITYSDK_OFFSET(0x1AAA9D60)
#define FKIGFFMPCML_AKNMPKDGMNC_OFFSET UNITYSDK_OFFSET(0x1AAA8CE0)
#define FKIGFFMPCML_BHFMNDFJDOM_OFFSET UNITYSDK_OFFSET(0x1AAA91A0)
#define FKIGFFMPCML_CTOR_OFFSET UNITYSDK_OFFSET(0x1AAAA540)
#define FKIGFFMPCML_DFPNPDNMCJM_OFFSET UNITYSDK_OFFSET(0x1AAA9D00)
#define FKIGFFMPCML_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AAA8DF0)
#define FKIGFFMPCML_DONPLINBOKJ_OFFSET UNITYSDK_OFFSET(0x1AAA97D0)
#define FKIGFFMPCML_EOJFIDPGJGL_OFFSET UNITYSDK_OFFSET(0x1AAAA490)
#define FKIGFFMPCML_FEIHGKFLMGL_OFFSET UNITYSDK_OFFSET(0x1AAA9CA0)
#define FKIGFFMPCML_GAGHELDLDCN_OFFSET UNITYSDK_OFFSET(0x1AAA9C20)
#define FKIGFFMPCML_GBOPHPELAMP_OFFSET UNITYSDK_OFFSET(0x1AAA9E50)
#define FKIGFFMPCML_GEJFFEGIEAD_OFFSET UNITYSDK_OFFSET(0x1AAAA2B0)
#define FKIGFFMPCML_GET_WAYPOINTLOCKER_OFFSET UNITYSDK_OFFSET(0x1AAA8C50)
#define FKIGFFMPCML_GGBLHEHJBDO_OFFSET UNITYSDK_OFFSET(0x1AAA8BD0)
#define FKIGFFMPCML_INIT_OFFSET UNITYSDK_OFFSET(0x1AAA8C60)
#define FKIGFFMPCML_LKFBHLBHPDI_OFFSET UNITYSDK_OFFSET(0x1AAA9DC0)
#define FKIGFFMPCML_LLBJBNNDAEA_OFFSET UNITYSDK_OFFSET(0x1AAA9AB0)
#define FKIGFFMPCML_MGLOIDNGEOI_OFFSET UNITYSDK_OFFSET(0x1AAA8D30)
#define FKIGFFMPCML_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0x1AAA8DA0)
#define FKIGFFMPCML_OPEIBNIOOFG_OFFSET UNITYSDK_OFFSET(0x1AAA9B70)
#define FKIGFFMPCML_OPOLLHKOJKJ_OFFSET UNITYSDK_OFFSET(0x1AAA95E0)
#define FKIGFFMPCML_PDCNDLBCJKO_OFFSET UNITYSDK_OFFSET(0x1AAAA4E0)
#define FKIGFFMPCML__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x1AAA8E40)

inline static constexpr unsigned int FKIGFFMPCML_TypeDefinitionIndex = 65678;

	class FKIGFFMPCML : public ::RPG::Client::BaseModule
	{
	public:
		::BLEKOPCKPJP* ACFNEGJBMCI; // 0x10
		::GAFBEGIONFF* _WaypointLocker_k__BackingField; // 0x18
		::RPG::GameCore::GameEntity* OBBMLEFJNCO; // 0x20
		::KLAPOBNIPFH* IENHPNBFONM; // 0x28
		::PEFMDFGFDLN* MEACBGOHPDJ; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKIGFFMPCML_CTOR_OFFSET))(this);
		}

		static ::FKIGFFMPCML* GGBLHEHJBDO()
		{
			return ((::FKIGFFMPCML*(*)())((::PBYTE)hIl2Cpp + FKIGFFMPCML_GGBLHEHJBDO_OFFSET))();
		}

		::GAFBEGIONFF* get_WaypointLocker()
		{
			return ((::GAFBEGIONFF*(*)(::PVOID))((::PBYTE)hIl2Cpp + FKIGFFMPCML_GET_WAYPOINTLOCKER_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKIGFFMPCML_INIT_OFFSET))(this);
		}

		::System::Void MGLOIDNGEOI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKIGFFMPCML_MGLOIDNGEOI_OFFSET))(this);
		}

		::System::Void OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKIGFFMPCML_ONRECONNECT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKIGFFMPCML_DISPOSE_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKIGFFMPCML__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Boolean BHFMNDFJDOM(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::UInt32 a5)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + FKIGFFMPCML_BHFMNDFJDOM_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean OPEIBNIOOFG(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + FKIGFFMPCML_OPEIBNIOOFG_OFFSET))(this, a1, a2, a3);
		}

		::System::Void GAGHELDLDCN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKIGFFMPCML_GAGHELDLDCN_OFFSET))(this);
		}

		::System::Void DFPNPDNMCJM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKIGFFMPCML_DFPNPDNMCJM_OFFSET))(this);
		}

		::System::Boolean LLBJBNNDAEA(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + FKIGFFMPCML_LLBJBNNDAEA_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean AHEIBMIACKH(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + FKIGFFMPCML_AHEIBMIACKH_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void AKNMPKDGMNC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKIGFFMPCML_AKNMPKDGMNC_OFFSET))(this);
		}

		::System::Void AKKIMLIDIND(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FKIGFFMPCML_AKKIMLIDIND_OFFSET))(this, a1);
		}

		::System::Void LKFBHLBHPDI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FKIGFFMPCML_LKFBHLBHPDI_OFFSET))(this, a1);
		}

		::System::Void FEIHGKFLMGL(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FKIGFFMPCML_FEIHGKFLMGL_OFFSET))(this, a1);
		}

		::System::Void AKAMIKMOPMD(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FKIGFFMPCML_AKAMIKMOPMD_OFFSET))(this, a1);
		}

		::System::Void EOJFIDPGJGL(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FKIGFFMPCML_EOJFIDPGJGL_OFFSET))(this, a1);
		}

		::System::Void PDCNDLBCJKO(::KGDADKNPPOL* a1, ::KGDADKNPPOL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::KGDADKNPPOL*, ::KGDADKNPPOL*))((::PBYTE)hIl2Cpp + FKIGFFMPCML_PDCNDLBCJKO_OFFSET))(this, a1, a2);
		}

		::System::UInt32 OPOLLHKOJKJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FKIGFFMPCML_OPOLLHKOJKJ_OFFSET))(this);
		}

		::System::UInt32 DONPLINBOKJ(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + FKIGFFMPCML_DONPLINBOKJ_OFFSET))(this, a1, a2);
		}

		::System::Void GBOPHPELAMP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKIGFFMPCML_GBOPHPELAMP_OFFSET))(this);
		}

		::System::Void GEJFFEGIEAD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKIGFFMPCML_GEJFFEGIEAD_OFFSET))(this);
		}

	};
