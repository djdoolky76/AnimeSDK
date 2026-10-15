#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class FiveDimRenderingItem;
namespace System { class String; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMVIEW_PEOCIMCJAOD_CLEAR_OFFSET UNITYSDK_OFFSET(0xD456260)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMVIEW_PEOCIMCJAOD_CTOR_OFFSET UNITYSDK_OFFSET(0xD4562C0)

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int FiveDimView_PEOCIMCJAOD_TypeDefinitionIndex = 77193;

	class FiveDimView_PEOCIMCJAOD : public ::System::Object
	{
	public:
		::System::String* AHCPFFKPOMG; // 0x10
		::FiveDimRenderingItem* ODEKPKCDCJJ; // 0x18
		::UnityEngine::Transform* PLEHLKEICMD; // 0x20
		::UnityEngine::Renderer* ONEFCLJPGLE; // 0x28
		::UnityEngine::Transform* DICDJJOJKGF; // 0x30
		::System::Boolean GFNOCJNENHI; // 0x38
		::System::Boolean OMEPBAIGEJN; // 0x39
		::System::Byte _padding0[0x2];
		::UnityEngine::Vector3 HONCCBNOKHB; // 0x3C
		::UnityEngine::Quaternion NDBGHJDHFLH; // 0x48
		::System::Boolean NMKBHPCCGOJ; // 0x58
		::System::Boolean JCEBFAEIBFJ; // 0x59
		::System::Boolean MCMPDHLFNPG; // 0x5A
		::System::Boolean LGNDLIGICAH; // 0x5B
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
