#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EIEOFMBKAHM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EIEOFMBKAHM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F58B4D0)
#define EIEOFMBKAHM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F58B570)
#define EIEOFMBKAHM_CLONE_OFFSET UNITYSDK_OFFSET(0x1F58B1C0)
#define EIEOFMBKAHM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F58B190)
#define EIEOFMBKAHM_CTOR_OFFSET UNITYSDK_OFFSET(0x1F58B180)
#define EIEOFMBKAHM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F58B2D0)
#define EIEOFMBKAHM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F58B200)
#define EIEOFMBKAHM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F58B430)
#define EIEOFMBKAHM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F58B140)
#define EIEOFMBKAHM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F58B520)
#define EIEOFMBKAHM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F58B4F0)
#define EIEOFMBKAHM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F58B170)
#define EIEOFMBKAHM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F58B460)
#define EIEOFMBKAHM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F58B4C0)

inline static constexpr unsigned int EIEOFMBKAHM_TypeDefinitionIndex = 28454;

	class EIEOFMBKAHM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::EIEOFMBKAHM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::EIEOFMBKAHM*>**)UnitySDK::FromName("", "EIEOFMBKAHM")->GetStaticField(0x42B10);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIEOFMBKAHM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EIEOFMBKAHM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EIEOFMBKAHM*))((::PBYTE)hIl2Cpp + EIEOFMBKAHM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EIEOFMBKAHM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::EIEOFMBKAHM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::EIEOFMBKAHM*>*(*)())((::PBYTE)hIl2Cpp + EIEOFMBKAHM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EIEOFMBKAHM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EIEOFMBKAHM* Clone()
		{
			return ((::EIEOFMBKAHM*(*)(::PVOID))((::PBYTE)hIl2Cpp + EIEOFMBKAHM_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EIEOFMBKAHM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EIEOFMBKAHM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EIEOFMBKAHM*))((::PBYTE)hIl2Cpp + EIEOFMBKAHM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EIEOFMBKAHM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EIEOFMBKAHM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EIEOFMBKAHM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EIEOFMBKAHM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EIEOFMBKAHM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EIEOFMBKAHM*))((::PBYTE)hIl2Cpp + EIEOFMBKAHM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EIEOFMBKAHM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
