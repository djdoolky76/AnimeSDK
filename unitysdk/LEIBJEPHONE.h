#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GNMCIEPEBPK;
class LEIBJEPHONE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LEIBJEPHONE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E9042E0)
#define LEIBJEPHONE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9046C0)
#define LEIBJEPHONE_CLONE_OFFSET UNITYSDK_OFFSET(0x1E903D70)
#define LEIBJEPHONE_CPCEGCCEMIM_OFFSET UNITYSDK_OFFSET(0x1E903E10)
#define LEIBJEPHONE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E903CE0)
#define LEIBJEPHONE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E903CD0)
#define LEIBJEPHONE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E903FD0)
#define LEIBJEPHONE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E903E50)
#define LEIBJEPHONE_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E903E40)
#define LEIBJEPHONE_FJOCHFMKIKP_OFFSET UNITYSDK_OFFSET(0x1E903E20)
#define LEIBJEPHONE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E904150)
#define LEIBJEPHONE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E903C90)
#define LEIBJEPHONE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E9044B0)
#define LEIBJEPHONE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E9043B0)
#define LEIBJEPHONE_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E903E30)
#define LEIBJEPHONE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E903CC0)
#define LEIBJEPHONE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E9041A0)
#define LEIBJEPHONE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E904200)

inline static constexpr unsigned int LEIBJEPHONE_TypeDefinitionIndex = 31930;

	class LEIBJEPHONE : public ::System::Object
	{
	public:
		::GNMCIEPEBPK* JDAFJANAEBG; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::LEIBJEPHONE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LEIBJEPHONE*>**)UnitySDK::FromName("", "LEIBJEPHONE")->GetStaticField(0x31AC0);
		}

		// static const ::System::Object EBMIJAAKMMH; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEIBJEPHONE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LEIBJEPHONE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LEIBJEPHONE*))((::PBYTE)hIl2Cpp + LEIBJEPHONE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LEIBJEPHONE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LEIBJEPHONE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LEIBJEPHONE*>*(*)())((::PBYTE)hIl2Cpp + LEIBJEPHONE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEIBJEPHONE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LEIBJEPHONE* Clone()
		{
			return ((::LEIBJEPHONE*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEIBJEPHONE_CLONE_OFFSET))(this);
		}

		::GNMCIEPEBPK* CPCEGCCEMIM()
		{
			return ((::GNMCIEPEBPK*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEIBJEPHONE_CPCEGCCEMIM_OFFSET))(this);
		}

		::System::Void FJOCHFMKIKP(::GNMCIEPEBPK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GNMCIEPEBPK*))((::PBYTE)hIl2Cpp + LEIBJEPHONE_FJOCHFMKIKP_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LEIBJEPHONE_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LEIBJEPHONE_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LEIBJEPHONE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LEIBJEPHONE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LEIBJEPHONE*))((::PBYTE)hIl2Cpp + LEIBJEPHONE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LEIBJEPHONE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEIBJEPHONE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LEIBJEPHONE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LEIBJEPHONE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LEIBJEPHONE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LEIBJEPHONE*))((::PBYTE)hIl2Cpp + LEIBJEPHONE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LEIBJEPHONE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
