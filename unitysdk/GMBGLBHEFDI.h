#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GMBGLBHEFDI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GMBGLBHEFDI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E4CA060)
#define GMBGLBHEFDI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4CA280)
#define GMBGLBHEFDI_CLONE_OFFSET UNITYSDK_OFFSET(0x1E4C9B30)
#define GMBGLBHEFDI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4C9A40)
#define GMBGLBHEFDI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4C99B0)
#define GMBGLBHEFDI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E4C9C90)
#define GMBGLBHEFDI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E4C9B80)
#define GMBGLBHEFDI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E4C9DA0)
#define GMBGLBHEFDI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E4C9970)
#define GMBGLBHEFDI_LAIEMBADJHP_OFFSET UNITYSDK_OFFSET(0x1E4C9B60)
#define GMBGLBHEFDI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E4CA150)
#define GMBGLBHEFDI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E4CA0F0)
#define GMBGLBHEFDI_MMFOGGENIEI_OFFSET UNITYSDK_OFFSET(0x1E4C9B70)
#define GMBGLBHEFDI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E4C99A0)
#define GMBGLBHEFDI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E4C9F60)
#define GMBGLBHEFDI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E4C9FC0)

inline static constexpr unsigned int GMBGLBHEFDI_TypeDefinitionIndex = 34552;

	class GMBGLBHEFDI : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* ILINFECDPON; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* AFPJPMFGPIP; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_DEDPLCMFABC()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "GMBGLBHEFDI")->GetStaticField(0x20600);
		}

		static ::Google::Protobuf::MessageParser_1<::GMBGLBHEFDI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GMBGLBHEFDI*>**)UnitySDK::FromName("", "GMBGLBHEFDI")->GetStaticField(0x20608);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_FBGAEFMBKKG()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "GMBGLBHEFDI")->GetStaticField(0x20610);
		}

		// static const ::System::Object DJCBLFFDIDB; // 0x0
		// static const ::System::Object PNHIJFAHEDM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMBGLBHEFDI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GMBGLBHEFDI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GMBGLBHEFDI*))((::PBYTE)hIl2Cpp + GMBGLBHEFDI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GMBGLBHEFDI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GMBGLBHEFDI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GMBGLBHEFDI*>*(*)())((::PBYTE)hIl2Cpp + GMBGLBHEFDI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMBGLBHEFDI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GMBGLBHEFDI* Clone()
		{
			return ((::GMBGLBHEFDI*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMBGLBHEFDI_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* LAIEMBADJHP()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMBGLBHEFDI_LAIEMBADJHP_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* MMFOGGENIEI()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMBGLBHEFDI_MMFOGGENIEI_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GMBGLBHEFDI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GMBGLBHEFDI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GMBGLBHEFDI*))((::PBYTE)hIl2Cpp + GMBGLBHEFDI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GMBGLBHEFDI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMBGLBHEFDI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GMBGLBHEFDI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GMBGLBHEFDI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GMBGLBHEFDI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GMBGLBHEFDI*))((::PBYTE)hIl2Cpp + GMBGLBHEFDI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GMBGLBHEFDI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
