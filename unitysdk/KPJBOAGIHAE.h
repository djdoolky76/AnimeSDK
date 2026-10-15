#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KPJBOAGIHAE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KPJBOAGIHAE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E8BD0C0)
#define KPJBOAGIHAE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8BD280)
#define KPJBOAGIHAE_CLONE_OFFSET UNITYSDK_OFFSET(0x1E8BCCA0)
#define KPJBOAGIHAE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E8BCC70)
#define KPJBOAGIHAE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8BCC60)
#define KPJBOAGIHAE_EINLCDMBILL_OFFSET UNITYSDK_OFFSET(0x1E8BCD00)
#define KPJBOAGIHAE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E8BCDF0)
#define KPJBOAGIHAE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E8BCD10)
#define KPJBOAGIHAE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E8BCF70)
#define KPJBOAGIHAE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E8BCC20)
#define KPJBOAGIHAE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E8BD120)
#define KPJBOAGIHAE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E8BD0F0)
#define KPJBOAGIHAE_NAHIEKJPKNH_OFFSET UNITYSDK_OFFSET(0x1E8BCCF0)
#define KPJBOAGIHAE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E8BCC50)
#define KPJBOAGIHAE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E8BCFA0)
#define KPJBOAGIHAE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E8BD000)

inline static constexpr unsigned int KPJBOAGIHAE_TypeDefinitionIndex = 28117;

	class KPJBOAGIHAE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Boolean LBMBOGOMEBP; // 0x18
		static ::Google::Protobuf::MessageParser_1<::KPJBOAGIHAE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KPJBOAGIHAE*>**)UnitySDK::FromName("", "KPJBOAGIHAE")->GetStaticField(0x2CCD0);
		}

		// static const ::System::Object IGFPJLHDAMO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPJBOAGIHAE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KPJBOAGIHAE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KPJBOAGIHAE*))((::PBYTE)hIl2Cpp + KPJBOAGIHAE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KPJBOAGIHAE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KPJBOAGIHAE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KPJBOAGIHAE*>*(*)())((::PBYTE)hIl2Cpp + KPJBOAGIHAE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPJBOAGIHAE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KPJBOAGIHAE* Clone()
		{
			return ((::KPJBOAGIHAE*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPJBOAGIHAE_CLONE_OFFSET))(this);
		}

		::System::Boolean NAHIEKJPKNH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KPJBOAGIHAE_NAHIEKJPKNH_OFFSET))(this);
		}

		::System::Void EINLCDMBILL(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KPJBOAGIHAE_EINLCDMBILL_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KPJBOAGIHAE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KPJBOAGIHAE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KPJBOAGIHAE*))((::PBYTE)hIl2Cpp + KPJBOAGIHAE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KPJBOAGIHAE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPJBOAGIHAE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KPJBOAGIHAE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KPJBOAGIHAE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KPJBOAGIHAE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KPJBOAGIHAE*))((::PBYTE)hIl2Cpp + KPJBOAGIHAE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KPJBOAGIHAE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
