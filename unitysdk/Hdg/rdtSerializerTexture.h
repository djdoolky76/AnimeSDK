#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Hdg { class rdtSerializerRegistry; }
namespace System { class Object; }
namespace System { class String; }
namespace System::IO { class BinaryReader; }
namespace System::IO { class BinaryWriter; }

#define HDG_RDTSERIALIZERTEXTURE_CTOR_OFFSET UNITYSDK_OFFSET(0x1A6B27B0)
#define HDG_RDTSERIALIZERTEXTURE_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1A6B27C0)
#define HDG_RDTSERIALIZERTEXTURE_READ_OFFSET UNITYSDK_OFFSET(0x1A6B2870)
#define HDG_RDTSERIALIZERTEXTURE_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1A6B26F0)
#define HDG_RDTSERIALIZERTEXTURE_WRITE_OFFSET UNITYSDK_OFFSET(0x1A6B27D0)

namespace Hdg
{
	inline static constexpr unsigned int rdtSerializerTexture_TypeDefinitionIndex = 48000;

	class rdtSerializerTexture : public ::System::Object
	{
	public:
		::System::String* texName; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERTEXTURE_CTOR_OFFSET))(this);
		}

		static ::System::Object* Serialize(::System::Object* a1, ::Hdg::rdtSerializerRegistry* a2)
		{
			return ((::System::Object*(*)(::System::Object*, ::Hdg::rdtSerializerRegistry*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERTEXTURE_SERIALIZE_OFFSET))(a1, a2);
		}

		::System::Object* Deserialize(::Hdg::rdtSerializerRegistry* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::Hdg::rdtSerializerRegistry*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERTEXTURE_DESERIALIZE_OFFSET))(this, a1);
		}

		::System::Void Write(::System::IO::BinaryWriter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERTEXTURE_WRITE_OFFSET))(this, a1);
		}

		::System::Void Read(::System::IO::BinaryReader* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryReader*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERTEXTURE_READ_OFFSET))(this, a1);
		}

	};
}
