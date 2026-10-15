#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AAGLNICHNPI;
class GAJDPEBBFMG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AAGLNICHNPI_ADFBNDEBELO_OFFSET UNITYSDK_OFFSET(0x1DD8CCC0)
#define AAGLNICHNPI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DD8D2D0)
#define AAGLNICHNPI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DD8D5A0)
#define AAGLNICHNPI_CLONE_OFFSET UNITYSDK_OFFSET(0x1DD8CB70)
#define AAGLNICHNPI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DD8CA40)
#define AAGLNICHNPI_CTOR_OFFSET UNITYSDK_OFFSET(0x1DD8CA30)
#define AAGLNICHNPI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DD8CE40)
#define AAGLNICHNPI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DD8CCD0)
#define AAGLNICHNPI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DD8D110)
#define AAGLNICHNPI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DD8C9F0)
#define AAGLNICHNPI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DD8D420)
#define AAGLNICHNPI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DD8D330)
#define AAGLNICHNPI_NHLEFCEKMAM_OFFSET UNITYSDK_OFFSET(0x1DD8CCB0)
#define AAGLNICHNPI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DD8CA20)
#define AAGLNICHNPI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DD8D1E0)
#define AAGLNICHNPI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DD8D240)

inline static constexpr unsigned int AAGLNICHNPI_TypeDefinitionIndex = 27383;

	class AAGLNICHNPI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::GAJDPEBBFMG* CCAGFEOIGIE; // 0x18
		static ::Google::Protobuf::MessageParser_1<::AAGLNICHNPI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::AAGLNICHNPI*>**)UnitySDK::FromName("", "AAGLNICHNPI")->GetStaticField(0x2E920);
		}

		// static const ::System::Object PHNAANFIFGB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAGLNICHNPI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AAGLNICHNPI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AAGLNICHNPI*))((::PBYTE)hIl2Cpp + AAGLNICHNPI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AAGLNICHNPI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::AAGLNICHNPI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::AAGLNICHNPI*>*(*)())((::PBYTE)hIl2Cpp + AAGLNICHNPI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AAGLNICHNPI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AAGLNICHNPI* Clone()
		{
			return ((::AAGLNICHNPI*(*)(::PVOID))((::PBYTE)hIl2Cpp + AAGLNICHNPI_CLONE_OFFSET))(this);
		}

		::GAJDPEBBFMG* NHLEFCEKMAM()
		{
			return ((::GAJDPEBBFMG*(*)(::PVOID))((::PBYTE)hIl2Cpp + AAGLNICHNPI_NHLEFCEKMAM_OFFSET))(this);
		}

		::System::Void ADFBNDEBELO(::GAJDPEBBFMG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GAJDPEBBFMG*))((::PBYTE)hIl2Cpp + AAGLNICHNPI_ADFBNDEBELO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AAGLNICHNPI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AAGLNICHNPI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AAGLNICHNPI*))((::PBYTE)hIl2Cpp + AAGLNICHNPI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AAGLNICHNPI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AAGLNICHNPI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AAGLNICHNPI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AAGLNICHNPI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AAGLNICHNPI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AAGLNICHNPI*))((::PBYTE)hIl2Cpp + AAGLNICHNPI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AAGLNICHNPI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
