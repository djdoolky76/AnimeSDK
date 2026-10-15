#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BGNIMFMFKLH;
class IBGFKJMMICI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IBGFKJMMICI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E614DE0)
#define IBGFKJMMICI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6150E0)
#define IBGFKJMMICI_CLONE_OFFSET UNITYSDK_OFFSET(0x1E614960)
#define IBGFKJMMICI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E6148B0)
#define IBGFKJMMICI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E614860)
#define IBGFKJMMICI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E614B40)
#define IBGFKJMMICI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E6149C0)
#define IBGFKJMMICI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E614C60)
#define IBGFKJMMICI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E6147F0)
#define IBGFKJMMICI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E614F20)
#define IBGFKJMMICI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E614E80)
#define IBGFKJMMICI_MFBMNOMOHKJ_OFFSET UNITYSDK_OFFSET(0x1E6149B0)
#define IBGFKJMMICI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E614850)
#define IBGFKJMMICI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E614CD0)
#define IBGFKJMMICI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E614D30)

inline static constexpr unsigned int IBGFKJMMICI_TypeDefinitionIndex = 28416;

	class IBGFKJMMICI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::BGNIMFMFKLH*>* FGPMKMAEFEJ; // 0x18
		static ::Google::Protobuf::MessageParser_1<::IBGFKJMMICI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::IBGFKJMMICI*>**)UnitySDK::FromName("", "IBGFKJMMICI")->GetStaticField(0x41290);
		}

		static ::Google::Protobuf::FieldCodec_1<::BGNIMFMFKLH*>** StaticGet_ANLEDCLGHOO()
		{
			return (::Google::Protobuf::FieldCodec_1<::BGNIMFMFKLH*>**)UnitySDK::FromName("", "IBGFKJMMICI")->GetStaticField(0x41298);
		}

		// static const ::System::Object ALAOHFGCDLA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBGFKJMMICI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IBGFKJMMICI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IBGFKJMMICI*))((::PBYTE)hIl2Cpp + IBGFKJMMICI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IBGFKJMMICI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::IBGFKJMMICI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::IBGFKJMMICI*>*(*)())((::PBYTE)hIl2Cpp + IBGFKJMMICI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBGFKJMMICI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IBGFKJMMICI* Clone()
		{
			return ((::IBGFKJMMICI*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBGFKJMMICI_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::BGNIMFMFKLH*>* MFBMNOMOHKJ()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::BGNIMFMFKLH*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBGFKJMMICI_MFBMNOMOHKJ_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IBGFKJMMICI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IBGFKJMMICI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IBGFKJMMICI*))((::PBYTE)hIl2Cpp + IBGFKJMMICI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IBGFKJMMICI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBGFKJMMICI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IBGFKJMMICI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IBGFKJMMICI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IBGFKJMMICI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IBGFKJMMICI*))((::PBYTE)hIl2Cpp + IBGFKJMMICI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IBGFKJMMICI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
