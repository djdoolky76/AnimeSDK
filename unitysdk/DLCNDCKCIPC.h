#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DLCNDCKCIPC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DLCNDCKCIPC_BEKKEMFPFGI_OFFSET UNITYSDK_OFFSET(0x1E1E0380)
#define DLCNDCKCIPC_BNMLFELEEIM_OFFSET UNITYSDK_OFFSET(0x1E1E0360)
#define DLCNDCKCIPC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E1E0760)
#define DLCNDCKCIPC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1E09C0)
#define DLCNDCKCIPC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E1C71B0)
#define DLCNDCKCIPC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E1E0290)
#define DLCNDCKCIPC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1C8B40)
#define DLCNDCKCIPC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E1E0430)
#define DLCNDCKCIPC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E1E03A0)
#define DLCNDCKCIPC_FPNAINDPMLO_OFFSET UNITYSDK_OFFSET(0x1E1E0370)
#define DLCNDCKCIPC_GBJBFIJNMOA_OFFSET UNITYSDK_OFFSET(0x1E1E0350)
#define DLCNDCKCIPC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E1C7BF0)
#define DLCNDCKCIPC_GNMHMOJFNOI_OFFSET UNITYSDK_OFFSET(0x1E1E0390)
#define DLCNDCKCIPC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E1E0250)
#define DLCNDCKCIPC_KKFLDAEAFPJ_OFFSET UNITYSDK_OFFSET(0x1E1E0330)
#define DLCNDCKCIPC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E1E08C0)
#define DLCNDCKCIPC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E1C8B90)
#define DLCNDCKCIPC_NDECGLPJDBO_OFFSET UNITYSDK_OFFSET(0x1E1E0340)
#define DLCNDCKCIPC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E1E0280)
#define DLCNDCKCIPC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E1E0540)
#define DLCNDCKCIPC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E1E05A0)

	class DLCNDCKCIPC : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* JGNDMKKKHLN; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 GPEGBIIDKHI; // 0x20
		::System::Boolean AEKIJMGMLIN; // 0x24
		::System::Byte _padding0[0x3];
		::System::UInt32 GHFOFBFELLK; // 0x28
		static ::Google::Protobuf::FieldCodec** StaticGet_MCPPDDPMHNC()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "DLCNDCKCIPC")->GetStaticField(0x3C1F0);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "DLCNDCKCIPC")->GetStaticField(0x3C1F8);
		}

		// static const ::System::Object BLLEKPOPBDM; // 0x0
		// static const ::System::Object DLBKLKMAGDH; // 0x0
		// static const ::System::Object FFOHGJLPOIH; // 0x0
		// static const ::System::Object KNDBBADBBEH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLCNDCKCIPC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DLCNDCKCIPC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DLCNDCKCIPC*))((::PBYTE)hIl2Cpp + DLCNDCKCIPC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DLCNDCKCIPC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + DLCNDCKCIPC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DLCNDCKCIPC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DLCNDCKCIPC* Clone()
		{
			return ((::DLCNDCKCIPC*(*)(::PVOID))((::PBYTE)hIl2Cpp + DLCNDCKCIPC_CLONE_OFFSET))(this);
		}

		::System::Boolean KKFLDAEAFPJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DLCNDCKCIPC_KKFLDAEAFPJ_OFFSET))(this);
		}

		::System::Void NDECGLPJDBO(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DLCNDCKCIPC_NDECGLPJDBO_OFFSET))(this, a1);
		}

		::System::UInt32 GBJBFIJNMOA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DLCNDCKCIPC_GBJBFIJNMOA_OFFSET))(this);
		}

		::System::Void BNMLFELEEIM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DLCNDCKCIPC_BNMLFELEEIM_OFFSET))(this, a1);
		}

		::System::UInt32 FPNAINDPMLO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DLCNDCKCIPC_FPNAINDPMLO_OFFSET))(this);
		}

		::System::Void BEKKEMFPFGI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DLCNDCKCIPC_BEKKEMFPFGI_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* GNMHMOJFNOI()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DLCNDCKCIPC_GNMHMOJFNOI_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DLCNDCKCIPC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DLCNDCKCIPC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DLCNDCKCIPC*))((::PBYTE)hIl2Cpp + DLCNDCKCIPC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DLCNDCKCIPC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DLCNDCKCIPC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DLCNDCKCIPC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DLCNDCKCIPC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DLCNDCKCIPC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DLCNDCKCIPC*))((::PBYTE)hIl2Cpp + DLCNDCKCIPC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DLCNDCKCIPC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
