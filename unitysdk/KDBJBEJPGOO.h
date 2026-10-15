#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KDBJBEJPGOO;
class LMKECAPDMAC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KDBJBEJPGOO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E7D01E0)
#define KDBJBEJPGOO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7D04E0)
#define KDBJBEJPGOO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E7CFD60)
#define KDBJBEJPGOO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E7CFCB0)
#define KDBJBEJPGOO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7CFC60)
#define KDBJBEJPGOO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E7CFF40)
#define KDBJBEJPGOO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E7CFDC0)
#define KDBJBEJPGOO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E7D0060)
#define KDBJBEJPGOO_IPLJHFBNIEJ_OFFSET UNITYSDK_OFFSET(0x1E7CFDB0)
#define KDBJBEJPGOO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E7CFBF0)
#define KDBJBEJPGOO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E7D0320)
#define KDBJBEJPGOO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E7D0280)
#define KDBJBEJPGOO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E7CFC50)
#define KDBJBEJPGOO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E7D00D0)
#define KDBJBEJPGOO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E7D0130)

inline static constexpr unsigned int KDBJBEJPGOO_TypeDefinitionIndex = 34802;

	class KDBJBEJPGOO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::LMKECAPDMAC*>* BLIHAOKCNJM; // 0x18
		static ::Google::Protobuf::FieldCodec_1<::LMKECAPDMAC*>** StaticGet_FPNMMDHGFBH()
		{
			return (::Google::Protobuf::FieldCodec_1<::LMKECAPDMAC*>**)UnitySDK::FromName("", "KDBJBEJPGOO")->GetStaticField(0xFFE0);
		}

		static ::Google::Protobuf::MessageParser_1<::KDBJBEJPGOO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KDBJBEJPGOO*>**)UnitySDK::FromName("", "KDBJBEJPGOO")->GetStaticField(0xFFE8);
		}

		// static const ::System::Object DGIOFPBGOMF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDBJBEJPGOO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KDBJBEJPGOO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KDBJBEJPGOO*))((::PBYTE)hIl2Cpp + KDBJBEJPGOO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KDBJBEJPGOO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KDBJBEJPGOO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KDBJBEJPGOO*>*(*)())((::PBYTE)hIl2Cpp + KDBJBEJPGOO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDBJBEJPGOO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KDBJBEJPGOO* Clone()
		{
			return ((::KDBJBEJPGOO*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDBJBEJPGOO_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::LMKECAPDMAC*>* IPLJHFBNIEJ()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::LMKECAPDMAC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDBJBEJPGOO_IPLJHFBNIEJ_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KDBJBEJPGOO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KDBJBEJPGOO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KDBJBEJPGOO*))((::PBYTE)hIl2Cpp + KDBJBEJPGOO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KDBJBEJPGOO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDBJBEJPGOO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KDBJBEJPGOO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KDBJBEJPGOO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KDBJBEJPGOO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KDBJBEJPGOO*))((::PBYTE)hIl2Cpp + KDBJBEJPGOO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KDBJBEJPGOO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
