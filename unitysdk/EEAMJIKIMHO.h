#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KKPPDDOFADO.h"
namespace RPG::Client { class GridFightRole; }

#define EEAMJIKIMHO_CTOR_OFFSET UNITYSDK_OFFSET(0x1334D8C0)
#define EEAMJIKIMHO_LNEPAFGAPJH_OFFSET UNITYSDK_OFFSET(0x1334D8E0)

inline static constexpr unsigned int EEAMJIKIMHO_TypeDefinitionIndex = 65136;

	class EEAMJIKIMHO : public ::KKPPDDOFADO
	{
	public:
		::RPG::Client::GridFightRole* IAHCEGHHCKB; // 0x20
		::System::Void _ctor(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + EEAMJIKIMHO_CTOR_OFFSET))(this, a1);
		}

		::System::Void LNEPAFGAPJH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEAMJIKIMHO_LNEPAFGAPJH_OFFSET))(this);
		}

	};
