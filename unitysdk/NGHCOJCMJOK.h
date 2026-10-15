#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EKPBGMKJGDL;
class IPMLDNLACFO;
class NCFKHDIKCNI;
class NGHCOJCMJOK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NGHCOJCMJOK_AJABDLENLPK_OFFSET UNITYSDK_OFFSET(0x1EB0EFD0)
#define NGHCOJCMJOK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB0F6F0)
#define NGHCOJCMJOK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB0FC00)
#define NGHCOJCMJOK_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB0EF60)
#define NGHCOJCMJOK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB0EE30)
#define NGHCOJCMJOK_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB0ED70)
#define NGHCOJCMJOK_ELDAOBFCJLD_OFFSET UNITYSDK_OFFSET(0x1EB0EFF0)
#define NGHCOJCMJOK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB0F060)
#define NGHCOJCMJOK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB0F000)
#define NGHCOJCMJOK_FGGJLLLEDCG_OFFSET UNITYSDK_OFFSET(0x1EB0EFE0)
#define NGHCOJCMJOK_GAHNBLGHPOB_OFFSET UNITYSDK_OFFSET(0x1EB0EFC0)
#define NGHCOJCMJOK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB0F280)
#define NGHCOJCMJOK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EB0ED00)
#define NGHCOJCMJOK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB0FA00)
#define NGHCOJCMJOK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB0F840)
#define NGHCOJCMJOK_OIPLLEKOCHG_OFFSET UNITYSDK_OFFSET(0x1EB0EFB0)
#define NGHCOJCMJOK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB0ED60)
#define NGHCOJCMJOK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB0F4F0)
#define NGHCOJCMJOK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB0F550)

inline static constexpr unsigned int NGHCOJCMJOK_TypeDefinitionIndex = 31844;

	class NGHCOJCMJOK : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* LDCBDLLNKEE; // 0x10
		::NCFKHDIKCNI* GNCBGPANJFE; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::EKPBGMKJGDL*>* NOENDGPGFBA; // 0x20
		::Google::Protobuf::Collections::RepeatedField_1<::IPMLDNLACFO*>* GDJKIAODNLP; // 0x28
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x30
		static ::Google::Protobuf::FieldCodec** StaticGet_HHKJGOOLFIA()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "NGHCOJCMJOK")->GetStaticField(0x5F500);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "NGHCOJCMJOK")->GetStaticField(0x5F508);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_BCMMOFONINA()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "NGHCOJCMJOK")->GetStaticField(0x5F510);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_JMAIFKOAHPC()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "NGHCOJCMJOK")->GetStaticField(0x5F518);
		}

		// static const ::System::Object ICIGCCMGGDN; // 0x0
		// static const ::System::Object DNELNJIEENC; // 0x0
		// static const ::System::Object MBAGFNNEBLC; // 0x0
		// static const ::System::Object GPLPADLGBAC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGHCOJCMJOK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NGHCOJCMJOK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NGHCOJCMJOK*))((::PBYTE)hIl2Cpp + NGHCOJCMJOK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NGHCOJCMJOK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + NGHCOJCMJOK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGHCOJCMJOK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NGHCOJCMJOK* Clone()
		{
			return ((::NGHCOJCMJOK*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGHCOJCMJOK_CLONE_OFFSET))(this);
		}

		::NCFKHDIKCNI* OIPLLEKOCHG()
		{
			return ((::NCFKHDIKCNI*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGHCOJCMJOK_OIPLLEKOCHG_OFFSET))(this);
		}

		::System::Void GAHNBLGHPOB(::NCFKHDIKCNI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NCFKHDIKCNI*))((::PBYTE)hIl2Cpp + NGHCOJCMJOK_GAHNBLGHPOB_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::EKPBGMKJGDL*>* AJABDLENLPK()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::EKPBGMKJGDL*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGHCOJCMJOK_AJABDLENLPK_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::IPMLDNLACFO*>* FGGJLLLEDCG()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::IPMLDNLACFO*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGHCOJCMJOK_FGGJLLLEDCG_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* ELDAOBFCJLD()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGHCOJCMJOK_ELDAOBFCJLD_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NGHCOJCMJOK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NGHCOJCMJOK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NGHCOJCMJOK*))((::PBYTE)hIl2Cpp + NGHCOJCMJOK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NGHCOJCMJOK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGHCOJCMJOK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NGHCOJCMJOK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NGHCOJCMJOK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NGHCOJCMJOK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NGHCOJCMJOK*))((::PBYTE)hIl2Cpp + NGHCOJCMJOK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NGHCOJCMJOK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
