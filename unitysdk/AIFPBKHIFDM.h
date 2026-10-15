#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/PieceTag.h"
#include "unitysdk/System/Object.h"

#define AIFPBKHIFDM_CTOR_OFFSET UNITYSDK_OFFSET(0x1C85F810)

inline static constexpr unsigned int AIFPBKHIFDM_TypeDefinitionIndex = 42258;

	class AIFPBKHIFDM : public ::System::Object
	{
	public:
		::RPG::GameCore::Match3::PieceTag NHALJPDONCP; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIFPBKHIFDM_CTOR_OFFSET))(this);
		}

	};
