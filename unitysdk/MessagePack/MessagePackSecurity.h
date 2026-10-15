#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/System/ReadOnlySpan_1_075EFA8CFBE0DE9A.h"
namespace MessagePack { class MessagePackSecurity; }
namespace MessagePack { class MessagePackSecurity_ObjectFallbackEqualityComparer; }
namespace MessagePack { class SipHash; }
namespace System::Collections { class IEqualityComparer; }

#define MESSAGEPACK_MESSAGEPACKSECURITY_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BBA0850)
#define MESSAGEPACK_MESSAGEPACKSECURITY_CTOR_OFFSET UNITYSDK_OFFSET(0x1BB9F990)
#define MESSAGEPACK_MESSAGEPACKSECURITY_DEPTHSTEP_OFFSET UNITYSDK_OFFSET(0x1BB9FBF0)
#define MESSAGEPACK_MESSAGEPACKSECURITY_GETEQUALITYCOMPARER_1_OFFSET UNITYSDK_OFFSET(0x1BB9FB50)
#define MESSAGEPACK_MESSAGEPACKSECURITY_GETHASHCOLLISIONRESISTANTEQUALITYCOMPARER_1_OFFSET UNITYSDK_OFFSET(0x1BB9FC90)
#define MESSAGEPACK_MESSAGEPACKSECURITY_GET_HASHCOLLISIONRESISTANT_OFFSET UNITYSDK_OFFSET(0x1BB9FB10)
#define MESSAGEPACK_MESSAGEPACKSECURITY_GET_MAXIMUMOBJECTGRAPHDEPTH_OFFSET UNITYSDK_OFFSET(0x1BB9FB30)
#define MESSAGEPACK_MESSAGEPACKSECURITY_SECUREHASH_1_OFFSET UNITYSDK_OFFSET(0x1BB9FE20)
#define MESSAGEPACK_MESSAGEPACKSECURITY_SET_HASHCOLLISIONRESISTANT_OFFSET UNITYSDK_OFFSET(0x1BB9FB20)
#define MESSAGEPACK_MESSAGEPACKSECURITY_SET_MAXIMUMOBJECTGRAPHDEPTH_OFFSET UNITYSDK_OFFSET(0x1BB9FB40)

namespace MessagePack
{
	inline static constexpr unsigned int MessagePackSecurity_TypeDefinitionIndex = 7200;

	class MessagePackSecurity : public ::System::Object
	{
	public:
		::MessagePack::MessagePackSecurity_ObjectFallbackEqualityComparer* objectFallbackEqualityComparer; // 0x10
		::System::Boolean _HashCollisionResistant_k__BackingField; // 0x18
		::System::Byte _padding0[0x3];
		::System::Int32 _MaximumObjectGraphDepth_k__BackingField; // 0x1C
		static ::MessagePack::SipHash** StaticGet_Hash()
		{
			return (::MessagePack::SipHash**)UnitySDK::FromName("MessagePack", "MessagePackSecurity")->GetStaticField(0x4DE80);
		}

		static ::MessagePack::MessagePackSecurity** StaticGet_TrustedData()
		{
			return (::MessagePack::MessagePackSecurity**)UnitySDK::FromName("MessagePack", "MessagePackSecurity")->GetStaticField(0x4DE88);
		}

		static ::MessagePack::MessagePackSecurity** StaticGet_UntrustedData()
		{
			return (::MessagePack::MessagePackSecurity**)UnitySDK::FromName("MessagePack", "MessagePackSecurity")->GetStaticField(0x4DE90);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSECURITY_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSECURITY_CCTOR_OFFSET))();
		}

		::System::Boolean get_HashCollisionResistant()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSECURITY_GET_HASHCOLLISIONRESISTANT_OFFSET))(this);
		}

		::System::Void set_HashCollisionResistant(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSECURITY_SET_HASHCOLLISIONRESISTANT_OFFSET))(this, a1);
		}

		::System::Int32 get_MaximumObjectGraphDepth()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSECURITY_GET_MAXIMUMOBJECTGRAPHDEPTH_OFFSET))(this);
		}

		::System::Void set_MaximumObjectGraphDepth(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSECURITY_SET_MAXIMUMOBJECTGRAPHDEPTH_OFFSET))(this, a1);
		}

		::System::Collections::IEqualityComparer* GetEqualityComparer_1()
		{
			return ((::System::Collections::IEqualityComparer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSECURITY_GETEQUALITYCOMPARER_1_OFFSET))(this);
		}

		::System::Void DepthStep(::MessagePack::MessagePackReader a1)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackReader))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSECURITY_DEPTHSTEP_OFFSET))(this, a1);
		}

		::System::Collections::IEqualityComparer* GetHashCollisionResistantEqualityComparer_1()
		{
			return ((::System::Collections::IEqualityComparer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSECURITY_GETHASHCOLLISIONRESISTANTEQUALITYCOMPARER_1_OFFSET))(this);
		}

		static ::System::Int32 SecureHash_1(::System::ReadOnlySpan_1_075EFA8CFBE0DE9A<::System::Byte> a1)
		{
			return ((::System::Int32(*)(::System::ReadOnlySpan_1_075EFA8CFBE0DE9A<::System::Byte>))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSECURITY_SECUREHASH_1_OFFSET))(a1);
		}

	};
}
