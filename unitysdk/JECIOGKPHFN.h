#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JECIOGKPHFN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JECIOGKPHFN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x20430410)
#define JECIOGKPHFN_CCTOR_OFFSET UNITYSDK_OFFSET(0x204306D0)
#define JECIOGKPHFN_CLONE_OFFSET UNITYSDK_OFFSET(0x2042FF90)
#define JECIOGKPHFN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x2042FF00)
#define JECIOGKPHFN_CTOR_OFFSET UNITYSDK_OFFSET(0x2042FEB0)
#define JECIOGKPHFN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x20430110)
#define JECIOGKPHFN_EQUALS_OFFSET UNITYSDK_OFFSET(0x2042FFF0)
#define JECIOGKPHFN_FFMMEFBKILD_OFFSET UNITYSDK_OFFSET(0x2042FFE0)
#define JECIOGKPHFN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x20430200)
#define JECIOGKPHFN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x2042FE40)
#define JECIOGKPHFN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x20430500)
#define JECIOGKPHFN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x204304B0)
#define JECIOGKPHFN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x2042FEA0)
#define JECIOGKPHFN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x20430300)
#define JECIOGKPHFN_WRITETO_OFFSET UNITYSDK_OFFSET(0x20430360)

inline static constexpr unsigned int JECIOGKPHFN_TypeDefinitionIndex = 27817;

	class JECIOGKPHFN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* OMIGLBPFOLI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::JECIOGKPHFN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JECIOGKPHFN*>**)UnitySDK::FromName("", "JECIOGKPHFN")->GetStaticField(0x5D830);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_PKJGOPAIAGD()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "JECIOGKPHFN")->GetStaticField(0x5D838);
		}

		// static const ::System::Object MJANBCOPKEF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JECIOGKPHFN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JECIOGKPHFN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JECIOGKPHFN*))((::PBYTE)hIl2Cpp + JECIOGKPHFN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JECIOGKPHFN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JECIOGKPHFN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JECIOGKPHFN*>*(*)())((::PBYTE)hIl2Cpp + JECIOGKPHFN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JECIOGKPHFN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JECIOGKPHFN* Clone()
		{
			return ((::JECIOGKPHFN*(*)(::PVOID))((::PBYTE)hIl2Cpp + JECIOGKPHFN_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* FFMMEFBKILD()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JECIOGKPHFN_FFMMEFBKILD_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JECIOGKPHFN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JECIOGKPHFN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JECIOGKPHFN*))((::PBYTE)hIl2Cpp + JECIOGKPHFN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JECIOGKPHFN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JECIOGKPHFN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JECIOGKPHFN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JECIOGKPHFN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JECIOGKPHFN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JECIOGKPHFN*))((::PBYTE)hIl2Cpp + JECIOGKPHFN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JECIOGKPHFN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
