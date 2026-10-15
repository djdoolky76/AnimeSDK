#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KOCPKKFLHBJ;
class MNCBEDBDDHL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KOCPKKFLHBJ_AAEAMNNNFPM_OFFSET UNITYSDK_OFFSET(0x1E8AE590)
#define KOCPKKFLHBJ_ADOMLKDNJIJ_OFFSET UNITYSDK_OFFSET(0x1E8AE580)
#define KOCPKKFLHBJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E8AEA50)
#define KOCPKKFLHBJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8AED70)
#define KOCPKKFLHBJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E8AE500)
#define KOCPKKFLHBJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E8AE490)
#define KOCPKKFLHBJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8AE480)
#define KOCPKKFLHBJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E8AE740)
#define KOCPKKFLHBJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E8AE5C0)
#define KOCPKKFLHBJ_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E8AE5B0)
#define KOCPKKFLHBJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E8AE8C0)
#define KOCPKKFLHBJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E8AE440)
#define KOCPKKFLHBJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E8AEBB0)
#define KOCPKKFLHBJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E8AEB20)
#define KOCPKKFLHBJ_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E8AE5A0)
#define KOCPKKFLHBJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E8AE470)
#define KOCPKKFLHBJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E8AE910)
#define KOCPKKFLHBJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E8AE970)

	class KOCPKKFLHBJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::MNCBEDBDDHL* DELHEDACPLM; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "KOCPKKFLHBJ")->GetStaticField(0x2B550);
		}

		// static const ::System::Object MGBEGKCMINB; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOCPKKFLHBJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KOCPKKFLHBJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KOCPKKFLHBJ*))((::PBYTE)hIl2Cpp + KOCPKKFLHBJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KOCPKKFLHBJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + KOCPKKFLHBJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KOCPKKFLHBJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KOCPKKFLHBJ* Clone()
		{
			return ((::KOCPKKFLHBJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + KOCPKKFLHBJ_CLONE_OFFSET))(this);
		}

		::MNCBEDBDDHL* ADOMLKDNJIJ()
		{
			return ((::MNCBEDBDDHL*(*)(::PVOID))((::PBYTE)hIl2Cpp + KOCPKKFLHBJ_ADOMLKDNJIJ_OFFSET))(this);
		}

		::System::Void AAEAMNNNFPM(::MNCBEDBDDHL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MNCBEDBDDHL*))((::PBYTE)hIl2Cpp + KOCPKKFLHBJ_AAEAMNNNFPM_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KOCPKKFLHBJ_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KOCPKKFLHBJ_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KOCPKKFLHBJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KOCPKKFLHBJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KOCPKKFLHBJ*))((::PBYTE)hIl2Cpp + KOCPKKFLHBJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KOCPKKFLHBJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KOCPKKFLHBJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KOCPKKFLHBJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KOCPKKFLHBJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KOCPKKFLHBJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KOCPKKFLHBJ*))((::PBYTE)hIl2Cpp + KOCPKKFLHBJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KOCPKKFLHBJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
