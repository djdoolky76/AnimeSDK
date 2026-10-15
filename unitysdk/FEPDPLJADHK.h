#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FEPDPLJADHK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FEPDPLJADHK_BBCGPCFIKBP_OFFSET UNITYSDK_OFFSET(0x1E3697F0)
#define FEPDPLJADHK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E369BC0)
#define FEPDPLJADHK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E369E20)
#define FEPDPLJADHK_CLONE_OFFSET UNITYSDK_OFFSET(0x1E3697C0)
#define FEPDPLJADHK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E369730)
#define FEPDPLJADHK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3696E0)
#define FEPDPLJADHK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E3698F0)
#define FEPDPLJADHK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E369800)
#define FEPDPLJADHK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E3699E0)
#define FEPDPLJADHK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E3696A0)
#define FEPDPLJADHK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E369C80)
#define FEPDPLJADHK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E369C30)
#define FEPDPLJADHK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E3696D0)
#define FEPDPLJADHK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E369AE0)
#define FEPDPLJADHK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E369B40)

inline static constexpr unsigned int FEPDPLJADHK_TypeDefinitionIndex = 27019;

	class FEPDPLJADHK : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* NLDOOMEKOHO; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_ECJFMIDLCOI()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "FEPDPLJADHK")->GetStaticField(0x5D830);
		}

		static ::Google::Protobuf::MessageParser_1<::FEPDPLJADHK*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FEPDPLJADHK*>**)UnitySDK::FromName("", "FEPDPLJADHK")->GetStaticField(0x5D838);
		}

		// static const ::System::Object GGNABOANAPC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEPDPLJADHK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FEPDPLJADHK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FEPDPLJADHK*))((::PBYTE)hIl2Cpp + FEPDPLJADHK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FEPDPLJADHK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FEPDPLJADHK*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FEPDPLJADHK*>*(*)())((::PBYTE)hIl2Cpp + FEPDPLJADHK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FEPDPLJADHK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FEPDPLJADHK* Clone()
		{
			return ((::FEPDPLJADHK*(*)(::PVOID))((::PBYTE)hIl2Cpp + FEPDPLJADHK_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* BBCGPCFIKBP()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FEPDPLJADHK_BBCGPCFIKBP_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FEPDPLJADHK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FEPDPLJADHK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FEPDPLJADHK*))((::PBYTE)hIl2Cpp + FEPDPLJADHK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FEPDPLJADHK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FEPDPLJADHK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FEPDPLJADHK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FEPDPLJADHK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FEPDPLJADHK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FEPDPLJADHK*))((::PBYTE)hIl2Cpp + FEPDPLJADHK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FEPDPLJADHK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
