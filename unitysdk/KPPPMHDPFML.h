#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KPPPMHDPFML;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KPPPMHDPFML_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E8C4360)
#define KPPPMHDPFML_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8C4580)
#define KPPPMHDPFML_CLONE_OFFSET UNITYSDK_OFFSET(0x1E8C3FB0)
#define KPPPMHDPFML_CPOOIDGKFPB_OFFSET UNITYSDK_OFFSET(0x1E8C3FF0)
#define KPPPMHDPFML_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E8C3F80)
#define KPPPMHDPFML_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8C3F70)
#define KPPPMHDPFML_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E8C40E0)
#define KPPPMHDPFML_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E8C4010)
#define KPPPMHDPFML_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E8C4250)
#define KPPPMHDPFML_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E8C3F30)
#define KPPPMHDPFML_KHNLEEDIEKB_OFFSET UNITYSDK_OFFSET(0x1E8C4000)
#define KPPPMHDPFML_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E8C4420)
#define KPPPMHDPFML_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E8C43F0)
#define KPPPMHDPFML_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E8C3F60)
#define KPPPMHDPFML_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E8C4280)
#define KPPPMHDPFML_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E8C42E0)

	class KPPPMHDPFML : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 FENDJMNOHHG; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "KPPPMHDPFML")->GetStaticField(0x2D9E0);
		}

		// static const ::System::Object FILPGLHFNCI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPPPMHDPFML_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KPPPMHDPFML* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KPPPMHDPFML*))((::PBYTE)hIl2Cpp + KPPPMHDPFML_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KPPPMHDPFML_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + KPPPMHDPFML_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPPPMHDPFML_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KPPPMHDPFML* Clone()
		{
			return ((::KPPPMHDPFML*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPPPMHDPFML_CLONE_OFFSET))(this);
		}

		::System::UInt32 CPOOIDGKFPB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KPPPMHDPFML_CPOOIDGKFPB_OFFSET))(this);
		}

		::System::Void KHNLEEDIEKB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KPPPMHDPFML_KHNLEEDIEKB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KPPPMHDPFML_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KPPPMHDPFML* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KPPPMHDPFML*))((::PBYTE)hIl2Cpp + KPPPMHDPFML_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KPPPMHDPFML_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPPPMHDPFML_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KPPPMHDPFML_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KPPPMHDPFML_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KPPPMHDPFML* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KPPPMHDPFML*))((::PBYTE)hIl2Cpp + KPPPMHDPFML_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KPPPMHDPFML_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
