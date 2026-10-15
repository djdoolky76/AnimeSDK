#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FPDBFGBJOFD;
class INIMLGAKMFB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define INIMLGAKMFB_BJBHMGKJLEF_OFFSET UNITYSDK_OFFSET(0x1E6C3560)
#define INIMLGAKMFB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E6C3950)
#define INIMLGAKMFB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6C3C50)
#define INIMLGAKMFB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E6C3530)
#define INIMLGAKMFB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E6C3480)
#define INIMLGAKMFB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6C3430)
#define INIMLGAKMFB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E6C36B0)
#define INIMLGAKMFB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E6C3570)
#define INIMLGAKMFB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E6C37D0)
#define INIMLGAKMFB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E6C33F0)
#define INIMLGAKMFB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E6C3A90)
#define INIMLGAKMFB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E6C39F0)
#define INIMLGAKMFB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E6C3420)
#define INIMLGAKMFB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E6C3840)
#define INIMLGAKMFB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E6C38A0)

inline static constexpr unsigned int INIMLGAKMFB_TypeDefinitionIndex = 30785;

	class INIMLGAKMFB : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::FPDBFGBJOFD*>* MAPFNKMBJIM; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::FieldCodec_1<::FPDBFGBJOFD*>** StaticGet_DPPGLCOJLFL()
		{
			return (::Google::Protobuf::FieldCodec_1<::FPDBFGBJOFD*>**)UnitySDK::FromName("", "INIMLGAKMFB")->GetStaticField(0x58630);
		}

		static ::Google::Protobuf::MessageParser_1<::INIMLGAKMFB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::INIMLGAKMFB*>**)UnitySDK::FromName("", "INIMLGAKMFB")->GetStaticField(0x58638);
		}

		// static const ::System::Object NGKKFPLHMEM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INIMLGAKMFB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::INIMLGAKMFB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::INIMLGAKMFB*))((::PBYTE)hIl2Cpp + INIMLGAKMFB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INIMLGAKMFB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::INIMLGAKMFB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::INIMLGAKMFB*>*(*)())((::PBYTE)hIl2Cpp + INIMLGAKMFB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + INIMLGAKMFB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::INIMLGAKMFB* Clone()
		{
			return ((::INIMLGAKMFB*(*)(::PVOID))((::PBYTE)hIl2Cpp + INIMLGAKMFB_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::FPDBFGBJOFD*>* BJBHMGKJLEF()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::FPDBFGBJOFD*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + INIMLGAKMFB_BJBHMGKJLEF_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + INIMLGAKMFB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::INIMLGAKMFB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::INIMLGAKMFB*))((::PBYTE)hIl2Cpp + INIMLGAKMFB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INIMLGAKMFB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + INIMLGAKMFB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + INIMLGAKMFB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INIMLGAKMFB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::INIMLGAKMFB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::INIMLGAKMFB*))((::PBYTE)hIl2Cpp + INIMLGAKMFB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + INIMLGAKMFB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
