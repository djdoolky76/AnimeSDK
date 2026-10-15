#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client { class MapDef; }
namespace RPG::Client { class MapNpcDef; }
namespace RPG::Client::NavMap { class IMapDataSource; }

#define IMJAFIDKDKK_CECMCADBMDE_OFFSET UNITYSDK_OFFSET(0x2E83BB0)
#define IMJAFIDKDKK_CEMAMBKBLFP_OFFSET UNITYSDK_OFFSET(0x2E83D40)
#define IMJAFIDKDKK_FLOFCCPEDBF_1_OFFSET UNITYSDK_OFFSET(0x164CDBC0)
#define IMJAFIDKDKK_FLOFCCPEDBF_2_OFFSET UNITYSDK_OFFSET(0x164CDEE0)
#define IMJAFIDKDKK_FLOFCCPEDBF_3_OFFSET UNITYSDK_OFFSET(0x164CE1A0)
#define IMJAFIDKDKK_FLOFCCPEDBF_OFFSET UNITYSDK_OFFSET(0x164CDAB0)
#define IMJAFIDKDKK_GDEGLHNDNFJ_OFFSET UNITYSDK_OFFSET(0x2E83AD0)
#define IMJAFIDKDKK_GET_ORIGINMATRIX_OFFSET UNITYSDK_OFFSET(0x2E83C70)
#define IMJAFIDKDKK_HDKJMNPDHJH_OFFSET UNITYSDK_OFFSET(0x164CD810)
#define IMJAFIDKDKK_HHMFILFAMNA_OFFSET UNITYSDK_OFFSET(0x2E83AF0)
#define IMJAFIDKDKK_OKHJOMMDKHI_OFFSET UNITYSDK_OFFSET(0x2E83CC0)
#define IMJAFIDKDKK_POLCNFCECHB_OFFSET UNITYSDK_OFFSET(0x164CD6F0)
#define IMJAFIDKDKK_SET_ORIGINMATRIX_OFFSET UNITYSDK_OFFSET(0x2E83CA0)

inline static constexpr unsigned int IMJAFIDKDKK_TypeDefinitionIndex = 60591;

	struct alignas(4) IMJAFIDKDKK
	{
		::UnityEngine::Matrix4x4 _OriginMatrix_k__BackingField; // 0x10
		/*
		static ::IMJAFIDKDKK POLCNFCECHB(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
		{
			return ((::IMJAFIDKDKK(*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + IMJAFIDKDKK_POLCNFCECHB_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::IMJAFIDKDKK HDKJMNPDHJH(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
		{
			return ((::IMJAFIDKDKK(*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + IMJAFIDKDKK_HDKJMNPDHJH_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::IMJAFIDKDKK FLOFCCPEDBF(::RPG::Client::MapNpcDef* a1)
		{
			return ((::IMJAFIDKDKK(*)(::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + IMJAFIDKDKK_FLOFCCPEDBF_OFFSET))(a1);
		}
		*/

		/*
		static ::IMJAFIDKDKK FLOFCCPEDBF_1(::RPG::Client::MapNpcDef* a1, ::RPG::Client::MapDef* a2)
		{
			return ((::IMJAFIDKDKK(*)(::RPG::Client::MapNpcDef*, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + IMJAFIDKDKK_FLOFCCPEDBF_1_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::IMJAFIDKDKK FLOFCCPEDBF_2(::RPG::Client::MapNpcDef* a1, ::RPG::Client::NavMap::IMapDataSource* a2)
		{
			return ((::IMJAFIDKDKK(*)(::RPG::Client::MapNpcDef*, ::RPG::Client::NavMap::IMapDataSource*))((::PBYTE)hIl2Cpp + IMJAFIDKDKK_FLOFCCPEDBF_2_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::IMJAFIDKDKK FLOFCCPEDBF_3(::System::Single a1, ::System::UInt32 a2)
		{
			return ((::IMJAFIDKDKK(*)(::System::Single, ::System::UInt32))((::PBYTE)hIl2Cpp + IMJAFIDKDKK_FLOFCCPEDBF_3_OFFSET))(a1, a2);
		}
		*/

		::UnityEngine::Matrix4x4 GDEGLHNDNFJ()
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID))((::PBYTE)hIl2Cpp + IMJAFIDKDKK_GDEGLHNDNFJ_OFFSET))(this);
		}

		::UnityEngine::Vector3 HHMFILFAMNA()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + IMJAFIDKDKK_HHMFILFAMNA_OFFSET))(this);
		}

		::UnityEngine::Quaternion CECMCADBMDE()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + IMJAFIDKDKK_CECMCADBMDE_OFFSET))(this);
		}

		::UnityEngine::Matrix4x4 get_OriginMatrix()
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID))((::PBYTE)hIl2Cpp + IMJAFIDKDKK_GET_ORIGINMATRIX_OFFSET))(this);
		}

		::System::Void set_OriginMatrix(::UnityEngine::Matrix4x4 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + IMJAFIDKDKK_SET_ORIGINMATRIX_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 OKHJOMMDKHI()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + IMJAFIDKDKK_OKHJOMMDKHI_OFFSET))(this);
		}

		::UnityEngine::Quaternion CEMAMBKBLFP()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + IMJAFIDKDKK_CEMAMBKBLFP_OFFSET))(this);
		}

	};
