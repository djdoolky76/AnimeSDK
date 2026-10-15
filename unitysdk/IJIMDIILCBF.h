#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/APCGKBOPGJL.h"
#include "unitysdk/RPG/AvatarSystem/AvatarSkinSource.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define IJIMDIILCBF_CTOR_OFFSET UNITYSDK_OFFSET(0x1B380)
#define IJIMDIILCBF_DECONSTRUCT_OFFSET UNITYSDK_OFFSET(0x1B440)
#define IJIMDIILCBF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x2E81EE0)
#define IJIMDIILCBF_EQUALS_OFFSET UNITYSDK_OFFSET(0x2E81EA0)
#define IJIMDIILCBF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2E81E90)
#define IJIMDIILCBF_GET_ID_OFFSET UNITYSDK_OFFSET(0xACE0)
#define IJIMDIILCBF_GET_PROTOTYPEIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x1D30)
#define IJIMDIILCBF_IOIFPHAMFDF_OFFSET UNITYSDK_OFFSET(0x2E81E10)
#define IJIMDIILCBF_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x16469AB0)
#define IJIMDIILCBF_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x16469A70)
#define IJIMDIILCBF_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0x2E81E70)
#define IJIMDIILCBF_SET_ID_OFFSET UNITYSDK_OFFSET(0xACF0)
#define IJIMDIILCBF_SET_PROTOTYPEIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x94B0)
#define IJIMDIILCBF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x2E81E60)

inline static constexpr unsigned int IJIMDIILCBF_TypeDefinitionIndex = 51975;

	struct alignas(4) IJIMDIILCBF
	{
		::APCGKBOPGJL _PrototypeIdentifier_k__BackingField; // 0x10
		::System::UInt32 _ID_k__BackingField; // 0x18
		// static const ::System::Object KPBMAPBBEDG; // 0x0
		::System::Void _ctor(::APCGKBOPGJL a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::APCGKBOPGJL, ::System::UInt32))((::PBYTE)hIl2Cpp + IJIMDIILCBF_CTOR_OFFSET))(this, a1, a2);
		}

		::APCGKBOPGJL get_PrototypeIdentifier()
		{
			return ((::APCGKBOPGJL(*)(::PVOID))((::PBYTE)hIl2Cpp + IJIMDIILCBF_GET_PROTOTYPEIDENTIFIER_OFFSET))(this);
		}

		::System::Void set_PrototypeIdentifier(::APCGKBOPGJL a1)
		{
			return ((::System::Void(*)(::PVOID, ::APCGKBOPGJL))((::PBYTE)hIl2Cpp + IJIMDIILCBF_SET_PROTOTYPEIDENTIFIER_OFFSET))(this, a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IJIMDIILCBF_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IJIMDIILCBF_SET_ID_OFFSET))(this, a1);
		}

		::RPG::AvatarSystem::AvatarSkinSource IOIFPHAMFDF()
		{
			return ((::RPG::AvatarSystem::AvatarSkinSource(*)(::PVOID))((::PBYTE)hIl2Cpp + IJIMDIILCBF_IOIFPHAMFDF_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJIMDIILCBF_TOSTRING_OFFSET))(this);
		}

		::System::Boolean PrintMembers(::System::Text::StringBuilder* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + IJIMDIILCBF_PRINTMEMBERS_OFFSET))(this, a1);
		}

		/*
		static ::System::Boolean op_Inequality(::IJIMDIILCBF a1, ::IJIMDIILCBF a2)
		{
			return ((::System::Boolean(*)(::IJIMDIILCBF, ::IJIMDIILCBF))((::PBYTE)hIl2Cpp + IJIMDIILCBF_OP_INEQUALITY_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean op_Equality(::IJIMDIILCBF a1, ::IJIMDIILCBF a2)
		{
			return ((::System::Boolean(*)(::IJIMDIILCBF, ::IJIMDIILCBF))((::PBYTE)hIl2Cpp + IJIMDIILCBF_OP_EQUALITY_OFFSET))(a1, a2);
		}
		*/

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IJIMDIILCBF_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IJIMDIILCBF_EQUALS_OFFSET))(this, a1);
		}

		/*
		::System::Boolean Equals_1(::IJIMDIILCBF a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IJIMDIILCBF))((::PBYTE)hIl2Cpp + IJIMDIILCBF_EQUALS_1_OFFSET))(this, a1);
		}
		*/

		::System::Void Deconstruct(::APCGKBOPGJL a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::APCGKBOPGJL, ::System::UInt32))((::PBYTE)hIl2Cpp + IJIMDIILCBF_DECONSTRUCT_OFFSET))(this, a1, a2);
		}

	};
