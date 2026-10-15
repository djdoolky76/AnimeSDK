#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client { class MonoEffect; }
namespace RPG::Client { class TriggerEffectParams; }

#define DLKMIHDPILO_POGGMBKAEJM_CTOR_OFFSET UNITYSDK_OFFSET(0xF8A4C50)

inline static constexpr unsigned int DLKMIHDPILO_POGGMBKAEJM_TypeDefinitionIndex = 76808;

	class DLKMIHDPILO_POGGMBKAEJM : public ::System::Object
	{
	public:
		::RPG::Client::MonoEffect* HEIHBJEEGPB; // 0x10
		::RPG::Client::TriggerEffectParams* FAONLIKGAHH; // 0x18
		::UnityEngine::Vector3 OAKCBDDKNKL; // 0x20
		::UnityEngine::Vector3 PGJJCGGBCKK; // 0x2C
		::System::Single DNNGHLHHFKB; // 0x38
		::System::Single BJACAEGKOLO; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLKMIHDPILO_POGGMBKAEJM_CTOR_OFFSET))(this);
		}

	};
