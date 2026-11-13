#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightRole; }

#define LNDMNIHCIBG_CTOR_OFFSET UNITYSDK_OFFSET(0x1AFE0DE0)
#define LNDMNIHCIBG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1AFE0C80)
#define LNDMNIHCIBG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1AFE0D50)

inline static constexpr unsigned int LNDMNIHCIBG_TypeDefinitionIndex = 66849;

	class LNDMNIHCIBG : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNDMNIHCIBG_CTOR_OFFSET))(this);
		}

		::System::Boolean Equals(::RPG::Client::GridFightRole* a1, ::RPG::Client::GridFightRole* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + LNDMNIHCIBG_EQUALS_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetHashCode(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + LNDMNIHCIBG_GETHASHCODE_OFFSET))(this, a1);
		}

	};
