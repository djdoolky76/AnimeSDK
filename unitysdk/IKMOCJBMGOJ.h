#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IKMOCJBMGOJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IKMOCJBMGOJ_ABJJEDBIHMH_OFFSET UNITYSDK_OFFSET(0x1E6A5310)
#define IKMOCJBMGOJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E6A57A0)
#define IKMOCJBMGOJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6A5A20)
#define IKMOCJBMGOJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E6A52E0)
#define IKMOCJBMGOJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E6A5250)
#define IKMOCJBMGOJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6A5200)
#define IKMOCJBMGOJ_DGNJHKKGHND_OFFSET UNITYSDK_OFFSET(0x1E6A5330)
#define IKMOCJBMGOJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E6A5440)
#define IKMOCJBMGOJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E6A5340)
#define IKMOCJBMGOJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E6A5540)
#define IKMOCJBMGOJ_GJLGONJMOOO_OFFSET UNITYSDK_OFFSET(0x1E6A5320)
#define IKMOCJBMGOJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E6A51C0)
#define IKMOCJBMGOJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E6A5860)
#define IKMOCJBMGOJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E6A5810)
#define IKMOCJBMGOJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E6A51F0)
#define IKMOCJBMGOJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E6A5640)
#define IKMOCJBMGOJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E6A56A0)

	class IKMOCJBMGOJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* OGBHANBIMLJ; // 0x18
		::System::Boolean DPMPJJFMOMH; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "IKMOCJBMGOJ")->GetStaticField(0x558E0);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_HLCOHJKJLHL()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "IKMOCJBMGOJ")->GetStaticField(0x558E8);
		}

		// static const ::System::Object JPNGMNGLHCI; // 0x0
		// static const ::System::Object NIBGJKIMFBH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKMOCJBMGOJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IKMOCJBMGOJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IKMOCJBMGOJ*))((::PBYTE)hIl2Cpp + IKMOCJBMGOJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IKMOCJBMGOJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + IKMOCJBMGOJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKMOCJBMGOJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IKMOCJBMGOJ* Clone()
		{
			return ((::IKMOCJBMGOJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKMOCJBMGOJ_CLONE_OFFSET))(this);
		}

		::System::Boolean ABJJEDBIHMH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IKMOCJBMGOJ_ABJJEDBIHMH_OFFSET))(this);
		}

		::System::Void GJLGONJMOOO(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IKMOCJBMGOJ_GJLGONJMOOO_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* DGNJHKKGHND()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKMOCJBMGOJ_DGNJHKKGHND_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IKMOCJBMGOJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IKMOCJBMGOJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IKMOCJBMGOJ*))((::PBYTE)hIl2Cpp + IKMOCJBMGOJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IKMOCJBMGOJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKMOCJBMGOJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IKMOCJBMGOJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IKMOCJBMGOJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IKMOCJBMGOJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IKMOCJBMGOJ*))((::PBYTE)hIl2Cpp + IKMOCJBMGOJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IKMOCJBMGOJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
