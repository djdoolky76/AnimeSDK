#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JFCPFBLKJAB;
class LHNMDFOPMKN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LHNMDFOPMKN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FC89580)
#define LHNMDFOPMKN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FC898A0)
#define LHNMDFOPMKN_CLONE_OFFSET UNITYSDK_OFFSET(0x1FC88EE0)
#define LHNMDFOPMKN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FC88E50)
#define LHNMDFOPMKN_CTOR_OFFSET UNITYSDK_OFFSET(0x1FC88E40)
#define LHNMDFOPMKN_EKFJGDILNKC_OFFSET UNITYSDK_OFFSET(0x1FC88F90)
#define LHNMDFOPMKN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FC891B0)
#define LHNMDFOPMKN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FC89000)
#define LHNMDFOPMKN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FC89360)
#define LHNMDFOPMKN_HHFEJOFBMAD_OFFSET UNITYSDK_OFFSET(0x1FC88FE0)
#define LHNMDFOPMKN_JGEDNACHDIB_OFFSET UNITYSDK_OFFSET(0x1FC88FF0)
#define LHNMDFOPMKN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FC88E00)
#define LHNMDFOPMKN_LDGEKFPFIOI_OFFSET UNITYSDK_OFFSET(0x1FC88F80)
#define LHNMDFOPMKN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FC896C0)
#define LHNMDFOPMKN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FC89620)
#define LHNMDFOPMKN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FC88E30)
#define LHNMDFOPMKN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FC89430)
#define LHNMDFOPMKN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FC89490)

inline static constexpr unsigned int LHNMDFOPMKN_TypeDefinitionIndex = 26719;

	class LHNMDFOPMKN : public ::System::Object
	{
	public:
		::System::String* DKACBPGKHAM; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::JFCPFBLKJAB* OELAFPJOIAA; // 0x20
		static ::Google::Protobuf::MessageParser_1<::LHNMDFOPMKN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LHNMDFOPMKN*>**)UnitySDK::FromName("", "LHNMDFOPMKN")->GetStaticField(0x35A40);
		}

		// static const ::System::Object CIMBAAADILO; // 0x0
		// static const ::System::Object OEKAABINEDK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHNMDFOPMKN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LHNMDFOPMKN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LHNMDFOPMKN*))((::PBYTE)hIl2Cpp + LHNMDFOPMKN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LHNMDFOPMKN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LHNMDFOPMKN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LHNMDFOPMKN*>*(*)())((::PBYTE)hIl2Cpp + LHNMDFOPMKN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHNMDFOPMKN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LHNMDFOPMKN* Clone()
		{
			return ((::LHNMDFOPMKN*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHNMDFOPMKN_CLONE_OFFSET))(this);
		}

		::System::String* LDGEKFPFIOI()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHNMDFOPMKN_LDGEKFPFIOI_OFFSET))(this);
		}

		::System::Void EKFJGDILNKC(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LHNMDFOPMKN_EKFJGDILNKC_OFFSET))(this, a1);
		}

		::JFCPFBLKJAB* HHFEJOFBMAD()
		{
			return ((::JFCPFBLKJAB*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHNMDFOPMKN_HHFEJOFBMAD_OFFSET))(this);
		}

		::System::Void JGEDNACHDIB(::JFCPFBLKJAB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JFCPFBLKJAB*))((::PBYTE)hIl2Cpp + LHNMDFOPMKN_JGEDNACHDIB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LHNMDFOPMKN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LHNMDFOPMKN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LHNMDFOPMKN*))((::PBYTE)hIl2Cpp + LHNMDFOPMKN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LHNMDFOPMKN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHNMDFOPMKN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LHNMDFOPMKN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LHNMDFOPMKN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LHNMDFOPMKN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LHNMDFOPMKN*))((::PBYTE)hIl2Cpp + LHNMDFOPMKN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LHNMDFOPMKN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
