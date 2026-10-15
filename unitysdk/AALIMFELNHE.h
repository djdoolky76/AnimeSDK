#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AALIMFELNHE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AALIMFELNHE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DD916F0)
#define AALIMFELNHE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DD919E0)
#define AALIMFELNHE_CLONE_OFFSET UNITYSDK_OFFSET(0x1DD91260)
#define AALIMFELNHE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DD911D0)
#define AALIMFELNHE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DD91180)
#define AALIMFELNHE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DD913C0)
#define AALIMFELNHE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DD912C0)
#define AALIMFELNHE_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1DD912A0)
#define AALIMFELNHE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DD914B0)
#define AALIMFELNHE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DD91140)
#define AALIMFELNHE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DD91820)
#define AALIMFELNHE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DD917D0)
#define AALIMFELNHE_NLEKCMHKHJC_OFFSET UNITYSDK_OFFSET(0x1DD912B0)
#define AALIMFELNHE_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1DD91290)
#define AALIMFELNHE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DD91170)
#define AALIMFELNHE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DD915B0)
#define AALIMFELNHE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DD91610)

inline static constexpr unsigned int AALIMFELNHE_TypeDefinitionIndex = 34254;

	class AALIMFELNHE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* ODBALDDPKMF; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::AALIMFELNHE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::AALIMFELNHE*>**)UnitySDK::FromName("", "AALIMFELNHE")->GetStaticField(0x2EF90);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_PNHCJDDEDIF()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "AALIMFELNHE")->GetStaticField(0x2EF98);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object CNMBCBDCABO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AALIMFELNHE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AALIMFELNHE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AALIMFELNHE*))((::PBYTE)hIl2Cpp + AALIMFELNHE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AALIMFELNHE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::AALIMFELNHE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::AALIMFELNHE*>*(*)())((::PBYTE)hIl2Cpp + AALIMFELNHE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AALIMFELNHE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AALIMFELNHE* Clone()
		{
			return ((::AALIMFELNHE*(*)(::PVOID))((::PBYTE)hIl2Cpp + AALIMFELNHE_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AALIMFELNHE_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AALIMFELNHE_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* NLEKCMHKHJC()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AALIMFELNHE_NLEKCMHKHJC_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AALIMFELNHE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AALIMFELNHE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AALIMFELNHE*))((::PBYTE)hIl2Cpp + AALIMFELNHE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AALIMFELNHE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AALIMFELNHE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AALIMFELNHE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AALIMFELNHE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AALIMFELNHE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AALIMFELNHE*))((::PBYTE)hIl2Cpp + AALIMFELNHE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AALIMFELNHE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
