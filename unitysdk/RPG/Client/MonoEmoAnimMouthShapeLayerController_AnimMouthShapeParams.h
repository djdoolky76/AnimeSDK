#pragma once
#include "unitysdk/unitysdk.h"

#define RPG_CLIENT_MONOEMOANIMMOUTHSHAPELAYERCONTROLLER_ANIMMOUTHSHAPEPARAMS_ALJJDGONFDD_OFFSET UNITYSDK_OFFSET(0xD816060)
#define RPG_CLIENT_MONOEMOANIMMOUTHSHAPELAYERCONTROLLER_ANIMMOUTHSHAPEPARAMS_EBLLCHBCJGG_OFFSET UNITYSDK_OFFSET(0xD8160E0)
#define RPG_CLIENT_MONOEMOANIMMOUTHSHAPELAYERCONTROLLER_ANIMMOUTHSHAPEPARAMS_GET_FULLPARAMS_OFFSET UNITYSDK_OFFSET(0xD815F20)
#define RPG_CLIENT_MONOEMOANIMMOUTHSHAPELAYERCONTROLLER_ANIMMOUTHSHAPEPARAMS_GET_MIDDLEPARAMS_OFFSET UNITYSDK_OFFSET(0xD815F70)
#define RPG_CLIENT_MONOEMOANIMMOUTHSHAPELAYERCONTROLLER_ANIMMOUTHSHAPEPARAMS_GET_SMALLPARAMS_OFFSET UNITYSDK_OFFSET(0xD815FC0)
#define RPG_CLIENT_MONOEMOANIMMOUTHSHAPELAYERCONTROLLER_ANIMMOUTHSHAPEPARAMS_GET_STOPPARAMS_OFFSET UNITYSDK_OFFSET(0xD816010)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEmoAnimMouthShapeLayerController_AnimMouthShapeParams_TypeDefinitionIndex = 71142;

	struct alignas(4) MonoEmoAnimMouthShapeLayerController_AnimMouthShapeParams
	{
		::System::Single Full; // 0x10
		::System::Single Middle; // 0x14
		::System::Single Small; // 0x18
		::System::Single Stop; // 0x1C
		/*
		static ::RPG::Client::MonoEmoAnimMouthShapeLayerController_AnimMouthShapeParams get_FullParams()
		{
			return ((::RPG::Client::MonoEmoAnimMouthShapeLayerController_AnimMouthShapeParams(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOANIMMOUTHSHAPELAYERCONTROLLER_ANIMMOUTHSHAPEPARAMS_GET_FULLPARAMS_OFFSET))();
		}
		*/

		/*
		static ::RPG::Client::MonoEmoAnimMouthShapeLayerController_AnimMouthShapeParams get_MiddleParams()
		{
			return ((::RPG::Client::MonoEmoAnimMouthShapeLayerController_AnimMouthShapeParams(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOANIMMOUTHSHAPELAYERCONTROLLER_ANIMMOUTHSHAPEPARAMS_GET_MIDDLEPARAMS_OFFSET))();
		}
		*/

		/*
		static ::RPG::Client::MonoEmoAnimMouthShapeLayerController_AnimMouthShapeParams get_SmallParams()
		{
			return ((::RPG::Client::MonoEmoAnimMouthShapeLayerController_AnimMouthShapeParams(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOANIMMOUTHSHAPELAYERCONTROLLER_ANIMMOUTHSHAPEPARAMS_GET_SMALLPARAMS_OFFSET))();
		}
		*/

		/*
		static ::RPG::Client::MonoEmoAnimMouthShapeLayerController_AnimMouthShapeParams get_StopParams()
		{
			return ((::RPG::Client::MonoEmoAnimMouthShapeLayerController_AnimMouthShapeParams(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOANIMMOUTHSHAPELAYERCONTROLLER_ANIMMOUTHSHAPEPARAMS_GET_STOPPARAMS_OFFSET))();
		}
		*/

		/*
		static ::RPG::Client::MonoEmoAnimMouthShapeLayerController_AnimMouthShapeParams ALJJDGONFDD(::RPG::Client::MonoEmoAnimMouthShapeLayerController_AnimMouthShapeParams a1, ::RPG::Client::MonoEmoAnimMouthShapeLayerController_AnimMouthShapeParams a2)
		{
			return ((::RPG::Client::MonoEmoAnimMouthShapeLayerController_AnimMouthShapeParams(*)(::RPG::Client::MonoEmoAnimMouthShapeLayerController_AnimMouthShapeParams, ::RPG::Client::MonoEmoAnimMouthShapeLayerController_AnimMouthShapeParams))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOANIMMOUTHSHAPELAYERCONTROLLER_ANIMMOUTHSHAPEPARAMS_ALJJDGONFDD_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::RPG::Client::MonoEmoAnimMouthShapeLayerController_AnimMouthShapeParams EBLLCHBCJGG(::RPG::Client::MonoEmoAnimMouthShapeLayerController_AnimMouthShapeParams a1, ::System::Single a2)
		{
			return ((::RPG::Client::MonoEmoAnimMouthShapeLayerController_AnimMouthShapeParams(*)(::RPG::Client::MonoEmoAnimMouthShapeLayerController_AnimMouthShapeParams, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOANIMMOUTHSHAPELAYERCONTROLLER_ANIMMOUTHSHAPEPARAMS_EBLLCHBCJGG_OFFSET))(a1, a2);
		}
		*/

	};
}
