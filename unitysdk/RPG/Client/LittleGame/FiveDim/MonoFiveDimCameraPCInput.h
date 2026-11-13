#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace HedgehogTeam::EasyTouch { class Gesture; }

#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMCAMERAPCINPUT_CTOR_OFFSET UNITYSDK_OFFSET(0x1C3A7330)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMCAMERAPCINPUT_FFJOPNAEDNO_OFFSET UNITYSDK_OFFSET(0x1C3A6EE0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMCAMERAPCINPUT_IDHCMAKALIC_OFFSET UNITYSDK_OFFSET(0x1C3A6F50)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMCAMERAPCINPUT_KAGCLAMCGAM_OFFSET UNITYSDK_OFFSET(0x1C3A6FF0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMCAMERAPCINPUT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1C3A7050)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMCAMERAPCINPUT_START_OFFSET UNITYSDK_OFFSET(0x1C3A6C00)

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int MonoFiveDimCameraPCInput_TypeDefinitionIndex = 79567;

	class MonoFiveDimCameraPCInput : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean MBOOCACELEJ; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMCAMERAPCINPUT_CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMCAMERAPCINPUT_START_OFFSET))(this);
		}

		::System::Void FFJOPNAEDNO(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMCAMERAPCINPUT_FFJOPNAEDNO_OFFSET))(this, a1);
		}

		::System::Void IDHCMAKALIC(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMCAMERAPCINPUT_IDHCMAKALIC_OFFSET))(this, a1);
		}

		::System::Void KAGCLAMCGAM(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMCAMERAPCINPUT_KAGCLAMCGAM_OFFSET))(this, a1);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMCAMERAPCINPUT_ONDESTROY_OFFSET))(this);
		}

	};
}
