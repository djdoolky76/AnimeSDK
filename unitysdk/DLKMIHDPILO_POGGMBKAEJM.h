#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client { class MonoEffect; }
namespace RPG::Client { class TriggerEffectParams; }

#define DLKMIHDPILO_POGGMBKAEJM_CTOR_OFFSET UNITYSDK_OFFSET(0x18678E90)

inline static constexpr unsigned int DLKMIHDPILO_POGGMBKAEJM_TypeDefinitionIndex = 79142;

	class DLKMIHDPILO_POGGMBKAEJM : public ::System::Object
	{
	public:
		::RPG::Client::MonoEffect* HEIHBJEEGPB; // 0x10
		::RPG::Client::TriggerEffectParams* FAONLIKGAHH; // 0x18
		::System::Single DNNGHLHHFKB; // 0x20
		::System::Single BJACAEGKOLO; // 0x24
		::UnityEngine::Vector3 PGJJCGGBCKK; // 0x28
		::UnityEngine::Vector3 OAKCBDDKNKL; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLKMIHDPILO_POGGMBKAEJM_CTOR_OFFSET))(this);
		}

	};
