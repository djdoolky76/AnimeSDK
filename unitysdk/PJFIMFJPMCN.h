#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PJFIMFJPMCN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PJFIMFJPMCN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF78930)
#define PJFIMFJPMCN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF78C10)
#define PJFIMFJPMCN_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF784A0)
#define PJFIMFJPMCN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF78410)
#define PJFIMFJPMCN_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF783C0)
#define PJFIMFJPMCN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF78600)
#define PJFIMFJPMCN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF78500)
#define PJFIMFJPMCN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF786F0)
#define PJFIMFJPMCN_HBLPGFEOHGP_OFFSET UNITYSDK_OFFSET(0x1DF784E0)
#define PJFIMFJPMCN_IKGGGGKMGLN_OFFSET UNITYSDK_OFFSET(0x1DF784D0)
#define PJFIMFJPMCN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF78380)
#define PJFIMFJPMCN_LHKONDIHGHA_OFFSET UNITYSDK_OFFSET(0x1DF784F0)
#define PJFIMFJPMCN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF78A60)
#define PJFIMFJPMCN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF78A10)
#define PJFIMFJPMCN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF783B0)
#define PJFIMFJPMCN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF787F0)
#define PJFIMFJPMCN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF78850)

inline static constexpr unsigned int PJFIMFJPMCN_TypeDefinitionIndex = 34658;

	class PJFIMFJPMCN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* PKEKKILJBJF; // 0x18
		::System::UInt32 HAHOPPLLGCE; // 0x20
		static ::Google::Protobuf::FieldCodec** StaticGet_FICEJMGHNAC()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "PJFIMFJPMCN")->GetStaticField(0x14E20);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "PJFIMFJPMCN")->GetStaticField(0x14E28);
		}

		// static const ::System::Object MJDEFIKLIIE; // 0x0
		// static const ::System::Object GCKAPDLIGJH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJFIMFJPMCN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PJFIMFJPMCN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PJFIMFJPMCN*))((::PBYTE)hIl2Cpp + PJFIMFJPMCN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PJFIMFJPMCN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + PJFIMFJPMCN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJFIMFJPMCN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PJFIMFJPMCN* Clone()
		{
			return ((::PJFIMFJPMCN*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJFIMFJPMCN_CLONE_OFFSET))(this);
		}

		::System::UInt32 IKGGGGKMGLN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PJFIMFJPMCN_IKGGGGKMGLN_OFFSET))(this);
		}

		::System::Void HBLPGFEOHGP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PJFIMFJPMCN_HBLPGFEOHGP_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* LHKONDIHGHA()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJFIMFJPMCN_LHKONDIHGHA_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PJFIMFJPMCN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PJFIMFJPMCN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PJFIMFJPMCN*))((::PBYTE)hIl2Cpp + PJFIMFJPMCN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PJFIMFJPMCN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJFIMFJPMCN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PJFIMFJPMCN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PJFIMFJPMCN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PJFIMFJPMCN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PJFIMFJPMCN*))((::PBYTE)hIl2Cpp + PJFIMFJPMCN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PJFIMFJPMCN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
