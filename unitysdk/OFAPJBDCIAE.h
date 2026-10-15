#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BKAHEDAHNHL;
class OFAPJBDCIAE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OFAPJBDCIAE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DE093B0)
#define OFAPJBDCIAE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE096B0)
#define OFAPJBDCIAE_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE08EF0)
#define OFAPJBDCIAE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE08E60)
#define OFAPJBDCIAE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE08E20)
#define OFAPJBDCIAE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DE09090)
#define OFAPJBDCIAE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE08F50)
#define OFAPJBDCIAE_FANNBJLCHLE_OFFSET UNITYSDK_OFFSET(0x1DE08F20)
#define OFAPJBDCIAE_FPAIFINNCAL_OFFSET UNITYSDK_OFFSET(0x1DE08F30)
#define OFAPJBDCIAE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE091B0)
#define OFAPJBDCIAE_IAKJGGHFKFN_OFFSET UNITYSDK_OFFSET(0x1DE08F40)
#define OFAPJBDCIAE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DE08DE0)
#define OFAPJBDCIAE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DE094F0)
#define OFAPJBDCIAE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DE09450)
#define OFAPJBDCIAE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DE08E10)
#define OFAPJBDCIAE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE09220)
#define OFAPJBDCIAE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DE09280)

inline static constexpr unsigned int OFAPJBDCIAE_TypeDefinitionIndex = 30885;

	class OFAPJBDCIAE : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::BKAHEDAHNHL*>* NKIPIFNAIDC; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::Boolean OLHDBJLDJEJ; // 0x20
		static ::Google::Protobuf::MessageParser_1<::OFAPJBDCIAE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OFAPJBDCIAE*>**)UnitySDK::FromName("", "OFAPJBDCIAE")->GetStaticField(0x15180);
		}

		static ::Google::Protobuf::FieldCodec_1<::BKAHEDAHNHL*>** StaticGet_MCILEHJAHLO()
		{
			return (::Google::Protobuf::FieldCodec_1<::BKAHEDAHNHL*>**)UnitySDK::FromName("", "OFAPJBDCIAE")->GetStaticField(0x15188);
		}

		// static const ::System::Object JGGPPIGJHMC; // 0x0
		// static const ::System::Object ACAHFGLCIBE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFAPJBDCIAE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OFAPJBDCIAE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OFAPJBDCIAE*))((::PBYTE)hIl2Cpp + OFAPJBDCIAE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OFAPJBDCIAE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::OFAPJBDCIAE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OFAPJBDCIAE*>*(*)())((::PBYTE)hIl2Cpp + OFAPJBDCIAE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFAPJBDCIAE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OFAPJBDCIAE* Clone()
		{
			return ((::OFAPJBDCIAE*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFAPJBDCIAE_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::BKAHEDAHNHL*>* FANNBJLCHLE()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::BKAHEDAHNHL*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFAPJBDCIAE_FANNBJLCHLE_OFFSET))(this);
		}

		::System::Boolean FPAIFINNCAL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OFAPJBDCIAE_FPAIFINNCAL_OFFSET))(this);
		}

		::System::Void IAKJGGHFKFN(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OFAPJBDCIAE_IAKJGGHFKFN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OFAPJBDCIAE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OFAPJBDCIAE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OFAPJBDCIAE*))((::PBYTE)hIl2Cpp + OFAPJBDCIAE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OFAPJBDCIAE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFAPJBDCIAE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OFAPJBDCIAE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OFAPJBDCIAE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OFAPJBDCIAE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OFAPJBDCIAE*))((::PBYTE)hIl2Cpp + OFAPJBDCIAE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OFAPJBDCIAE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
