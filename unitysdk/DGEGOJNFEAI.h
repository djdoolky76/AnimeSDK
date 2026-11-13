#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client::LittleGame::ComicDessert { class TransportFlightSettings; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class GameObject; }

inline static constexpr unsigned int DGEGOJNFEAI_TypeDefinitionIndex = 79759;

	struct alignas(8) DGEGOJNFEAI
	{
		::UnityEngine::Vector3 FJBPOFJPFNP; // 0x10
		::UnityEngine::Vector3 KLDJPNDKLMI; // 0x1C
		::UnityEngine::Quaternion BMDHDNGHOFA; // 0x28
		::UnityEngine::Quaternion JMODBAACABL; // 0x38
		::System::Single MCEAIMBIHGH; // 0x48
		::System::Byte _padding0[0x4];
		::System::String* BDACPPLKLGL; // 0x50
		::System::Action_1<::UnityEngine::GameObject*>* HNKIKMOAPJC; // 0x58
		::System::Action* EMLJHOCGNCC; // 0x60
		::RPG::Client::LittleGame::ComicDessert::TransportFlightSettings* FEKBOMGKANN; // 0x68
	};
