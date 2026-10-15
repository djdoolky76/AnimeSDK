#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class CEHBAPGFOJH;
class INBJBBGLCKJ;
namespace RPG::Client::NavMap { class IMapDataSource; }
namespace RPG::Client::NavMap { class ITrackPointInfo; }

#define MBGICAKMMDL_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB854250)
#define MBGICAKMMDL_OPGJPKNJNHO_OFFSET UNITYSDK_OFFSET(0xB8541B0)
#define MBGICAKMMDL_PINOHKICPPA_OFFSET UNITYSDK_OFFSET(0xB854490)

inline static constexpr unsigned int MBGICAKMMDL_TypeDefinitionIndex = 74574;

	class MBGICAKMMDL : public ::System::Object
	{
	public:
		static ::CEHBAPGFOJH* OPGJPKNJNHO()
		{
			return ((::CEHBAPGFOJH*(*)())((::PBYTE)hIl2Cpp + MBGICAKMMDL_OPGJPKNJNHO_OFFSET))();
		}

		static ::INBJBBGLCKJ* BPLPBPMEODA(::RPG::Client::NavMap::IMapDataSource* a1, ::RPG::Client::NavMap::ITrackPointInfo* a2)
		{
			return ((::INBJBBGLCKJ*(*)(::RPG::Client::NavMap::IMapDataSource*, ::RPG::Client::NavMap::ITrackPointInfo*))((::PBYTE)hIl2Cpp + MBGICAKMMDL_BPLPBPMEODA_OFFSET))(a1, a2);
		}

		static ::INBJBBGLCKJ* PINOHKICPPA(::RPG::Client::NavMap::IMapDataSource* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::INBJBBGLCKJ*(*)(::RPG::Client::NavMap::IMapDataSource*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MBGICAKMMDL_PINOHKICPPA_OFFSET))(a1, a2);
		}

	};
