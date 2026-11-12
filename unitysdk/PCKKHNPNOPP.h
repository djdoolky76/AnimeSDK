#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client::LittleGame::ComicDessert { class TransportFlightSettings; }

#define PCKKHNPNOPP_KHJNHDOJDDP_1_OFFSET UNITYSDK_OFFSET(0xC9085D0)
#define PCKKHNPNOPP_KHJNHDOJDDP_OFFSET UNITYSDK_OFFSET(0xC907DC0)

inline static constexpr unsigned int PCKKHNPNOPP_TypeDefinitionIndex = 79746;

	class PCKKHNPNOPP : public ::System::Object
	{
	public:
		static ::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Vector3> KHJNHDOJDDP(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6)
		{
			return ((::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Vector3>(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PCKKHNPNOPP_KHJNHDOJDDP_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Vector3> KHJNHDOJDDP_1(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::RPG::Client::LittleGame::ComicDessert::TransportFlightSettings* a3)
		{
			return ((::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Vector3>(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::RPG::Client::LittleGame::ComicDessert::TransportFlightSettings*))((::PBYTE)hIl2Cpp + PCKKHNPNOPP_KHJNHDOJDDP_1_OFFSET))(a1, a2, a3);
		}

	};
