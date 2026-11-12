#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PDKGKIDCBKA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PDKGKIDCBKA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F1DC810)
#define PDKGKIDCBKA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F1DCA30)
#define PDKGKIDCBKA_CLONE_OFFSET UNITYSDK_OFFSET(0x1F1DC400)
#define PDKGKIDCBKA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F1DC3D0)
#define PDKGKIDCBKA_CTOR_OFFSET UNITYSDK_OFFSET(0x1F1DC3C0)
#define PDKGKIDCBKA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F1DC590)
#define PDKGKIDCBKA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F1DC490)
#define PDKGKIDCBKA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F1DC700)
#define PDKGKIDCBKA_JCDMOEJDBHN_OFFSET UNITYSDK_OFFSET(0x1F1DC470)
#define PDKGKIDCBKA_JIOGHONJOFF_OFFSET UNITYSDK_OFFSET(0x1F1DC480)
#define PDKGKIDCBKA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F1DC350)
#define PDKGKIDCBKA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F1DC8D0)
#define PDKGKIDCBKA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F1DC8A0)
#define PDKGKIDCBKA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F1DC3B0)
#define PDKGKIDCBKA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F1DC730)
#define PDKGKIDCBKA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F1DC790)

inline static constexpr unsigned int PDKGKIDCBKA_TypeDefinitionIndex = 30275;

	class PDKGKIDCBKA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 DIAEIJEMDHP; // 0x18
		static ::Google::Protobuf::MessageParser_1<::PDKGKIDCBKA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PDKGKIDCBKA*>**)UnitySDK::FromName("", "PDKGKIDCBKA")->GetStaticField(0x2F100);
		}

		// static const ::System::Object KHENDMLMNMB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDKGKIDCBKA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PDKGKIDCBKA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PDKGKIDCBKA*))((::PBYTE)hIl2Cpp + PDKGKIDCBKA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PDKGKIDCBKA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PDKGKIDCBKA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PDKGKIDCBKA*>*(*)())((::PBYTE)hIl2Cpp + PDKGKIDCBKA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PDKGKIDCBKA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PDKGKIDCBKA* Clone()
		{
			return ((::PDKGKIDCBKA*(*)(::PVOID))((::PBYTE)hIl2Cpp + PDKGKIDCBKA_CLONE_OFFSET))(this);
		}

		::System::UInt32 JCDMOEJDBHN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PDKGKIDCBKA_JCDMOEJDBHN_OFFSET))(this);
		}

		::System::Void JIOGHONJOFF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PDKGKIDCBKA_JIOGHONJOFF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PDKGKIDCBKA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PDKGKIDCBKA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PDKGKIDCBKA*))((::PBYTE)hIl2Cpp + PDKGKIDCBKA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PDKGKIDCBKA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PDKGKIDCBKA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PDKGKIDCBKA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PDKGKIDCBKA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PDKGKIDCBKA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PDKGKIDCBKA*))((::PBYTE)hIl2Cpp + PDKGKIDCBKA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PDKGKIDCBKA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
