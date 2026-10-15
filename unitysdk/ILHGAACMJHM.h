#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ILHGAACMJHM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ILHGAACMJHM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E6AEC20)
#define ILHGAACMJHM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6AEEC0)
#define ILHGAACMJHM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E6AE790)
#define ILHGAACMJHM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E6AE700)
#define ILHGAACMJHM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6AE6B0)
#define ILHGAACMJHM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E6AE890)
#define ILHGAACMJHM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E6AE810)
#define ILHGAACMJHM_FHHDJDHNCDJ_OFFSET UNITYSDK_OFFSET(0x1E6AE7E0)
#define ILHGAACMJHM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E6AE990)
#define ILHGAACMJHM_HIALOEJJJON_OFFSET UNITYSDK_OFFSET(0x1E6AE7D0)
#define ILHGAACMJHM_IHPIPIALMBC_OFFSET UNITYSDK_OFFSET(0x1E6AE800)
#define ILHGAACMJHM_JFAHHKJPJNB_OFFSET UNITYSDK_OFFSET(0x1E6AE7F0)
#define ILHGAACMJHM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E6AE670)
#define ILHGAACMJHM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E6AEDF0)
#define ILHGAACMJHM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E6AED90)
#define ILHGAACMJHM_MIDICONAIKA_OFFSET UNITYSDK_OFFSET(0x1E6AE7C0)
#define ILHGAACMJHM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E6AE6A0)
#define ILHGAACMJHM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E6AEA90)
#define ILHGAACMJHM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E6AEAF0)

inline static constexpr unsigned int ILHGAACMJHM_TypeDefinitionIndex = 27569;

	class ILHGAACMJHM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* NINBANKALMP; // 0x18
		::System::UInt32 EPMAFPOGHJP; // 0x20
		::System::UInt32 AJMLAFCBLOG; // 0x24
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "ILHGAACMJHM")->GetStaticField(0x56560);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_BPHDIAHJNMG()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "ILHGAACMJHM")->GetStaticField(0x56568);
		}

		// static const ::System::Object LDFBIBLACJK; // 0x0
		// static const ::System::Object GKOLCONPOCB; // 0x0
		// static const ::System::Object LIGPJANCEBM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILHGAACMJHM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ILHGAACMJHM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ILHGAACMJHM*))((::PBYTE)hIl2Cpp + ILHGAACMJHM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ILHGAACMJHM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + ILHGAACMJHM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILHGAACMJHM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ILHGAACMJHM* Clone()
		{
			return ((::ILHGAACMJHM*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILHGAACMJHM_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* MIDICONAIKA()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILHGAACMJHM_MIDICONAIKA_OFFSET))(this);
		}

		::System::UInt32 HIALOEJJJON()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ILHGAACMJHM_HIALOEJJJON_OFFSET))(this);
		}

		::System::Void FHHDJDHNCDJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ILHGAACMJHM_FHHDJDHNCDJ_OFFSET))(this, a1);
		}

		::System::UInt32 JFAHHKJPJNB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ILHGAACMJHM_JFAHHKJPJNB_OFFSET))(this);
		}

		::System::Void IHPIPIALMBC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ILHGAACMJHM_IHPIPIALMBC_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ILHGAACMJHM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ILHGAACMJHM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ILHGAACMJHM*))((::PBYTE)hIl2Cpp + ILHGAACMJHM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ILHGAACMJHM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILHGAACMJHM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ILHGAACMJHM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ILHGAACMJHM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ILHGAACMJHM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ILHGAACMJHM*))((::PBYTE)hIl2Cpp + ILHGAACMJHM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ILHGAACMJHM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
