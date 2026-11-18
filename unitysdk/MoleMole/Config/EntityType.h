#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int EntityType_TypeDefinitionIndex = 67069;

	enum class EntityType : ::System::Int32
	{
		Buddy = 20,
		ServerTriggerBox = 23,
		ServerNPC = 22,
		UIBuddy = 31,
		UIAvatar = 28,
		TimeDrivenAttack = 15,
		Skybox = 7,
		Bullet = 14,
		Robot = 4,
		Crate = 16,
		LevelArea = 9,
		Prop = 36,
		Effect = 17,
		TeamEntity = 25,
		Particle = 6,
		TimelineActor = 41,
		UIWeapon = 33,
		IndicatedLight = 35,
		Avatar = 1,
		MainCamera = 11,
		AraTrail = 24,
		Monster = 2,
		EnemyIndicator = 27,
		None = 0,
		CurveMove = 29,
		UI3DModel = 34,
		Follower = 3,
		SceneObject = 26,
		Gadget = 39,
		UIMonster = 32,
		SmallItem = 40,
		Level = 8,
		Trigger = 10,
		DropItem = 13,
		PartyGameSceneObj = 38,
		MainCityAvatarData = 37,
		MiniMap = 12,
		NPC = 5,
		DodgeDummy = 18,
		Count = 42,
		ExecuteCore = 19,
		SimpleRigidbody = 30,
		Other = 21,
	};
}
