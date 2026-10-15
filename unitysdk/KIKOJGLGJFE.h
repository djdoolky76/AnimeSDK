#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KIKOJGLGJFE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KIKOJGLGJFE_BIOOHPIHADO_OFFSET UNITYSDK_OFFSET(0x1E8358B0)
#define KIKOJGLGJFE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E835C30)
#define KIKOJGLGJFE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E835E90)
#define KIKOJGLGJFE_CLCNPIJOIBL_OFFSET UNITYSDK_OFFSET(0x1E8358C0)
#define KIKOJGLGJFE_CLONE_OFFSET UNITYSDK_OFFSET(0x1E835840)
#define KIKOJGLGJFE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E835800)
#define KIKOJGLGJFE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8357F0)
#define KIKOJGLGJFE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E8359B0)
#define KIKOJGLGJFE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E8358D0)
#define KIKOJGLGJFE_FMMFNNOAAEK_OFFSET UNITYSDK_OFFSET(0x1E8358A0)
#define KIKOJGLGJFE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E835A90)
#define KIKOJGLGJFE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E8357B0)
#define KIKOJGLGJFE_KMGGNNGDLCO_OFFSET UNITYSDK_OFFSET(0x1E835890)
#define KIKOJGLGJFE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E835D10)
#define KIKOJGLGJFE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E835CD0)
#define KIKOJGLGJFE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E8357E0)
#define KIKOJGLGJFE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E835AC0)
#define KIKOJGLGJFE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E835B20)

inline static constexpr unsigned int KIKOJGLGJFE_TypeDefinitionIndex = 32376;

	class KIKOJGLGJFE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 MGPCOLIAECE; // 0x18
		::System::Boolean CCNIHPKICOK; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::KIKOJGLGJFE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KIKOJGLGJFE*>**)UnitySDK::FromName("", "KIKOJGLGJFE")->GetStaticField(0x19600);
		}

		// static const ::System::Object KOAPPFHOOEJ; // 0x0
		// static const ::System::Object BOGFCKKNGJB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIKOJGLGJFE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KIKOJGLGJFE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KIKOJGLGJFE*))((::PBYTE)hIl2Cpp + KIKOJGLGJFE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KIKOJGLGJFE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KIKOJGLGJFE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KIKOJGLGJFE*>*(*)())((::PBYTE)hIl2Cpp + KIKOJGLGJFE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KIKOJGLGJFE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KIKOJGLGJFE* Clone()
		{
			return ((::KIKOJGLGJFE*(*)(::PVOID))((::PBYTE)hIl2Cpp + KIKOJGLGJFE_CLONE_OFFSET))(this);
		}

		::System::Boolean KMGGNNGDLCO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KIKOJGLGJFE_KMGGNNGDLCO_OFFSET))(this);
		}

		::System::Void FMMFNNOAAEK(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KIKOJGLGJFE_FMMFNNOAAEK_OFFSET))(this, a1);
		}

		::System::UInt32 BIOOHPIHADO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KIKOJGLGJFE_BIOOHPIHADO_OFFSET))(this);
		}

		::System::Void CLCNPIJOIBL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KIKOJGLGJFE_CLCNPIJOIBL_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KIKOJGLGJFE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KIKOJGLGJFE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KIKOJGLGJFE*))((::PBYTE)hIl2Cpp + KIKOJGLGJFE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KIKOJGLGJFE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KIKOJGLGJFE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KIKOJGLGJFE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KIKOJGLGJFE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KIKOJGLGJFE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KIKOJGLGJFE*))((::PBYTE)hIl2Cpp + KIKOJGLGJFE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KIKOJGLGJFE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
