#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/BombType.h"
#include "unitysdk/System/Object.h"

#define ELPJKJLHBAA_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA33080)

inline static constexpr unsigned int ELPJKJLHBAA_TypeDefinitionIndex = 42224;

	class ELPJKJLHBAA : public ::System::Object
	{
	public:
		::RPG::GameCore::Match3::BombType FEKGEPDLOCE; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELPJKJLHBAA_CTOR_OFFSET))(this);
		}

	};
