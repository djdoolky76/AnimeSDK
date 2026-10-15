#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EDBOGEKADGP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EDBOGEKADGP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E22CF30)
#define EDBOGEKADGP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E22D220)
#define EDBOGEKADGP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E22CAA0)
#define EDBOGEKADGP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E22CA10)
#define EDBOGEKADGP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E22C9C0)
#define EDBOGEKADGP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E22CC00)
#define EDBOGEKADGP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E22CB00)
#define EDBOGEKADGP_FGGMONEBPJK_OFFSET UNITYSDK_OFFSET(0x1E22CAE0)
#define EDBOGEKADGP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E22CCF0)
#define EDBOGEKADGP_GIGDECMMBDL_OFFSET UNITYSDK_OFFSET(0x1E22CAD0)
#define EDBOGEKADGP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E22C980)
#define EDBOGEKADGP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E22D070)
#define EDBOGEKADGP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E22D020)
#define EDBOGEKADGP_MFDMKBDNNNO_OFFSET UNITYSDK_OFFSET(0x1E22CAF0)
#define EDBOGEKADGP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E22C9B0)
#define EDBOGEKADGP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E22CDF0)
#define EDBOGEKADGP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E22CE50)

inline static constexpr unsigned int EDBOGEKADGP_TypeDefinitionIndex = 32948;

	class EDBOGEKADGP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* DMPJHPNADHG; // 0x18
		::System::UInt32 OOCNBKECAEB; // 0x20
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_PDKICPLCJCP()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "EDBOGEKADGP")->GetStaticField(0x43260);
		}

		static ::Google::Protobuf::MessageParser_1<::EDBOGEKADGP*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::EDBOGEKADGP*>**)UnitySDK::FromName("", "EDBOGEKADGP")->GetStaticField(0x43268);
		}

		// static const ::System::Object HGHGDCPGAMF; // 0x0
		// static const ::System::Object DJPIJEGKLHL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDBOGEKADGP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EDBOGEKADGP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EDBOGEKADGP*))((::PBYTE)hIl2Cpp + EDBOGEKADGP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EDBOGEKADGP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::EDBOGEKADGP*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::EDBOGEKADGP*>*(*)())((::PBYTE)hIl2Cpp + EDBOGEKADGP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDBOGEKADGP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EDBOGEKADGP* Clone()
		{
			return ((::EDBOGEKADGP*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDBOGEKADGP_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* GIGDECMMBDL()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDBOGEKADGP_GIGDECMMBDL_OFFSET))(this);
		}

		::System::UInt32 FGGMONEBPJK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EDBOGEKADGP_FGGMONEBPJK_OFFSET))(this);
		}

		::System::Void MFDMKBDNNNO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EDBOGEKADGP_MFDMKBDNNNO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EDBOGEKADGP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EDBOGEKADGP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EDBOGEKADGP*))((::PBYTE)hIl2Cpp + EDBOGEKADGP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EDBOGEKADGP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDBOGEKADGP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EDBOGEKADGP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EDBOGEKADGP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EDBOGEKADGP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EDBOGEKADGP*))((::PBYTE)hIl2Cpp + EDBOGEKADGP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EDBOGEKADGP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
