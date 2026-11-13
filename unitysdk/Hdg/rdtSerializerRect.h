#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rect.h"
namespace Hdg { class rdtSerializerRegistry; }
namespace System { class Object; }
namespace System::IO { class BinaryReader; }
namespace System::IO { class BinaryWriter; }

#define HDG_RDTSERIALIZERRECT_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A6AD810)
#define HDG_RDTSERIALIZERRECT_CTOR_OFFSET UNITYSDK_OFFSET(0x1A6AD800)
#define HDG_RDTSERIALIZERRECT_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1A6AD830)
#define HDG_RDTSERIALIZERRECT_READ_OFFSET UNITYSDK_OFFSET(0x1A6ADA80)
#define HDG_RDTSERIALIZERRECT_TOUNITYTYPE_OFFSET UNITYSDK_OFFSET(0x1A6AD820)
#define HDG_RDTSERIALIZERRECT_WRITE_OFFSET UNITYSDK_OFFSET(0x1A6AD860)

namespace Hdg
{
	inline static constexpr unsigned int rdtSerializerRect_TypeDefinitionIndex = 47993;

	class rdtSerializerRect : public ::System::Object
	{
	public:
		::System::Single x; // 0x10
		::System::Single width; // 0x14
		::System::Single height; // 0x18
		::System::Single y; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERRECT_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::UnityEngine::Rect a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERRECT_CTOR_1_OFFSET))(this, a1);
		}

		::UnityEngine::Rect ToUnityType()
		{
			return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERRECT_TOUNITYTYPE_OFFSET))(this);
		}

		::System::Object* Deserialize(::Hdg::rdtSerializerRegistry* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::Hdg::rdtSerializerRegistry*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERRECT_DESERIALIZE_OFFSET))(this, a1);
		}

		::System::Void Write(::System::IO::BinaryWriter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERRECT_WRITE_OFFSET))(this, a1);
		}

		::System::Void Read(::System::IO::BinaryReader* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryReader*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERRECT_READ_OFFSET))(this, a1);
		}

	};
}
