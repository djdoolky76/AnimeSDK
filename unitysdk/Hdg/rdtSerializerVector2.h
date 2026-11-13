#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
namespace Hdg { class rdtSerializerRegistry; }
namespace System { class Object; }
namespace System::IO { class BinaryReader; }
namespace System::IO { class BinaryWriter; }

#define HDG_RDTSERIALIZERVECTOR2_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A6B1790)
#define HDG_RDTSERIALIZERVECTOR2_CTOR_OFFSET UNITYSDK_OFFSET(0x1A6B2900)
#define HDG_RDTSERIALIZERVECTOR2_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1A6B2920)
#define HDG_RDTSERIALIZERVECTOR2_READ_OFFSET UNITYSDK_OFFSET(0x1A6B2A70)
#define HDG_RDTSERIALIZERVECTOR2_TOUNITYTYPE_OFFSET UNITYSDK_OFFSET(0x1A6B2910)
#define HDG_RDTSERIALIZERVECTOR2_WRITE_OFFSET UNITYSDK_OFFSET(0x1A6B2950)

namespace Hdg
{
	inline static constexpr unsigned int rdtSerializerVector2_TypeDefinitionIndex = 48001;

	class rdtSerializerVector2 : public ::System::Object
	{
	public:
		::System::Single y; // 0x10
		::System::Single x; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERVECTOR2_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERVECTOR2_CTOR_1_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 ToUnityType()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERVECTOR2_TOUNITYTYPE_OFFSET))(this);
		}

		::System::Object* Deserialize(::Hdg::rdtSerializerRegistry* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::Hdg::rdtSerializerRegistry*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERVECTOR2_DESERIALIZE_OFFSET))(this, a1);
		}

		::System::Void Write(::System::IO::BinaryWriter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERVECTOR2_WRITE_OFFSET))(this, a1);
		}

		::System::Void Read(::System::IO::BinaryReader* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryReader*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERVECTOR2_READ_OFFSET))(this, a1);
		}

	};
}
