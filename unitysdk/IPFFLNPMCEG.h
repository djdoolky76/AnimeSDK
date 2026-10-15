#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IHGANLCNHBD;
class IPFFLNPMCEG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IPFFLNPMCEG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E6B0BA0)
#define IPFFLNPMCEG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6B0EA0)
#define IPFFLNPMCEG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E6B0720)
#define IPFFLNPMCEG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E6B0670)
#define IPFFLNPMCEG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6B0620)
#define IPFFLNPMCEG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E6B0900)
#define IPFFLNPMCEG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E6B0780)
#define IPFFLNPMCEG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E6B0A20)
#define IPFFLNPMCEG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E6B05B0)
#define IPFFLNPMCEG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E6B0CE0)
#define IPFFLNPMCEG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E6B0C40)
#define IPFFLNPMCEG_NNFGJFPBKGG_OFFSET UNITYSDK_OFFSET(0x1E6B0770)
#define IPFFLNPMCEG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E6B0610)
#define IPFFLNPMCEG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E6B0A90)
#define IPFFLNPMCEG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E6B0AF0)

inline static constexpr unsigned int IPFFLNPMCEG_TypeDefinitionIndex = 29470;

	class IPFFLNPMCEG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::IHGANLCNHBD*>* OPBJJDFKEFK; // 0x18
		static ::Google::Protobuf::MessageParser_1<::IPFFLNPMCEG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::IPFFLNPMCEG*>**)UnitySDK::FromName("", "IPFFLNPMCEG")->GetStaticField(0x55E40);
		}

		static ::Google::Protobuf::FieldCodec_1<::IHGANLCNHBD*>** StaticGet_OBKJMDHAHEC()
		{
			return (::Google::Protobuf::FieldCodec_1<::IHGANLCNHBD*>**)UnitySDK::FromName("", "IPFFLNPMCEG")->GetStaticField(0x55E48);
		}

		// static const ::System::Object PEAPCPGMELO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPFFLNPMCEG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IPFFLNPMCEG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IPFFLNPMCEG*))((::PBYTE)hIl2Cpp + IPFFLNPMCEG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IPFFLNPMCEG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::IPFFLNPMCEG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::IPFFLNPMCEG*>*(*)())((::PBYTE)hIl2Cpp + IPFFLNPMCEG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IPFFLNPMCEG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IPFFLNPMCEG* Clone()
		{
			return ((::IPFFLNPMCEG*(*)(::PVOID))((::PBYTE)hIl2Cpp + IPFFLNPMCEG_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::IHGANLCNHBD*>* NNFGJFPBKGG()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::IHGANLCNHBD*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IPFFLNPMCEG_NNFGJFPBKGG_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IPFFLNPMCEG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IPFFLNPMCEG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IPFFLNPMCEG*))((::PBYTE)hIl2Cpp + IPFFLNPMCEG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IPFFLNPMCEG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IPFFLNPMCEG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IPFFLNPMCEG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IPFFLNPMCEG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IPFFLNPMCEG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IPFFLNPMCEG*))((::PBYTE)hIl2Cpp + IPFFLNPMCEG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IPFFLNPMCEG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
