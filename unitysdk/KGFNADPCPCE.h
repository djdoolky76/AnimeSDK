#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGameModifier.h"
class NJKFOJJDGGG;

#define KGFNADPCPCE_BHHICIDABKO_OFFSET UNITYSDK_OFFSET(0xB3DDEF0)
#define KGFNADPCPCE_CTOR_OFFSET UNITYSDK_OFFSET(0xB3DDE90)
#define KGFNADPCPCE_UPDATE_OFFSET UNITYSDK_OFFSET(0xB3DDEA0)

inline static constexpr unsigned int KGFNADPCPCE_TypeDefinitionIndex = 65033;

	class KGFNADPCPCE : public ::RPG::Client::GridFightGameModifier
	{
	public:
		::System::Void _ctor(::NJKFOJJDGGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJKFOJJDGGG*))((::PBYTE)hIl2Cpp + KGFNADPCPCE_CTOR_OFFSET))(this, a1);
		}

		::System::Void Update(::NJKFOJJDGGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJKFOJJDGGG*))((::PBYTE)hIl2Cpp + KGFNADPCPCE_UPDATE_OFFSET))(this, a1);
		}

		::System::UInt32 BHHICIDABKO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KGFNADPCPCE_BHHICIDABKO_OFFSET))(this);
		}

	};
