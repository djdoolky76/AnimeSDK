#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ETimelineControlGameLevelRotation.h"
#include "unitysdk/RPG/Client/LittleGame/TimelineControlGameWorld_LevelGroup.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3Int.h"
class HPCKCJDCNFM;
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define AFOAMOJGBFC_BLPLAFPIJPC_OFFSET UNITYSDK_OFFSET(0x1C852E80)
#define AFOAMOJGBFC_BPLHGGOHOMB_OFFSET UNITYSDK_OFFSET(0x1C852E40)
#define AFOAMOJGBFC_CTOR_OFFSET UNITYSDK_OFFSET(0x1C852F00)
#define AFOAMOJGBFC_FOBFBGPONKO_OFFSET UNITYSDK_OFFSET(0x1C852EC0)

inline static constexpr unsigned int AFOAMOJGBFC_TypeDefinitionIndex = 42526;

	class AFOAMOJGBFC : public ::System::Object
	{
	public:
		::RPG::Client::LittleGame::TimelineControlGameWorld_LevelGroup EJEHPEFPPNL; // 0x10
		::Il2CppArray<::HPCKCJDCNFM*>* POIBMHKAKAA; // 0x38
		::RPG::Client::LittleGame::ETimelineControlGameLevelRotation NMELCPIOKNO; // 0x40
		::UnityEngine::Vector3Int BBFOLEOPPPL; // 0x44
		::System::Boolean CAGCHKJHMPD; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFOAMOJGBFC_CTOR_OFFSET))(this);
		}

		::System::String* BPLHGGOHOMB()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFOAMOJGBFC_BPLHGGOHOMB_OFFSET))(this);
		}

		::UnityEngine::Transform* BLPLAFPIJPC()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFOAMOJGBFC_BLPLAFPIJPC_OFFSET))(this);
		}

		::UnityEngine::Transform* FOBFBGPONKO()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFOAMOJGBFC_FOBFBGPONKO_OFFSET))(this);
		}

	};
