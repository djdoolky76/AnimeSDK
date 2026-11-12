#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CHDNPFMOKKI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CHDNPFMOKKI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F3928B0)
#define CHDNPFMOKKI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F392B80)
#define CHDNPFMOKKI_CLONE_OFFSET UNITYSDK_OFFSET(0x1F3924B0)
#define CHDNPFMOKKI_CPBLBPJOBMN_OFFSET UNITYSDK_OFFSET(0x1F392540)
#define CHDNPFMOKKI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F392480)
#define CHDNPFMOKKI_CTOR_OFFSET UNITYSDK_OFFSET(0x1F392470)
#define CHDNPFMOKKI_DKHEMJGCFIA_OFFSET UNITYSDK_OFFSET(0x1F392520)
#define CHDNPFMOKKI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F392670)
#define CHDNPFMOKKI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F392560)
#define CHDNPFMOKKI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F392740)
#define CHDNPFMOKKI_IJFJCEOHDLE_OFFSET UNITYSDK_OFFSET(0x1F392550)
#define CHDNPFMOKKI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F392400)
#define CHDNPFMOKKI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F392A00)
#define CHDNPFMOKKI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F3929C0)
#define CHDNPFMOKKI_OLPCNEADPCP_OFFSET UNITYSDK_OFFSET(0x1F392530)
#define CHDNPFMOKKI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F392460)
#define CHDNPFMOKKI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F392770)
#define CHDNPFMOKKI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F3927D0)

inline static constexpr unsigned int CHDNPFMOKKI_TypeDefinitionIndex = 29840;

	class CHDNPFMOKKI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 KJAENGKDFJD; // 0x18
		::System::UInt32 IJDGOPFHKMG; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::CHDNPFMOKKI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CHDNPFMOKKI*>**)UnitySDK::FromName("", "CHDNPFMOKKI")->GetStaticField(0xF4B0);
		}

		// static const ::System::Object EBMJNLIEPFI; // 0x0
		// static const ::System::Object PIACMPBJOIK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHDNPFMOKKI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CHDNPFMOKKI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CHDNPFMOKKI*))((::PBYTE)hIl2Cpp + CHDNPFMOKKI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CHDNPFMOKKI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CHDNPFMOKKI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CHDNPFMOKKI*>*(*)())((::PBYTE)hIl2Cpp + CHDNPFMOKKI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHDNPFMOKKI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CHDNPFMOKKI* Clone()
		{
			return ((::CHDNPFMOKKI*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHDNPFMOKKI_CLONE_OFFSET))(this);
		}

		::System::UInt32 DKHEMJGCFIA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CHDNPFMOKKI_DKHEMJGCFIA_OFFSET))(this);
		}

		::System::Void OLPCNEADPCP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CHDNPFMOKKI_OLPCNEADPCP_OFFSET))(this, a1);
		}

		::System::UInt32 CPBLBPJOBMN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CHDNPFMOKKI_CPBLBPJOBMN_OFFSET))(this);
		}

		::System::Void IJFJCEOHDLE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CHDNPFMOKKI_IJFJCEOHDLE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CHDNPFMOKKI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CHDNPFMOKKI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CHDNPFMOKKI*))((::PBYTE)hIl2Cpp + CHDNPFMOKKI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CHDNPFMOKKI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHDNPFMOKKI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CHDNPFMOKKI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CHDNPFMOKKI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CHDNPFMOKKI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CHDNPFMOKKI*))((::PBYTE)hIl2Cpp + CHDNPFMOKKI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CHDNPFMOKKI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
