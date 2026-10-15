#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PMDGOKCLELJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PMDGOKCLELJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF7BEA0)
#define PMDGOKCLELJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF7C0C0)
#define PMDGOKCLELJ_CIKFGFCIOMC_OFFSET UNITYSDK_OFFSET(0x1DF7BB40)
#define PMDGOKCLELJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF7BAF0)
#define PMDGOKCLELJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF7BAC0)
#define PMDGOKCLELJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF7BAB0)
#define PMDGOKCLELJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF7BC20)
#define PMDGOKCLELJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF7BB50)
#define PMDGOKCLELJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF7BD90)
#define PMDGOKCLELJ_GFPCBBJIBKK_OFFSET UNITYSDK_OFFSET(0x1DF7BB30)
#define PMDGOKCLELJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF7BA70)
#define PMDGOKCLELJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF7BF60)
#define PMDGOKCLELJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF7BF30)
#define PMDGOKCLELJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF7BAA0)
#define PMDGOKCLELJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF7BDC0)
#define PMDGOKCLELJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF7BE20)

inline static constexpr unsigned int PMDGOKCLELJ_TypeDefinitionIndex = 30799;

	class PMDGOKCLELJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 HNKDMHDJHDF; // 0x18
		static ::Google::Protobuf::MessageParser_1<::PMDGOKCLELJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PMDGOKCLELJ*>**)UnitySDK::FromName("", "PMDGOKCLELJ")->GetStaticField(0x3F000);
		}

		// static const ::System::Object CEIGBGIIMFI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMDGOKCLELJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PMDGOKCLELJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PMDGOKCLELJ*))((::PBYTE)hIl2Cpp + PMDGOKCLELJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PMDGOKCLELJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PMDGOKCLELJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PMDGOKCLELJ*>*(*)())((::PBYTE)hIl2Cpp + PMDGOKCLELJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PMDGOKCLELJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PMDGOKCLELJ* Clone()
		{
			return ((::PMDGOKCLELJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + PMDGOKCLELJ_CLONE_OFFSET))(this);
		}

		::System::UInt32 GFPCBBJIBKK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PMDGOKCLELJ_GFPCBBJIBKK_OFFSET))(this);
		}

		::System::Void CIKFGFCIOMC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PMDGOKCLELJ_CIKFGFCIOMC_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PMDGOKCLELJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PMDGOKCLELJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PMDGOKCLELJ*))((::PBYTE)hIl2Cpp + PMDGOKCLELJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PMDGOKCLELJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PMDGOKCLELJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PMDGOKCLELJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PMDGOKCLELJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PMDGOKCLELJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PMDGOKCLELJ*))((::PBYTE)hIl2Cpp + PMDGOKCLELJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PMDGOKCLELJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
