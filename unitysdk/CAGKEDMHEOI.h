#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CAGKEDMHEOI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemCost; }
namespace System { class Object; }
namespace System { class String; }

#define CAGKEDMHEOI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F31CA90)
#define CAGKEDMHEOI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F31CCD0)
#define CAGKEDMHEOI_CLONE_OFFSET UNITYSDK_OFFSET(0x1F312E40)
#define CAGKEDMHEOI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F31C680)
#define CAGKEDMHEOI_CTOR_OFFSET UNITYSDK_OFFSET(0x1F313770)
#define CAGKEDMHEOI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F31C860)
#define CAGKEDMHEOI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F31C720)
#define CAGKEDMHEOI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F3133B0)
#define CAGKEDMHEOI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F31C640)
#define CAGKEDMHEOI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F31CB30)
#define CAGKEDMHEOI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F3137B0)
#define CAGKEDMHEOI_MKMAMKNLJGM_OFFSET UNITYSDK_OFFSET(0x1F31C710)
#define CAGKEDMHEOI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F31C670)
#define CAGKEDMHEOI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F31C980)
#define CAGKEDMHEOI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F31C9E0)

inline static constexpr unsigned int CAGKEDMHEOI_TypeDefinitionIndex = 28368;

	class CAGKEDMHEOI : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::Proto::ItemCost*>* DALKEINMPBH; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::FieldCodec_1<::Proto::ItemCost*>** StaticGet_KHPCDHPFCHE()
		{
			return (::Google::Protobuf::FieldCodec_1<::Proto::ItemCost*>**)UnitySDK::FromName("", "CAGKEDMHEOI")->GetStaticField(0x1D350);
		}

		static ::Google::Protobuf::MessageParser_1<::CAGKEDMHEOI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CAGKEDMHEOI*>**)UnitySDK::FromName("", "CAGKEDMHEOI")->GetStaticField(0x1D358);
		}

		// static const ::System::Object DPPAFBAHEFH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAGKEDMHEOI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CAGKEDMHEOI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CAGKEDMHEOI*))((::PBYTE)hIl2Cpp + CAGKEDMHEOI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CAGKEDMHEOI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CAGKEDMHEOI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CAGKEDMHEOI*>*(*)())((::PBYTE)hIl2Cpp + CAGKEDMHEOI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAGKEDMHEOI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CAGKEDMHEOI* Clone()
		{
			return ((::CAGKEDMHEOI*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAGKEDMHEOI_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::Proto::ItemCost*>* MKMAMKNLJGM()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::Proto::ItemCost*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAGKEDMHEOI_MKMAMKNLJGM_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CAGKEDMHEOI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CAGKEDMHEOI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CAGKEDMHEOI*))((::PBYTE)hIl2Cpp + CAGKEDMHEOI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CAGKEDMHEOI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAGKEDMHEOI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CAGKEDMHEOI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CAGKEDMHEOI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CAGKEDMHEOI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CAGKEDMHEOI*))((::PBYTE)hIl2Cpp + CAGKEDMHEOI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CAGKEDMHEOI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
