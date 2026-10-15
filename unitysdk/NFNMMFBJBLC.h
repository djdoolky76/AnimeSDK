#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NFNMMFBJBLC;
class OCBPJLLLJGO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NFNMMFBJBLC_AHDLOGFKOAC_OFFSET UNITYSDK_OFFSET(0x1EB07B20)
#define NFNMMFBJBLC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB07FA0)
#define NFNMMFBJBLC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB08340)
#define NFNMMFBJBLC_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB07AF0)
#define NFNMMFBJBLC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB07A30)
#define NFNMMFBJBLC_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB079E0)
#define NFNMMFBJBLC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB07CA0)
#define NFNMMFBJBLC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB07B50)
#define NFNMMFBJBLC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB07DC0)
#define NFNMMFBJBLC_GOLPFFCDICE_OFFSET UNITYSDK_OFFSET(0x1EB07B40)
#define NFNMMFBJBLC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EB079A0)
#define NFNMMFBJBLC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB08170)
#define NFNMMFBJBLC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB080D0)
#define NFNMMFBJBLC_OGMHHLBHKOF_OFFSET UNITYSDK_OFFSET(0x1EB07B30)
#define NFNMMFBJBLC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB079D0)
#define NFNMMFBJBLC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB07E30)
#define NFNMMFBJBLC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB07E90)

inline static constexpr unsigned int NFNMMFBJBLC_TypeDefinitionIndex = 33095;

	class NFNMMFBJBLC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::OCBPJLLLJGO*>* FJCFLPEMJML; // 0x18
		::System::UInt32 JCGMPJONLCA; // 0x20
		static ::Google::Protobuf::MessageParser_1<::NFNMMFBJBLC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NFNMMFBJBLC*>**)UnitySDK::FromName("", "NFNMMFBJBLC")->GetStaticField(0x5ED10);
		}

		static ::Google::Protobuf::FieldCodec_1<::OCBPJLLLJGO*>** StaticGet_NHGBLCCPCMM()
		{
			return (::Google::Protobuf::FieldCodec_1<::OCBPJLLLJGO*>**)UnitySDK::FromName("", "NFNMMFBJBLC")->GetStaticField(0x5ED18);
		}

		// static const ::System::Object IHNHBKMLIOA; // 0x0
		// static const ::System::Object GAHLJEECCFB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFNMMFBJBLC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NFNMMFBJBLC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NFNMMFBJBLC*))((::PBYTE)hIl2Cpp + NFNMMFBJBLC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NFNMMFBJBLC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NFNMMFBJBLC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NFNMMFBJBLC*>*(*)())((::PBYTE)hIl2Cpp + NFNMMFBJBLC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFNMMFBJBLC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NFNMMFBJBLC* Clone()
		{
			return ((::NFNMMFBJBLC*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFNMMFBJBLC_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::OCBPJLLLJGO*>* AHDLOGFKOAC()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::OCBPJLLLJGO*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFNMMFBJBLC_AHDLOGFKOAC_OFFSET))(this);
		}

		::System::UInt32 OGMHHLBHKOF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NFNMMFBJBLC_OGMHHLBHKOF_OFFSET))(this);
		}

		::System::Void GOLPFFCDICE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NFNMMFBJBLC_GOLPFFCDICE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NFNMMFBJBLC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NFNMMFBJBLC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NFNMMFBJBLC*))((::PBYTE)hIl2Cpp + NFNMMFBJBLC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NFNMMFBJBLC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFNMMFBJBLC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NFNMMFBJBLC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NFNMMFBJBLC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NFNMMFBJBLC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NFNMMFBJBLC*))((::PBYTE)hIl2Cpp + NFNMMFBJBLC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NFNMMFBJBLC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
