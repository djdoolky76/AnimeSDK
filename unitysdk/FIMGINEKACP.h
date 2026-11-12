#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FIMGINEKACP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FIMGINEKACP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F6A1750)
#define FIMGINEKACP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F6A19B0)
#define FIMGINEKACP_CLONE_OFFSET UNITYSDK_OFFSET(0x1F6A1360)
#define FIMGINEKACP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F6A1320)
#define FIMGINEKACP_CTOR_OFFSET UNITYSDK_OFFSET(0x1F6A1310)
#define FIMGINEKACP_DEJBKFOMCOO_OFFSET UNITYSDK_OFFSET(0x1F6A13D0)
#define FIMGINEKACP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F6A14D0)
#define FIMGINEKACP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F6A13F0)
#define FIMGINEKACP_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1F6A13C0)
#define FIMGINEKACP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F6A15B0)
#define FIMGINEKACP_GMPHLFAHODH_OFFSET UNITYSDK_OFFSET(0x1F6A13E0)
#define FIMGINEKACP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F6A12D0)
#define FIMGINEKACP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F6A1830)
#define FIMGINEKACP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F6A17F0)
#define FIMGINEKACP_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1F6A13B0)
#define FIMGINEKACP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F6A1300)
#define FIMGINEKACP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F6A15E0)
#define FIMGINEKACP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F6A1640)

inline static constexpr unsigned int FIMGINEKACP_TypeDefinitionIndex = 34480;

	class FIMGINEKACP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		::System::Boolean JJKJOJLKAGB; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::FIMGINEKACP*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FIMGINEKACP*>**)UnitySDK::FromName("", "FIMGINEKACP")->GetStaticField(0x45610);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object HBIEDKPOLHK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIMGINEKACP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FIMGINEKACP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FIMGINEKACP*))((::PBYTE)hIl2Cpp + FIMGINEKACP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FIMGINEKACP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FIMGINEKACP*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FIMGINEKACP*>*(*)())((::PBYTE)hIl2Cpp + FIMGINEKACP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FIMGINEKACP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FIMGINEKACP* Clone()
		{
			return ((::FIMGINEKACP*(*)(::PVOID))((::PBYTE)hIl2Cpp + FIMGINEKACP_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FIMGINEKACP_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FIMGINEKACP_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean DEJBKFOMCOO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FIMGINEKACP_DEJBKFOMCOO_OFFSET))(this);
		}

		::System::Void GMPHLFAHODH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FIMGINEKACP_GMPHLFAHODH_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FIMGINEKACP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FIMGINEKACP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FIMGINEKACP*))((::PBYTE)hIl2Cpp + FIMGINEKACP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FIMGINEKACP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FIMGINEKACP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FIMGINEKACP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FIMGINEKACP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FIMGINEKACP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FIMGINEKACP*))((::PBYTE)hIl2Cpp + FIMGINEKACP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FIMGINEKACP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
