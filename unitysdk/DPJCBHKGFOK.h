#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BPGHDFAFMKH;
class DPJCBHKGFOK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DPJCBHKGFOK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E211AB0)
#define DPJCBHKGFOK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E211DB0)
#define DPJCBHKGFOK_CLONE_OFFSET UNITYSDK_OFFSET(0x1E211630)
#define DPJCBHKGFOK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E2115A0)
#define DPJCBHKGFOK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E211560)
#define DPJCBHKGFOK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E211810)
#define DPJCBHKGFOK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E211690)
#define DPJCBHKGFOK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E211930)
#define DPJCBHKGFOK_GOFFDPOOJCA_OFFSET UNITYSDK_OFFSET(0x1E211680)
#define DPJCBHKGFOK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E2114F0)
#define DPJCBHKGFOK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E211BF0)
#define DPJCBHKGFOK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E211B50)
#define DPJCBHKGFOK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E211550)
#define DPJCBHKGFOK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E2119A0)
#define DPJCBHKGFOK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E211A00)

	class DPJCBHKGFOK : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::BPGHDFAFMKH*>* CPNGPIHBLOE; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "DPJCBHKGFOK")->GetStaticField(0x45C00);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_BNGLHOLLILC()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "DPJCBHKGFOK")->GetStaticField(0x45C08);
		}

		// static const ::System::Object PDCLHAAGAPD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPJCBHKGFOK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DPJCBHKGFOK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DPJCBHKGFOK*))((::PBYTE)hIl2Cpp + DPJCBHKGFOK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DPJCBHKGFOK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + DPJCBHKGFOK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPJCBHKGFOK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DPJCBHKGFOK* Clone()
		{
			return ((::DPJCBHKGFOK*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPJCBHKGFOK_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::BPGHDFAFMKH*>* GOFFDPOOJCA()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::BPGHDFAFMKH*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPJCBHKGFOK_GOFFDPOOJCA_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DPJCBHKGFOK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DPJCBHKGFOK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DPJCBHKGFOK*))((::PBYTE)hIl2Cpp + DPJCBHKGFOK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DPJCBHKGFOK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPJCBHKGFOK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DPJCBHKGFOK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DPJCBHKGFOK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DPJCBHKGFOK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DPJCBHKGFOK*))((::PBYTE)hIl2Cpp + DPJCBHKGFOK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DPJCBHKGFOK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
