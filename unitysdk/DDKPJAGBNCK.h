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

#define DDKPJAGBNCK_AJAMJDIIFDO_OFFSET UNITYSDK_OFFSET(0xE4E4160)
#define DDKPJAGBNCK_CCTOR_OFFSET UNITYSDK_OFFSET(0xE4E5090)
#define DDKPJAGBNCK_CLEAR_OFFSET UNITYSDK_OFFSET(0xE4E3DE0)
#define DDKPJAGBNCK_CTOR_OFFSET UNITYSDK_OFFSET(0xE4E5010)
#define DDKPJAGBNCK_EMHDHINLCOP_OFFSET UNITYSDK_OFFSET(0xE4E3E40)
#define DDKPJAGBNCK_GEFDKBCCEJC_OFFSET UNITYSDK_OFFSET(0xE4E49A0)
#define DDKPJAGBNCK_GET_CURRENTSTATE_OFFSET UNITYSDK_OFFSET(0xE4E4090)
#define DDKPJAGBNCK_GET_OWNERSYSTEM_OFFSET UNITYSDK_OFFSET(0xE4E4F60)
#define DDKPJAGBNCK_GET_PREVSTATE_OFFSET UNITYSDK_OFFSET(0xE4E4FB0)
#define DDKPJAGBNCK_HAMPOKCIBEC_OFFSET UNITYSDK_OFFSET(0xE4E40F0)
#define DDKPJAGBNCK_HKMPJGMGHEG_OFFSET UNITYSDK_OFFSET(0xE4E4DD0)
#define DDKPJAGBNCK_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xE4E3BE0)
#define DDKPJAGBNCK_LHMKCOHPLMN_OFFSET UNITYSDK_OFFSET(0xE4E4F80)
#define DDKPJAGBNCK_OABJIFMOLIH_OFFSET UNITYSDK_OFFSET(0xE4E4A50)
#define DDKPJAGBNCK_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xE4E4B60)
#define DDKPJAGBNCK_SET_CURRENTSTATE_OFFSET UNITYSDK_OFFSET(0xE4E3D20)
#define DDKPJAGBNCK_SET_OWNERSYSTEM_OFFSET UNITYSDK_OFFSET(0xE4E4F70)
#define DDKPJAGBNCK_SET_PREVSTATE_OFFSET UNITYSDK_OFFSET(0xE4E3D80)

inline static constexpr unsigned int DDKPJAGBNCK_TypeDefinitionIndex = 76783;

	class DDKPJAGBNCK : public ::HFCPGANBGMI
	{
	public:
		::BABNOKHOBCF* FKINCGODJEP; // 0x40
		::AMDDFBFKPPK* _OwnerSystem_k__BackingField; // 0x48
		::MNCOPNHONHO* PDENFEFCAGN; // 0x50
		static ::RPG::Client::RPGProfilerMarker** StaticGet_LDBPLFDPPBC()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "DDKPJAGBNCK")->GetStaticField(0x5D860);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_BAEDMJDKMOA()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "DDKPJAGBNCK")->GetStaticField(0x5D868);
		}

		static ::RPG::Client::RPGProfilerMarkerWithIntData** StaticGet_BHANKJBINMJ()
		{
			return (::RPG::Client::RPGProfilerMarkerWithIntData**)UnitySDK::FromName("", "DDKPJAGBNCK")->GetStaticField(0x5D870);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_DNJIDIGLAFN()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "DDKPJAGBNCK")->GetStaticField(0x5D878);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_GNPEKAIBIHJ()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "DDKPJAGBNCK")->GetStaticField(0x5D880);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_NJLGFOLCOBE()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "DDKPJAGBNCK")->GetStaticField(0x5D888);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_MOFPCGMIJHK()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "DDKPJAGBNCK")->GetStaticField(0x5D890);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_GEINNMNCAJO()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "DDKPJAGBNCK")->GetStaticField(0x5D898);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_JGKEEJCCBCO()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "DDKPJAGBNCK")->GetStaticField(0x5D8A0);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_LAAGPIPAJIP()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "DDKPJAGBNCK")->GetStaticField(0x5D8A8);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_EEAJFDAIBBN()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "DDKPJAGBNCK")->GetStaticField(0x5D8B0);
		}

		static ::RPG::Client::RPGProfilerMarkerWithIntData** StaticGet_NKGJLELHIOP()
		{
			return (::RPG::Client::RPGProfilerMarkerWithIntData**)UnitySDK::FromName("", "DDKPJAGBNCK")->GetStaticField(0x5D8B8);
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
