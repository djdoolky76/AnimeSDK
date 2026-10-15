#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PIOAJBFKNIB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PIOAJBFKNIB_AHOBPPNLHMC_OFFSET UNITYSDK_OFFSET(0x1DF421A0)
#define PIOAJBFKNIB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF42600)
#define PIOAJBFKNIB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF42900)
#define PIOAJBFKNIB_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF42170)
#define PIOAJBFKNIB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF420E0)
#define PIOAJBFKNIB_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF42090)
#define PIOAJBFKNIB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF422D0)
#define PIOAJBFKNIB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF421D0)
#define PIOAJBFKNIB_FIKLGPLLNFI_OFFSET UNITYSDK_OFFSET(0x1DF421B0)
#define PIOAJBFKNIB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF423C0)
#define PIOAJBFKNIB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF42050)
#define PIOAJBFKNIB_JLBFCOCKFNM_OFFSET UNITYSDK_OFFSET(0x1DF421C0)
#define PIOAJBFKNIB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF42740)
#define PIOAJBFKNIB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF426F0)
#define PIOAJBFKNIB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF42080)
#define PIOAJBFKNIB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF424C0)
#define PIOAJBFKNIB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF42520)

inline static constexpr unsigned int PIOAJBFKNIB_TypeDefinitionIndex = 26902;

	class PIOAJBFKNIB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* FNBDKCIPGMA; // 0x18
		::System::UInt32 GIJAABDJGDA; // 0x20
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_MIJDCFMPOMH()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "PIOAJBFKNIB")->GetStaticField(0x35980);
		}

		static ::Google::Protobuf::MessageParser_1<::PIOAJBFKNIB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PIOAJBFKNIB*>**)UnitySDK::FromName("", "PIOAJBFKNIB")->GetStaticField(0x35988);
		}

		// static const ::System::Object BCODOEKBJIJ; // 0x0
		// static const ::System::Object GADBEOGJMCH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIOAJBFKNIB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PIOAJBFKNIB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PIOAJBFKNIB*))((::PBYTE)hIl2Cpp + PIOAJBFKNIB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIOAJBFKNIB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PIOAJBFKNIB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PIOAJBFKNIB*>*(*)())((::PBYTE)hIl2Cpp + PIOAJBFKNIB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIOAJBFKNIB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PIOAJBFKNIB* Clone()
		{
			return ((::PIOAJBFKNIB*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIOAJBFKNIB_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* AHOBPPNLHMC()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIOAJBFKNIB_AHOBPPNLHMC_OFFSET))(this);
		}

		::System::UInt32 FIKLGPLLNFI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIOAJBFKNIB_FIKLGPLLNFI_OFFSET))(this);
		}

		::System::Void JLBFCOCKFNM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PIOAJBFKNIB_JLBFCOCKFNM_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PIOAJBFKNIB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PIOAJBFKNIB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PIOAJBFKNIB*))((::PBYTE)hIl2Cpp + PIOAJBFKNIB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIOAJBFKNIB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIOAJBFKNIB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PIOAJBFKNIB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIOAJBFKNIB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PIOAJBFKNIB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PIOAJBFKNIB*))((::PBYTE)hIl2Cpp + PIOAJBFKNIB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PIOAJBFKNIB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
