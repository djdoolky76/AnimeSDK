#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ALLFGCIALIJ;
class EMHEOJNCGFH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ALLFGCIALIJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E511840)
#define ALLFGCIALIJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E511BE0)
#define ALLFGCIALIJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E511340)
#define ALLFGCIALIJ_CMAJKBFDLPJ_OFFSET UNITYSDK_OFFSET(0x1E5113B0)
#define ALLFGCIALIJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E511280)
#define ALLFGCIALIJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E511230)
#define ALLFGCIALIJ_DCKAMLHKADM_OFFSET UNITYSDK_OFFSET(0x1E511390)
#define ALLFGCIALIJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E511550)
#define ALLFGCIALIJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E5113C0)
#define ALLFGCIALIJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E511670)
#define ALLFGCIALIJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E5111C0)
#define ALLFGCIALIJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E511A10)
#define ALLFGCIALIJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E511970)
#define ALLFGCIALIJ_NBHNHLFEAHP_OFFSET UNITYSDK_OFFSET(0x1E5113A0)
#define ALLFGCIALIJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E511220)
#define ALLFGCIALIJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E5116E0)
#define ALLFGCIALIJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E511740)

inline static constexpr unsigned int ALLFGCIALIJ_TypeDefinitionIndex = 31698;

	class ALLFGCIALIJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::EMHEOJNCGFH*>* ELBGFDFFBPH; // 0x18
		::System::UInt32 DOLNPPBDMML; // 0x20
		static ::Google::Protobuf::FieldCodec** StaticGet_EHPMIHMAMFE()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "ALLFGCIALIJ")->GetStaticField(0x398D0);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "ALLFGCIALIJ")->GetStaticField(0x398D8);
		}

		// static const ::System::Object JBKGNCCMBND; // 0x0
		// static const ::System::Object CIJBLCKHBCC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALLFGCIALIJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ALLFGCIALIJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ALLFGCIALIJ*))((::PBYTE)hIl2Cpp + ALLFGCIALIJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ALLFGCIALIJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + ALLFGCIALIJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALLFGCIALIJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ALLFGCIALIJ* Clone()
		{
			return ((::ALLFGCIALIJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALLFGCIALIJ_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::EMHEOJNCGFH*>* DCKAMLHKADM()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::EMHEOJNCGFH*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALLFGCIALIJ_DCKAMLHKADM_OFFSET))(this);
		}

		::System::UInt32 NBHNHLFEAHP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ALLFGCIALIJ_NBHNHLFEAHP_OFFSET))(this);
		}

		::System::Void CMAJKBFDLPJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ALLFGCIALIJ_CMAJKBFDLPJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ALLFGCIALIJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ALLFGCIALIJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ALLFGCIALIJ*))((::PBYTE)hIl2Cpp + ALLFGCIALIJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ALLFGCIALIJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALLFGCIALIJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ALLFGCIALIJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ALLFGCIALIJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ALLFGCIALIJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ALLFGCIALIJ*))((::PBYTE)hIl2Cpp + ALLFGCIALIJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ALLFGCIALIJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
