#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GPGDJDKKHNE.h"
#include "unitysdk/LONPBELAPJO_ENavigationState.h"
#include "unitysdk/RPG/Client/ETravelShipState.h"
#include "unitysdk/UnityEngine/Vector3.h"
class BLCMFPJDHCC;
class GPFEOAGPKIE;
class MGJOAOHPFBO;
class NGLFOJKOKBH;
namespace RPG::GameCore { class CharacterInputData; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Nullable; }

#define LONPBELAPJO_BGDKFHEBDFJ_OFFSET UNITYSDK_OFFSET(0xB8114B0)
#define LONPBELAPJO_CHAHBFGGIDL_OFFSET UNITYSDK_OFFSET(0xB80FCC0)
#define LONPBELAPJO_CTOR_OFFSET UNITYSDK_OFFSET(0xB80F360)
#define LONPBELAPJO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB80F7A0)
#define LONPBELAPJO_FLGPPJJKPAH_OFFSET UNITYSDK_OFFSET(0xB810790)
#define LONPBELAPJO_GET_LASTVALIDDESTINATION_OFFSET UNITYSDK_OFFSET(0xB8114C0)
#define LONPBELAPJO_IGFMKENIABC_OFFSET UNITYSDK_OFFSET(0xB811220)
#define LONPBELAPJO_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xB80FD70)
#define LONPBELAPJO_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0xB80F8C0)
#define LONPBELAPJO_LACMJCGFICG_OFFSET UNITYSDK_OFFSET(0xB8113B0)
#define LONPBELAPJO_LBMEKFFDODL_OFFSET UNITYSDK_OFFSET(0xB8103E0)
#define LONPBELAPJO_LFAAEANCCFM_OFFSET UNITYSDK_OFFSET(0xB8111A0)
#define LONPBELAPJO_MOCPCLHLAHK_OFFSET UNITYSDK_OFFSET(0xB810950)
#define LONPBELAPJO_SET_LASTVALIDDESTINATION_OFFSET UNITYSDK_OFFSET(0xB8114D0)

	class LONPBELAPJO : public ::GPGDJDKKHNE
	{
	public:
		::Il2CppArray<::NGLFOJKOKBH*>* AHBBDNBKLAL; // 0x48
		::GPFEOAGPKIE* KGGMLFMPJPE; // 0x50
		::BLCMFPJDHCC* LFLNILJKBGM; // 0x58
		::LONPBELAPJO_ENavigationState FPIHDGPCHPK; // 0x60
		::UnityEngine::Vector3 GOAKJGJDALN; // 0x64
		::System::Nullable* _LastValidDestination_k__BackingField; // 0x70
		::System::Byte _padding0[0x8];
		::System::Single CEBNDGNFDKP; // 0x80
		::System::Single GIPJINEJCAN; // 0x84
		::System::Single AMKMOMGBFBN; // 0x88
		// static const ::System::Object BBKPHCCHIOF; // 0x0
		// static const ::System::Object KCNCCEKKFKI; // 0x0
		::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::MGJOAOHPFBO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::MGJOAOHPFBO*))((::PBYTE)hIl2Cpp + LONPBELAPJO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LONPBELAPJO_DISPOSE_OFFSET))(this);
		}

		::System::Void KIGBILLGNOH(::System::Nullable* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable*))((::PBYTE)hIl2Cpp + LONPBELAPJO_KIGBILLGNOH_OFFSET))(this, a1);
		}

		::System::Void CHAHBFGGIDL(::System::Nullable* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable*))((::PBYTE)hIl2Cpp + LONPBELAPJO_CHAHBFGGIDL_OFFSET))(this, a1);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LONPBELAPJO_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void MOCPCLHLAHK(::RPG::GameCore::CharacterInputData* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterInputData*, ::System::Single))((::PBYTE)hIl2Cpp + LONPBELAPJO_MOCPCLHLAHK_OFFSET))(this, a1, a2);
		}

		::System::Void LFAAEANCCFM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LONPBELAPJO_LFAAEANCCFM_OFFSET))(this);
		}

		::System::Boolean IGFMKENIABC(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + LONPBELAPJO_IGFMKENIABC_OFFSET))(this, a1);
		}

		::System::Void LACMJCGFICG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LONPBELAPJO_LACMJCGFICG_OFFSET))(this);
		}

		::System::Void LBMEKFFDODL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LONPBELAPJO_LBMEKFFDODL_OFFSET))(this);
		}

		::System::Void FLGPPJJKPAH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LONPBELAPJO_FLGPPJJKPAH_OFFSET))(this);
		}

		::RPG::Client::ETravelShipState BGDKFHEBDFJ()
		{
			return ((::RPG::Client::ETravelShipState(*)(::PVOID))((::PBYTE)hIl2Cpp + LONPBELAPJO_BGDKFHEBDFJ_OFFSET))(this);
		}

		::System::Nullable* get_LastValidDestination()
		{
			return ((::System::Nullable*(*)(::PVOID))((::PBYTE)hIl2Cpp + LONPBELAPJO_GET_LASTVALIDDESTINATION_OFFSET))(this);
		}

		::System::Void set_LastValidDestination(::System::Nullable* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable*))((::PBYTE)hIl2Cpp + LONPBELAPJO_SET_LASTVALIDDESTINATION_OFFSET))(this, a1);
		}

	};
