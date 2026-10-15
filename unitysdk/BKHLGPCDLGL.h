#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BKHLGPCDLGL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BKHLGPCDLGL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF2B410)
#define BKHLGPCDLGL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF2B630)
#define BKHLGPCDLGL_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF2B060)
#define BKHLGPCDLGL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF2B030)
#define BKHLGPCDLGL_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF2B020)
#define BKHLGPCDLGL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF2B190)
#define BKHLGPCDLGL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF2B0C0)
#define BKHLGPCDLGL_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1DF2B0B0)
#define BKHLGPCDLGL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF2B300)
#define BKHLGPCDLGL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF2AFE0)
#define BKHLGPCDLGL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF2B4D0)
#define BKHLGPCDLGL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF2B4A0)
#define BKHLGPCDLGL_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1DF2B0A0)
#define BKHLGPCDLGL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF2B010)
#define BKHLGPCDLGL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF2B330)
#define BKHLGPCDLGL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF2B390)

inline static constexpr unsigned int BKHLGPCDLGL_TypeDefinitionIndex = 26194;

	class BKHLGPCDLGL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::BKHLGPCDLGL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::BKHLGPCDLGL*>**)UnitySDK::FromName("", "BKHLGPCDLGL")->GetStaticField(0x5AA30);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKHLGPCDLGL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BKHLGPCDLGL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BKHLGPCDLGL*))((::PBYTE)hIl2Cpp + BKHLGPCDLGL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BKHLGPCDLGL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::BKHLGPCDLGL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::BKHLGPCDLGL*>*(*)())((::PBYTE)hIl2Cpp + BKHLGPCDLGL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BKHLGPCDLGL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BKHLGPCDLGL* Clone()
		{
			return ((::BKHLGPCDLGL*(*)(::PVOID))((::PBYTE)hIl2Cpp + BKHLGPCDLGL_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BKHLGPCDLGL_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BKHLGPCDLGL_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BKHLGPCDLGL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BKHLGPCDLGL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BKHLGPCDLGL*))((::PBYTE)hIl2Cpp + BKHLGPCDLGL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BKHLGPCDLGL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BKHLGPCDLGL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BKHLGPCDLGL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BKHLGPCDLGL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BKHLGPCDLGL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BKHLGPCDLGL*))((::PBYTE)hIl2Cpp + BKHLGPCDLGL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BKHLGPCDLGL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
