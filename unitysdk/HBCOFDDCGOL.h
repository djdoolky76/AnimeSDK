#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HBCOFDDCGOL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HBCOFDDCGOL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E4DF5E0)
#define HBCOFDDCGOL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4DF8E0)
#define HBCOFDDCGOL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E4DF150)
#define HBCOFDDCGOL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4DF0C0)
#define HBCOFDDCGOL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4DF070)
#define HBCOFDDCGOL_EMMJPJAMEFL_OFFSET UNITYSDK_OFFSET(0x1E4DF190)
#define HBCOFDDCGOL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E4DF2B0)
#define HBCOFDDCGOL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E4DF1B0)
#define HBCOFDDCGOL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E4DF3A0)
#define HBCOFDDCGOL_GNAKEIEGCDI_OFFSET UNITYSDK_OFFSET(0x1E4DF180)
#define HBCOFDDCGOL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E4DF030)
#define HBCOFDDCGOL_JLCKFMGKJPB_OFFSET UNITYSDK_OFFSET(0x1E4DF1A0)
#define HBCOFDDCGOL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E4DF720)
#define HBCOFDDCGOL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E4DF6D0)
#define HBCOFDDCGOL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E4DF060)
#define HBCOFDDCGOL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E4DF4A0)
#define HBCOFDDCGOL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E4DF500)

inline static constexpr unsigned int HBCOFDDCGOL_TypeDefinitionIndex = 33569;

	class HBCOFDDCGOL : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* BCOHDKAHBCJ; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 PBPJNDEHDNK; // 0x20
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_KBBPPNNDJDN()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "HBCOFDDCGOL")->GetStaticField(0x253D0);
		}

		static ::Google::Protobuf::MessageParser_1<::HBCOFDDCGOL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HBCOFDDCGOL*>**)UnitySDK::FromName("", "HBCOFDDCGOL")->GetStaticField(0x253D8);
		}

		// static const ::System::Object LLMAPPDKOPI; // 0x0
		// static const ::System::Object JOKMIFACEIK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBCOFDDCGOL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HBCOFDDCGOL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HBCOFDDCGOL*))((::PBYTE)hIl2Cpp + HBCOFDDCGOL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HBCOFDDCGOL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HBCOFDDCGOL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HBCOFDDCGOL*>*(*)())((::PBYTE)hIl2Cpp + HBCOFDDCGOL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBCOFDDCGOL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HBCOFDDCGOL* Clone()
		{
			return ((::HBCOFDDCGOL*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBCOFDDCGOL_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* GNAKEIEGCDI()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBCOFDDCGOL_GNAKEIEGCDI_OFFSET))(this);
		}

		::System::UInt32 EMMJPJAMEFL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HBCOFDDCGOL_EMMJPJAMEFL_OFFSET))(this);
		}

		::System::Void JLCKFMGKJPB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HBCOFDDCGOL_JLCKFMGKJPB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HBCOFDDCGOL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HBCOFDDCGOL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HBCOFDDCGOL*))((::PBYTE)hIl2Cpp + HBCOFDDCGOL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HBCOFDDCGOL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBCOFDDCGOL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HBCOFDDCGOL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HBCOFDDCGOL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HBCOFDDCGOL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HBCOFDDCGOL*))((::PBYTE)hIl2Cpp + HBCOFDDCGOL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HBCOFDDCGOL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
