#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CGBKDLHENKL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CGBKDLHENKL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FD20500)
#define CGBKDLHENKL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FD20760)
#define CGBKDLHENKL_CLONE_OFFSET UNITYSDK_OFFSET(0x1FD20110)
#define CGBKDLHENKL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FD200D0)
#define CGBKDLHENKL_CTOR_OFFSET UNITYSDK_OFFSET(0x1FD200C0)
#define CGBKDLHENKL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FD20280)
#define CGBKDLHENKL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FD201A0)
#define CGBKDLHENKL_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1FD20170)
#define CGBKDLHENKL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FD20360)
#define CGBKDLHENKL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FD20080)
#define CGBKDLHENKL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FD205E0)
#define CGBKDLHENKL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FD205A0)
#define CGBKDLHENKL_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1FD20160)
#define CGBKDLHENKL_OFCLOJDNOHA_OFFSET UNITYSDK_OFFSET(0x1FD20180)
#define CGBKDLHENKL_OOJPLPOMAMI_OFFSET UNITYSDK_OFFSET(0x1FD20190)
#define CGBKDLHENKL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FD200B0)
#define CGBKDLHENKL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FD20390)
#define CGBKDLHENKL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FD203F0)

inline static constexpr unsigned int CGBKDLHENKL_TypeDefinitionIndex = 34952;

	class CGBKDLHENKL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Boolean LDALONPMANN; // 0x18
		::System::Byte _padding0[0x3];
		::System::UInt32 NAEACGPKNNH; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::CGBKDLHENKL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CGBKDLHENKL*>**)UnitySDK::FromName("", "CGBKDLHENKL")->GetStaticField(0xB2F0);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object BJMCMIDFMFE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGBKDLHENKL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CGBKDLHENKL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CGBKDLHENKL*))((::PBYTE)hIl2Cpp + CGBKDLHENKL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CGBKDLHENKL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CGBKDLHENKL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CGBKDLHENKL*>*(*)())((::PBYTE)hIl2Cpp + CGBKDLHENKL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGBKDLHENKL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CGBKDLHENKL* Clone()
		{
			return ((::CGBKDLHENKL*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGBKDLHENKL_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CGBKDLHENKL_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CGBKDLHENKL_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean OFCLOJDNOHA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CGBKDLHENKL_OFCLOJDNOHA_OFFSET))(this);
		}

		::System::Void OOJPLPOMAMI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CGBKDLHENKL_OOJPLPOMAMI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CGBKDLHENKL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CGBKDLHENKL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CGBKDLHENKL*))((::PBYTE)hIl2Cpp + CGBKDLHENKL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CGBKDLHENKL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGBKDLHENKL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CGBKDLHENKL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CGBKDLHENKL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CGBKDLHENKL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CGBKDLHENKL*))((::PBYTE)hIl2Cpp + CGBKDLHENKL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CGBKDLHENKL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
