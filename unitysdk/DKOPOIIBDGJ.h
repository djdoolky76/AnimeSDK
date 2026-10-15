#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DKOPOIIBDGJ;
class MKGHJJCPBLP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DKOPOIIBDGJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E1DAA00)
#define DKOPOIIBDGJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1DACD0)
#define DKOPOIIBDGJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E1DA580)
#define DKOPOIIBDGJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E1DA4D0)
#define DKOPOIIBDGJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1DA480)
#define DKOPOIIBDGJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E1DA760)
#define DKOPOIIBDGJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E1DA5E0)
#define DKOPOIIBDGJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E1DA880)
#define DKOPOIIBDGJ_GNPMFCIIGPH_OFFSET UNITYSDK_OFFSET(0x1E1DA5D0)
#define DKOPOIIBDGJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E1DA410)
#define DKOPOIIBDGJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E1DAB10)
#define DKOPOIIBDGJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E1DAAA0)
#define DKOPOIIBDGJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E1DA470)
#define DKOPOIIBDGJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E1DA8F0)
#define DKOPOIIBDGJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E1DA950)

inline static constexpr unsigned int DKOPOIIBDGJ_TypeDefinitionIndex = 34300;

	class DKOPOIIBDGJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::MKGHJJCPBLP*>* JDFHPFOLOFO; // 0x18
		static ::Google::Protobuf::MessageParser_1<::DKOPOIIBDGJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DKOPOIIBDGJ*>**)UnitySDK::FromName("", "DKOPOIIBDGJ")->GetStaticField(0x3B3B0);
		}

		static ::System::Object** StaticGet_GPJGCDJBHPD()
		{
			return (::System::Object**)UnitySDK::FromName("", "DKOPOIIBDGJ")->GetStaticField(0x3B3B8);
		}

		// static const ::System::Object KNHNBHCOHKG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKOPOIIBDGJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DKOPOIIBDGJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DKOPOIIBDGJ*))((::PBYTE)hIl2Cpp + DKOPOIIBDGJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DKOPOIIBDGJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DKOPOIIBDGJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DKOPOIIBDGJ*>*(*)())((::PBYTE)hIl2Cpp + DKOPOIIBDGJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DKOPOIIBDGJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DKOPOIIBDGJ* Clone()
		{
			return ((::DKOPOIIBDGJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + DKOPOIIBDGJ_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::MKGHJJCPBLP*>* GNPMFCIIGPH()
		{
			return ((::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::MKGHJJCPBLP*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DKOPOIIBDGJ_GNPMFCIIGPH_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DKOPOIIBDGJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DKOPOIIBDGJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DKOPOIIBDGJ*))((::PBYTE)hIl2Cpp + DKOPOIIBDGJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DKOPOIIBDGJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DKOPOIIBDGJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DKOPOIIBDGJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DKOPOIIBDGJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DKOPOIIBDGJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DKOPOIIBDGJ*))((::PBYTE)hIl2Cpp + DKOPOIIBDGJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DKOPOIIBDGJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
