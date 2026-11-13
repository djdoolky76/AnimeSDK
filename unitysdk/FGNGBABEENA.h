#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FGNGBABEENA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FGNGBABEENA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F8C83A0)
#define FGNGBABEENA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F8C8560)
#define FGNGBABEENA_CLONE_OFFSET UNITYSDK_OFFSET(0x1F8C7F80)
#define FGNGBABEENA_CNKPDNMEFKD_OFFSET UNITYSDK_OFFSET(0x1F8C7FE0)
#define FGNGBABEENA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F8C7F50)
#define FGNGBABEENA_CTOR_OFFSET UNITYSDK_OFFSET(0x1F8C7F40)
#define FGNGBABEENA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F8C80D0)
#define FGNGBABEENA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F8C7FF0)
#define FGNGBABEENA_FOIHDAHHBKJ_OFFSET UNITYSDK_OFFSET(0x1F8C7FD0)
#define FGNGBABEENA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F8C8250)
#define FGNGBABEENA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F8C7F00)
#define FGNGBABEENA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F8C8400)
#define FGNGBABEENA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F8C83D0)
#define FGNGBABEENA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F8C7F30)
#define FGNGBABEENA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F8C8280)
#define FGNGBABEENA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F8C82E0)

inline static constexpr unsigned int FGNGBABEENA_TypeDefinitionIndex = 29569;

	class FGNGBABEENA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Boolean BDPHPGFFFDM; // 0x18
		static ::Google::Protobuf::MessageParser_1<::FGNGBABEENA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FGNGBABEENA*>**)UnitySDK::FromName("", "FGNGBABEENA")->GetStaticField(0x50FC0);
		}

		// static const ::System::Object AGBPCDPMDOB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGNGBABEENA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FGNGBABEENA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FGNGBABEENA*))((::PBYTE)hIl2Cpp + FGNGBABEENA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FGNGBABEENA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FGNGBABEENA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FGNGBABEENA*>*(*)())((::PBYTE)hIl2Cpp + FGNGBABEENA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FGNGBABEENA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FGNGBABEENA* Clone()
		{
			return ((::FGNGBABEENA*(*)(::PVOID))((::PBYTE)hIl2Cpp + FGNGBABEENA_CLONE_OFFSET))(this);
		}

		::System::Boolean FOIHDAHHBKJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FGNGBABEENA_FOIHDAHHBKJ_OFFSET))(this);
		}

		::System::Void CNKPDNMEFKD(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FGNGBABEENA_CNKPDNMEFKD_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FGNGBABEENA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FGNGBABEENA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FGNGBABEENA*))((::PBYTE)hIl2Cpp + FGNGBABEENA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FGNGBABEENA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FGNGBABEENA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FGNGBABEENA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FGNGBABEENA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FGNGBABEENA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FGNGBABEENA*))((::PBYTE)hIl2Cpp + FGNGBABEENA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FGNGBABEENA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
