#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HDDBFAIFCGK;
class PJPMBOBAMIC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HDDBFAIFCGK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E547EE0)
#define HDDBFAIFCGK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E548280)
#define HDDBFAIFCGK_CLONE_OFFSET UNITYSDK_OFFSET(0x1E547A40)
#define HDDBFAIFCGK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E547980)
#define HDDBFAIFCGK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E547930)
#define HDDBFAIFCGK_EBAOHMKCIKP_OFFSET UNITYSDK_OFFSET(0x1E547A70)
#define HDDBFAIFCGK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E547BF0)
#define HDDBFAIFCGK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E547AA0)
#define HDDBFAIFCGK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E547D10)
#define HDDBFAIFCGK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E5478F0)
#define HDDBFAIFCGK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E5480B0)
#define HDDBFAIFCGK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E548010)
#define HDDBFAIFCGK_NOKGLDLPBMF_OFFSET UNITYSDK_OFFSET(0x1E547A80)
#define HDDBFAIFCGK_PAADFGNKKBC_OFFSET UNITYSDK_OFFSET(0x1E547A90)
#define HDDBFAIFCGK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E547920)
#define HDDBFAIFCGK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E547D80)
#define HDDBFAIFCGK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E547DE0)

inline static constexpr unsigned int HDDBFAIFCGK_TypeDefinitionIndex = 30273;

	class HDDBFAIFCGK : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::PJPMBOBAMIC*>* CHMKHBMENJE; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 GMIBHOBIEFP; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "HDDBFAIFCGK")->GetStaticField(0x31010);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_CAKDFIEBAJG()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "HDDBFAIFCGK")->GetStaticField(0x31018);
		}

		// static const ::System::Object DPFIFMGMHLI; // 0x0
		// static const ::System::Object DONMANGCEDI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDDBFAIFCGK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HDDBFAIFCGK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HDDBFAIFCGK*))((::PBYTE)hIl2Cpp + HDDBFAIFCGK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HDDBFAIFCGK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + HDDBFAIFCGK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDDBFAIFCGK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HDDBFAIFCGK* Clone()
		{
			return ((::HDDBFAIFCGK*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDDBFAIFCGK_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::PJPMBOBAMIC*>* EBAOHMKCIKP()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::PJPMBOBAMIC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDDBFAIFCGK_EBAOHMKCIKP_OFFSET))(this);
		}

		::System::UInt32 NOKGLDLPBMF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HDDBFAIFCGK_NOKGLDLPBMF_OFFSET))(this);
		}

		::System::Void PAADFGNKKBC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HDDBFAIFCGK_PAADFGNKKBC_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HDDBFAIFCGK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HDDBFAIFCGK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HDDBFAIFCGK*))((::PBYTE)hIl2Cpp + HDDBFAIFCGK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HDDBFAIFCGK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDDBFAIFCGK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HDDBFAIFCGK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HDDBFAIFCGK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HDDBFAIFCGK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HDDBFAIFCGK*))((::PBYTE)hIl2Cpp + HDDBFAIFCGK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HDDBFAIFCGK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
