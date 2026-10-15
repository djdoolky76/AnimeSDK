#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DJIHNCHDFED;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DJIHNCHDFED_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E1CB1D0)
#define DJIHNCHDFED_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1CB3F0)
#define DJIHNCHDFED_CLONE_OFFSET UNITYSDK_OFFSET(0x1E1CAE20)
#define DJIHNCHDFED_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E1CADF0)
#define DJIHNCHDFED_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1CADE0)
#define DJIHNCHDFED_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E1CAF50)
#define DJIHNCHDFED_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E1CAE80)
#define DJIHNCHDFED_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E1CAE70)
#define DJIHNCHDFED_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E1CB0C0)
#define DJIHNCHDFED_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E1CADA0)
#define DJIHNCHDFED_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E1CB290)
#define DJIHNCHDFED_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E1CB260)
#define DJIHNCHDFED_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E1CAE60)
#define DJIHNCHDFED_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E1CADD0)
#define DJIHNCHDFED_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E1CB0F0)
#define DJIHNCHDFED_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E1CB150)

inline static constexpr unsigned int DJIHNCHDFED_TypeDefinitionIndex = 34198;

	class DJIHNCHDFED : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::DJIHNCHDFED*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DJIHNCHDFED*>**)UnitySDK::FromName("", "DJIHNCHDFED")->GetStaticField(0x383B0);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJIHNCHDFED_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DJIHNCHDFED* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DJIHNCHDFED*))((::PBYTE)hIl2Cpp + DJIHNCHDFED_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DJIHNCHDFED_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DJIHNCHDFED*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DJIHNCHDFED*>*(*)())((::PBYTE)hIl2Cpp + DJIHNCHDFED_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJIHNCHDFED_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DJIHNCHDFED* Clone()
		{
			return ((::DJIHNCHDFED*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJIHNCHDFED_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DJIHNCHDFED_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DJIHNCHDFED_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DJIHNCHDFED_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DJIHNCHDFED* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DJIHNCHDFED*))((::PBYTE)hIl2Cpp + DJIHNCHDFED_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DJIHNCHDFED_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJIHNCHDFED_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DJIHNCHDFED_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DJIHNCHDFED_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DJIHNCHDFED* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DJIHNCHDFED*))((::PBYTE)hIl2Cpp + DJIHNCHDFED_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DJIHNCHDFED_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
