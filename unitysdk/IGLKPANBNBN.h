#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IGLKPANBNBN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IGLKPANBNBN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F971850)
#define IGLKPANBNBN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F971A70)
#define IGLKPANBNBN_CLONE_OFFSET UNITYSDK_OFFSET(0x1F971440)
#define IGLKPANBNBN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F971410)
#define IGLKPANBNBN_CTOR_OFFSET UNITYSDK_OFFSET(0x1F971400)
#define IGLKPANBNBN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F9715D0)
#define IGLKPANBNBN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F9714D0)
#define IGLKPANBNBN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F971740)
#define IGLKPANBNBN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F971390)
#define IGLKPANBNBN_LEIKCAJDHPD_OFFSET UNITYSDK_OFFSET(0x1F9714C0)
#define IGLKPANBNBN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F971910)
#define IGLKPANBNBN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F9718E0)
#define IGLKPANBNBN_NOFJKOGEFFG_OFFSET UNITYSDK_OFFSET(0x1F9714B0)
#define IGLKPANBNBN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F9713F0)
#define IGLKPANBNBN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F971770)
#define IGLKPANBNBN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F9717D0)

inline static constexpr unsigned int IGLKPANBNBN_TypeDefinitionIndex = 30145;

	class IGLKPANBNBN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 PJGGJMOFIHC; // 0x18
		static ::Google::Protobuf::MessageParser_1<::IGLKPANBNBN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::IGLKPANBNBN*>**)UnitySDK::FromName("", "IGLKPANBNBN")->GetStaticField(0x4A6A0);
		}

		// static const ::System::Object IEPMFABLOIA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGLKPANBNBN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IGLKPANBNBN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGLKPANBNBN*))((::PBYTE)hIl2Cpp + IGLKPANBNBN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IGLKPANBNBN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::IGLKPANBNBN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::IGLKPANBNBN*>*(*)())((::PBYTE)hIl2Cpp + IGLKPANBNBN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGLKPANBNBN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IGLKPANBNBN* Clone()
		{
			return ((::IGLKPANBNBN*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGLKPANBNBN_CLONE_OFFSET))(this);
		}

		::System::UInt32 NOFJKOGEFFG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IGLKPANBNBN_NOFJKOGEFFG_OFFSET))(this);
		}

		::System::Void LEIKCAJDHPD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IGLKPANBNBN_LEIKCAJDHPD_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IGLKPANBNBN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IGLKPANBNBN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IGLKPANBNBN*))((::PBYTE)hIl2Cpp + IGLKPANBNBN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IGLKPANBNBN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGLKPANBNBN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IGLKPANBNBN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IGLKPANBNBN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IGLKPANBNBN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGLKPANBNBN*))((::PBYTE)hIl2Cpp + IGLKPANBNBN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IGLKPANBNBN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
