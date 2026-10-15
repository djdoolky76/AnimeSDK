#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AMIDBKDMELM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AMIDBKDMELM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E4F56C0)
#define AMIDBKDMELM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4F5760)
#define AMIDBKDMELM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E4F53B0)
#define AMIDBKDMELM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4F5380)
#define AMIDBKDMELM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4F5370)
#define AMIDBKDMELM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E4F54C0)
#define AMIDBKDMELM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E4F53F0)
#define AMIDBKDMELM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E4F5620)
#define AMIDBKDMELM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E4F5330)
#define AMIDBKDMELM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E4F5710)
#define AMIDBKDMELM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E4F56E0)
#define AMIDBKDMELM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E4F5360)
#define AMIDBKDMELM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E4F5650)
#define AMIDBKDMELM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E4F56B0)

inline static constexpr unsigned int AMIDBKDMELM_TypeDefinitionIndex = 30396;

	class AMIDBKDMELM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::AMIDBKDMELM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::AMIDBKDMELM*>**)UnitySDK::FromName("", "AMIDBKDMELM")->GetStaticField(0x45660);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMIDBKDMELM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AMIDBKDMELM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AMIDBKDMELM*))((::PBYTE)hIl2Cpp + AMIDBKDMELM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AMIDBKDMELM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::AMIDBKDMELM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::AMIDBKDMELM*>*(*)())((::PBYTE)hIl2Cpp + AMIDBKDMELM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMIDBKDMELM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AMIDBKDMELM* Clone()
		{
			return ((::AMIDBKDMELM*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMIDBKDMELM_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AMIDBKDMELM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AMIDBKDMELM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AMIDBKDMELM*))((::PBYTE)hIl2Cpp + AMIDBKDMELM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AMIDBKDMELM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMIDBKDMELM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AMIDBKDMELM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AMIDBKDMELM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AMIDBKDMELM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AMIDBKDMELM*))((::PBYTE)hIl2Cpp + AMIDBKDMELM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AMIDBKDMELM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
