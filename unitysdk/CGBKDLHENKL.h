#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CGBKDLHENKL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CGBKDLHENKL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E0AAAB0)
#define CGBKDLHENKL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0AAD10)
#define CGBKDLHENKL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E0AA6C0)
#define CGBKDLHENKL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E0AA680)
#define CGBKDLHENKL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0AA670)
#define CGBKDLHENKL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E0AA830)
#define CGBKDLHENKL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E0AA750)
#define CGBKDLHENKL_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E0AA740)
#define CGBKDLHENKL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E0AA910)
#define CGBKDLHENKL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E0AA630)
#define CGBKDLHENKL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0AAB90)
#define CGBKDLHENKL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E0AAB50)
#define CGBKDLHENKL_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E0AA730)
#define CGBKDLHENKL_OFCLOJDNOHA_OFFSET UNITYSDK_OFFSET(0x1E0AA710)
#define CGBKDLHENKL_OOJPLPOMAMI_OFFSET UNITYSDK_OFFSET(0x1E0AA720)
#define CGBKDLHENKL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E0AA660)
#define CGBKDLHENKL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E0AA940)
#define CGBKDLHENKL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E0AA9A0)

inline static constexpr unsigned int CGBKDLHENKL_TypeDefinitionIndex = 34037;

	class CGBKDLHENKL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		::System::Boolean LDALONPMANN; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "CGBKDLHENKL")->GetStaticField(0x139E0);
		}

		// static const ::System::Object BJMCMIDFMFE; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
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

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + CGBKDLHENKL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGBKDLHENKL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CGBKDLHENKL* Clone()
		{
			return ((::CGBKDLHENKL*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGBKDLHENKL_CLONE_OFFSET))(this);
		}

		::System::Boolean OFCLOJDNOHA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CGBKDLHENKL_OFCLOJDNOHA_OFFSET))(this);
		}

		::System::Void OOJPLPOMAMI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CGBKDLHENKL_OOJPLPOMAMI_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CGBKDLHENKL_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CGBKDLHENKL_FAEKBILGPCO_OFFSET))(this, a1);
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
