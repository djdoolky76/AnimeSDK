#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
namespace RPG::Client { class SimpRTXProxy; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Texture2D; }

#define RPG_CLIENT_SIMPRTXGROUP_CTOR_OFFSET UNITYSDK_OFFSET(0xE0BFDC0)
#define RPG_CLIENT_SIMPRTXGROUP_FDDFOMEPNEB_OFFSET UNITYSDK_OFFSET(0xE0BFC10)
#define RPG_CLIENT_SIMPRTXGROUP_GNPJFOIBKCF_OFFSET UNITYSDK_OFFSET(0xE0BFAA0)

namespace RPG::Client
{
	inline static constexpr unsigned int SimpRTXGroup_TypeDefinitionIndex = 70186;

	class SimpRTXGroup : public ::System::Object
	{
	public:
		::System::String* groupName; // 0x10
		::UnityEngine::Vector3 position; // 0x18
		::System::Single rotateY; // 0x24
		::UnityEngine::Vector2 scale; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::SimpRTXProxy*>* proxies; // 0x30
		::System::Int32 atlasResolution; // 0x38
		::System::Byte _padding0[0x4];
		::UnityEngine::Texture2D* atlasTexture; // 0x40
		::System::Boolean showGroupGizmos; // 0x48
		::System::Byte _padding1[0x3];
		::UnityEngine::Color groupGizmosColor; // 0x4C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPRTXGROUP_CTOR_OFFSET))(this);
		}

		::UnityEngine::Matrix4x4 GNPJFOIBKCF()
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPRTXGROUP_GNPJFOIBKCF_OFFSET))(this);
		}

		::System::Void FDDFOMEPNEB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPRTXGROUP_FDDFOMEPNEB_OFFSET))(this);
		}

	};
}
