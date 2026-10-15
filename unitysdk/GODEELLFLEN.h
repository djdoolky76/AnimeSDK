#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GODEELLFLEN;
class JECNOELJLKO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GODEELLFLEN_BKGBGLOLAAL_OFFSET UNITYSDK_OFFSET(0x1E4BFAC0)
#define GODEELLFLEN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E4C00D0)
#define GODEELLFLEN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4C0610)
#define GODEELLFLEN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E4BF9A0)
#define GODEELLFLEN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4BF8C0)
#define GODEELLFLEN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4BF8B0)
#define GODEELLFLEN_DGNDGPNODLE_OFFSET UNITYSDK_OFFSET(0x1E4BFA90)
#define GODEELLFLEN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E4BFD00)
#define GODEELLFLEN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E4BFAD0)
#define GODEELLFLEN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E4BFF30)
#define GODEELLFLEN_HFFHKMCOGOD_OFFSET UNITYSDK_OFFSET(0x1E4BFAA0)
#define GODEELLFLEN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E4BF870)
#define GODEELLFLEN_LOBMIFFMECI_OFFSET UNITYSDK_OFFSET(0x1E4BFAB0)
#define GODEELLFLEN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E4C0340)
#define GODEELLFLEN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E4C0160)
#define GODEELLFLEN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E4BF8A0)
#define GODEELLFLEN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E4BFF90)
#define GODEELLFLEN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E4BFFF0)

inline static constexpr unsigned int GODEELLFLEN_TypeDefinitionIndex = 28752;

	class GODEELLFLEN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::JECNOELJLKO* OBAKDOIMCJK; // 0x18
		::JECNOELJLKO* PFMFIFNKJGE; // 0x20
		static ::Google::Protobuf::MessageParser_1<::GODEELLFLEN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GODEELLFLEN*>**)UnitySDK::FromName("", "GODEELLFLEN")->GetStaticField(0x21F00);
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

		static ::Google::Protobuf::MessageParser_1<::GODEELLFLEN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GODEELLFLEN*>*(*)())((::PBYTE)hIl2Cpp + GODEELLFLEN_JJGHOBBFNJD_OFFSET))();
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
