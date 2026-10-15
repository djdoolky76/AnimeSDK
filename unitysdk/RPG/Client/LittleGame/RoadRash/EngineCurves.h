#pragma once
#include "unitysdk/unitysdk.h"
namespace UnityEngine { class AnimationCurve; }

namespace RPG::Client::LittleGame::RoadRash
{
	struct alignas(8) EngineCurves
	{
		::UnityEngine::AnimationCurve* CurvatureToRoadOffsetBlendCurve; // 0x10
		::UnityEngine::AnimationCurve* CurvatureToMaxSpeedRatioCurve; // 0x18
		::UnityEngine::AnimationCurve* CurvatureToSpeedDirectionTurnSpeedRatioCurve; // 0x20
		::UnityEngine::AnimationCurve* SpeedDirectionTurnSpeedRatioCurve; // 0x28
		::UnityEngine::AnimationCurve* RotationTurnSpeedRatioCurve; // 0x30
	};
}
