#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

#define GHHGBAOEKAJ_CTOR_OFFSET UNITYSDK_OFFSET(0x15A13210)

inline static constexpr unsigned int GHHGBAOEKAJ_TypeDefinitionIndex = 48319;

	class GHHGBAOEKAJ : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHHGBAOEKAJ_CTOR_OFFSET))(this);
		}

	};
