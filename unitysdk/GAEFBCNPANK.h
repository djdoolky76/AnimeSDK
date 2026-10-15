#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CBIKMJHGEDE.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/PropMoveState.h"
#include "unitysdk/UnityEngine/Quaternion.h"

#define GAEFBCNPANK_AHEEAFKFALM_OFFSET UNITYSDK_OFFSET(0x15937E00)
#define GAEFBCNPANK_CEIGHKFGAKL_OFFSET UNITYSDK_OFFSET(0x159386E0)
#define GAEFBCNPANK_CTOR_OFFSET UNITYSDK_OFFSET(0x15939980)
#define GAEFBCNPANK_FBFACIDDINI_OFFSET UNITYSDK_OFFSET(0x159383A0)
#define GAEFBCNPANK_FJHEIEFJGGM_OFFSET UNITYSDK_OFFSET(0x15939210)
#define GAEFBCNPANK_GBCHFFLMIIC_OFFSET UNITYSDK_OFFSET(0x159382C0)
#define GAEFBCNPANK_HBJBCBJAHOJ_OFFSET UNITYSDK_OFFSET(0x15937EB0)
#define GAEFBCNPANK_JAKLFCAONLA_OFFSET UNITYSDK_OFFSET(0x15938A50)
#define GAEFBCNPANK_LFIFIEGFMOM_OFFSET UNITYSDK_OFFSET(0x15937F80)
#define GAEFBCNPANK_MNMPLEEMKKN_OFFSET UNITYSDK_OFFSET(0x15938720)
#define GAEFBCNPANK_ODDFFNPOLJO_OFFSET UNITYSDK_OFFSET(0x15938FD0)

	class GAEFBCNPANK : public ::CBIKMJHGEDE
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAEFBCNPANK_CTOR_OFFSET))(this);
		}

		::System::Void AHEEAFKFALM(::RPG::Client::LittleGame::FiveDim::PropMoveState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::PropMoveState))((::PBYTE)hIl2Cpp + GAEFBCNPANK_AHEEAFKFALM_OFFSET))(this, a1);
		}

		::System::Void HBJBCBJAHOJ(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GAEFBCNPANK_HBJBCBJAHOJ_OFFSET))(this, a1);
		}

		::System::Void LFIFIEGFMOM(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GAEFBCNPANK_LFIFIEGFMOM_OFFSET))(this, a1);
		}

		::System::Void GBCHFFLMIIC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAEFBCNPANK_GBCHFFLMIIC_OFFSET))(this);
		}

		::System::Void CEIGHKFGAKL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAEFBCNPANK_CEIGHKFGAKL_OFFSET))(this);
		}

		::System::Void MNMPLEEMKKN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GAEFBCNPANK_MNMPLEEMKKN_OFFSET))(this, a1);
		}

		::System::Void ODDFFNPOLJO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAEFBCNPANK_ODDFFNPOLJO_OFFSET))(this);
		}

		::System::Boolean FBFACIDDINI(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GAEFBCNPANK_FBFACIDDINI_OFFSET))(this, a1);
		}

		::System::Void JAKLFCAONLA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GAEFBCNPANK_JAKLFCAONLA_OFFSET))(this, a1);
		}

		::UnityEngine::Quaternion FJHEIEFJGGM(::System::Boolean a1, ::UnityEngine::Quaternion a2, ::UnityEngine::Quaternion a3, ::System::Single a4)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::System::Boolean, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::System::Single))((::PBYTE)hIl2Cpp + GAEFBCNPANK_FJHEIEFJGGM_OFFSET))(this, a1, a2, a3, a4);
		}

	};
