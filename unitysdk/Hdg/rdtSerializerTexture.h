#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Hdg { class rdtSerializerRegistry; }
namespace System { class Object; }
namespace System { class String; }
namespace System::IO { class BinaryReader; }
namespace System::IO { class BinaryWriter; }

#define HDG_RDTSERIALIZERTEXTURE_CTOR_OFFSET UNITYSDK_OFFSET(0xAF4AB00)
#define HDG_RDTSERIALIZERTEXTURE_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0xAF4AB10)
#define HDG_RDTSERIALIZERTEXTURE_READ_OFFSET UNITYSDK_OFFSET(0xAF4ABC0)
#define HDG_RDTSERIALIZERTEXTURE_SERIALIZE_OFFSET UNITYSDK_OFFSET(0xAF4AA40)
#define HDG_RDTSERIALIZERTEXTURE_WRITE_OFFSET UNITYSDK_OFFSET(0xAF4AB20)

namespace Hdg
{
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
