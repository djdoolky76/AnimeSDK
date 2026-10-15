#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NavMap/NavPositionTargetType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client::NavMap { class IMapDataSource; }

#define NEDIMNOGKMH_DJNLDDIJPNG_OFFSET UNITYSDK_OFFSET(0xBB590E0)
#define NEDIMNOGKMH_ECLGHPGLMPP_OFFSET UNITYSDK_OFFSET(0xBB59C30)
#define NEDIMNOGKMH_EGJPAJCNCKC_OFFSET UNITYSDK_OFFSET(0xBB59350)
#define NEDIMNOGKMH_GICPIPHKENM_OFFSET UNITYSDK_OFFSET(0xBB58E00)
#define NEDIMNOGKMH_HFNEJCEDBOC_OFFSET UNITYSDK_OFFSET(0xBB59950)
#define NEDIMNOGKMH_IKENCKHMBKL_OFFSET UNITYSDK_OFFSET(0xBB591A0)
#define NEDIMNOGKMH_JHMILLPKGKF_OFFSET UNITYSDK_OFFSET(0xBB59680)
#define NEDIMNOGKMH_NGAABAAOJBB_OFFSET UNITYSDK_OFFSET(0xBB591F0)

	class NEDIMNOGKMH : public ::System::Object
	{
	public:
		static ::System::Boolean GICPIPHKENM(::RPG::Client::NavMap::IMapDataSource* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::UnityEngine::Vector3 a4, ::RPG::Client::NavMap::NavPositionTargetType a5)
		{
			return ((::System::Boolean(*)(::RPG::Client::NavMap::IMapDataSource*, ::System::UInt32, ::System::UInt32, ::UnityEngine::Vector3, ::RPG::Client::NavMap::NavPositionTargetType))((::PBYTE)hIl2Cpp + NEDIMNOGKMH_GICPIPHKENM_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Boolean DJNLDDIJPNG(::System::UInt32 a1, ::System::UInt32 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::UInt32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NEDIMNOGKMH_DJNLDDIJPNG_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean ECLGHPGLMPP(::RPG::Client::NavMap::IMapDataSource* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::UnityEngine::Vector3 a4)
		{
			return ((::System::Boolean(*)(::RPG::Client::NavMap::IMapDataSource*, ::System::UInt32, ::System::UInt32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NEDIMNOGKMH_ECLGHPGLMPP_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean EGJPAJCNCKC(::RPG::Client::NavMap::IMapDataSource* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::UnityEngine::Vector3 a4)
		{
			return ((::System::Boolean(*)(::RPG::Client::NavMap::IMapDataSource*, ::System::UInt32, ::System::UInt32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NEDIMNOGKMH_EGJPAJCNCKC_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean NGAABAAOJBB(::RPG::Client::NavMap::IMapDataSource* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::UnityEngine::Vector3 a4)
		{
			return ((::System::Boolean(*)(::RPG::Client::NavMap::IMapDataSource*, ::System::UInt32, ::System::UInt32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NEDIMNOGKMH_NGAABAAOJBB_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean JHMILLPKGKF(::RPG::Client::NavMap::IMapDataSource* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::UnityEngine::Vector3 a4)
		{
			return ((::System::Boolean(*)(::RPG::Client::NavMap::IMapDataSource*, ::System::UInt32, ::System::UInt32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NEDIMNOGKMH_JHMILLPKGKF_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean HFNEJCEDBOC(::RPG::Client::NavMap::IMapDataSource* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::UnityEngine::Vector3 a4)
		{
			return ((::System::Boolean(*)(::RPG::Client::NavMap::IMapDataSource*, ::System::UInt32, ::System::UInt32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NEDIMNOGKMH_HFNEJCEDBOC_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean IKENCKHMBKL(::RPG::Client::NavMap::NavPositionTargetType a1, ::RPG::Client::NavMap::NavPositionTargetType a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::NavMap::NavPositionTargetType, ::RPG::Client::NavMap::NavPositionTargetType))((::PBYTE)hIl2Cpp + NEDIMNOGKMH_IKENCKHMBKL_OFFSET))(a1, a2);
		}

	};
