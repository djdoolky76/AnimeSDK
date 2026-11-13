#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HFCPGANBGMI.h"
#include "unitysdk/RPG/Client/LittleGame/Move/MoveState.h"
class AMDDFBFKPPK;
class BABNOKHOBCF;
class EMKNLNNLNKE;
class INMMPMDELKE;
class JAODHHPIKGJ;
class MNCOPNHONHO;
namespace RPG::Client { class RPGProfilerMarker; }
namespace RPG::Client { class RPGProfilerMarkerWithIntData; }

#define DDKPJAGBNCK_AJAMJDIIFDO_OFFSET UNITYSDK_OFFSET(0x177422C0)
#define DDKPJAGBNCK_CCTOR_OFFSET UNITYSDK_OFFSET(0x17743200)
#define DDKPJAGBNCK_CLEAR_OFFSET UNITYSDK_OFFSET(0x17741F50)
#define DDKPJAGBNCK_CTOR_OFFSET UNITYSDK_OFFSET(0x17743180)
#define DDKPJAGBNCK_EMHDHINLCOP_OFFSET UNITYSDK_OFFSET(0x17741FA0)
#define DDKPJAGBNCK_GEFDKBCCEJC_OFFSET UNITYSDK_OFFSET(0x17742B10)
#define DDKPJAGBNCK_GET_CURRENTSTATE_OFFSET UNITYSDK_OFFSET(0x177421F0)
#define DDKPJAGBNCK_GET_OWNERSYSTEM_OFFSET UNITYSDK_OFFSET(0x177430D0)
#define DDKPJAGBNCK_GET_PREVSTATE_OFFSET UNITYSDK_OFFSET(0x17743120)
#define DDKPJAGBNCK_HAMPOKCIBEC_OFFSET UNITYSDK_OFFSET(0x17742250)
#define DDKPJAGBNCK_HKMPJGMGHEG_OFFSET UNITYSDK_OFFSET(0x17742F40)
#define DDKPJAGBNCK_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x17741D50)
#define DDKPJAGBNCK_LHMKCOHPLMN_OFFSET UNITYSDK_OFFSET(0x177430F0)
#define DDKPJAGBNCK_OABJIFMOLIH_OFFSET UNITYSDK_OFFSET(0x17742BC0)
#define DDKPJAGBNCK_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x17742CD0)
#define DDKPJAGBNCK_SET_CURRENTSTATE_OFFSET UNITYSDK_OFFSET(0x17741E90)
#define DDKPJAGBNCK_SET_OWNERSYSTEM_OFFSET UNITYSDK_OFFSET(0x177430E0)
#define DDKPJAGBNCK_SET_PREVSTATE_OFFSET UNITYSDK_OFFSET(0x17741EF0)

inline static constexpr unsigned int DDKPJAGBNCK_TypeDefinitionIndex = 79116;

	class DDKPJAGBNCK : public ::HFCPGANBGMI
	{
	public:
		::MNCOPNHONHO* PDENFEFCAGN; // 0x40
		::BABNOKHOBCF* FKINCGODJEP; // 0x48
		::AMDDFBFKPPK* _OwnerSystem_k__BackingField; // 0x50
		static ::RPG::Client::RPGProfilerMarker** StaticGet_BAEDMJDKMOA()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "DDKPJAGBNCK")->GetStaticField(0x59470);
		}

		static ::RPG::Client::RPGProfilerMarkerWithIntData** StaticGet_NKGJLELHIOP()
		{
			return (::RPG::Client::RPGProfilerMarkerWithIntData**)UnitySDK::FromName("", "DDKPJAGBNCK")->GetStaticField(0x59478);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_EEAJFDAIBBN()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "DDKPJAGBNCK")->GetStaticField(0x59480);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_NJLGFOLCOBE()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "DDKPJAGBNCK")->GetStaticField(0x59488);
		}

		static ::RPG::Client::RPGProfilerMarkerWithIntData** StaticGet_BHANKJBINMJ()
		{
			return (::RPG::Client::RPGProfilerMarkerWithIntData**)UnitySDK::FromName("", "DDKPJAGBNCK")->GetStaticField(0x59490);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_GEINNMNCAJO()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "DDKPJAGBNCK")->GetStaticField(0x59498);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_LDBPLFDPPBC()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "DDKPJAGBNCK")->GetStaticField(0x594A0);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_LAAGPIPAJIP()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "DDKPJAGBNCK")->GetStaticField(0x594A8);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_JGKEEJCCBCO()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "DDKPJAGBNCK")->GetStaticField(0x594B0);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_GNPEKAIBIHJ()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "DDKPJAGBNCK")->GetStaticField(0x594B8);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_DNJIDIGLAFN()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "DDKPJAGBNCK")->GetStaticField(0x594C0);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_MOFPCGMIJHK()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "DDKPJAGBNCK")->GetStaticField(0x594C8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDKPJAGBNCK_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DDKPJAGBNCK_CCTOR_OFFSET))();
		}

		::System::Void KPJGDHLENIP(::AMDDFBFKPPK* a1, ::INMMPMDELKE* a2, ::MNCOPNHONHO* a3, ::BABNOKHOBCF* a4)
		{
			return ((::System::Void(*)(::PVOID, ::AMDDFBFKPPK*, ::INMMPMDELKE*, ::MNCOPNHONHO*, ::BABNOKHOBCF*))((::PBYTE)hIl2Cpp + DDKPJAGBNCK_KPJGDHLENIP_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDKPJAGBNCK_CLEAR_OFFSET))(this);
		}

		::System::Void EMHDHINLCOP(::RPG::Client::LittleGame::Move::MoveState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + DDKPJAGBNCK_EMHDHINLCOP_OFFSET))(this, a1);
		}

		::System::Void AJAMJDIIFDO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DDKPJAGBNCK_AJAMJDIIFDO_OFFSET))(this, a1);
		}

		::System::Void OABJIFMOLIH(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DDKPJAGBNCK_OABJIFMOLIH_OFFSET))(this, a1);
		}

		::System::Void PAGKOAEOLKA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DDKPJAGBNCK_PAGKOAEOLKA_OFFSET))(this, a1);
		}

		::System::Void HKMPJGMGHEG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDKPJAGBNCK_HKMPJGMGHEG_OFFSET))(this);
		}

		::AMDDFBFKPPK* get_OwnerSystem()
		{
			return ((::AMDDFBFKPPK*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDKPJAGBNCK_GET_OWNERSYSTEM_OFFSET))(this);
		}

		::System::Void set_OwnerSystem(::AMDDFBFKPPK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AMDDFBFKPPK*))((::PBYTE)hIl2Cpp + DDKPJAGBNCK_SET_OWNERSYSTEM_OFFSET))(this, a1);
		}

		::INMMPMDELKE* LHMKCOHPLMN()
		{
			return ((::INMMPMDELKE*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDKPJAGBNCK_LHMKCOHPLMN_OFFSET))(this);
		}

		::JAODHHPIKGJ* HAMPOKCIBEC()
		{
			return ((::JAODHHPIKGJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDKPJAGBNCK_HAMPOKCIBEC_OFFSET))(this);
		}

		::RPG::Client::LittleGame::Move::MoveState get_CurrentState()
		{
			return ((::RPG::Client::LittleGame::Move::MoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + DDKPJAGBNCK_GET_CURRENTSTATE_OFFSET))(this);
		}

		::System::Void set_CurrentState(::RPG::Client::LittleGame::Move::MoveState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + DDKPJAGBNCK_SET_CURRENTSTATE_OFFSET))(this, a1);
		}

		::RPG::Client::LittleGame::Move::MoveState get_PrevState()
		{
			return ((::RPG::Client::LittleGame::Move::MoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + DDKPJAGBNCK_GET_PREVSTATE_OFFSET))(this);
		}

		::System::Void set_PrevState(::RPG::Client::LittleGame::Move::MoveState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + DDKPJAGBNCK_SET_PREVSTATE_OFFSET))(this, a1);
		}

		::EMKNLNNLNKE* GEFDKBCCEJC()
		{
			return ((::EMKNLNNLNKE*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDKPJAGBNCK_GEFDKBCCEJC_OFFSET))(this);
		}

	};
