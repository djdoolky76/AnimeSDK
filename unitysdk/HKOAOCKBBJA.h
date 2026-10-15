#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HKOAOCKBBJA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HKOAOCKBBJA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E5B7A50)
#define HKOAOCKBBJA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5B7C70)
#define HKOAOCKBBJA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E5B76A0)
#define HKOAOCKBBJA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5B7670)
#define HKOAOCKBBJA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5B7660)
#define HKOAOCKBBJA_ENJNOMANLCN_OFFSET UNITYSDK_OFFSET(0x1E5B76F0)
#define HKOAOCKBBJA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E5B77D0)
#define HKOAOCKBBJA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E5B7700)
#define HKOAOCKBBJA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E5B7940)
#define HKOAOCKBBJA_GHCGBBHOAKB_OFFSET UNITYSDK_OFFSET(0x1E5B76E0)
#define HKOAOCKBBJA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E5B7620)
#define HKOAOCKBBJA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E5B7B10)
#define HKOAOCKBBJA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E5B7AE0)
#define HKOAOCKBBJA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E5B7650)
#define HKOAOCKBBJA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E5B7970)
#define HKOAOCKBBJA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E5B79D0)

inline static constexpr unsigned int HKOAOCKBBJA_TypeDefinitionIndex = 29718;

	class HKOAOCKBBJA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 AEKECGJLGEF; // 0x18
		static ::Google::Protobuf::MessageParser_1<::HKOAOCKBBJA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HKOAOCKBBJA*>**)UnitySDK::FromName("", "HKOAOCKBBJA")->GetStaticField(0x464D0);
		}

		// static const ::System::Object AINHNOCEBJG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKOAOCKBBJA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HKOAOCKBBJA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HKOAOCKBBJA*))((::PBYTE)hIl2Cpp + HKOAOCKBBJA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HKOAOCKBBJA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HKOAOCKBBJA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HKOAOCKBBJA*>*(*)())((::PBYTE)hIl2Cpp + HKOAOCKBBJA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKOAOCKBBJA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HKOAOCKBBJA* Clone()
		{
			return ((::HKOAOCKBBJA*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKOAOCKBBJA_CLONE_OFFSET))(this);
		}

		::System::UInt32 GHCGBBHOAKB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HKOAOCKBBJA_GHCGBBHOAKB_OFFSET))(this);
		}

		::System::Void ENJNOMANLCN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HKOAOCKBBJA_ENJNOMANLCN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HKOAOCKBBJA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HKOAOCKBBJA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HKOAOCKBBJA*))((::PBYTE)hIl2Cpp + HKOAOCKBBJA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HKOAOCKBBJA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKOAOCKBBJA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HKOAOCKBBJA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HKOAOCKBBJA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HKOAOCKBBJA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HKOAOCKBBJA*))((::PBYTE)hIl2Cpp + HKOAOCKBBJA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HKOAOCKBBJA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
