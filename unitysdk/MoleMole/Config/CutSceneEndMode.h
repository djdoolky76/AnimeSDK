#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int CutSceneEndMode_TypeDefinitionIndex = 64915;

	enum class CutSceneEndMode : ::System::Byte
	{
		Destory = 1,
		PlayFinished = 0,
	};
}
