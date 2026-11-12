#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGameModifier.h"
class NJKFOJJDGGG;

#define NFKCKIAINPM_CTOR_OFFSET UNITYSDK_OFFSET(0xC472A10)
#define NFKCKIAINPM_MLPIEIDOCFK_OFFSET UNITYSDK_OFFSET(0xC472A20)

inline static constexpr unsigned int NFKCKIAINPM_TypeDefinitionIndex = 66628;

	class NFKCKIAINPM : public ::RPG::Client::GridFightGameModifier
	{
	public:
		::System::Void _ctor(::NJKFOJJDGGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJKFOJJDGGG*))((::PBYTE)hIl2Cpp + NFKCKIAINPM_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean MLPIEIDOCFK(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + NFKCKIAINPM_MLPIEIDOCFK_OFFSET))(this, a1, a2);
		}

	};
