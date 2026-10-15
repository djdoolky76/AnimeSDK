#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightTrait; }
namespace RPG::Client { class IGridFightTraitEffect; }

#define COJJLHDODMP_KPKLEJFGPHO_OFFSET UNITYSDK_OFFSET(0xDCB8620)

inline static constexpr unsigned int COJJLHDODMP_TypeDefinitionIndex = 65456;

	class COJJLHDODMP : public ::System::Object
	{
	public:
		static ::RPG::Client::IGridFightTraitEffect* KPKLEJFGPHO(::System::UInt32 a1, ::RPG::Client::GridFightTrait* a2)
		{
			return ((::RPG::Client::IGridFightTraitEffect*(*)(::System::UInt32, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + COJJLHDODMP_KPKLEJFGPHO_OFFSET))(a1, a2);
		}

	};
