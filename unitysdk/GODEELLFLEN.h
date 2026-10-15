#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GODEELLFLEN;
class JECNOELJLKO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GODEELLFLEN_BKGBGLOLAAL_OFFSET UNITYSDK_OFFSET(0x1E4ED150)
#define GODEELLFLEN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E4ED760)
#define GODEELLFLEN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4EDCA0)
#define GODEELLFLEN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E4ED030)
#define GODEELLFLEN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4ECF50)
#define GODEELLFLEN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4ECF40)
#define GODEELLFLEN_DGNDGPNODLE_OFFSET UNITYSDK_OFFSET(0x1E4ED120)
#define GODEELLFLEN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E4ED390)
#define GODEELLFLEN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E4ED160)
#define GODEELLFLEN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E4ED5C0)
#define GODEELLFLEN_HFFHKMCOGOD_OFFSET UNITYSDK_OFFSET(0x1E4ED130)
#define GODEELLFLEN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E4ECF00)
#define GODEELLFLEN_LOBMIFFMECI_OFFSET UNITYSDK_OFFSET(0x1E4ED140)
#define GODEELLFLEN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E4ED9D0)
#define GODEELLFLEN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E4ED7F0)
#define GODEELLFLEN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E4ECF30)
#define GODEELLFLEN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E4ED620)
#define GODEELLFLEN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E4ED680)

	class GODEELLFLEN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::JECNOELJLKO* PFMFIFNKJGE; // 0x18
		::JECNOELJLKO* OBAKDOIMCJK; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "GODEELLFLEN")->GetStaticField(0x24DA0);
		}

		// static const ::System::Object FKPIMBKJFPO; // 0x0
		// static const ::System::Object GOHGOAOPKCE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GODEELLFLEN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GODEELLFLEN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GODEELLFLEN*))((::PBYTE)hIl2Cpp + GODEELLFLEN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GODEELLFLEN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + GODEELLFLEN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GODEELLFLEN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GODEELLFLEN* Clone()
		{
			return ((::GODEELLFLEN*(*)(::PVOID))((::PBYTE)hIl2Cpp + GODEELLFLEN_CLONE_OFFSET))(this);
		}

		::JECNOELJLKO* DGNDGPNODLE()
		{
			return ((::JECNOELJLKO*(*)(::PVOID))((::PBYTE)hIl2Cpp + GODEELLFLEN_DGNDGPNODLE_OFFSET))(this);
		}

		::System::Void HFFHKMCOGOD(::JECNOELJLKO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JECNOELJLKO*))((::PBYTE)hIl2Cpp + GODEELLFLEN_HFFHKMCOGOD_OFFSET))(this, a1);
		}

		::JECNOELJLKO* LOBMIFFMECI()
		{
			return ((::JECNOELJLKO*(*)(::PVOID))((::PBYTE)hIl2Cpp + GODEELLFLEN_LOBMIFFMECI_OFFSET))(this);
		}

		::System::Void BKGBGLOLAAL(::JECNOELJLKO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JECNOELJLKO*))((::PBYTE)hIl2Cpp + GODEELLFLEN_BKGBGLOLAAL_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GODEELLFLEN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GODEELLFLEN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GODEELLFLEN*))((::PBYTE)hIl2Cpp + GODEELLFLEN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GODEELLFLEN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GODEELLFLEN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GODEELLFLEN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GODEELLFLEN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GODEELLFLEN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GODEELLFLEN*))((::PBYTE)hIl2Cpp + GODEELLFLEN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GODEELLFLEN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
