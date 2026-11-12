#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Hdg { class rdtSerializerRegistry; }
namespace Hdg { class rdtSerializerSlider; }
namespace System { class Object; }
namespace System::IO { class BinaryReader; }
namespace System::IO { class BinaryWriter; }

#define HDG_RDTSERIALIZERSLIDER_CTOR_1_OFFSET UNITYSDK_OFFSET(0xB5A8FA0)
#define HDG_RDTSERIALIZERSLIDER_CTOR_OFFSET UNITYSDK_OFFSET(0xB5AB520)
#define HDG_RDTSERIALIZERSLIDER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0xB5AB530)
#define HDG_RDTSERIALIZERSLIDER_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xB5AB5D0)
#define HDG_RDTSERIALIZERSLIDER_EQUALS_OFFSET UNITYSDK_OFFSET(0xB5AB540)
#define HDG_RDTSERIALIZERSLIDER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xB5AB610)
#define HDG_RDTSERIALIZERSLIDER_READ_OFFSET UNITYSDK_OFFSET(0xB5AB800)
#define HDG_RDTSERIALIZERSLIDER_WRITE_OFFSET UNITYSDK_OFFSET(0xB5AB670)

namespace Hdg
{
	inline static constexpr unsigned int rdtSerializerSlider_TypeDefinitionIndex = 47998;

	class rdtSerializerSlider : public ::System::Object
	{
	public:
		::System::Single LimitMax; // 0x10
		::System::Single LimitMin; // 0x14
		::System::Single Value; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERSLIDER_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERSLIDER_CTOR_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Object* Deserialize(::Hdg::rdtSerializerRegistry* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::Hdg::rdtSerializerRegistry*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERSLIDER_DESERIALIZE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERSLIDER_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::Hdg::rdtSerializerSlider* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Hdg::rdtSerializerSlider*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERSLIDER_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERSLIDER_GETHASHCODE_OFFSET))(this);
		}

		::System::Void Write(::System::IO::BinaryWriter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERSLIDER_WRITE_OFFSET))(this, a1);
		}

		::System::Void Read(::System::IO::BinaryReader* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryReader*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERSLIDER_READ_OFFSET))(this, a1);
		}

	};
}
