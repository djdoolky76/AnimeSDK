#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HFGLNNFOPON;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HFGLNNFOPON_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E569070)
#define HFGLNNFOPON_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E569110)
#define HFGLNNFOPON_CLONE_OFFSET UNITYSDK_OFFSET(0x1E568D60)
#define HFGLNNFOPON_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E568D30)
#define HFGLNNFOPON_CTOR_OFFSET UNITYSDK_OFFSET(0x1E568D20)
#define HFGLNNFOPON_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E568E70)
#define HFGLNNFOPON_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E568DA0)
#define HFGLNNFOPON_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E568FD0)
#define HFGLNNFOPON_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E568CE0)
#define HFGLNNFOPON_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E5690C0)
#define HFGLNNFOPON_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E569090)
#define HFGLNNFOPON_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E568D10)
#define HFGLNNFOPON_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E569000)
#define HFGLNNFOPON_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E569060)

inline static constexpr unsigned int HFGLNNFOPON_TypeDefinitionIndex = 31974;

	class HFGLNNFOPON : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::HFGLNNFOPON*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HFGLNNFOPON*>**)UnitySDK::FromName("", "HFGLNNFOPON")->GetStaticField(0x34830);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFGLNNFOPON_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HFGLNNFOPON* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HFGLNNFOPON*))((::PBYTE)hIl2Cpp + HFGLNNFOPON_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HFGLNNFOPON_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HFGLNNFOPON*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HFGLNNFOPON*>*(*)())((::PBYTE)hIl2Cpp + HFGLNNFOPON_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFGLNNFOPON_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HFGLNNFOPON* Clone()
		{
			return ((::HFGLNNFOPON*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFGLNNFOPON_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HFGLNNFOPON_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HFGLNNFOPON* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HFGLNNFOPON*))((::PBYTE)hIl2Cpp + HFGLNNFOPON_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HFGLNNFOPON_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFGLNNFOPON_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HFGLNNFOPON_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HFGLNNFOPON_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HFGLNNFOPON* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HFGLNNFOPON*))((::PBYTE)hIl2Cpp + HFGLNNFOPON_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HFGLNNFOPON_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
