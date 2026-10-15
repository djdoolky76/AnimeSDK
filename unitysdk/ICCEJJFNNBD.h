#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ICCEJJFNNBD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ICCEJJFNNBD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E5F2360)
#define ICCEJJFNNBD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5F2580)
#define ICCEJJFNNBD_CLONE_OFFSET UNITYSDK_OFFSET(0x1E5F1FB0)
#define ICCEJJFNNBD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5F1F80)
#define ICCEJJFNNBD_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5F1F70)
#define ICCEJJFNNBD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E5F20E0)
#define ICCEJJFNNBD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E5F2010)
#define ICCEJJFNNBD_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E5F2000)
#define ICCEJJFNNBD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E5F2250)
#define ICCEJJFNNBD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E5F1F30)
#define ICCEJJFNNBD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E5F2420)
#define ICCEJJFNNBD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E5F23F0)
#define ICCEJJFNNBD_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E5F1FF0)
#define ICCEJJFNNBD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E5F1F60)
#define ICCEJJFNNBD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E5F2280)
#define ICCEJJFNNBD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E5F22E0)

inline static constexpr unsigned int ICCEJJFNNBD_TypeDefinitionIndex = 30285;

	class ICCEJJFNNBD : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::ICCEJJFNNBD*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::ICCEJJFNNBD*>**)UnitySDK::FromName("", "ICCEJJFNNBD")->GetStaticField(0x447B0);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICCEJJFNNBD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ICCEJJFNNBD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ICCEJJFNNBD*))((::PBYTE)hIl2Cpp + ICCEJJFNNBD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ICCEJJFNNBD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::ICCEJJFNNBD*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::ICCEJJFNNBD*>*(*)())((::PBYTE)hIl2Cpp + ICCEJJFNNBD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICCEJJFNNBD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ICCEJJFNNBD* Clone()
		{
			return ((::ICCEJJFNNBD*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICCEJJFNNBD_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICCEJJFNNBD_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ICCEJJFNNBD_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ICCEJJFNNBD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ICCEJJFNNBD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ICCEJJFNNBD*))((::PBYTE)hIl2Cpp + ICCEJJFNNBD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICCEJJFNNBD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICCEJJFNNBD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ICCEJJFNNBD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICCEJJFNNBD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ICCEJJFNNBD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ICCEJJFNNBD*))((::PBYTE)hIl2Cpp + ICCEJJFNNBD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ICCEJJFNNBD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
