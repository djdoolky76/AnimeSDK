#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class APKENKIDMGC;
class DAAKGEDPPJJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define APKENKIDMGC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FA64D00)
#define APKENKIDMGC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA65070)
#define APKENKIDMGC_CLONE_OFFSET UNITYSDK_OFFSET(0x1FA64840)
#define APKENKIDMGC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FA647B0)
#define APKENKIDMGC_CTOR_OFFSET UNITYSDK_OFFSET(0x1FA64770)
#define APKENKIDMGC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FA649F0)
#define APKENKIDMGC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FA648A0)
#define APKENKIDMGC_FKNJGOFJDGJ_OFFSET UNITYSDK_OFFSET(0x1FA64870)
#define APKENKIDMGC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FA64B20)
#define APKENKIDMGC_GPCEBGMKFCE_OFFSET UNITYSDK_OFFSET(0x1FA64890)
#define APKENKIDMGC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FA64730)
#define APKENKIDMGC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FA64EB0)
#define APKENKIDMGC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FA64E10)
#define APKENKIDMGC_OAJIJDGHEEP_OFFSET UNITYSDK_OFFSET(0x1FA64880)
#define APKENKIDMGC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FA64760)
#define APKENKIDMGC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FA64B90)
#define APKENKIDMGC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FA64BF0)

inline static constexpr unsigned int APKENKIDMGC_TypeDefinitionIndex = 34839;

	class APKENKIDMGC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::DAAKGEDPPJJ*>* CAGBOGNAEDA; // 0x18
		::System::UInt32 KKPCNMLIJFD; // 0x20
		static ::Google::Protobuf::MessageParser_1<::APKENKIDMGC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::APKENKIDMGC*>**)UnitySDK::FromName("", "APKENKIDMGC")->GetStaticField(0x3E140);
		}

		static ::Google::Protobuf::FieldCodec_1<::DAAKGEDPPJJ*>** StaticGet_KKJCENMIBBH()
		{
			return (::Google::Protobuf::FieldCodec_1<::DAAKGEDPPJJ*>**)UnitySDK::FromName("", "APKENKIDMGC")->GetStaticField(0x3E148);
		}

		// static const ::System::Object KBENCCGPEOK; // 0x0
		// static const ::System::Object BNKBCFEEDMH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APKENKIDMGC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::APKENKIDMGC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::APKENKIDMGC*))((::PBYTE)hIl2Cpp + APKENKIDMGC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + APKENKIDMGC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::APKENKIDMGC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::APKENKIDMGC*>*(*)())((::PBYTE)hIl2Cpp + APKENKIDMGC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + APKENKIDMGC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::APKENKIDMGC* Clone()
		{
			return ((::APKENKIDMGC*(*)(::PVOID))((::PBYTE)hIl2Cpp + APKENKIDMGC_CLONE_OFFSET))(this);
		}

		::System::UInt32 FKNJGOFJDGJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + APKENKIDMGC_FKNJGOFJDGJ_OFFSET))(this);
		}

		::System::Void OAJIJDGHEEP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + APKENKIDMGC_OAJIJDGHEEP_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::DAAKGEDPPJJ*>* GPCEBGMKFCE()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::DAAKGEDPPJJ*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + APKENKIDMGC_GPCEBGMKFCE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + APKENKIDMGC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::APKENKIDMGC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::APKENKIDMGC*))((::PBYTE)hIl2Cpp + APKENKIDMGC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + APKENKIDMGC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + APKENKIDMGC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + APKENKIDMGC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + APKENKIDMGC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::APKENKIDMGC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::APKENKIDMGC*))((::PBYTE)hIl2Cpp + APKENKIDMGC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + APKENKIDMGC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
