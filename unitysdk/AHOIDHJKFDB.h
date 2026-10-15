#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class MapEntityDef; }
namespace RPG::Client { class MapPropDef; }
namespace RPG::Client::NavMap { class IMapDataSource; }

#define AHOIDHJKFDB_EIEECBJKFJJ_OFFSET UNITYSDK_OFFSET(0xEB84F90)
#define AHOIDHJKFDB_EIIJODKOKNM_OFFSET UNITYSDK_OFFSET(0xEB850E0)
#define AHOIDHJKFDB_HLNGJPODDFP_OFFSET UNITYSDK_OFFSET(0xEB84EA0)
#define AHOIDHJKFDB_KCFIMIPOGMP_OFFSET UNITYSDK_OFFSET(0xEB84F00)

inline static constexpr unsigned int AHOIDHJKFDB_TypeDefinitionIndex = 74529;

	class AHOIDHJKFDB : public ::System::Object
	{
	public:
		static ::System::Boolean HLNGJPODDFP(::RPG::Client::MapPropDef* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::MapPropDef*))((::PBYTE)hIl2Cpp + AHOIDHJKFDB_HLNGJPODDFP_OFFSET))(a1);
		}

		static ::System::Boolean KCFIMIPOGMP(::RPG::Client::MapPropDef* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::MapPropDef*))((::PBYTE)hIl2Cpp + AHOIDHJKFDB_KCFIMIPOGMP_OFFSET))(a1);
		}

		static ::System::Boolean EIEECBJKFJJ(::RPG::Client::MapEntityDef* a1, ::RPG::Client::NavMap::IMapDataSource* a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::MapEntityDef*, ::RPG::Client::NavMap::IMapDataSource*))((::PBYTE)hIl2Cpp + AHOIDHJKFDB_EIEECBJKFJJ_OFFSET))(a1, a2);
		}

		static ::System::Boolean EIIJODKOKNM(::RPG::Client::MapPropDef* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::MapPropDef*))((::PBYTE)hIl2Cpp + AHOIDHJKFDB_EIIJODKOKNM_OFFSET))(a1);
		}

	};
