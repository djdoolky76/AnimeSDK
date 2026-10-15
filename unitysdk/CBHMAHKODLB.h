#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CBHMAHKODLB;
class GLECNCOBKCJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CBHMAHKODLB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E03C110)
#define CBHMAHKODLB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E03C490)
#define CBHMAHKODLB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E03BC50)
#define CBHMAHKODLB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E03BB90)
#define CBHMAHKODLB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E03BB40)
#define CBHMAHKODLB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E03BE00)
#define CBHMAHKODLB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E03BCB0)
#define CBHMAHKODLB_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E03BC90)
#define CBHMAHKODLB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E03BF30)
#define CBHMAHKODLB_IEDABECBCEJ_OFFSET UNITYSDK_OFFSET(0x1E03BCA0)
#define CBHMAHKODLB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E03BB00)
#define CBHMAHKODLB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E03C2C0)
#define CBHMAHKODLB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E03C220)
#define CBHMAHKODLB_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E03BC80)
#define CBHMAHKODLB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E03BB30)
#define CBHMAHKODLB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E03BFA0)
#define CBHMAHKODLB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E03C000)

inline static constexpr unsigned int CBHMAHKODLB_TypeDefinitionIndex = 31958;

	class CBHMAHKODLB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::GLECNCOBKCJ*>* PMKELJOCKNH; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::FieldCodec_1<::GLECNCOBKCJ*>** StaticGet_BNAEGAGLJJD()
		{
			return (::Google::Protobuf::FieldCodec_1<::GLECNCOBKCJ*>**)UnitySDK::FromName("", "CBHMAHKODLB")->GetStaticField(0xB4D0);
		}

		static ::Google::Protobuf::MessageParser_1<::CBHMAHKODLB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CBHMAHKODLB*>**)UnitySDK::FromName("", "CBHMAHKODLB")->GetStaticField(0xB4D8);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object OLIJAFFMKBB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBHMAHKODLB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CBHMAHKODLB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CBHMAHKODLB*))((::PBYTE)hIl2Cpp + CBHMAHKODLB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CBHMAHKODLB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CBHMAHKODLB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CBHMAHKODLB*>*(*)())((::PBYTE)hIl2Cpp + CBHMAHKODLB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBHMAHKODLB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CBHMAHKODLB* Clone()
		{
			return ((::CBHMAHKODLB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBHMAHKODLB_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CBHMAHKODLB_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CBHMAHKODLB_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::GLECNCOBKCJ*>* IEDABECBCEJ()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::GLECNCOBKCJ*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBHMAHKODLB_IEDABECBCEJ_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CBHMAHKODLB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CBHMAHKODLB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CBHMAHKODLB*))((::PBYTE)hIl2Cpp + CBHMAHKODLB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CBHMAHKODLB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBHMAHKODLB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CBHMAHKODLB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CBHMAHKODLB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CBHMAHKODLB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CBHMAHKODLB*))((::PBYTE)hIl2Cpp + CBHMAHKODLB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CBHMAHKODLB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
