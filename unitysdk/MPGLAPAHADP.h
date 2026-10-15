#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MPGLAPAHADP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MPGLAPAHADP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EAB7C50)
#define MPGLAPAHADP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAB7CF0)
#define MPGLAPAHADP_CLONE_OFFSET UNITYSDK_OFFSET(0x1EAB7940)
#define MPGLAPAHADP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EAB7910)
#define MPGLAPAHADP_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAB7900)
#define MPGLAPAHADP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EAB7A50)
#define MPGLAPAHADP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EAB7980)
#define MPGLAPAHADP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EAB7BB0)
#define MPGLAPAHADP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EAB78C0)
#define MPGLAPAHADP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EAB7CA0)
#define MPGLAPAHADP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EAB7C70)
#define MPGLAPAHADP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EAB78F0)
#define MPGLAPAHADP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EAB7BE0)
#define MPGLAPAHADP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EAB7C40)

inline static constexpr unsigned int MPGLAPAHADP_TypeDefinitionIndex = 27674;

	class MPGLAPAHADP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::MPGLAPAHADP*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MPGLAPAHADP*>**)UnitySDK::FromName("", "MPGLAPAHADP")->GetStaticField(0x5B660);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPGLAPAHADP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MPGLAPAHADP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MPGLAPAHADP*))((::PBYTE)hIl2Cpp + MPGLAPAHADP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MPGLAPAHADP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MPGLAPAHADP*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MPGLAPAHADP*>*(*)())((::PBYTE)hIl2Cpp + MPGLAPAHADP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MPGLAPAHADP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MPGLAPAHADP* Clone()
		{
			return ((::MPGLAPAHADP*(*)(::PVOID))((::PBYTE)hIl2Cpp + MPGLAPAHADP_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MPGLAPAHADP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MPGLAPAHADP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MPGLAPAHADP*))((::PBYTE)hIl2Cpp + MPGLAPAHADP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MPGLAPAHADP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MPGLAPAHADP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MPGLAPAHADP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MPGLAPAHADP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MPGLAPAHADP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MPGLAPAHADP*))((::PBYTE)hIl2Cpp + MPGLAPAHADP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MPGLAPAHADP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
