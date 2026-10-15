#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MNJILKCIOKI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MNJILKCIOKI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA701F0)
#define MNJILKCIOKI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA70410)
#define MNJILKCIOKI_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA6FE40)
#define MNJILKCIOKI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA6FE10)
#define MNJILKCIOKI_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA6FE00)
#define MNJILKCIOKI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA6FF70)
#define MNJILKCIOKI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA6FEA0)
#define MNJILKCIOKI_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1EA6FE90)
#define MNJILKCIOKI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA700E0)
#define MNJILKCIOKI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA6FDC0)
#define MNJILKCIOKI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA702B0)
#define MNJILKCIOKI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA70280)
#define MNJILKCIOKI_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1EA6FE80)
#define MNJILKCIOKI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA6FDF0)
#define MNJILKCIOKI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA70110)
#define MNJILKCIOKI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA70170)

inline static constexpr unsigned int MNJILKCIOKI_TypeDefinitionIndex = 26896;

	class MNJILKCIOKI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::MNJILKCIOKI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MNJILKCIOKI*>**)UnitySDK::FromName("", "MNJILKCIOKI")->GetStaticField(0x59AD0);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNJILKCIOKI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MNJILKCIOKI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MNJILKCIOKI*))((::PBYTE)hIl2Cpp + MNJILKCIOKI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MNJILKCIOKI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MNJILKCIOKI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MNJILKCIOKI*>*(*)())((::PBYTE)hIl2Cpp + MNJILKCIOKI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNJILKCIOKI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MNJILKCIOKI* Clone()
		{
			return ((::MNJILKCIOKI*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNJILKCIOKI_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MNJILKCIOKI_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MNJILKCIOKI_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MNJILKCIOKI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MNJILKCIOKI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MNJILKCIOKI*))((::PBYTE)hIl2Cpp + MNJILKCIOKI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MNJILKCIOKI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNJILKCIOKI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MNJILKCIOKI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MNJILKCIOKI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MNJILKCIOKI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MNJILKCIOKI*))((::PBYTE)hIl2Cpp + MNJILKCIOKI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MNJILKCIOKI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
