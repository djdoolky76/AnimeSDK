#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BCIMOPDDKHH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BCIMOPDDKHH_AFMCDJJPIIN_OFFSET UNITYSDK_OFFSET(0x1E9082A0)
#define BCIMOPDDKHH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E908730)
#define BCIMOPDDKHH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E908A80)
#define BCIMOPDDKHH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E908230)
#define BCIMOPDDKHH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E9081A0)
#define BCIMOPDDKHH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E908150)
#define BCIMOPDDKHH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E9083E0)
#define BCIMOPDDKHH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E9082B0)
#define BCIMOPDDKHH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E9084D0)
#define BCIMOPDDKHH_HCOIFBALCNA_OFFSET UNITYSDK_OFFSET(0x1E908290)
#define BCIMOPDDKHH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E9080E0)
#define BCIMOPDDKHH_MENEGJFOHFH_OFFSET UNITYSDK_OFFSET(0x1E908280)
#define BCIMOPDDKHH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E9088B0)
#define BCIMOPDDKHH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E908860)
#define BCIMOPDDKHH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E908140)
#define BCIMOPDDKHH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E9085D0)
#define BCIMOPDDKHH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E908630)

inline static constexpr unsigned int BCIMOPDDKHH_TypeDefinitionIndex = 30043;

	class BCIMOPDDKHH : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* PGDNKGEMFNK; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 IBEBBFIHLLP; // 0x20
		static ::Google::Protobuf::MessageParser_1<::BCIMOPDDKHH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::BCIMOPDDKHH*>**)UnitySDK::FromName("", "BCIMOPDDKHH")->GetStaticField(0x238B0);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_ADMNIKAIDEC()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "BCIMOPDDKHH")->GetStaticField(0x238B8);
		}

		// static const ::System::Object JALOALHCIGC; // 0x0
		// static const ::System::Object AODKNNMBGAD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCIMOPDDKHH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BCIMOPDDKHH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BCIMOPDDKHH*))((::PBYTE)hIl2Cpp + BCIMOPDDKHH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BCIMOPDDKHH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::BCIMOPDDKHH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::BCIMOPDDKHH*>*(*)())((::PBYTE)hIl2Cpp + BCIMOPDDKHH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCIMOPDDKHH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BCIMOPDDKHH* Clone()
		{
			return ((::BCIMOPDDKHH*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCIMOPDDKHH_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* MENEGJFOHFH()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCIMOPDDKHH_MENEGJFOHFH_OFFSET))(this);
		}

		::System::UInt32 HCOIFBALCNA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BCIMOPDDKHH_HCOIFBALCNA_OFFSET))(this);
		}

		::System::Void AFMCDJJPIIN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BCIMOPDDKHH_AFMCDJJPIIN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BCIMOPDDKHH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BCIMOPDDKHH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BCIMOPDDKHH*))((::PBYTE)hIl2Cpp + BCIMOPDDKHH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BCIMOPDDKHH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCIMOPDDKHH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BCIMOPDDKHH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BCIMOPDDKHH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BCIMOPDDKHH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BCIMOPDDKHH*))((::PBYTE)hIl2Cpp + BCIMOPDDKHH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BCIMOPDDKHH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
