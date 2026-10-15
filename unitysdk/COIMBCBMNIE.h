#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class COIMBCBMNIE;
class HANMCLKOCBO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define COIMBCBMNIE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E1070E0)
#define COIMBCBMNIE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E107480)
#define COIMBCBMNIE_CLONE_OFFSET UNITYSDK_OFFSET(0x1E106BE0)
#define COIMBCBMNIE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E106B20)
#define COIMBCBMNIE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E106AD0)
#define COIMBCBMNIE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E106DF0)
#define COIMBCBMNIE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E106C60)
#define COIMBCBMNIE_FFPAHEBJIKK_OFFSET UNITYSDK_OFFSET(0x1E106C40)
#define COIMBCBMNIE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E106F10)
#define COIMBCBMNIE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E106A60)
#define COIMBCBMNIE_LIMFMEKJBPF_OFFSET UNITYSDK_OFFSET(0x1E106C30)
#define COIMBCBMNIE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E1072B0)
#define COIMBCBMNIE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E107210)
#define COIMBCBMNIE_OHEBFCPLMGF_OFFSET UNITYSDK_OFFSET(0x1E106C50)
#define COIMBCBMNIE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E106AC0)
#define COIMBCBMNIE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E106F80)
#define COIMBCBMNIE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E106FE0)

inline static constexpr unsigned int COIMBCBMNIE_TypeDefinitionIndex = 31479;

	class COIMBCBMNIE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::HANMCLKOCBO*>* PBKIDNIPABK; // 0x18
		::System::UInt32 OPPNMFMNMGC; // 0x20
		static ::Google::Protobuf::FieldCodec_1<::HANMCLKOCBO*>** StaticGet_BOEJOIEFDNI()
		{
			return (::Google::Protobuf::FieldCodec_1<::HANMCLKOCBO*>**)UnitySDK::FromName("", "COIMBCBMNIE")->GetStaticField(0x1A120);
		}

		static ::Google::Protobuf::MessageParser_1<::COIMBCBMNIE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::COIMBCBMNIE*>**)UnitySDK::FromName("", "COIMBCBMNIE")->GetStaticField(0x1A128);
		}

		// static const ::System::Object HHOCPOACAJL; // 0x0
		// static const ::System::Object BOIGPPCIPFF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COIMBCBMNIE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::COIMBCBMNIE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::COIMBCBMNIE*))((::PBYTE)hIl2Cpp + COIMBCBMNIE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COIMBCBMNIE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::COIMBCBMNIE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::COIMBCBMNIE*>*(*)())((::PBYTE)hIl2Cpp + COIMBCBMNIE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + COIMBCBMNIE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::COIMBCBMNIE* Clone()
		{
			return ((::COIMBCBMNIE*(*)(::PVOID))((::PBYTE)hIl2Cpp + COIMBCBMNIE_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::HANMCLKOCBO*>* LIMFMEKJBPF()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::HANMCLKOCBO*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + COIMBCBMNIE_LIMFMEKJBPF_OFFSET))(this);
		}

		::System::UInt32 FFPAHEBJIKK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + COIMBCBMNIE_FFPAHEBJIKK_OFFSET))(this);
		}

		::System::Void OHEBFCPLMGF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + COIMBCBMNIE_OHEBFCPLMGF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + COIMBCBMNIE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::COIMBCBMNIE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::COIMBCBMNIE*))((::PBYTE)hIl2Cpp + COIMBCBMNIE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + COIMBCBMNIE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + COIMBCBMNIE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + COIMBCBMNIE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + COIMBCBMNIE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::COIMBCBMNIE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::COIMBCBMNIE*))((::PBYTE)hIl2Cpp + COIMBCBMNIE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + COIMBCBMNIE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
