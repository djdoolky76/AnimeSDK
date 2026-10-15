#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JHKFCANMFOE;
class PPDLOPCHFDG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PPDLOPCHFDG_BDJMAOHLPHG_OFFSET UNITYSDK_OFFSET(0x1DFD4FF0)
#define PPDLOPCHFDG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DFD5490)
#define PPDLOPCHFDG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFD5830)
#define PPDLOPCHFDG_CLONE_OFFSET UNITYSDK_OFFSET(0x1DFD4F80)
#define PPDLOPCHFDG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DFD4EC0)
#define PPDLOPCHFDG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFD4E70)
#define PPDLOPCHFDG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DFD5190)
#define PPDLOPCHFDG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DFD5000)
#define PPDLOPCHFDG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DFD52B0)
#define PPDLOPCHFDG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DFD4E00)
#define PPDLOPCHFDG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DFD5660)
#define PPDLOPCHFDG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DFD55C0)
#define PPDLOPCHFDG_MJOEMBBMBON_OFFSET UNITYSDK_OFFSET(0x1DFD4FD0)
#define PPDLOPCHFDG_PBOACCHKGHB_OFFSET UNITYSDK_OFFSET(0x1DFD4FE0)
#define PPDLOPCHFDG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DFD4E60)
#define PPDLOPCHFDG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DFD5320)
#define PPDLOPCHFDG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DFD5380)

	class PPDLOPCHFDG : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::JHKFCANMFOE*>* CBFGBDBJHID; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 CJELHPADAOM; // 0x20
		static ::Google::Protobuf::FieldCodec** StaticGet_DDFODHOFBIP()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "PPDLOPCHFDG")->GetStaticField(0x43690);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "PPDLOPCHFDG")->GetStaticField(0x43698);
		}

		// static const ::System::Object IMGDAOEBONP; // 0x0
		// static const ::System::Object HOKCAKMNBAO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPDLOPCHFDG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PPDLOPCHFDG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PPDLOPCHFDG*))((::PBYTE)hIl2Cpp + PPDLOPCHFDG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PPDLOPCHFDG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + PPDLOPCHFDG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PPDLOPCHFDG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PPDLOPCHFDG* Clone()
		{
			return ((::PPDLOPCHFDG*(*)(::PVOID))((::PBYTE)hIl2Cpp + PPDLOPCHFDG_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::JHKFCANMFOE*>* MJOEMBBMBON()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::JHKFCANMFOE*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PPDLOPCHFDG_MJOEMBBMBON_OFFSET))(this);
		}

		::System::UInt32 PBOACCHKGHB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PPDLOPCHFDG_PBOACCHKGHB_OFFSET))(this);
		}

		::System::Void BDJMAOHLPHG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PPDLOPCHFDG_BDJMAOHLPHG_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PPDLOPCHFDG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PPDLOPCHFDG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PPDLOPCHFDG*))((::PBYTE)hIl2Cpp + PPDLOPCHFDG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PPDLOPCHFDG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PPDLOPCHFDG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PPDLOPCHFDG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PPDLOPCHFDG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PPDLOPCHFDG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PPDLOPCHFDG*))((::PBYTE)hIl2Cpp + PPDLOPCHFDG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PPDLOPCHFDG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
