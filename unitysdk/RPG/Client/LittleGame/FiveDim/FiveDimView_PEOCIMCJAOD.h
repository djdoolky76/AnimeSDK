#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class FiveDimRenderingItem;
namespace System { class String; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMVIEW_PEOCIMCJAOD_CLEAR_OFFSET UNITYSDK_OFFSET(0xDEC3520)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMVIEW_PEOCIMCJAOD_CTOR_OFFSET UNITYSDK_OFFSET(0xDEC3580)

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int FiveDimView_PEOCIMCJAOD_TypeDefinitionIndex = 79527;

	class FiveDimView_PEOCIMCJAOD : public ::System::Object
	{
	public:
		::UnityEngine::Renderer* ONEFCLJPGLE; // 0x10
		::UnityEngine::Transform* DICDJJOJKGF; // 0x18
		::FiveDimRenderingItem* ODEKPKCDCJJ; // 0x20
		::UnityEngine::Transform* PLEHLKEICMD; // 0x28
		::System::String* AHCPFFKPOMG; // 0x30
		::System::Boolean NMKBHPCCGOJ; // 0x38
		::System::Boolean JCEBFAEIBFJ; // 0x39
		::System::Byte _padding0[0x2];
		::UnityEngine::Vector3 HONCCBNOKHB; // 0x3C
		::System::Boolean OMEPBAIGEJN; // 0x48
		::System::Boolean GFNOCJNENHI; // 0x49
		::System::Boolean MCMPDHLFNPG; // 0x4A
		::System::Boolean LGNDLIGICAH; // 0x4B
		::UnityEngine::Quaternion NDBGHJDHFLH; // 0x4C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMVIEW_PEOCIMCJAOD_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMVIEW_PEOCIMCJAOD_CLEAR_OFFSET))(this);
		}

	};
}
