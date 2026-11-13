#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGameModifier.h"
class NJKFOJJDGGG;

#define KGFNADPCPCE_BHHICIDABKO_OFFSET UNITYSDK_OFFSET(0x19763EA0)
#define KGFNADPCPCE_CTOR_OFFSET UNITYSDK_OFFSET(0x19763E40)
#define KGFNADPCPCE_UPDATE_OFFSET UNITYSDK_OFFSET(0x19763E50)

inline static constexpr unsigned int KGFNADPCPCE_TypeDefinitionIndex = 66633;

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
