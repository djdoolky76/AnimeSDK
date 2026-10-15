#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GDDEAKMJOAP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GDDEAKMJOAP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E444E00)
#define GDDEAKMJOAP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4450F0)
#define GDDEAKMJOAP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E444970)
#define GDDEAKMJOAP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4448E0)
#define GDDEAKMJOAP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E444890)
#define GDDEAKMJOAP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E444AD0)
#define GDDEAKMJOAP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E4449D0)
#define GDDEAKMJOAP_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E4449B0)
#define GDDEAKMJOAP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E444BC0)
#define GDDEAKMJOAP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E444850)
#define GDDEAKMJOAP_KFOKDENMKDE_OFFSET UNITYSDK_OFFSET(0x1E4449C0)
#define GDDEAKMJOAP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E444F30)
#define GDDEAKMJOAP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E444EE0)
#define GDDEAKMJOAP_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E4449A0)
#define GDDEAKMJOAP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E444880)
#define GDDEAKMJOAP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E444CC0)
#define GDDEAKMJOAP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E444D20)

inline static constexpr unsigned int GDDEAKMJOAP_TypeDefinitionIndex = 31211;

	class GDDEAKMJOAP : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* BNKBOJJFCLF; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::GDDEAKMJOAP*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GDDEAKMJOAP*>**)UnitySDK::FromName("", "GDDEAKMJOAP")->GetStaticField(0xFF80);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_BLKIKEKNDLI()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "GDDEAKMJOAP")->GetStaticField(0xFF88);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object HODONNFPHEO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDDEAKMJOAP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GDDEAKMJOAP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GDDEAKMJOAP*))((::PBYTE)hIl2Cpp + GDDEAKMJOAP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GDDEAKMJOAP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GDDEAKMJOAP*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GDDEAKMJOAP*>*(*)())((::PBYTE)hIl2Cpp + GDDEAKMJOAP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDDEAKMJOAP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GDDEAKMJOAP* Clone()
		{
			return ((::GDDEAKMJOAP*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDDEAKMJOAP_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GDDEAKMJOAP_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GDDEAKMJOAP_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* KFOKDENMKDE()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDDEAKMJOAP_KFOKDENMKDE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GDDEAKMJOAP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GDDEAKMJOAP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GDDEAKMJOAP*))((::PBYTE)hIl2Cpp + GDDEAKMJOAP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GDDEAKMJOAP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDDEAKMJOAP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GDDEAKMJOAP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GDDEAKMJOAP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GDDEAKMJOAP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GDDEAKMJOAP*))((::PBYTE)hIl2Cpp + GDDEAKMJOAP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GDDEAKMJOAP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
