#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ScreenEffectType_TypeDefinitionIndex = 81408;

	enum class ScreenEffectType : ::System::Int32
	{
		FXColorCorrection = 8,
		ScreenSpacePlanarReflection = 40,
		ColorCurves = 32,
		Glitch = 1,
		Vignette = 2,
		ColorAdjustments = 7,
		SplitToning = 43,
		MonsterIgnisFatuus = 22,
		NapContactShadow = 37,
		FXFog = 14,
		PaniniProjection = 38,
		ChannelMixer = 30,
		LensDirt = 18,
		AmplifyOcclusion = 28,
		ColorLookup = 24,
		UnsharpMask = 23,
		RadialBlur = 3,
		AutoExposure = 26,
		NapBloom = 13,
		DepthOfField = 5,
		CharacterIgnisFatuus = 21,
		ChromaticAberration = 11,
		LensDistortion = 10,
		VREffects = 17,
		NapCapsuleAOLighting = 36,
		ShadowsMidtonesHighlights = 42,
		OldCRT = 15,
		ScreenSpaceReflection = 41,
		Unknown = 0,
		WhiteBalance = 45,
		CharacterVolumeProxy = 31,
		ScreenEffects = 6,
		CharacterColorCorrection = 12,
		FilmGrain = 9,
		Lighting = 35,
		Distortion = 16,
		ScreenSpaceAmbientOcclusion = 27,
		LiftGammaGain = 34,
		PartialBlur = 39,
		MotionBlur = 19,
		Tonemapping = 44,
		DirectionalBlur = 20,
		GaussianBlur = 4,
		Culling = 33,
		Caustics = 29,
		FXComicDot = 25,
	};
}
