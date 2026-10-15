#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ExpeditionBattleRoute; }

#define FFPAHFKMNOC_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x15741FE0)
#define FFPAHFKMNOC_CTOR_OFFSET UNITYSDK_OFFSET(0x15742120)

inline static constexpr unsigned int FFPAHFKMNOC_TypeDefinitionIndex = 63868;

	class FFPAHFKMNOC : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFPAHFKMNOC_CTOR_OFFSET))(this);
		}

		::RPG::Client::ExpeditionBattleRoute* BPLPBPMEODA(::System::UInt32 a1)
		{
			return ((::RPG::Client::ExpeditionBattleRoute*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FFPAHFKMNOC_BPLPBPMEODA_OFFSET))(this, a1);
		}

	};
