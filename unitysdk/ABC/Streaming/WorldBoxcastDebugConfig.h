#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E865F6F8B8B44C1E.h"
#include "unitysdk/UnityEngine/A3B17C172EC49C40.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ABC_STREAMING_WORLDBOXCASTDEBUGCONFIG_A45C6C25A966B9BB_OFFSET UNITYSDK_OFFSET(0x1FAED30)
#define ABC_STREAMING_WORLDBOXCASTDEBUGCONFIG__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FAEEB0)
#define ABC_STREAMING_WORLDBOXCASTDEBUGCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1F270C0)

namespace ABC::Streaming
{
	inline static constexpr unsigned int WorldBoxcastDebugConfig_TypeDefinitionIndex = 7977;

	class WorldBoxcastDebugConfig : public ::UnityEngine::ScriptableObject
	{
	public:
		static ::E865F6F8B8B44C1E* StaticGet_B71FA7651E64E40B()
		{
			return (::E865F6F8B8B44C1E*)Il2CppClass::FromTypeDefinitionIndex(WorldBoxcastDebugConfig_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::ABC::Streaming::WorldBoxcastDebugConfig** StaticGet_F65B42BCB777CB63()
		{
			return (::ABC::Streaming::WorldBoxcastDebugConfig**)Il2CppClass::FromTypeDefinitionIndex(WorldBoxcastDebugConfig_TypeDefinitionIndex)->GetStaticField(0x8);
		}
		::System::Single Height; // 0x18
		::UnityEngine::A3B17C172EC49C40 XZNumber; // 0x1C
		::System::Single Distance; // 0x24
		::UnityEngine::Vector3 BoxHalfExtents; // 0x28
		::UnityEngine::Vector3 Direction; // 0x34
		::UnityEngine::Vector3 Quaternion; // 0x40
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::List_1<::System::String*>* LayerNames; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_STREAMING_WORLDBOXCASTDEBUGCONFIG__CTOR_OFFSET))(this);
		}

		static ::ABC::Streaming::WorldBoxcastDebugConfig* A45C6C25A966B9BB()
		{
			return ((::ABC::Streaming::WorldBoxcastDebugConfig*(*)())((::PBYTE)hIl2Cpp + ABC_STREAMING_WORLDBOXCASTDEBUGCONFIG_A45C6C25A966B9BB_OFFSET))();
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ABC_STREAMING_WORLDBOXCASTDEBUGCONFIG__CCTOR_OFFSET))();
		}
	};
}
