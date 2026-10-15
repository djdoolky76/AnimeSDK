#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/KLNKLOMDIIC.h"
#include "unitysdk/UnityEngine/Quaternion.h"
class PLEODCMINJF;
namespace RPG::Client { class MapDef; }
namespace RPG::Client::NavMap { class MapData; }
namespace RPG::GameCore { class LittleGameNavMapIconConfig; }
namespace System { class String; }

#define EDCKNACBCGB_HICKCJHECBC_OFFSET UNITYSDK_OFFSET(0x1330FF60)
#define EDCKNACBCGB_HKGJOCDLEHB_1_OFFSET UNITYSDK_OFFSET(0x1330FCE0)
#define EDCKNACBCGB_HKGJOCDLEHB_OFFSET UNITYSDK_OFFSET(0x1330FB20)
#define EDCKNACBCGB_KIEMMIBJFBG_OFFSET UNITYSDK_OFFSET(0x1330FA20)
#define EDCKNACBCGB_LADFJOCICPI_OFFSET UNITYSDK_OFFSET(0x1330F860)

inline static constexpr unsigned int EDCKNACBCGB_TypeDefinitionIndex = 74676;

	class EDCKNACBCGB : public ::System::Object
	{
	public:
		// static const ::System::String* BAHLDFMIJFG; // 0x0
		static ::System::Boolean LADFJOCICPI(::RPG::Client::NavMap::MapData* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::KLNKLOMDIIC a5)
		{
			return ((::System::Boolean(*)(::RPG::Client::NavMap::MapData*, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::KLNKLOMDIIC))((::PBYTE)hIl2Cpp + EDCKNACBCGB_LADFJOCICPI_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Boolean KIEMMIBJFBG(::RPG::Client::NavMap::MapData* a1, ::PLEODCMINJF* a2, ::System::UInt32 a3, ::System::String* a4, ::Il2CppArray<::System::Int16>* a5)
		{
			return ((::System::Boolean(*)(::RPG::Client::NavMap::MapData*, ::PLEODCMINJF*, ::System::UInt32, ::System::String*, ::Il2CppArray<::System::Int16>*))((::PBYTE)hIl2Cpp + EDCKNACBCGB_KIEMMIBJFBG_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Boolean HKGJOCDLEHB(::RPG::Client::NavMap::MapData* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::RPG::GameCore::LittleGameNavMapIconConfig* a5)
		{
			return ((::System::Boolean(*)(::RPG::Client::NavMap::MapData*, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::RPG::GameCore::LittleGameNavMapIconConfig*))((::PBYTE)hIl2Cpp + EDCKNACBCGB_HKGJOCDLEHB_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Boolean HKGJOCDLEHB_1(::RPG::Client::MapDef* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::RPG::GameCore::LittleGameNavMapIconConfig* a5)
		{
			return ((::System::Boolean(*)(::RPG::Client::MapDef*, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::RPG::GameCore::LittleGameNavMapIconConfig*))((::PBYTE)hIl2Cpp + EDCKNACBCGB_HKGJOCDLEHB_1_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::UnityEngine::Quaternion HICKCJHECBC(::KLNKLOMDIIC a1)
		{
			return ((::UnityEngine::Quaternion(*)(::KLNKLOMDIIC))((::PBYTE)hIl2Cpp + EDCKNACBCGB_HICKCJHECBC_OFFSET))(a1);
		}

	};
