#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ACF10FE87B4C5617.h"

#define ABC_CHESSGAME_CHESSANIMIKMONOCOMPONENT_AB733626E8906073__CTOR_OFFSET UNITYSDK_OFFSET(0x1E3A0E0)

namespace ABC::ChessGame
{
	inline static constexpr unsigned int ChessAnimIKMonoComponent_AB733626E8906073_TypeDefinitionIndex = 9534;

	class ChessAnimIKMonoComponent_AB733626E8906073 : public ::System::Object
	{
	public:
		::UnityEngine::ACF10FE87B4C5617 BFB1EB8A1116F1CD; // 0x10
		::UnityEngine::ACF10FE87B4C5617 B3B81275C395F009; // 0x50
		::System::Int32 A1C44365EAE0A839; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CHESSGAME_CHESSANIMIKMONOCOMPONENT_AB733626E8906073__CTOR_OFFSET))(this);
		}
	};
}
