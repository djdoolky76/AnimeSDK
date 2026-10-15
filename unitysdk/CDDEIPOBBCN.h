#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CDDEIPOBBCN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CDDEIPOBBCN_BMGGNEDJJHO_OFFSET UNITYSDK_OFFSET(0x1E081320)
#define CDDEIPOBBCN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E0816F0)
#define CDDEIPOBBCN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E081950)
#define CDDEIPOBBCN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E0812F0)
#define CDDEIPOBBCN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E081260)
#define CDDEIPOBBCN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E081210)
#define CDDEIPOBBCN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E081420)
#define CDDEIPOBBCN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E081330)
#define CDDEIPOBBCN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E081510)
#define CDDEIPOBBCN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E0811D0)
#define CDDEIPOBBCN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0817B0)
#define CDDEIPOBBCN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E081760)
#define CDDEIPOBBCN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E081200)
#define CDDEIPOBBCN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E081610)
#define CDDEIPOBBCN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E081670)

inline static constexpr unsigned int CDDEIPOBBCN_TypeDefinitionIndex = 33242;

	class CDDEIPOBBCN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* JPMBKFAEGBM; // 0x18
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_CKGIPNMKEAK()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "CDDEIPOBBCN")->GetStaticField(0xED30);
		}

		static ::Google::Protobuf::MessageParser_1<::CDDEIPOBBCN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CDDEIPOBBCN*>**)UnitySDK::FromName("", "CDDEIPOBBCN")->GetStaticField(0xED38);
		}

		// static const ::System::Object MCAMOOBBJPA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDDEIPOBBCN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CDDEIPOBBCN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CDDEIPOBBCN*))((::PBYTE)hIl2Cpp + CDDEIPOBBCN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CDDEIPOBBCN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CDDEIPOBBCN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CDDEIPOBBCN*>*(*)())((::PBYTE)hIl2Cpp + CDDEIPOBBCN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDDEIPOBBCN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CDDEIPOBBCN* Clone()
		{
			return ((::CDDEIPOBBCN*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDDEIPOBBCN_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* BMGGNEDJJHO()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDDEIPOBBCN_BMGGNEDJJHO_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CDDEIPOBBCN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CDDEIPOBBCN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CDDEIPOBBCN*))((::PBYTE)hIl2Cpp + CDDEIPOBBCN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CDDEIPOBBCN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDDEIPOBBCN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CDDEIPOBBCN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CDDEIPOBBCN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CDDEIPOBBCN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CDDEIPOBBCN*))((::PBYTE)hIl2Cpp + CDDEIPOBBCN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CDDEIPOBBCN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
