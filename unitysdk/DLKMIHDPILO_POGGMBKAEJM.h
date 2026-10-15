#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client { class MonoEffect; }
namespace RPG::Client { class TriggerEffectParams; }

#define DLKMIHDPILO_POGGMBKAEJM_CTOR_OFFSET UNITYSDK_OFFSET(0xF8AA640)

inline static constexpr unsigned int DLKMIHDPILO_POGGMBKAEJM_TypeDefinitionIndex = 76809;

	class DLKMIHDPILO_POGGMBKAEJM : public ::System::Object
	{
	public:
		::RPG::Client::MonoEffect* HEIHBJEEGPB; // 0x10
		::RPG::Client::TriggerEffectParams* FAONLIKGAHH; // 0x18
		::UnityEngine::Vector3 PGJJCGGBCKK; // 0x20
		::System::Single DNNGHLHHFKB; // 0x2C
		::System::Single BJACAEGKOLO; // 0x30
		::UnityEngine::Vector3 OAKCBDDKNKL; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLKMIHDPILO_POGGMBKAEJM_CTOR_OFFSET))(this);
		}

	};
