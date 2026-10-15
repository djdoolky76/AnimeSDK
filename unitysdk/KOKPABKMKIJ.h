#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/System/Object.h"
class CIEEHMBGEIF;
class OFAKEFLLHNP;
namespace RPG::Client { class GridFightTrait; }

#define KOKPABKMKIJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB5A1200)
#define KOKPABKMKIJ_LNEPAFGAPJH_OFFSET UNITYSDK_OFFSET(0xB5A12E0)
#define KOKPABKMKIJ_PAMKOLICNOL_OFFSET UNITYSDK_OFFSET(0xB5A14D0)

inline static constexpr unsigned int KOKPABKMKIJ_TypeDefinitionIndex = 65366;

	class KOKPABKMKIJ : public ::System::Object
	{
	public:
		::RPG::Client::GridFightTrait* ENFAMOIAMGL; // 0x10
		::CIEEHMBGEIF* IAFNNMFIMOI; // 0x18
		::System::Void _ctor(::RPG::Client::GridFightTrait* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + KOKPABKMKIJ_CTOR_OFFSET))(this, a1);
		}

		::System::Void LNEPAFGAPJH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOKPABKMKIJ_LNEPAFGAPJH_OFFSET))(this);
		}

		::OFAKEFLLHNP* PAMKOLICNOL(::RPG::GameCore::AvatarPropertyType a1)
		{
			return ((::OFAKEFLLHNP*(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + KOKPABKMKIJ_PAMKOLICNOL_OFFSET))(this, a1);
		}

	};
