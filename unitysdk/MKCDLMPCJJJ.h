#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CJOCDGGCPCN;
class MKCDLMPCJJJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MKCDLMPCJJJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x205CB160)
#define MKCDLMPCJJJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x205CB3F0)
#define MKCDLMPCJJJ_CLONE_OFFSET UNITYSDK_OFFSET(0x205CAAF0)
#define MKCDLMPCJJJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x205CAA60)
#define MKCDLMPCJJJ_CTOR_OFFSET UNITYSDK_OFFSET(0x205CAA50)
#define MKCDLMPCJJJ_EJIOBHHHOFM_OFFSET UNITYSDK_OFFSET(0x205CABA0)
#define MKCDLMPCJJJ_EKILKEMLCEO_OFFSET UNITYSDK_OFFSET(0x205CAB90)
#define MKCDLMPCJJJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x205CAD20)
#define MKCDLMPCJJJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x205CABB0)
#define MKCDLMPCJJJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x205CAFF0)
#define MKCDLMPCJJJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x205CAA10)
#define MKCDLMPCJJJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x205CB270)
#define MKCDLMPCJJJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x205CB1C0)
#define MKCDLMPCJJJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x205CAA40)
#define MKCDLMPCJJJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x205CB070)
#define MKCDLMPCJJJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x205CB0D0)

inline static constexpr unsigned int MKCDLMPCJJJ_TypeDefinitionIndex = 34743;

	class MKCDLMPCJJJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::CJOCDGGCPCN* MDJEADPDLDN; // 0x18
		static ::Google::Protobuf::MessageParser_1<::MKCDLMPCJJJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MKCDLMPCJJJ*>**)UnitySDK::FromName("", "MKCDLMPCJJJ")->GetStaticField(0x4E520);
		}

		// static const ::System::Object IJJPELLPGCJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKCDLMPCJJJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MKCDLMPCJJJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MKCDLMPCJJJ*))((::PBYTE)hIl2Cpp + MKCDLMPCJJJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MKCDLMPCJJJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MKCDLMPCJJJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MKCDLMPCJJJ*>*(*)())((::PBYTE)hIl2Cpp + MKCDLMPCJJJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKCDLMPCJJJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MKCDLMPCJJJ* Clone()
		{
			return ((::MKCDLMPCJJJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKCDLMPCJJJ_CLONE_OFFSET))(this);
		}

		::CJOCDGGCPCN* EKILKEMLCEO()
		{
			return ((::CJOCDGGCPCN*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKCDLMPCJJJ_EKILKEMLCEO_OFFSET))(this);
		}

		::System::Void EJIOBHHHOFM(::CJOCDGGCPCN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CJOCDGGCPCN*))((::PBYTE)hIl2Cpp + MKCDLMPCJJJ_EJIOBHHHOFM_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MKCDLMPCJJJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MKCDLMPCJJJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MKCDLMPCJJJ*))((::PBYTE)hIl2Cpp + MKCDLMPCJJJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MKCDLMPCJJJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKCDLMPCJJJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MKCDLMPCJJJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MKCDLMPCJJJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MKCDLMPCJJJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MKCDLMPCJJJ*))((::PBYTE)hIl2Cpp + MKCDLMPCJJJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MKCDLMPCJJJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
