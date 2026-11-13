#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityRelationMemberType.h"
#include "unitysdk/RPG/GameCore/EntityRelationType.h"
#include "unitysdk/System/Object.h"

#define NKLCKJGMDHG_FBOLCCEGGEH_CTOR_OFFSET UNITYSDK_OFFSET(0x1A7B8760)

inline static constexpr unsigned int NKLCKJGMDHG_FBOLCCEGGEH_TypeDefinitionIndex = 73818;

	class NKLCKJGMDHG_FBOLCCEGGEH : public ::System::Object
	{
	public:
		::RPG::GameCore::EntityRelationType MAGFJIKFBNM; // 0x10
		::RPG::GameCore::EntityRelationMemberType NKIENAICLGN; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKLCKJGMDHG_FBOLCCEGGEH_CTOR_OFFSET))(this);
		}

	};
