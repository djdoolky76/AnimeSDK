#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DJALAJMGFHO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DJALAJMGFHO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E197330)
#define DJALAJMGFHO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E197550)
#define DJALAJMGFHO_CKHIBDOKAAF_OFFSET UNITYSDK_OFFSET(0x1E196FD0)
#define DJALAJMGFHO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E196F80)
#define DJALAJMGFHO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E196F50)
#define DJALAJMGFHO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E196F40)
#define DJALAJMGFHO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E1970B0)
#define DJALAJMGFHO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E196FE0)
#define DJALAJMGFHO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E197220)
#define DJALAJMGFHO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E196F00)
#define DJALAJMGFHO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E1973F0)
#define DJALAJMGFHO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E1973C0)
#define DJALAJMGFHO_MJDFFBIPOCN_OFFSET UNITYSDK_OFFSET(0x1E196FC0)
#define DJALAJMGFHO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E196F30)
#define DJALAJMGFHO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E197250)
#define DJALAJMGFHO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E1972B0)

inline static constexpr unsigned int DJALAJMGFHO_TypeDefinitionIndex = 27949;

	class DJALAJMGFHO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NDJFKLJJAPO; // 0x18
		static ::Google::Protobuf::MessageParser_1<::DJALAJMGFHO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DJALAJMGFHO*>**)UnitySDK::FromName("", "DJALAJMGFHO")->GetStaticField(0x321B0);
		}

		// static const ::System::Object MMGGJLKAPHL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJALAJMGFHO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DJALAJMGFHO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DJALAJMGFHO*))((::PBYTE)hIl2Cpp + DJALAJMGFHO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DJALAJMGFHO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DJALAJMGFHO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DJALAJMGFHO*>*(*)())((::PBYTE)hIl2Cpp + DJALAJMGFHO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJALAJMGFHO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DJALAJMGFHO* Clone()
		{
			return ((::DJALAJMGFHO*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJALAJMGFHO_CLONE_OFFSET))(this);
		}

		::System::UInt32 MJDFFBIPOCN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DJALAJMGFHO_MJDFFBIPOCN_OFFSET))(this);
		}

		::System::Void CKHIBDOKAAF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DJALAJMGFHO_CKHIBDOKAAF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DJALAJMGFHO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DJALAJMGFHO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DJALAJMGFHO*))((::PBYTE)hIl2Cpp + DJALAJMGFHO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DJALAJMGFHO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJALAJMGFHO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DJALAJMGFHO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DJALAJMGFHO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DJALAJMGFHO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DJALAJMGFHO*))((::PBYTE)hIl2Cpp + DJALAJMGFHO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DJALAJMGFHO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
