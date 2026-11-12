#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace Hdg { class rdtSerializerRegistry; }
namespace System { class Object; }
namespace System::IO { class BinaryReader; }
namespace System::IO { class BinaryWriter; }

#define HDG_RDTSERIALIZERVECTOR3_CTOR_1_OFFSET UNITYSDK_OFFSET(0xB5A1C40)
#define HDG_RDTSERIALIZERVECTOR3_CTOR_OFFSET UNITYSDK_OFFSET(0xB5A1FF0)
#define HDG_RDTSERIALIZERVECTOR3_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0xB5ABFD0)
#define HDG_RDTSERIALIZERVECTOR3_READ_OFFSET UNITYSDK_OFFSET(0xB5A2000)
#define HDG_RDTSERIALIZERVECTOR3_TOUNITYTYPE_OFFSET UNITYSDK_OFFSET(0xB5A1CD0)
#define HDG_RDTSERIALIZERVECTOR3_WRITE_OFFSET UNITYSDK_OFFSET(0xB5A1DE0)

namespace Hdg
{
	inline static constexpr unsigned int rdtSerializerVector3_TypeDefinitionIndex = 48002;

	class rdtSerializerVector3 : public ::System::Object
	{
	public:
		::System::Single y; // 0x10
		::System::Single x; // 0x14
		::System::Single z; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERVECTOR3_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERVECTOR3_CTOR_1_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 ToUnityType()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERVECTOR3_TOUNITYTYPE_OFFSET))(this);
		}

		::System::Object* Deserialize(::Hdg::rdtSerializerRegistry* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::Hdg::rdtSerializerRegistry*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERVECTOR3_DESERIALIZE_OFFSET))(this, a1);
		}

		::System::Void Write(::System::IO::BinaryWriter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERVECTOR3_WRITE_OFFSET))(this, a1);
		}

		::System::Void Read(::System::IO::BinaryReader* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryReader*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERVECTOR3_READ_OFFSET))(this, a1);
		}

	};
}
