#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int MaterialPropertyType_TypeDefinitionIndex = 38391;

	enum class MaterialPropertyType : ::System::Int32
	{
		Dither = 15,
		ClipPlane = 7,
		VertexStretch = 6,
		OverrideRimGlow = 13,
		SpecialWeaponEmission = 26,
		Fresnel = 12,
		Override = 2,
		AbnormalPropertyElectro = 20,
		AbnormalPropertyFreeze = 22,
		NoiseLerp = 27,
		Glitch = 1,
		MainMaps = 10,
		MatCap = 14,
		SceneEmission = 29,
		Outline = 16,
		IgnisFatuusMask = 24,
		ScreenImage = 4,
		Override2Tone = 5,
		Other = 19,
		SecondaryAlbedo = 30,
		RimGlow = 17,
		OverrideOutline = 9,
		Blush = 28,
		SecondaryEmission = 3,
		Diffuse = 11,
		WeaponBallMainMaps = 25,
		AbnormalPropertyBurn = 21,
		AbnormalProperty = 18,
		Unknown = -1,
		Transition = 0,
		GhostMask = 23,
	};
}
